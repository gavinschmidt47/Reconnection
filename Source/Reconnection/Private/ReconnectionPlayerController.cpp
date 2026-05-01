// Fill out your copyright notice in the Description page of Project Settings.

#include "ReconnectionPlayerController.h"
#include "UPlayer.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AReconnectionPlayerController::AReconnectionPlayerController()
{
	bShowMouseCursor = true;
}

void AReconnectionPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AReconnectionPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (SetDestinationClickAction)
		{
			EIC->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this,
				&AReconnectionPlayerController::OnSetDestinationClicked);
		}
	}
}

void AReconnectionPlayerController::OnSetDestinationClicked()
{
	APawn* FighterPawn = GetPawn();
	if (!FighterPawn) return;

	UFighterPlayer* PlayerFighter = FighterPawn->FindComponentByClass<UFighterPlayer>();
	if (!PlayerFighter || !PlayerFighter->bIsTurn) return;

	FHitResult Hit;
	if (!GetHitResultUnderCursor(ECC_Visibility, true, Hit)) return;

	if (!PlayerFighter->TryConsumeMovement(Hit.Location) && NoMovementCameraShake)
	{
		ClientStartCameraShake(NoMovementCameraShake);
	}
}