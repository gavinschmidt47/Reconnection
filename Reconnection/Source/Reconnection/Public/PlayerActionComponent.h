// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerActionComponent.generated.h"
class AFighter;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RECONNECTION_API UPlayerActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerActionComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stored Variables")
	BP_Player* Player;

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	void PerformAttack(AFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	void PerformDefend();

	UFUNCTION(BlueprintCallable, Category = "Stored Functions")
	void PerformHeal();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
