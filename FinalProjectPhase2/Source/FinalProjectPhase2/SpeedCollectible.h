#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpeedCollectible.generated.h"

UCLASS()
class FINALPROJECTPHASE2_API ASpeedCollectible : public AActor
{
    GENERATED_BODY()
	
public:	
    // Sets default values for this actor's properties
    ASpeedCollectible();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:	
    UPROPERTY(VisibleAnywhere)
    class USphereComponent* Sphere;
	
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;
	
    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};