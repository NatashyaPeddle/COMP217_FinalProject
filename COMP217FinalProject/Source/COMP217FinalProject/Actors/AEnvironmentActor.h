

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "AEnvironmentActor.generated.h"

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
	
	UPROPERTY(EditAnywhere, Category = "Lights")
	float MaxLightIntensity = 10000.f;
	
	UPROPERTY(EditAnywhere, Category = "Lights")
	float LightAnimationSpeed = 3.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDay = true;
	
	///TRANSFORM ===============
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActorRotation;
	
	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationSpeed = 50.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed = 50.f;
	
	UFUNCTION(BlueprintCallable)
	void SetActorLocationCustom(FVector NewLocation);
	FVector GetActorLocationCustom() const;
	
	UFUNCTION(BlueprintCallable)
	void SetActorRotationCustom(FRotator NewRotation);
	FRotator GetActorRotationCustom() const;
	
	///TIMER==========
	FTimerHandle EnvironmentTimer;

	///day/Night cycle? ===========
	void UpdateEnvironmentTimeCycle();
	
	float RunningTime;
};
