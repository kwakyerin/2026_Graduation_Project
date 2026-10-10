// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradu_Pro_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	GRADU_PRO_API UFunction* Z_Construct_UDelegateFunction_Gradu_Pro_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Gradu_Pro;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Gradu_Pro()
	{
		if (!Z_Registration_Info_UPackage__Script_Gradu_Pro.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Gradu_Pro_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Gradu_Pro",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xB25B0E1E,
			0x21A46C61,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Gradu_Pro.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Gradu_Pro.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Gradu_Pro(Z_Construct_UPackage__Script_Gradu_Pro, TEXT("/Script/Gradu_Pro"), Z_Registration_Info_UPackage__Script_Gradu_Pro, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB25B0E1E, 0x21A46C61));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
