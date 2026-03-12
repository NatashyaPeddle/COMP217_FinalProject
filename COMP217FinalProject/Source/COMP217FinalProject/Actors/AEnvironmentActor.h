

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AEnvironmentActor.generated.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"


UCLASS()
class COMP217FINALPROJECT_API AEnvironmentActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvironmentActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	
	UPROPERTY(EditAnywhere, Category = "Environment")
	USceneComponent* Root;
	
	UPROPERTY(EditAnywhere, Category = "Environment")
	UStaticMeshComponent* EnvironmentMesh;
	
	///LIGHT ==========
	

	UPROPERTY(EditAnywhere, Category = "Environment")
	UPointLightComponent* EnvironmentLight;
	
	UPROPERTY(EditAnywhere, Category = "Lights")
	float BaseLightIntensity = 1000.f;
	
	///LOCATION ===============
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActorRotation;
	
	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial;
	
	void SetActorLocationCustom(FVector NewLocation);
	FVector GetActorLocationCustom() const;

	void SetActorRotationCustom(FRotator NewRotation);
	FRotator GetActorRotationCustom() const;
	
	
	///TIMER==========
	FTimerHandle EnvironmentTimer;

	///day/Night cycle? ===========
	void UpdateEnvironmentTimeCycle();
};
