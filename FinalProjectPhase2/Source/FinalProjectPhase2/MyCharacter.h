#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class FINALPROJECTPHASE2_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement functions
	void MoveForward(float Value);
	void MoveRight(float Value);
	
	void Turn(float Value);
	void LookUp(float Value);
	
	// Jump
	void Jump();
	void StopJumping();
	
	// Attack
	void Attack();
	
	// Camera
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;
	
	// Animation
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float Speed;

	UFUNCTION(BlueprintCallable)
	float GetSpeed() const { return Speed; }
};
