// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include "Components/ActorComponent.h"
#include "UFighter.generated.h"

UENUM(BlueprintType)
enum class EStats : uint8
{
	Movement UMETA(DisplayName = "Movement"),
	Health UMETA(DisplayName = "Health"),
	Damage UMETA(DisplayName = "Damage"),
	Attack UMETA(DisplayName = "Attack"),
	Defense UMETA(DisplayName = "Defense"),
	Block UMETA(DisplayName = "Block"),
	Heal UMETA(DisplayName = "Heal")
};

USTRUCT(BlueprintType)
struct FAttackData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int HitRoll;

	UPROPERTY(BlueprintReadWrite)
	float DamageAmount;

	UPROPERTY(BlueprintReadWrite)
	bool bDidHit;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartTurn, class UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndTurn, class UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, class UFighter*, Fighter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitAttack, class UFighter*, Target);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitMiss, class UFighter*, Target);

// Fired after a successful attack — provides the attacker, target, and net damage dealt
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDamageDealt, class UFighter*, Attacker, class UFighter*, Target, float, Amount);

// Fired after any heal (self or received) — provides the healed fighter and amount restored
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealPerformed, class UFighter*, Fighter, float, Amount);

// Fired when this fighter consumes movement budget toward a world-space destination
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFighterMoved, class UFighter*, Fighter, FVector, Destination);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RECONNECTION_API UFighter : public UActorComponent
{
	GENERATED_BODY()

public:
	UFighter();

protected:
	virtual void BeginPlay() override;

public:
	// Turn State
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	bool bIsTurn;

	// Set to true before playing an action animation so the turn does not end
	// automatically. Blueprint is then responsible for calling EndTurn() once
	// the montage (or any other animation event) finishes.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	bool bWaitForAnimation = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	float InitiativeScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	class UTexture2D* FighterImage;

	// Movement — all values are world-unit distances used with the NavMesh agent
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
	float BaseMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
	float MaxMovement;

	// How many world units of NavMesh-path distance remain this turn
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Fighter|Movement")
	float MovementLeft;

	// Health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Health")
	float MaxHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Health")
	float CurrentHealth;

	// Damage
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float MinDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float MaxDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float DamageBuff;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Damage")
	float DamageReduction;

	// Attack
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Attack")
	float BaseAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Attack")
	float AttackBuff;

	// Defense
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Defense")
	float BaseDefense;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Defense")
	float DefenseBuff;

	// Block
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Block")
	float BaseBlock;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Block")
	float BlockBuff;

	// Heal
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Heal")
	float BaseHeal;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Heal")
	float HealBuff;

	// Tracks remaining rounds for each active buff
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|BuffManagement")
	TMap<EStats, int32> BuffTracker;

	// Tracks the amount that was applied for each active buff, so it can be correctly reversed
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Fighter|BuffManagement")
	TMap<EStats, float> BuffAmountTracker;

	// Events
	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnStartTurn OnStartTurn;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnEndTurn OnEndTurn;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnDeath OnDeath;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnHitAttack OnHitAttack;

	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnHitMiss OnHitMiss;

	// Fired on a successful hit — bind in Blueprint to show floating damage numbers
	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnDamageDealt OnDamageDealt;

	// Fired after any heal — bind in Blueprint to show floating heal numbers
	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnHealPerformed OnHealPerformed;

	// Fired when movement budget is consumed — bind in Blueprint to drive camera follow
	UPROPERTY(BlueprintAssignable, Category = "Fighter|Events")
	FOnFighterMoved OnFighterMoved;

	// Functions
	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	virtual void StartTurn();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	virtual void EndTurn();

	// Ends the turn only when bWaitForAnimation is false.
	// Action functions call this instead of EndTurn() directly so Blueprint can
	// hold the turn open while an animation plays, then call EndTurn() manually.
	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	void ConditionalEndTurn();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	virtual void SendDamage(float Damage, UFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	virtual void ReceiveDamage(float Damage);

	// Apply healing directly without ending the turn — used when healing an ally
	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	void ReceiveHeal(float Amount);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	float GetDefense();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	float RollDamage();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	int RollToHit();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	FAttackData Attack(UFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	bool CheckSightToTarget(UFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Actions")
	virtual void Heal();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Actions")
	virtual void Block();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Buffs")
	void AddBuff(float BuffAmount, const EStats& Stat, int NumberOfRounds);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Buffs")
	void RemoveBuff(float BuffAmount, const EStats& Stat);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	void Die();

	// NavMesh movement helpers — distances are in world units (Unreal units)

	// Returns the NavMesh path length from this fighter's location to Destination.
	// Returns FLT_MAX if no path exists.
	UFUNCTION(BlueprintCallable, Category = "Fighter|Movement")
	float GetPathLengthTo(FVector Destination);

	// Returns true if Destination is reachable within the remaining movement budget.
	UFUNCTION(BlueprintCallable, Category = "Fighter|Movement")
	bool CanMoveToLocation(FVector Destination);

	// Deducts the NavMesh path distance from MovementLeft and fires OnFighterMoved.
	// Returns false (no deduction) if the path would exceed the remaining budget.
	UFUNCTION(BlueprintCallable, Category = "Fighter|Movement")
	bool TryConsumeMovement(FVector Destination);
};