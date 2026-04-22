#include "MyCharacter.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"

// Constructor
AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw   = true;
	SpringArm->bInheritRoll  = false;
	
	Camera->bUsePawnControlRotation = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw   = false;
	bUseControllerRotationRoll  = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	
	Health = 100.0f;
	MaxHealth = 100.0f;
}

// BeginPlay
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Tick
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Speed = GetVelocity().Size();
}

// Input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!EIC) return;
	
	EIC->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	EIC->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
	EIC->BindAction(IA_Jump, ETriggerEvent::Started, this, &AMyCharacter::Jump);
	EIC->BindAction(IA_Jump, ETriggerEvent::Completed, this, &AMyCharacter::JumpStop);
	EIC->BindAction(IA_Attack, ETriggerEvent::Started, this, &AMyCharacter::Attack);
	EIC->BindAction(IA_Pause, ETriggerEvent::Started, this, &AMyCharacter::Pause);
	
}

// Movement
void AMyCharacter::Move(const FInputActionValue& Value)
{
	if (bIsPaused) return;
	
	FVector2D MovementVector = Value.Get<FVector2D>();
	
	if (Controller == nullptr) return;
	
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	
	const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	
	AddMovementInput(Forward, MovementVector.Y);
	AddMovementInput(Right, MovementVector.X);
}


void AMyCharacter::Look(const FInputActionValue& Value)
{
	if (bIsPaused) return;
	
	FVector2D LookAxis = Value.Get<FVector2D>();
	
	AddControllerYawInput(LookAxis.X);
	
	AddControllerPitchInput(LookAxis.Y);
}

// Jump
void AMyCharacter::Jump(const FInputActionValue& Value)
{
	if (bIsPaused) return;
	
	Super::Jump();
}

void AMyCharacter::JumpStop(const FInputActionValue& Value)
{
	if (bIsPaused) return;
	
	Super::StopJumping();
}

// Attack
void AMyCharacter::Attack(const FInputActionValue& Value)
{
	if (bIsPaused) return;

	FVector Start = GetActorLocation();
	
	FVector CameraStart = Camera->GetComponentLocation();
	FVector CameraForward = Camera->GetForwardVector();
	FVector CameraEnd = CameraStart + (CameraForward * 2000.f);

	FHitResult CameraHit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

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

	bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Visibility,
		Params
	);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1.0f);

	if (bHit && Hit.GetActor())
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *Hit.GetActor()->GetName());

		UGameplayStatics::ApplyDamage(
			Hit.GetActor(),
			25.f,
			GetController(),
			this,
			nullptr
		);
	}
}

void AMyCharacter::Pause(const FInputActionValue& Value)
{
	APlayerController* PC = GetController<APlayerController>();
	if (!PC) return;
	
	bIsPaused = !bIsPaused;
	
	if (bIsPaused)
	{
		PC->SetIgnoreMoveInput(true);
		PC->SetIgnoreLookInput(true);
		PC->bShowMouseCursor = true;
	}

	else
	{
		PC->SetIgnoreMoveInput(false);
		PC->SetIgnoreLookInput(false);
		PC->bShowMouseCursor = false;
	}
}

// Health
void AMyCharacter::AddHealth(float Amount)
{
	Health += Amount;
	
	Health = FMath::Clamp(Health, 0, 100);
}

float AMyCharacter::GetHealthPercent() const
{
	return Health / MaxHealth;
}
