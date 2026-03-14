// Fill out your copyright notice in the Description page of Project Settings.


#include "AEnvironmentActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"

// Sets default values
AEnvironmentActor::AEnvironmentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Root
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	// Mesh
	EnvironmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnvironmentMesh"));
	EnvironmentMesh->SetupAttachment(Root);

	// Light
	EnvironmentLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("EnvironmentLight"));
	EnvironmentLight->SetupAttachment(Root);
	
	EnvironmentLight->Intensity = BaseLightIntensity;
	
	RunningTime = 0.f;
}

// Called when the game starts or when spawned
void AEnvironmentActor::BeginPlay()
{
	Super::BeginPlay();
	
	DefaultLocation = GetActorLocation();
	DefaultRotation = GetActorRotation();
	
	///DYNAMIC MATERIAL=============================================
	if (EnvironmentMesh)
	{
		DynamicMaterial = EnvironmentMesh->CreateAndSetMaterialInstanceDynamic(0);
	}
	
	///LIGHT =========================================================
	if (EnvironmentLight)
	{
		EnvironmentLight->SetIntensity(BaseLightIntensity);
		EnvironmentLight->SetLightColor(LightColor);
	}
	
	///World system behavior ============================================
	GetWorldTimerManager().SetTimer(EnvironmentTimer, this, &AEnvironmentActor::UpdateEnvironmentTimeCycle, 30.f, true );
	
	
}

// Called every frame
void AEnvironmentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	RunningTime += DeltaTime;
	
	//Rotation
	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw += RotationSpeed * DeltaTime;
	SetActorRotation(CurrentRotation);
	
	//Oscillation
	float Offset = FMath::Sin(RunningTime * OscillationSpeed) * MovementSpeed;
	FVector NewLocation = DefaultLocation;
	NewLocation.Z += Offset;
	
	SetActorLocation(NewLocation);
	
	///LIGHT ====================================
	
	if (EnvironmentLight)
	{
		float Alpha = (FMath::Sin(RunningTime * LightAnimationSpeed) + 1.0f) / 2.0f;
		float Intensity = FMath::Lerp(BaseLightIntensity, MaxLightIntensity, Alpha);
		EnvironmentLight->SetIntensity(Intensity);
	}
	
	///MATERIAL ===============
	
	if (DynamicMaterial)
	{
		float Glow = (FMath::Sin(RunningTime * 2.f) + 1.f) / 2.f;
		
		DynamicMaterial->SetVectorParameterValue("Color", MaterialColor);
		DynamicMaterial->SetScalarParameterValue("Glow", Glow * GlowPower);
		
	}
}

///Light
void AEnvironmentActor::ToggleLight()
{
	if (EnvironmentLight)
	{
		EnvironmentLight->ToggleVisibility();
	}
}

///Reset
void AEnvironmentActor::ResetActorTransformation()
{
	SetActorLocation(DefaultLocation);
	SetActorRotation(DefaultRotation);
}


///LOCATION SET/GETTERS ==============================================================================
void AEnvironmentActor::SetActorLocationCustom(FVector NewLocation)
{
	ActorLocation = NewLocation;
	SetActorLocation(NewLocation);
}

FVector AEnvironmentActor::GetActorLocationCustom() const
{
	return GetActorLocation();
}

void AEnvironmentActor::SetActorRotationCustom(FRotator NewRotation)
{
	ActorRotation = NewRotation;
	SetActorRotation(NewRotation);
}

FRotator AEnvironmentActor::GetActorRotationCustom() const
{
	return GetActorRotation();
}

FTransform AEnvironmentActor::GetCurrentTransform() const
{
	return GetActorTransform();
}

///DayNight
void AEnvironmentActor::UpdateEnvironmentTimeCycle()
{
	bIsDay = !bIsDay;
	
	if (EnvironmentLight)
	{
		if (bIsDay)
		{
			EnvironmentLight->SetLightColor(FLinearColor::White);
		}

		else
		{
			EnvironmentLight->SetLightColor(FLinearColor::Blue);
		}
	}
}

