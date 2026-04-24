// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectible.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"

// Sets default values
ACollectible::ACollectible()
{
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;
	
	Sphere->SetCollisionProfileName(TEXT("Trigger"));
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ACollectible::OnOverlap);
}

void ACollectible::BeginPlay()
{
	Super::BeginPlay();
}

void ACollectible::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Check if Overlapping Actor is Valid
	if (OtherActor && OtherActor != this)
	{
		AMyCharacter* Player = Cast<AMyCharacter>(OtherActor);
		
		//If Overlapping Actor is Player, Heal 25 HP
		if (Player)
		{
			Player->AddHealth(25.0f);
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Health +25"));
			}
			
			//Delete Actor after Healing
			Destroy();
		}
	}
}

