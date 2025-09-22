// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fighter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFighter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RECONNECTION_API UClass* Z_Construct_UClass_AFighter();
RECONNECTION_API UClass* Z_Construct_UClass_AFighter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Reconnection();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFighter Function EndTurn ************************************************
struct Z_Construct_UFunction_AFighter_EndTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stored Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function to end this fighter's turn\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/Fighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to end this fighter's turn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighter_EndTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFighter, nullptr, "EndTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFighter_EndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFighter_EndTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFighter_EndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFighter_EndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFighter::execEndTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTurn();
	P_NATIVE_END;
}
// ********** End Class AFighter Function EndTurn **************************************************

// ********** Begin Class AFighter Function StartTurn **********************************************
struct Z_Construct_UFunction_AFighter_StartTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stored Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function to start this fighter's turn\n" },
#endif
		{ "ModuleRelativePath", "Public/Fighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to start this fighter's turn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFighter_StartTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFighter, nullptr, "StartTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFighter_StartTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFighter_StartTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFighter_StartTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFighter_StartTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFighter::execStartTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTurn();
	P_NATIVE_END;
}
// ********** End Class AFighter Function StartTurn ************************************************

// ********** Begin Class AFighter *****************************************************************
void AFighter::StaticRegisterNativesAFighter()
{
	UClass* Class = AFighter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTurn", &AFighter::execEndTurn },
		{ "StartTurn", &AFighter::execStartTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFighter;
UClass* AFighter::GetPrivateStaticClass()
{
	using TClass = AFighter;
	if (!Z_Registration_Info_UClass_AFighter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Fighter"),
			Z_Registration_Info_UClass_AFighter.InnerSingleton,
			StaticRegisterNativesAFighter,
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
	return Z_Registration_Info_UClass_AFighter.InnerSingleton;
}
UClass* Z_Construct_UClass_AFighter_NoRegister()
{
	return AFighter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFighter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Fighter.h" },
		{ "ModuleRelativePath", "Public/Fighter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurn_MetaData[] = {
		{ "Category", "Stored Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Boolean to check if it's this fighter's turn\n" },
#endif
		{ "ModuleRelativePath", "Public/Fighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boolean to check if it's this fighter's turn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitiativeScore_MetaData[] = {
		{ "Category", "Stored Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initiative score for turn order\n" },
#endif
		{ "ModuleRelativePath", "Public/Fighter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiative score for turn order" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitiativeScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFighter_EndTurn, "EndTurn" }, // 1158669328
		{ &Z_Construct_UFunction_AFighter_StartTurn, "StartTurn" }, // 45664349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFighter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFighter_Statics::NewProp_bIsTurn_SetBit(void* Obj)
{
	((AFighter*)Obj)->bIsTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFighter_Statics::NewProp_bIsTurn = { "bIsTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFighter), &Z_Construct_UClass_AFighter_Statics::NewProp_bIsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTurn_MetaData), NewProp_bIsTurn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFighter_Statics::NewProp_InitiativeScore = { "InitiativeScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFighter, InitiativeScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitiativeScore_MetaData), NewProp_InitiativeScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFighter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighter_Statics::NewProp_bIsTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFighter_Statics::NewProp_InitiativeScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFighter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFighter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Reconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFighter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFighter_Statics::ClassParams = {
	&AFighter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFighter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFighter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFighter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFighter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFighter()
{
	if (!Z_Registration_Info_UClass_AFighter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFighter.OuterSingleton, Z_Construct_UClass_AFighter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFighter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFighter);
AFighter::~AFighter() {}
// ********** End Class AFighter *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h__Script_Reconnection_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFighter, AFighter::StaticClass, TEXT("AFighter"), &Z_Registration_Info_UClass_AFighter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFighter), 2310285360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h__Script_Reconnection_3675422390(TEXT("/Script/Reconnection"),
	Z_CompiledInDeferFile_FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h__Script_Reconnection_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gavin_OneDrive_Documents_GitHub_Reconnection_Reconnection_Source_Reconnection_Public_Fighter_h__Script_Reconnection_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
