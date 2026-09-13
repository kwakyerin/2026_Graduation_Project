// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatAttacker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatAttacker() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UCombatAttacker();
REPLICATION_TEST_API UClass* Z_Construct_UClass_UCombatAttacker_NoRegister();
UPackage* Z_Construct_UPackage__Script_Replication_Test();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCombatAttacker Function CheckChargedAttack **************************
struct Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attacker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Performs a charged attack's check to loop the charge animation. Usually called from a montage's AnimNotify */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatAttacker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs a charged attack's check to loop the charge animation. Usually called from a montage's AnimNotify" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CheckChargedAttack constinit property declarations ********************
// ********** End Function CheckChargedAttack constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAttacker, nullptr, "CheckChargedAttack", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAttacker::execCheckChargedAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckChargedAttack();
	P_NATIVE_END;
}
// ********** End Interface UCombatAttacker Function CheckChargedAttack ****************************

// ********** Begin Interface UCombatAttacker Function CheckCombo **********************************
struct Z_Construct_UFunction_UCombatAttacker_CheckCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attacker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Performs a combo attack's check to continue the string. Usually called from a montage's AnimNotify */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatAttacker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs a combo attack's check to continue the string. Usually called from a montage's AnimNotify" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CheckCombo constinit property declarations ****************************
// ********** End Function CheckCombo constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAttacker_CheckCombo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAttacker, nullptr, "CheckCombo", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttacker_CheckCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAttacker_CheckCombo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCombatAttacker_CheckCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAttacker_CheckCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAttacker::execCheckCombo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCombo();
	P_NATIVE_END;
}
// ********** End Interface UCombatAttacker Function CheckCombo ************************************

// ********** Begin Interface UCombatAttacker Function DoAttackTrace *******************************
struct Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics
{
	struct CombatAttacker_eventDoAttackTrace_Parms
	{
		FName DamageSourceBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attacker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Performs an attack's collision check. Usually called from a montage's AnimNotify */" },
#endif
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatAttacker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performs an attack's collision check. Usually called from a montage's AnimNotify" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoAttackTrace constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_DamageSourceBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoAttackTrace constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoAttackTrace Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::NewProp_DamageSourceBone = { "DamageSourceBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAttacker_eventDoAttackTrace_Parms, DamageSourceBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::NewProp_DamageSourceBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::PropPointers) < 2048);
// ********** End Function DoAttackTrace Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatAttacker, nullptr, "DoAttackTrace", 	Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::CombatAttacker_eventDoAttackTrace_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::CombatAttacker_eventDoAttackTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAttacker_DoAttackTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAttacker_DoAttackTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatAttacker::execDoAttackTrace)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DamageSourceBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAttackTrace(Z_Param_DamageSourceBone);
	P_NATIVE_END;
}
// ********** End Interface UCombatAttacker Function DoAttackTrace *********************************

// ********** Begin Interface UCombatAttacker ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatAttacker;
UClass* UCombatAttacker::GetPrivateStaticClass()
{
	using TClass = UCombatAttacker;
	if (!Z_Registration_Info_UClass_UCombatAttacker.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatAttacker"),
			Z_Registration_Info_UClass_UCombatAttacker.InnerSingleton,
			StaticRegisterNativesUCombatAttacker,
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
	return Z_Registration_Info_UClass_UCombatAttacker.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatAttacker_NoRegister()
{
	return UCombatAttacker::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatAttacker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Variant_Combat/Interfaces/CombatAttacker.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UCombatAttacker constinit property declarations **********************
// ********** End Interface UCombatAttacker constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CheckChargedAttack"), .Pointer = &ICombatAttacker::execCheckChargedAttack },
		{ .NameUTF8 = UTF8TEXT("CheckCombo"), .Pointer = &ICombatAttacker::execCheckCombo },
		{ .NameUTF8 = UTF8TEXT("DoAttackTrace"), .Pointer = &ICombatAttacker::execDoAttackTrace },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAttacker_CheckChargedAttack, "CheckChargedAttack" }, // 1131035198
		{ &Z_Construct_UFunction_UCombatAttacker_CheckCombo, "CheckCombo" }, // 4124723754
		{ &Z_Construct_UFunction_UCombatAttacker_DoAttackTrace, "DoAttackTrace" }, // 814768583
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatAttacker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatAttacker_Statics
UObject* (*const Z_Construct_UClass_UCombatAttacker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Replication_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttacker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAttacker_Statics::ClassParams = {
	&UCombatAttacker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAttacker_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAttacker_Statics::Class_MetaDataParams)
};
void UCombatAttacker::StaticRegisterNativesUCombatAttacker()
{
	UClass* Class = UCombatAttacker::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCombatAttacker_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCombatAttacker()
{
	if (!Z_Registration_Info_UClass_UCombatAttacker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAttacker.OuterSingleton, Z_Construct_UClass_UCombatAttacker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAttacker.OuterSingleton;
}
UCombatAttacker::UCombatAttacker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatAttacker);
// ********** End Interface UCombatAttacker ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatAttacker_h__Script_Replication_Test_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAttacker, UCombatAttacker::StaticClass, TEXT("UCombatAttacker"), &Z_Registration_Info_UClass_UCombatAttacker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAttacker), 122507423U) },
	};
}; // Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatAttacker_h__Script_Replication_Test_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatAttacker_h__Script_Replication_Test_687443865{
	TEXT("/Script/Replication_Test"),
	Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatAttacker_h__Script_Replication_Test_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grauation_Proj_documents_kwakyerin_practice_work_Replication_Test_Source_Replication_Test_Variant_Combat_Interfaces_CombatAttacker_h__Script_Replication_Test_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
