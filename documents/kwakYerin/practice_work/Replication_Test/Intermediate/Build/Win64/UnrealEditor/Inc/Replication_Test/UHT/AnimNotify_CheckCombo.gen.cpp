// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify_CheckCombo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimNotify_CheckCombo() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UAnimNotify_CheckCombo();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UAnimNotify_CheckCombo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimNotify_CheckCombo ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimNotify_CheckCombo;
UClass* UAnimNotify_CheckCombo::GetPrivateStaticClass()
{
	using TClass = UAnimNotify_CheckCombo;
	if (!Z_Registration_Info_UClass_UAnimNotify_CheckCombo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AnimNotify_CheckCombo"),
			Z_Registration_Info_UClass_UAnimNotify_CheckCombo.InnerSingleton,
			StaticRegisterNativesUAnimNotify_CheckCombo,
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
	return Z_Registration_Info_UClass_UAnimNotify_CheckCombo.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimNotify_CheckCombo_NoRegister()
{
	return UAnimNotify_CheckCombo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimNotify_CheckCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  AnimNotify to perform a combo string check.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Variant_Combat/Animation/AnimNotify_CheckCombo.h" },
		{ "ModuleRelativePath", "Variant_Combat/Animation/AnimNotify_CheckCombo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimNotify to perform a combo string check." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UAnimNotify_CheckCombo constinit property declarations *******************
// ********** End Class UAnimNotify_CheckCombo constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_CheckCombo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAnimNotify_CheckCombo_Statics
UObject* (*const Z_Construct_UClass_UAnimNotify_CheckCombo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_CheckCombo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_CheckCombo_Statics::ClassParams = {
	&UAnimNotify_CheckCombo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_CheckCombo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_CheckCombo_Statics::Class_MetaDataParams)
};
void UAnimNotify_CheckCombo::StaticRegisterNativesUAnimNotify_CheckCombo()
{
}
UClass* Z_Construct_UClass_UAnimNotify_CheckCombo()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_CheckCombo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_CheckCombo.OuterSingleton, Z_Construct_UClass_UAnimNotify_CheckCombo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_CheckCombo.OuterSingleton;
}
UAnimNotify_CheckCombo::UAnimNotify_CheckCombo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAnimNotify_CheckCombo);
UAnimNotify_CheckCombo::~UAnimNotify_CheckCombo() {}
// ********** End Class UAnimNotify_CheckCombo *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Animation_AnimNotify_CheckCombo_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_CheckCombo, UAnimNotify_CheckCombo::StaticClass, TEXT("UAnimNotify_CheckCombo"), &Z_Registration_Info_UClass_UAnimNotify_CheckCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_CheckCombo), 4043341697U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Animation_AnimNotify_CheckCombo_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Animation_AnimNotify_CheckCombo_h__Script_Replication_Test_893231059{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Animation_AnimNotify_CheckCombo_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Animation_AnimNotify_CheckCombo_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
