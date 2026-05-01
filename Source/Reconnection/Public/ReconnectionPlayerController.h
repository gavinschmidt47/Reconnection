// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ReconnectionPlayerController.generated.h"

class UInputAction;
class UInputMappingContext;
class UCameraShakeBase;

UCLASS()
class RECONNECTION_API AReconnectionPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AReconnectionPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// Assign in the child Blueprint to IMC_Default (Content/Core/TopDown/Input/IMC_Default)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	// Assign in the child Blueprint to IA_SetDestination_Click
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> SetDestinationClickAction;

	// Camera shake class to play when a click is out of the player's movement range.
	// Assign any UCameraShakeBase subclass (Blueprint or C++) in the child Blueprint.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	TSubclassOf<UCameraShakeBase> NoMovementCameraShake;

private:
	// Called on IA_SetDestination_Click Started — traces the cursor to a world
	// location and asks the UPlayer component whether it can move there.
	void OnSetDestinationClicked();
};