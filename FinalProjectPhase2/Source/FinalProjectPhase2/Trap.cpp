// Fill out your copyright notice in the Description page of Project Settings.


#include "Trap.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"

// Sets default values
ATrap::ATrap()
{
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;
	
	Sphere->SetCollisionProfileName(TEXT("Trigger"));
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ATrap::OnOverlap);
}

void ATrap::BeginPlay()
{
	Super::BeginPlay();
}

void ATrap::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Check if Overlapping Actor is Valid
	if (OtherActor && OtherActor != this)
	{
		AMyCharacter* Player = Cast<AMyCharacter>(OtherActor);
		
		//If Overlapping Actor is Player, Remove 5 HP
		if (Player)
		{
			Player->AddHealth(-5);
			Player->CheckHealth();
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Health -5"));
			}
			
			//Delete Trap after Dealing Damage
			Destroy();
		}
	}
}
