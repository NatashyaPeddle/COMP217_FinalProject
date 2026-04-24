#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "MyCharacter.generated.h"

//Forward Declarations
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

	//Input Binding Controls Setup
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	//Checks game paused
	bool bIsPaused = false;

public:	
	//Calls Every Frame
	virtual void Tick(float DeltaTime) override;

	//Movement Functions (WASD / Mouse)
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	
	//Jump Input Functions (Spacebar)
	void Jump();
	void JumpStop();
	
	//Attack Input Function (Left Click)
	void Attack(const FInputActionValue& Value);
	
	//Pause Function Toggle (Esc)
	void Pause(const FInputActionValue& Value);
	
	//Camera Boom
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;
	
	//Camera Component Attached To SpringArm
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;
	
	//Current Speed for Animations
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	float Speed;
	
	//Player Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;
	
	//Player Max Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;
	
	//Returns Health Percent for UI HP Bar
	UFUNCTION(BlueprintCallable, Category ="Health")
	float GetHealthPercent() const;
	
	//Add or Subtract Health Function
	UFUNCTION(BlueprintCallable, Category ="Health")
	void AddHealth(float Amount);

	//Checks if Player is Dead
	UFUNCTION(BlueprintCallable, Category ="Health")
	void CheckHealth();

	//Speed Getter for Animations
	UFUNCTION(BlueprintCallable)
	float GetSpeed() const { return Speed; }
	
	//Input Actions (Enhanced Input System)
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

	//Input Mapping Context
	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* IMC_Default;

	//Called When Pawn is Possessd By Controller
	virtual void PossessedBy(AController* NewController) override;
	
	//Player Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stamina")
	float Stamina = 100.0f;

	//Player Max Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stamina")
	float MaxStamina = 100.0f;

	//Player Stamina Drain
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stamina")
	float StaminaDrain = 15.0f;

	//Add or Subtract Health Function
	UFUNCTION(BlueprintCallable, Category ="Stamina")
	void AddStamina(float Amount);

	//Movement Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Speed")
	float NormalSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Speed")
	float SlowSpeed = 350.0f;

	//Stamina Percent for UI
	UFUNCTION(BlueprintCallable, Category="Stamina")
	float GetStaminaPercent() const
	{
		return Stamina / MaxStamina;
	}
};