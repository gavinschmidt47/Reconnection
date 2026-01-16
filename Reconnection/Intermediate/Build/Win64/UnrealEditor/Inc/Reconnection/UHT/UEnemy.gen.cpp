// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEnemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUEnemy() {}

// ********** Begin Cross Module References ********************************************************
RECONNECTION_API UClass* Z_Construct_UClass_UEnemy();
RECONNECTION_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
RECONNECTION_API UClass* Z_Construct_UClass_UFighter();
UPackage* Z_Construct_UPackage__Script_Reconnection();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemy Function ChooseAction *********************************************
static FName NAME_UEnemy_ChooseAction = FName(TEXT("ChooseAction"));
void UEnemy::ChooseAction()
{
	UFunction* Func = FindFunctionChecked(NAME_UEnemy_ChooseAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ChooseAction_Implementation();
	}
}
struct Z_Construct_UFunction_UEnemy_ChooseAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_ChooseAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "ChooseAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_ChooseAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_ChooseAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UEnemy_ChooseAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_ChooseAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemy::execChooseAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class UEnemy Function ChooseAction ***********************************************

// ********** Begin Class UEnemy *******************************************************************
void UEnemy::StaticRegisterNativesUEnemy()
{
	UClass* Class = UEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChooseAction", &UEnemy::execChooseAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemy;
UClass* UEnemy::GetPrivateStaticClass()
{
	using TClass = UEnemy;
	if (!Z_Registration_Info_UClass_UEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Enemy"),
			Z_Registration_Info_UClass_UEnemy.InnerSingleton,
			StaticRegisterNativesUEnemy,
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
	return Z_Registration_Info_UClass_UEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemy_NoRegister()
{
	return UEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Fighters" },
		{ "IncludePath", "UEnemy.h" },
		{ "ModuleRelativePath", "Public/UEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_ChooseAction, "ChooseAction" }, // 2553027987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFighter,
	(UObject* (*)())Z_Construct_UPackage__Script_Reconnection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_Statics::ClassParams = {
	&UEnemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemy()
{
	if (!Z_Registration_Info_UClass_UEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy.OuterSingleton, Z_Construct_UClass_UEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemy.OuterSingleton;
}
UEnemy::UEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy);
UEnemy::~UEnemy() {}
// ********** End Class UEnemy *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy, UEnemy::StaticClass, TEXT("UEnemy"), &Z_Registration_Info_UClass_UEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy), 4088449789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_131226729(TEXT("/Script/Reconnection"),
	Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_woyat_OneDrive_Projects_Reconnection_Reconnection_Source_Reconnection_Public_UEnemy_h__Script_Reconnection_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
