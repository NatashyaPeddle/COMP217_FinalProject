// Fill out your copyright notice in the Description page of Project Settings.


#include "AEnvironmentActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
AEnvironmentActor::AEnvironmentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	EnvironmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnvironmentMesh"));
	EnvironmentMesh->SetupAttachment(Root);

	EnvironmentLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("EnvironmentLight"));
	EnvironmentLight->SetupAttachment(Root);
	
	EnvironmentLight->Intensity = BaseLightIntensity;
}

// Called when the game starts or when spawned
void AEnvironmentActor::BeginPlay()
{
	Super::BeginPlay();
	
	///DYNAMIC MATERIAL=============================================
	if (EnvironmentMesh)
	{
		DynamicMaterial = EnvironmentMesh->CreateAndSetMaterialInstanceDynamic(0);
	}
	
	///LIGHT =========================================================
	if (EnvironmentLight)
	{
		EnvironmentLight->SetIntensity(BaseLightIntensity);
		EnvironmentLight->SetLightColor(FLinearColor::White);
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
	
	///LIGHT ====================================
	float Alpha = (FMath::Sin(RunningTime * LightAnimationSpeed) + 1.0f) / 2.0f;
	float Intensity = FMath::Lerp(BaseLightIntensity, MaxLightIntensity, Alpha);
	EnvironmentLight->SetIntensity(Intensity);
}



///LOCATION SET/GETTERS ==============================================================================
void AEnvironmentActor::SetActorLocationCustom(FVector NewLocation)
{
	ActorLocation = NewLocation;
	SetActorLocation(NewLocation);
}

FVector AEnvironmentActor::GetActorLocationCustom() const
{
	return ActorLocation;
}

void AEnvironmentActor::SetActorRotationCustom(FRotator NewRotation)
{
	ActorRotation = NewRotation;
	SetActorRotation(NewRotation);
}

FRotator AEnvironmentActor::GetActorRotationCustom() const
{
	return ActorRotation;
}

