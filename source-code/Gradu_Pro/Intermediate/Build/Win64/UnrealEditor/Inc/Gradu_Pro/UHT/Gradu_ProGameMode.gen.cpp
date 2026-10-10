// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gradu_ProGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGradu_ProGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GRADU_PRO_API UClass* Z_Construct_UClass_AGradu_ProGameMode();
GRADU_PRO_API UClass* Z_Construct_UClass_AGradu_ProGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Gradu_Pro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGradu_ProGameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGradu_ProGameMode;
UClass* AGradu_ProGameMode::GetPrivateStaticClass()
{
	using TClass = AGradu_ProGameMode;
	if (!Z_Registration_Info_UClass_AGradu_ProGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Gradu_ProGameMode"),
			Z_Registration_Info_UClass_AGradu_ProGameMode.InnerSingleton,
			StaticRegisterNativesAGradu_ProGameMode,
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
	return Z_Registration_Info_UClass_AGradu_ProGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGradu_ProGameMode_NoRegister()
{
	return AGradu_ProGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGradu_ProGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gradu_ProGameMode.h" },
		{ "ModuleRelativePath", "Gradu_ProGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGradu_ProGameMode constinit property declarations ***********************
// ********** End Class AGradu_ProGameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradu_ProGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGradu_ProGameMode_Statics
UObject* (*const Z_Construct_UClass_AGradu_ProGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Gradu_Pro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradu_ProGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradu_ProGameMode_Statics::ClassParams = {
	&AGradu_ProGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradu_ProGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradu_ProGameMode_Statics::Class_MetaDataParams)
};
void AGradu_ProGameMode::StaticRegisterNativesAGradu_ProGameMode()
{
}
UClass* Z_Construct_UClass_AGradu_ProGameMode()
{
	if (!Z_Registration_Info_UClass_AGradu_ProGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradu_ProGameMode.OuterSingleton, Z_Construct_UClass_AGradu_ProGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradu_ProGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGradu_ProGameMode);
AGradu_ProGameMode::~AGradu_ProGameMode() {}
// ********** End Class AGradu_ProGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProGameMode_h__Script_Gradu_Pro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradu_ProGameMode, AGradu_ProGameMode::StaticClass, TEXT("AGradu_ProGameMode"), &Z_Registration_Info_UClass_AGradu_ProGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradu_ProGameMode), 3266242872U) },
	};
}; // Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProGameMode_h__Script_Gradu_Pro_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProGameMode_h__Script_Gradu_Pro_3362030138{
	TEXT("/Script/Gradu_Pro"),
	Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProGameMode_h__Script_Gradu_Pro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Graduation_Proj_source_code_Gradu_Pro_Source_Gradu_Pro_Gradu_ProGameMode_h__Script_Gradu_Pro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
