// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include "Components/ActorComponent.h"

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

#include "UFighter.generated.h"

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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	float InitiativeScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Turn")
	class UTexture2D* FighterImage;

	// Movement
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
	float BaseMovement;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
	float MaxMovement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|Movement")
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

	// Buff Map
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighter|BuffManagement")
	TMap<EStats, int32> BuffTracker;

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

	// Functions
	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	virtual void StartTurn();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Turn")
	virtual void EndTurn();

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	virtual void SendDamage(float Damage, UFighter* Target);

	UFUNCTION(BlueprintCallable, Category = "Fighter|Combat")
	virtual void ReceiveDamage(float Damage);

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
};