// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryContext_Danger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Danger() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
GRADU_PRO_API UClass* Z_Construct_UClass_UEnvQueryContext_Danger();
GRADU_PRO_API UClass* Z_Construct_UClass_UEnvQueryContext_Danger_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gradu_Pro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryContext_Danger **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryContext_Danger;
UClass* UEnvQueryContext_Danger::GetPrivateStaticClass()
{
	using TClass = UEnvQueryContext_Danger;
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Danger.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnvQueryContext_Danger"),
			Z_Registration_Info_UClass_UEnvQueryContext_Danger.InnerSingleton,
			StaticRegisterNativesUEnvQueryContext_Danger,
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
	return Z_Registration_Info_UClass_UEnvQueryContext_Danger.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryContext_Danger_NoRegister()
{
	return UEnvQueryContext_Danger::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_Danger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  UEnvQueryContext_Danger\n *  Returns the enemy character's last known danger location\n */" },
#endif
		{ "IncludePath", "Variant_Combat/AI/EnvQueryContext_Danger.h" },
		{ "ModuleRelativePath", "Variant_Combat/AI/EnvQueryContext_Danger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UEnvQueryContext_Danger\nReturns the enemy character's last known danger location" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UEnvQueryContext_Danger constinit property declarations ******************
// ********** End Class UEnvQueryContext_Danger constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_Danger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnvQueryContext_Danger_Statics
UObject* (*const Z_Construct_UClass_UEnvQueryContext_Danger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_Gradu_Pro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Danger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Danger_Statics::ClassParams = {
	&UEnvQueryContext_Danger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Danger_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_Danger_Statics::Class_MetaDataParams)
};
void UEnvQueryContext_Danger::StaticRegisterNativesUEnvQueryContext_Danger()
{
}
UClass* Z_Construct_UClass_UEnvQueryContext_Danger()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Danger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_Danger.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_Danger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_Danger.OuterSingleton;
}
UEnvQueryContext_Danger::UEnvQueryContext_Danger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnvQueryContext_Danger);
UEnvQueryContext_Danger::~UEnvQueryContext_Danger() {}
// ********** End Class UEnvQueryContext_Danger ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_AI_EnvQueryContext_Danger_h__Script_Gradu_Pro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_Danger, UEnvQueryContext_Danger::StaticClass, TEXT("UEnvQueryContext_Danger"), &Z_Registration_Info_UClass_UEnvQueryContext_Danger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_Danger), 2884527678U) },
	};
}; // Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_AI_EnvQueryContext_Danger_h__Script_Gradu_Pro_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_AI_EnvQueryContext_Danger_h__Script_Gradu_Pro_2418394917{
	TEXT("/Script/Gradu_Pro"),
	Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_AI_EnvQueryContext_Danger_h__Script_Gradu_Pro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Variant_Combat_AI_EnvQueryContext_Danger_h__Script_Gradu_Pro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
