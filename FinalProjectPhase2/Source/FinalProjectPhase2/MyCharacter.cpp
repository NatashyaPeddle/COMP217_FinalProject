#include "MyCharacter.h"

#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Constructor
AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	
	SpringArm->bUsePawnControlRotation = true;
	Camera->bUsePawnControlRotation = false;
	
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
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
	
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
	
	PlayerInputComponent->BindAxis("Turn", this, &AMyCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AMyCharacter::LookUp);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::StopJumping);
	
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMyCharacter::Attack);
	
	UE_LOG(LogTemp, Warning, TEXT("C++ INPUT ACTIVE ON: %s"), *GetName());
}

// Movement
void AMyCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		const FVector Direction = Camera->GetForwardVector();
		const FVector FlatDirection = FVector(Direction.X, Direction.Y, 0.f).GetSafeNormal();

		AddMovementInput(FlatDirection, Value);
	}
}

void AMyCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		const FVector Direction = Camera->GetRightVector();
		const FVector FlatDirection = FVector(Direction.X, Direction.Y, 0.f).GetSafeNormal();

		AddMovementInput(FlatDirection, Value);
	}
}

void AMyCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void AMyCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

// Jump
void AMyCharacter::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("Jump"));
	Super::Jump();
}

void AMyCharacter::StopJumping()
{
	Super::StopJumping();
}

// Attack
void AMyCharacter::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack fired"));

	FVector Start = GetMesh()->GetSocketLocation("hand_rSocket");

	// 1. Trace from camera to find where player is aiming
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