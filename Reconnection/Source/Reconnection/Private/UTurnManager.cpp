// Fill out your copyright notice in the Description page of Project Settings.

#include "UTurnManager.h"
#include "Kismet/GameplayStatics.h"

UTurnManager::UTurnManager()
{
	PrimaryComponentTick.bCanEverTick = false;
	CurrentTurnIndex = 0;
	CurrentRound = 0;
	bCombatActive = false;
}

void UTurnManager::BeginPlay()
{
	Super::BeginPlay();
	InitializeCombat();
}

void UTurnManager::InitializeCombat()
{
	Fighters.Empty();
	
	// Find all actors in the world
	TArray<AActor*> AllActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), AllActors);

	// Search for UFighter components on all actors
	for (AActor* Actor : AllActors)
	{
		if (Actor)
		{
			UFighter* FighterComp = Actor->FindComponentByClass<UFighter>();
			if (FighterComp)
			{
				Fighters.Add(FighterComp);
				
				// Bind to fighter events
				FighterComp->OnDeath.AddDynamic(this, &UTurnManager::HandleFighterDeath);
				FighterComp->OnEndTurn.AddDynamic(this, &UTurnManager::HandleFighterEndTurn);

				UEnemy* EnemyComp = FighterComp->GetOwner()->FindComponentByClass<UEnemy>();
				if (EnemyComp)
				{
					EnemyComp->InitializeEnemy(Fighters);
					OnFighterJoined.AddDynamic(EnemyComp, &UEnemy::OnFighterListChanged);
					OnFighterDeath.AddDynamic(EnemyComp, &UEnemy::OnFighterListChanged);
					++EnemiesLeft;
				}
				OnFighterJoined.Broadcast(FighterComp);
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("TurnManager: Found %d fighters"), Fighters.Num());

	// Sort by initiative
	SortFightersByInitiative();
	
	// Don't automatically start - let StartCombat() handle it
}

void UTurnManager::StartCombat()
{
	if (Fighters.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("TurnManager: No fighters found, cannot start combat"));
		return;
	}

	bCombatActive = true;
	CurrentTurnIndex = 0;
	CurrentRound = 1;

	OnRoundStarted.Broadcast();

	// End all fighter turns first
	for (UFighter* Fighter : Fighters)
	{
		if (Fighter && Fighter->bIsTurn)
		{
			Fighter->bIsTurn = false;
		}
	}
	
	// Start the first fighter's turn
	UFighter* FirstFighter = GetCurrentFighter();
	if (FirstFighter)
	{
		UE_LOG(LogTemp, Log, TEXT("TurnManager: Starting combat with %s"), *FirstFighter->GetOwner()->GetName());
		FirstFighter->StartTurn();
		OnTurnChanged.Broadcast(FirstFighter);
	}
}

void UTurnManager::NextTurn()
{
	if (!bCombatActive || Fighters.Num() == 0)
	{
		return;
	}

	// Move to next fighter
	CurrentTurnIndex++;

	// Check if we've completed a round
	if (CurrentTurnIndex >= Fighters.Num())
	{
		CurrentTurnIndex = 0;
		CurrentRound++;
		OnRoundStarted.Broadcast();
		UE_LOG(LogTemp, Log, TEXT("TurnManager: Starting Round %d"), CurrentRound);
	}

	// End previous fighter's turn
	for (UFighter* Fighter : Fighters)
	{
		if (Fighter && Fighter->bIsTurn)
		{
			Fighter->bIsTurn = false;
		}
	}
	
	// Start the next fighter's turn
	UFighter* CurrentFighter = GetCurrentFighter();
	if (CurrentFighter)
	{
		UE_LOG(LogTemp, Log, TEXT("TurnManager: Next turn - %s"), *CurrentFighter->GetOwner()->GetName());
		CurrentFighter->StartTurn();
		OnTurnChanged.Broadcast(CurrentFighter);
	}
}

UFighter* UTurnManager::GetCurrentFighter()
{
	if (Fighters.IsValidIndex(CurrentTurnIndex))
	{
		return Fighters[CurrentTurnIndex];
	}
	return nullptr;
}

void UTurnManager::SortFightersByInitiative()
{
	Fighters.Sort([](const UFighter& A, const UFighter& B)
	{
		return A.InitiativeScore > B.InitiativeScore;
	});
}

void UTurnManager::RemoveFighter(UFighter* Fighter)
{
	if (!Fighter)
	{
		return;
	}

	int32 RemovedIndex = Fighters.Find(Fighter);
	if (RemovedIndex != INDEX_NONE)
	{
		Fighters.Remove(Fighter);
		
		// Adjust current turn index if necessary
		if (RemovedIndex < CurrentTurnIndex)
		{
			CurrentTurnIndex--;
		}
		else if (RemovedIndex == CurrentTurnIndex && CurrentTurnIndex >= Fighters.Num())
		{
			CurrentTurnIndex = 0;
		}

		// Check if combat should end
		if (Fighters.Num() <= 1)
		{
			EndCombat();
		}
	}
}

void UTurnManager::EndCombat()
{
	bCombatActive = false;
	OnCombatEnded.Broadcast();
	UE_LOG(LogTemp, Log, TEXT("TurnManager: Combat ended"));
}

void UTurnManager::HandleFighterDeath(UFighter* DeadFighter)
{
	RemoveFighter(DeadFighter);
	if (DeadFighter -> GetOwner() -> FindComponentByClass<UEnemy>())
	{
		--EnemiesLeft;
		if (EnemiesLeft <= 0)
		{
			UGameplayStatics::OpenLevel(GetWorld(), FName(NextLevel));
		}
	}
}

void UTurnManager::HandleFighterEndTurn(UFighter* Fighter)
{
	if (bCombatActive)
	{
		NextTurn();
	}
}