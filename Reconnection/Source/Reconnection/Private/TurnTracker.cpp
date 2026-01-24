// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnTracker.h"
#include "GameFramework/Actor.h"

UTurnTracker::UTurnTracker()
{
	CurrentTurnIndex = -1;
}

void UTurnTracker::AddFighter(AActor* Fighter)
{
	if (Fighter && Fighter->Implements<UFighterInterface>())
	{
		TScriptInterface<IFighterInterface> FighterInterface;
		FighterInterface.SetObject(Fighter);
		FighterInterface.SetInterface(Cast<IFighterInterface>(Fighter));
		
		Fighters.Add(FighterInterface);
		
		// Sort fighters by turn number (initiative score) in descending order
		Fighters.Sort([](const TScriptInterface<IFighterInterface>& A, const TScriptInterface<IFighterInterface>& B)
		{
			return A->GetTurnNumber() > B->GetTurnNumber();
		});
		
		UE_LOG(LogTemp, Log, TEXT("Fighter added to TurnTracker. Total fighters: %d"), Fighters.Num());
	}
}

void UTurnTracker::RemoveFighter(AActor* Fighter)
{
	if (Fighter)
	{
		Fighters.RemoveAll([Fighter](const TScriptInterface<IFighterInterface>& FighterInterface)
		{
			return FighterInterface.GetObject() == Fighter;
		});
		
		UE_LOG(LogTemp, Log, TEXT("Fighter removed from TurnTracker. Total fighters: %d"), Fighters.Num());
	}
}

void UTurnTracker::NextTurn()
{
	if (Fighters.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No fighters in TurnTracker"));
		return;
	}
	
	// End the current turn
	if (CurrentTurnIndex >= 0 && CurrentTurnIndex < Fighters.Num())
	{
		if (Fighters[CurrentTurnIndex].GetInterface())
		{
			Fighters[CurrentTurnIndex]->SetIsTurn(false);
		}
	}
	
	// Move to next turn
	CurrentTurnIndex = (CurrentTurnIndex + 1) % Fighters.Num();
	
	// Start the new turn
	if (Fighters[CurrentTurnIndex].GetInterface())
	{
		Fighters[CurrentTurnIndex]->SetIsTurn(true);
		UE_LOG(LogTemp, Log, TEXT("Turn advanced. Current fighter turn number: %d"), 
			Fighters[CurrentTurnIndex]->GetTurnNumber());
	}
}
