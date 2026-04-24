

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "AEnvironmentActor.generated.h"

//Forward Declaration
class UMaterialInstanceDynamic;

UCLASS()
class FINALPROJECTPHASE2_API AEnvironmentActor : public AActor
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
	
	//Root Component
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* Root;
	
	//Static Mesh
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* EnvironmentMesh;
	
	//Point Light
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
	
	//Store Position to Reset Oscillation
	FVector DefaultLocation;
	FRotator DefaultRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActorRotation;
	
	//Rotation Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	float RotationSpeed = 50.f;
	
	//Vertical Movement
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	float MovementSpeed = 50.f;
	
	//Sine-Wave Oscillation Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	float OscillationSpeed = 2.f;
	
	///MATERIALS==================
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
	FLinearColor MaterialColor = FLinearColor::Blue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material")
	float GlowPower = 5.f;
	
	//Dynamic Material Instance
	UPROPERTY()
	UMaterialInstanceDynamic* DynamicMaterial;
	
	///TIMER==========
	FTimerHandle EnvironmentTimer;
	
	//Tracks Time
	float RunningTime;
	
	//Toggles Light On and Off
	UFUNCTION(BlueprintCallable, Category = "Environment")
	void ToggleLight();
	
	//Resets Object Position and Rotation
	UFUNCTION(BlueprintCallable, Category = "Environment")
	void ResetActorTransformation();
	
	//Setter and Getters
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
	
	//Handes Day/Night Switch Logic
	void UpdateEnvironmentTimeCycle();
};
