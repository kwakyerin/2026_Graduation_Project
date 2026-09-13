// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify_EndDash.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimNotify_EndDash() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UAnimNotify_EndDash();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UAnimNotify_EndDash_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_EndDash ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_EndDash;
UClass* UAnimNotify_EndDash::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_EndDash;
	if (!Z_Registration_Info_UClass_UAnimNotify_EndDash.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AnimNotify_EndDash"),
			Z_Registration_Info_UClass_UAnimNotify_EndDash.InnerSingleton,
			StaticRegisterNativesUAnimNotify_EndDash,
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
	return Z_Registration_Info_UClass_UAnimNotify_EndDash.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_EndDash_NoRegister()
{
	return UAnimNotify_EndDash::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_EndDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  AnimNotify to finish the dash animation and restore player control\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Variant_Platforming/Animation/AnimNotify_EndDash.h" },
		{ "ModuleRelativePath", "Variant_Platforming/Animation/AnimNotify_EndDash.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimNotify to finish the dash animation and restore player control" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAnimNotify_EndDash constinit property declarations **********************
// ********** End Class UAnimNotify_EndDash constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_EndDash>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAnimNotify_EndDash_Statics
UObject* (*const Z_Construct_UClass_UAnimNotify_EndDash_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_EndDash_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_EndDash_Statics::ClassParams = {
	&UAnimNotify_EndDash::StaticClass,
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
	0x000120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_EndDash_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_EndDash_Statics::Class_MetaDataParams)
};
void UAnimNotify_EndDash::StaticRegisterNativesUAnimNotify_EndDash()
{
}
UClass* Z_Construct_UClass_UAnimNotify_EndDash()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_EndDash.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_EndDash.OuterSingleton, Z_Construct_UClass_UAnimNotify_EndDash_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_EndDash.OuterSingleton;
}
UAnimNotify_EndDash::UAnimNotify_EndDash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAnimNotify_EndDash);
UAnimNotify_EndDash::~UAnimNotify_EndDash() {}
// ********** End Class UAnimNotify_EndDash ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_Animation_AnimNotify_EndDash_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_EndDash, UAnimNotify_EndDash::StaticClass, TEXT("UAnimNotify_EndDash"), &Z_Registration_Info_UClass_UAnimNotify_EndDash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_EndDash), 2292588866U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_Animation_AnimNotify_EndDash_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_Animation_AnimNotify_EndDash_h__Script_Replication_Test_2720309907{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_Animation_AnimNotify_EndDash_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Platforming_Animation_AnimNotify_EndDash_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
