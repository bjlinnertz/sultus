// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/Public/AbilityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTypes() {}
// Cross Module References
	SULTUS_API UEnum* Z_Construct_UEnum_Sultus_EAbilityCostType();
	UPackage* Z_Construct_UPackage__Script_Sultus();
	SULTUS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SULTUS_API UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	static UEnum* EAbilityCostType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sultus_EAbilityCostType, Z_Construct_UPackage__Script_Sultus(), TEXT("EAbilityCostType"));
		}
		return Singleton;
	}
	template<> SULTUS_API UEnum* StaticEnum<EAbilityCostType>()
	{
		return EAbilityCostType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityCostType(EAbilityCostType_StaticEnum, TEXT("/Script/Sultus"), TEXT("EAbilityCostType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sultus_EAbilityCostType_Hash() { return 1142338271U; }
	UEnum* Z_Construct_UEnum_Sultus_EAbilityCostType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sultus();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityCostType"), 0, Get_Z_Construct_UEnum_Sultus_EAbilityCostType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityCostType::Health", (int64)EAbilityCostType::Health },
				{ "EAbilityCostType::Quintessence", (int64)EAbilityCostType::Quintessence },
				{ "EAbilityCostType::Strength", (int64)EAbilityCostType::Strength },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Health.Name", "EAbilityCostType::Health" },
				{ "ModuleRelativePath", "Public/AbilityTypes.h" },
				{ "Quintessence.Name", "EAbilityCostType::Quintessence" },
				{ "Strength.Name", "EAbilityCostType::Strength" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sultus,
				nullptr,
				"EAbilityCostType",
				"EAbilityCostType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayAbilityInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SULTUS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityInfo, Z_Construct_UPackage__Script_Sultus(), TEXT("GameplayAbilityInfo"), sizeof(FGameplayAbilityInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityInfo_Hash());
	}
	return Singleton;
}
template<> SULTUS_API UScriptStruct* StaticStruct<FGameplayAbilityInfo>()
{
	return FGameplayAbilityInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityInfo(FGameplayAbilityInfo::StaticStruct, TEXT("/Script/Sultus"), TEXT("GameplayAbilityInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Sultus_StaticRegisterNativesFGameplayAbilityInfo
{
	FScriptStruct_Sultus_StaticRegisterNativesFGameplayAbilityInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityInfo")),new UScriptStruct::TCppStructOps<FGameplayAbilityInfo>);
	}
} ScriptStruct_Sultus_StaticRegisterNativesFGameplayAbilityInfo;
	struct Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CostType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CostType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityClass), Z_Construct_UClass_UGameplayAbilityBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat = { "UIMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityInfo, UIMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType = { "CostType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityInfo, CostType), Z_Construct_UEnum_Sultus_EAbilityCostType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityInfo, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/AbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityInfo, CooldownDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CostType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
		nullptr,
		&NewStructOps,
		"GameplayAbilityInfo",
		sizeof(FGameplayAbilityInfo),
		alignof(FGameplayAbilityInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Sultus();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityInfo"), sizeof(FGameplayAbilityInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityInfo_Hash() { return 3279029444U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
