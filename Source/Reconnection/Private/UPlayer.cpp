// Fill out your copyright notice in the Description page of Project Settings.

#include "UPlayer.h"

void UFighterPlayer::BuffDefense()
{
	AddBuff(PlayerBuffAmount, EStats::Defense, PlayerBuffRounds);
	ConditionalEndTurn();
}

void UFighterPlayer::BuffDamage()
{
	AddBuff(PlayerBuffAmount, EStats::Damage, PlayerBuffRounds);
	ConditionalEndTurn();
}

void UFighterPlayer::BuffAttack()
{
	AddBuff(PlayerBuffAmount, EStats::Attack, PlayerBuffRounds);
	ConditionalEndTurn();
}

void UFighterPlayer::BuffBlock()
{
	AddBuff(PlayerBuffAmount, EStats::Block, PlayerBuffRounds);
	ConditionalEndTurn();
}

void UFighterPlayer::BuffHeal()
{
	AddBuff(PlayerBuffAmount, EStats::Heal, PlayerBuffRounds);
	ConditionalEndTurn();
}