// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedCollectible.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"

// Sets default values
ASpeedCollectible::ASpeedCollectible()
{
    Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    RootComponent = Sphere;
	
    Sphere->SetCollisionProfileName(TEXT("Trigger"));
	
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh->SetupAttachment(RootComponent);
	
    Sphere->OnComponentBeginOverlap.AddDynamic(this, &ASpeedCollectible::OnOverlap);
}

void ASpeedCollectible::BeginPlay()
{
    Super::BeginPlay();
}

void ASpeedCollectible::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    //Check if Overlapping Actor is Valid
    if (OtherActor && OtherActor != this)
    {
        AMyCharacter* Player = Cast<AMyCharacter>(OtherActor);
		
        //If Overlapping Actor is Player, Restore 50 Stamina
        if (Player)
        {
            Player->AddStamina(50.0f);
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Stamina +50"));
            }
			
            //Delete Actor after Healing
            Destroy();
        }
    }
}