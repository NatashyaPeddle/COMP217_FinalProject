// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/AEnvironmentActor.h"

// Sets default values
AAEnvironmentActor::AAEnvironmentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAEnvironmentActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAEnvironmentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

