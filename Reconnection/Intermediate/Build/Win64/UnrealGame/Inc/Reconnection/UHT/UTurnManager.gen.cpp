// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTurnManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUTurnManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RECONNECTION_API UClass* Z_Construct_UClass_UFighter_NoRegister();
RECONNECTION_API UClass* Z_Construct_UClass_UTurnManager();
RECONNECTION_API UClass* Z_Construct_UClass_UTurnManager_NoRegister();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature();
RECONNECTION_API UFunction* Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Reconnection();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnTurnChanged ********************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics
{
	struct _Script_Reconnection_eventOnTurnChanged_Parms
	{
		UFighter* CurrentFighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentFighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::NewProp_CurrentFighter = { "CurrentFighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Reconnection_eventOnTurnChanged_Parms, CurrentFighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFighter_MetaData), NewProp_CurrentFighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::NewProp_CurrentFighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnTurnChanged__DelegateSignature", Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::_Script_Reconnection_eventOnTurnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::_Script_Reconnection_eventOnTurnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTurnChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTurnChanged, UFighter* CurrentFighter)
{
	struct _Script_Reconnection_eventOnTurnChanged_Parms
	{
		UFighter* CurrentFighter;
	};
	_Script_Reconnection_eventOnTurnChanged_Parms Parms;
	Parms.CurrentFighter=CurrentFighter;
	OnTurnChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnTurnChanged **********************************************************

// ********** Begin Delegate FOnRoundStarted *******************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnRoundStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRoundStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRoundStarted)
{
	OnRoundStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnRoundStarted *********************************************************

// ********** Begin Delegate FOnCombatEnded ********************************************************
struct Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Reconnection, nullptr, "OnCombatEnded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCombatEnded_DelegateWrapper(const FMulticastScriptDelegate& OnCombatEnded)
{
	OnCombatEnded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnCombatEnded **********************************************************

// ********** Begin Class UTurnManager Function EndCombat ******************************************
struct Z_Construct_UFunction_UTurnManager_EndCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End combat\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End combat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_EndCombat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "EndCombat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_EndCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_EndCombat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnManager_EndCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_EndCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execEndCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndCombat();
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function EndCombat ********************************************

// ********** Begin Class UTurnManager Function GetCurrentFighter **********************************
struct Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics
{
	struct TurnManager_eventGetCurrentFighter_Parms
	{
		UFighter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the current fighter\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current fighter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventGetCurrentFighter_Parms, ReturnValue), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "GetCurrentFighter", Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::TurnManager_eventGetCurrentFighter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::TurnManager_eventGetCurrentFighter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnManager_GetCurrentFighter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_GetCurrentFighter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execGetCurrentFighter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFighter**)Z_Param__Result=P_THIS->GetCurrentFighter();
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function GetCurrentFighter ************************************

// ********** Begin Class UTurnManager Function InitializeCombat ***********************************
struct Z_Construct_UFunction_UTurnManager_InitializeCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Find all fighters in the level and initialize\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find all fighters in the level and initialize" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_InitializeCombat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "InitializeCombat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_InitializeCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_InitializeCombat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnManager_InitializeCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_InitializeCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execInitializeCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCombat();
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function InitializeCombat *************************************

// ********** Begin Class UTurnManager Function NextTurn *******************************************
struct Z_Construct_UFunction_UTurnManager_NextTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Advance to the next turn\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advance to the next turn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_NextTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "NextTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_NextTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_NextTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnManager_NextTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_NextTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execNextTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextTurn();
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function NextTurn *********************************************

// ********** Begin Class UTurnManager Function OnFighterDeath *************************************
struct Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics
{
	struct TurnManager_eventOnFighterDeath_Parms
	{
		UFighter* DeadFighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a fighter dies\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a fighter dies" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadFighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadFighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::NewProp_DeadFighter = { "DeadFighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventOnFighterDeath_Parms, DeadFighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadFighter_MetaData), NewProp_DeadFighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::NewProp_DeadFighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "OnFighterDeath", Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::TurnManager_eventOnFighterDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::TurnManager_eventOnFighterDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnManager_OnFighterDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_OnFighterDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execOnFighterDeath)
{
	P_GET_OBJECT(UFighter,Z_Param_DeadFighter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFighterDeath(Z_Param_DeadFighter);
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function OnFighterDeath ***************************************

// ********** Begin Class UTurnManager Function OnFighterEndTurn ***********************************
struct Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics
{
	struct TurnManager_eventOnFighterEndTurn_Parms
	{
		UFighter* Fighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a fighter ends their turn\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a fighter ends their turn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::NewProp_Fighter = { "Fighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventOnFighterEndTurn_Parms, Fighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fighter_MetaData), NewProp_Fighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::NewProp_Fighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "OnFighterEndTurn", Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::TurnManager_eventOnFighterEndTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::TurnManager_eventOnFighterEndTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnManager_OnFighterEndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_OnFighterEndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execOnFighterEndTurn)
{
	P_GET_OBJECT(UFighter,Z_Param_Fighter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFighterEndTurn(Z_Param_Fighter);
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function OnFighterEndTurn *************************************

// ********** Begin Class UTurnManager Function RemoveFighter **************************************
struct Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics
{
	struct TurnManager_eventRemoveFighter_Parms
	{
		UFighter* Fighter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove a fighter from combat (when they die)\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a fighter from combat (when they die)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fighter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::NewProp_Fighter = { "Fighter", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventRemoveFighter_Parms, Fighter), Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fighter_MetaData), NewProp_Fighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::NewProp_Fighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "RemoveFighter", Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::TurnManager_eventRemoveFighter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::TurnManager_eventRemoveFighter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnManager_RemoveFighter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_RemoveFighter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execRemoveFighter)
{
	P_GET_OBJECT(UFighter,Z_Param_Fighter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFighter(Z_Param_Fighter);
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function RemoveFighter ****************************************

// ********** Begin Class UTurnManager Function SortFightersByInitiative ***************************
struct Z_Construct_UFunction_UTurnManager_SortFightersByInitiative_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sort fighters by initiative\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sort fighters by initiative" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_SortFightersByInitiative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "SortFightersByInitiative", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_SortFightersByInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_SortFightersByInitiative_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnManager_SortFightersByInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_SortFightersByInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execSortFightersByInitiative)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortFightersByInitiative();
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function SortFightersByInitiative *****************************

// ********** Begin Class UTurnManager Function StartCombat ****************************************
struct Z_Construct_UFunction_UTurnManager_StartCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start the combat sequence\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the combat sequence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnManager_StartCombat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnManager, nullptr, "StartCombat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnManager_StartCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnManager_StartCombat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTurnManager_StartCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnManager_StartCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnManager::execStartCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCombat();
	P_NATIVE_END;
}
// ********** End Class UTurnManager Function StartCombat ******************************************

// ********** Begin Class UTurnManager *************************************************************
void UTurnManager::StaticRegisterNativesUTurnManager()
{
	UClass* Class = UTurnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndCombat", &UTurnManager::execEndCombat },
		{ "GetCurrentFighter", &UTurnManager::execGetCurrentFighter },
		{ "InitializeCombat", &UTurnManager::execInitializeCombat },
		{ "NextTurn", &UTurnManager::execNextTurn },
		{ "OnFighterDeath", &UTurnManager::execOnFighterDeath },
		{ "OnFighterEndTurn", &UTurnManager::execOnFighterEndTurn },
		{ "RemoveFighter", &UTurnManager::execRemoveFighter },
		{ "SortFightersByInitiative", &UTurnManager::execSortFightersByInitiative },
		{ "StartCombat", &UTurnManager::execStartCombat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnManager;
UClass* UTurnManager::GetPrivateStaticClass()
{
	using TClass = UTurnManager;
	if (!Z_Registration_Info_UClass_UTurnManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnManager"),
			Z_Registration_Info_UClass_UTurnManager.InnerSingleton,
			StaticRegisterNativesUTurnManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTurnManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnManager_NoRegister()
{
	return UTurnManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UTurnManager.h" },
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fighters_MetaData[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of all fighters in the level\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of all fighters in the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnIndex_MetaData[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current turn index\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current turn index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current round number\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current round number" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombatActive_MetaData[] = {
		{ "Category", "Turn Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether combat is active\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether combat is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTurnChanged_MetaData[] = {
		{ "Category", "Turn Manager|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoundStarted_MetaData[] = {
		{ "Category", "Turn Manager|Events" },
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatEnded_MetaData[] = {
		{ "Category", "Turn Manager|Events" },
		{ "ModuleRelativePath", "Public/UTurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fighters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fighters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTurnIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static void NewProp_bCombatActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatActive;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTurnChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoundStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnManager_EndCombat, "EndCombat" }, // 891529438
		{ &Z_Construct_UFunction_UTurnManager_GetCurrentFighter, "GetCurrentFighter" }, // 4014536148
		{ &Z_Construct_UFunction_UTurnManager_InitializeCombat, "InitializeCombat" }, // 3263748439
		{ &Z_Construct_UFunction_UTurnManager_NextTurn, "NextTurn" }, // 1699689960
		{ &Z_Construct_UFunction_UTurnManager_OnFighterDeath, "OnFighterDeath" }, // 438174135
		{ &Z_Construct_UFunction_UTurnManager_OnFighterEndTurn, "OnFighterEndTurn" }, // 3797429720
		{ &Z_Construct_UFunction_UTurnManager_RemoveFighter, "RemoveFighter" }, // 2042131145
		{ &Z_Construct_UFunction_UTurnManager_SortFightersByInitiative, "SortFightersByInitiative" }, // 2816607863
		{ &Z_Construct_UFunction_UTurnManager_StartCombat, "StartCombat" }, // 3611818363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_Fighters_Inner = { "Fighters", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFighter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_Fighters = { "Fighters", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnManager, Fighters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fighters_MetaData), NewProp_Fighters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_CurrentTurnIndex = { "CurrentTurnIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnManager, CurrentTurnIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnIndex_MetaData), NewProp_CurrentTurnIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnManager, CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) };
void Z_Construct_UClass_UTurnManager_Statics::NewProp_bCombatActive_SetBit(void* Obj)
{
	((UTurnManager*)Obj)->bCombatActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_bCombatActive = { "bCombatActive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTurnManager), &Z_Construct_UClass_UTurnManager_Statics::NewProp_bCombatActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombatActive_MetaData), NewProp_bCombatActive_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_OnTurnChanged = { "OnTurnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnManager, OnTurnChanged), Z_Construct_UDelegateFunction_Reconnection_OnTurnChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTurnChanged_MetaData), NewProp_OnTurnChanged_MetaData) }; // 2021697084
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_OnRoundStarted = { "OnRoundStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnManager, OnRoundStarted), Z_Construct_UDelegateFunction_Reconnection_OnRoundStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoundStarted_MetaData), NewProp_OnRoundStarted_MetaData) }; // 2724744591
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTurnManager_Statics::NewProp_OnCombatEnded = { "OnCombatEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnManager, OnCombatEnded), Z_Construct_UDelegateFunction_Reconnection_OnCombatEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatEnded_MetaData), NewProp_OnCombatEnded_MetaData) }; // 356089515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_Fighters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_Fighters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_CurrentTurnIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_bCombatActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_OnTurnChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_OnRoundStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnManager_Statics::NewProp_OnCombatEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Reconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnManager_Statics::ClassParams = {
	&UTurnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnManager()
{
	if (!Z_Registration_Info_UClass_UTurnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnManager.OuterSingleton, Z_Construct_UClass_UTurnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnManager);
UTurnManager::~UTurnManager() {}
// ********** End Class UTurnManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h__Script_Reconnection_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnManager, UTurnManager::StaticClass, TEXT("UTurnManager"), &Z_Registration_Info_UClass_UTurnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnManager), 466925362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h__Script_Reconnection_3112768112(TEXT("/Script/Reconnection"),
	Z_CompiledInDeferFile_FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h__Script_Reconnection_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavin_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_UTurnManager_h__Script_Reconnection_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
