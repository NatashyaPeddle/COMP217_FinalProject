#include "MyCharacter.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/PlayerController.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"

//Constructor
AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	//Create SpringArm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetCapsuleComponent());
	
	//Create Camera and Attach to SpringArm
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
	//Set SpringArm Settings
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritYaw   = true;
	SpringArm->bInheritRoll  = true;
	
	//Set Camera Settings
	Camera->bUsePawnControlRotation = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw   = false;
	bUseControllerRotationRoll  = false;

	//Character Faces Movement Direction
	GetCharacterMovement()->bOrientRotationToMovement = true;

	//Default Health Value
	Health = 100.0f;
	MaxHealth = 100.0f;
}

//Called When Pawn is Possessed
void AMyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Return and Log if No Player Controller
	APlayerController* PC = Cast<APlayerController>(NewController);
	if (!PC)
	{
		UE_LOG(LogTemp, Error, TEXT("PossessedBy: No PlayerController"));
		return;
	}

	//Return and Log if No Local Player
	ULocalPlayer* LP = PC->GetLocalPlayer();
	if (!LP)
	{
		UE_LOG(LogTemp, Error, TEXT("PossessedBy: No LocalPlayer"));
		return;
	}

	//Get Enhanced Input Subsystem
	UEnhancedInputLocalPlayerSubsystem* Subsystem =
		LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

	//Return and Log if No Subsystem
	if (!Subsystem)
	{
		UE_LOG(LogTemp, Error, TEXT("PossessedBy: No Enhanced Input Subsystem"));
		return;
	}

	//Apply Input Mapping Context
	if (IMC_Default)
	{
		Subsystem->ClearAllMappings();
		Subsystem->AddMappingContext(IMC_Default, 0);

		UE_LOG(LogTemp, Warning, TEXT("IMC_Default successfully applied"));
	}
}


//Tick (Called Every Frame)
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Calculate Speed from Velocity
	Speed = GetVelocity().Size();

	//Slow Player When Stamina is Empty
	if (Stamina <= 0)
	{
		GetCharacterMovement()->MaxWalkSpeed = SlowSpeed;
	}

	//Normal Speed When Stamina is not Empty
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}

//Bind Input Actions to Functions
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!EIC) return;
	
	//Movement Action, Look Action, Jump Action, Attack Action, Pause Action Binded
	EIC->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	EIC->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	EIC->BindAction(IA_Jump, ETriggerEvent::Started, this, &AMyCharacter::Jump);
	EIC->BindAction(IA_Jump, ETriggerEvent::Completed, this, &AMyCharacter::JumpStop);
	EIC->BindAction(IA_Attack, ETriggerEvent::Started, this, &AMyCharacter::Attack);
	EIC->BindAction(IA_Pause, ETriggerEvent::Started, this, &AMyCharacter::Pause);
	
}

//Movement Input
void AMyCharacter::Move(const FInputActionValue& Value)
{
	//Stop if Game is Paused
	if (bIsPaused) return;

	FVector2D MovementVector = Value.Get<FVector2D>();
	
	if (!Controller) return;

	//Get Camera Direction (Movement Relative to Camera)
	const FRotator CRotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, CRotation.Yaw, 0.f);

	const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector Right   = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	//Apply Movement Input
	AddMovementInput(Forward, MovementVector.Y);
	AddMovementInput(Right, MovementVector.X);

	bool bIsMoving = !MovementVector.IsNearlyZero();

	//Drain Stamina if Player is Moving
	if (bIsMoving && Stamina > 0)
	{
		Stamina -= StaminaDrain * GetWorld()->GetDeltaSeconds();
	}
}

//Look Input
void AMyCharacter::Look(const FInputActionValue& Value)
{
	//Stop if Game is Paused
	if (bIsPaused) return;
	
	FVector2D LookAxis = Value.Get<FVector2D>();
	
	AddControllerYawInput(LookAxis.X);
	AddControllerPitchInput(LookAxis.Y);
}

//Jump Input
//Jump Pressed
void AMyCharacter::Jump()
{
	//Stop if Game is Paused
	if (bIsPaused) return;
	
	Super::Jump();
}

//Jump Released
void AMyCharacter::JumpStop()
{
	//Stop if Game is Paused
	if (bIsPaused) return;
	
	Super::StopJumping();
}

//Attack Input
void AMyCharacter::Attack(const FInputActionValue& Value)
{
	//Stop if Game is Paused
	if (bIsPaused) return;

	FVector Start = GetActorLocation();
	
	//Trace Attack from Camera Direction
	FVector CameraStart = Camera->GetComponentLocation();
	FVector CameraForward = Camera->GetForwardVector();
	FVector CameraEnd = CameraStart + (CameraForward * 2000.f);

	FHitResult CameraHit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	
	//Trace from Camera to Aim Point
	GetWorld()->LineTraceSingleByChannel(
		CameraHit,
		CameraStart,
		CameraEnd,
		ECC_Visibility,
		Params
	);

	FVector TargetPoint = CameraHit.bBlockingHit ? CameraHit.ImpactPoint : CameraEnd;
	FVector Direction = (TargetPoint - Start).GetSafeNormal();
	FVector End = Start + Direction * 1000.f;

	FHitResult Hit;

	//Actual Attack Trace
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Visibility,
		Params
	);
	
	//Draw Attack Line
	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1.0f);
	
	//Apply Damage if Attack Line Hits Actor that Exists
	if (bHit && Hit.GetActor())
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *Hit.GetActor()->GetName());

		//Applies 25 Damage to Hit Actor
		UGameplayStatics::ApplyDamage(
			Hit.GetActor(),
			25.f,
			GetController(),
			this,
			nullptr
		);
	}
}

//Pause Input Toggle
void AMyCharacter::Pause(const FInputActionValue& Value)
{
	APlayerController* PC = GetController<APlayerController>();
	if (!PC) return;
	
	bIsPaused = !bIsPaused;
	
	//Freeze Inputs When Paused and Show Mouse
	if (bIsPaused)
	{
		PC->SetIgnoreMoveInput(true);
		PC->SetIgnoreLookInput(true);
		PC->bShowMouseCursor = true;
	}

	//Unfreeze Inputs and Hide Mouse
	else
	{
		PC->SetIgnoreMoveInput(false);
		PC->SetIgnoreLookInput(false);
		PC->bShowMouseCursor = false;
	}
}

//Increase Stamina
void AMyCharacter::AddStamina(float Amount)
{
	//Add Amount to Stamina
	Stamina += Amount;
	Stamina = FMath::Clamp(Stamina, 0.0f, MaxStamina);
}

//Increase / Decrease Health
void AMyCharacter::AddHealth(float Amount)
{
	//Add Amount to Health
	Health += Amount;
	Health = FMath::Clamp(Health, 0, 100);
}

//Health Percentage for Healthbar UI
float AMyCharacter::GetHealthPercent() const
{
	return Health / MaxHealth;
}

//Beginplay
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

//Check if Player is Dead
void AMyCharacter::CheckHealth()
{
	//When Player is Dead, Quit Game and Destory Actor
	if (Health <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Has Died"));
		
		if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			UKismetSystemLibrary::QuitGame(GetWorld(), PC, EQuitPreference::Quit, false);
		}
		
		Destroy();
	}
}