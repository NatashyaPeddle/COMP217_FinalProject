#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "MyCharacter.generated.h"


class UCameraComponent;
class USpringArmComponent;
class UInputAction;

UCLASS()
class FINALPROJECTPHASE2_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	bool bIsPaused = false;

public:	
	virtual void Tick(float DeltaTime) override;

	// Movement functions
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	
	// Jump
	void Jump();
	void JumpStop();
	
	// Attack
	void Attack(const FInputActionValue& Value);
	
	// Pause
	void Pause(const FInputActionValue& Value);
	
	// Camera
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;
	
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;
	
	// Animation
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float Speed;
	
	// Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;
	
	UFUNCTION(BlueprintCallable, Category ="Health")
	float GetHealthPercent() const;
	
	UFUNCTION(BlueprintCallable, Category ="Health")
	void AddHealth(float Amount);
	
	UFUNCTION(BlueprintCallable, Category ="Health")
	void CheckHealth();

	UFUNCTION(BlueprintCallable)
	float GetSpeed() const { return Speed; }
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* IA_Move;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* IA_Jump;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* IA_Look;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* IA_Pause;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input")
	UInputAction* IA_Attack;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* IMC_Default;

	virtual void PossessedBy(AController* NewController) override;
};