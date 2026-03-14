

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
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
	
	///COMPONENT =============
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* EnvironmentMesh;
	
	UPROPERTY(EditAnywhere, Category = "Components")
	UPointLightComponent* EnvironmentLight;
	
	///LIGHT =========
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lights")
	float BaseLightIntensity = 1000.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lights")
	float MaxLightIntensity = 10000.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lights")
	float LightAnimationSpeed = 3.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lights")
	FLinearColor LightColor = FLinearColor::White;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lights")
	bool bIsDay = true;
	
	///TRANSFORM ===============
	
	FVector DefaultLocation;
	FRotator DefaultRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActorRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	float RotationSpeed = 50.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	float MovementSpeed = 50.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	float OscillationSpeed = 2.f;
	
	///MATERIALS==================
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
	FLinearColor MaterialColor = FLinearColor::Blue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
	float GlowPower = 5.f;
	
	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial;
	
	///TIMER==========
	FTimerHandle EnvironmentTimer;
	
	float RunningTime;
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	void ToggleLight();
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	void ResetActorTransformation();
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	void SetActorLocationCustom(FVector NewLocation);
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	FVector GetActorLocationCustom() const;
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	void SetActorRotationCustom(FRotator NewRotation);
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	FRotator GetActorRotationCustom() const;
	
	UFUNCTION(BlueprintCallable, Category = "Environment")
	FTransform GetCurrentTransform() const;
	
	///day/Night cycle? ===========
	void UpdateEnvironmentTimeCycle();
};
