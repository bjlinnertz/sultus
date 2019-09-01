// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/Public/AttributeSet_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeSet_Base() {}
// Cross Module References
	SULTUS_API UFunction* Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Sultus();
	SULTUS_API UFunction* Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature();
	SULTUS_API UClass* Z_Construct_UClass_UAttributeSet_Base_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_UAttributeSet_Base();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Sultus_eventOnManaChangeDelegate_Parms
		{
			float Quintessence;
			float MaxQuintessence;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxQuintessence;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Quintessence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_MaxQuintessence = { "MaxQuintessence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Sultus_eventOnManaChangeDelegate_Parms, MaxQuintessence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_Quintessence = { "Quintessence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Sultus_eventOnManaChangeDelegate_Parms, Quintessence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_MaxQuintessence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_Quintessence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Sultus, nullptr, "OnManaChangeDelegate__DelegateSignature", sizeof(_Script_Sultus_eventOnManaChangeDelegate_Parms), Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Sultus_OnManaChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Sultus_eventOnHealthChangeDelegate_Parms
		{
			float Health;
			float MaxHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Sultus_eventOnHealthChangeDelegate_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Sultus_eventOnHealthChangeDelegate_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Sultus, nullptr, "OnHealthChangeDelegate__DelegateSignature", sizeof(_Script_Sultus_eventOnHealthChangeDelegate_Parms), Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Sultus_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAttributeSet_Base::StaticRegisterNativesUAttributeSet_Base()
	{
	}
	UClass* Z_Construct_UClass_UAttributeSet_Base_NoRegister()
	{
		return UAttributeSet_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeSet_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxQuintessence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxQuintessence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quintessence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quintessence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeSet_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttributeSet_Base.h" },
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxQuintessence_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxQuintessence = { "MaxQuintessence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeSet_Base, MaxQuintessence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxQuintessence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxQuintessence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Quintessence_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Quintessence = { "Quintessence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeSet_Base, Quintessence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Quintessence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Quintessence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeSet_Base, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/AttributeSet_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributeSet_Base, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeSet_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxQuintessence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Quintessence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeSet_Base_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeSet_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeSet_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttributeSet_Base_Statics::ClassParams = {
		&UAttributeSet_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeSet_Base_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Base_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeSet_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAttributeSet_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeSet_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttributeSet_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttributeSet_Base, 294929212);
	template<> SULTUS_API UClass* StaticClass<UAttributeSet_Base>()
	{
		return UAttributeSet_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttributeSet_Base(Z_Construct_UClass_UAttributeSet_Base, &UAttributeSet_Base::StaticClass, TEXT("/Script/Sultus"), TEXT("UAttributeSet_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeSet_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
