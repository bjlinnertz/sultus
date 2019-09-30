// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/Public/GameplayAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityBase() {}
// Cross Module References
	SULTUS_API UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_UGameplayAbilityBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Sultus();
	SULTUS_API UFunction* Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo();
	SULTUS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	void UGameplayAbilityBase::StaticRegisterNativesUGameplayAbilityBase()
	{
		UClass* Class = UGameplayAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilityInfo", &UGameplayAbilityBase::execGetAbilityInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics
	{
		struct GameplayAbilityBase_eventGetAbilityInfo_Parms
		{
			FGameplayAbilityInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayAbilityBase_eventGetAbilityInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbilityBase, nullptr, "GetAbilityInfo", nullptr, nullptr, sizeof(GameplayAbilityBase_eventGetAbilityInfo_Parms), Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayAbilityBase_NoRegister()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayAbilityBase_GetAbilityInfo, "GetAbilityInfo" }, // 471549423
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilityBase.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_UIMaterial_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_UIMaterial = { "UIMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayAbilityBase, UIMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_UIMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_UIMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilityBase_Statics::NewProp_UIMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams = {
		&UGameplayAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayAbilityBase, 3456300552);
	template<> SULTUS_API UClass* StaticClass<UGameplayAbilityBase>()
	{
		return UGameplayAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayAbilityBase(Z_Construct_UClass_UGameplayAbilityBase, &UGameplayAbilityBase::StaticClass, TEXT("/Script/Sultus"), TEXT("UGameplayAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
