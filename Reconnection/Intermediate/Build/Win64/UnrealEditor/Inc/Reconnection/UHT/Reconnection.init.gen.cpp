// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReconnection_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Reconnection;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Reconnection()
	{
		if (!Z_Registration_Info_UPackage__Script_Reconnection.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Reconnection",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8AA1DF31,
				0x908A0A20,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Reconnection.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Reconnection.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Reconnection(Z_Construct_UPackage__Script_Reconnection, TEXT("/Script/Reconnection"), Z_Registration_Info_UPackage__Script_Reconnection, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8AA1DF31, 0x908A0A20));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
