// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/Public/Character_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Base() {}
// Cross Module References
	SULTUS_API UClass* Z_Construct_UClass_ACharacter_Base_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_ACharacter_Base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Sultus();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_AcquireAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_AddGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_BP_Die();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_IsOtherHostile();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_OnHealthChange();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_OnManaChange();
	SULTUS_API UFunction* Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag();
	SULTUS_API UClass* Z_Construct_UClass_UAttributeSet_Base_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	static FName NAME_ACharacter_Base_BP_Die = FName(TEXT("BP_Die"));
	void ACharacter_Base::BP_Die()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_Base_BP_Die),NULL);
	}
	static FName NAME_ACharacter_Base_BP_OnHealthChange = FName(TEXT("BP_OnHealthChange"));
	void ACharacter_Base::BP_OnHealthChange(float Health, float MaxHealth)
	{
		Character_Base_eventBP_OnHealthChange_Parms Parms;
		Parms.Health=Health;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_Base_BP_OnHealthChange),&Parms);
	}
	static FName NAME_ACharacter_Base_BP_OnManaChange = FName(TEXT("BP_OnManaChange"));
	void ACharacter_Base::BP_OnManaChange(float Quintessence, float MaxQuintessence)
	{
		Character_Base_eventBP_OnManaChange_Parms Parms;
		Parms.Quintessence=Quintessence;
		Parms.MaxQuintessence=MaxQuintessence;
		ProcessEvent(FindFunctionChecked(NAME_ACharacter_Base_BP_OnManaChange),&Parms);
	}
	void ACharacter_Base::StaticRegisterNativesACharacter_Base()
	{
		UClass* Class = ACharacter_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireAbility", &ACharacter_Base::execAcquireAbility },
			{ "AddGameplayTag", &ACharacter_Base::execAddGameplayTag },
			{ "IsOtherHostile", &ACharacter_Base::execIsOtherHostile },
			{ "OnHealthChange", &ACharacter_Base::execOnHealthChange },
			{ "OnManaChange", &ACharacter_Base::execOnManaChange },
			{ "RemoveGameplayTag", &ACharacter_Base::execRemoveGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics
	{
		struct Character_Base_eventAcquireAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  AbilityToAcquire;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityToAcquire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::NewProp_AbilityToAcquire = { "AbilityToAcquire", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventAcquireAbility_Parms, AbilityToAcquire), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::NewProp_AbilityToAcquire,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterBase" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "AcquireAbility", nullptr, nullptr, sizeof(Character_Base_eventAcquireAbility_Parms), Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_AcquireAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_AcquireAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics
	{
		struct Character_Base_eventAddGameplayTag_Parms
		{
			FGameplayTag TagToAdd;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventAddGameplayTag_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::NewProp_TagToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "AddGameplayTag", nullptr, nullptr, sizeof(Character_Base_eventAddGameplayTag_Parms), Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_AddGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_AddGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_BP_Die_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_BP_Die_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "DisplayName", "Die" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_BP_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "BP_Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_BP_Die_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_BP_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_BP_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_BP_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventBP_OnHealthChange_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventBP_OnHealthChange_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "DisplayName", "OnHealthChange" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "BP_OnHealthChange", nullptr, nullptr, sizeof(Character_Base_eventBP_OnHealthChange_Parms), Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxQuintessence;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Quintessence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::NewProp_MaxQuintessence = { "MaxQuintessence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventBP_OnManaChange_Parms, MaxQuintessence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::NewProp_Quintessence = { "Quintessence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventBP_OnManaChange_Parms, Quintessence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::NewProp_MaxQuintessence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::NewProp_Quintessence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "DisplayName", "OnQuintessenceChange" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "BP_OnManaChange", nullptr, nullptr, sizeof(Character_Base_eventBP_OnManaChange_Parms), Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics
	{
		struct Character_Base_eventIsOtherHostile_Parms
		{
			ACharacter_Base* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Character_Base_eventIsOtherHostile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Character_Base_eventIsOtherHostile_Parms), &Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventIsOtherHostile_Parms, Other), Z_Construct_UClass_ACharacter_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "IsOtherHostile", nullptr, nullptr, sizeof(Character_Base_eventIsOtherHostile_Parms), Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_IsOtherHostile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_IsOtherHostile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics
	{
		struct Character_Base_eventOnHealthChange_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventOnHealthChange_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventOnHealthChange_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "OnHealthChange", nullptr, nullptr, sizeof(Character_Base_eventOnHealthChange_Parms), Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_OnHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_OnHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics
	{
		struct Character_Base_eventOnManaChange_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::NewProp_MaxQuintessence = { "MaxQuintessence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventOnManaChange_Parms, MaxQuintessence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::NewProp_Quintessence = { "Quintessence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventOnManaChange_Parms, Quintessence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::NewProp_MaxQuintessence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::NewProp_Quintessence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "OnManaChange", nullptr, nullptr, sizeof(Character_Base_eventOnManaChange_Parms), Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_OnManaChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_OnManaChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics
	{
		struct Character_Base_eventRemoveGameplayTag_Parms
		{
			FGameplayTag TagToRemove;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Base_eventRemoveGameplayTag_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::NewProp_TagToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character_Base" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Base, nullptr, "RemoveGameplayTag", nullptr, nullptr, sizeof(Character_Base_eventRemoveGameplayTag_Parms), Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacter_Base_NoRegister()
	{
		return ACharacter_Base::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealthTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullHealthTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBaseComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBaseComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacter_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacter_Base_AcquireAbility, "AcquireAbility" }, // 3856202159
		{ &Z_Construct_UFunction_ACharacter_Base_AddGameplayTag, "AddGameplayTag" }, // 2967400185
		{ &Z_Construct_UFunction_ACharacter_Base_BP_Die, "BP_Die" }, // 1749719291
		{ &Z_Construct_UFunction_ACharacter_Base_BP_OnHealthChange, "BP_OnHealthChange" }, // 15739272
		{ &Z_Construct_UFunction_ACharacter_Base_BP_OnManaChange, "BP_OnManaChange" }, // 3502558414
		{ &Z_Construct_UFunction_ACharacter_Base_IsOtherHostile, "IsOtherHostile" }, // 342507752
		{ &Z_Construct_UFunction_ACharacter_Base_OnHealthChange, "OnHealthChange" }, // 3579144390
		{ &Z_Construct_UFunction_ACharacter_Base_OnManaChange, "OnManaChange" }, // 1432699972
		{ &Z_Construct_UFunction_ACharacter_Base_RemoveGameplayTag, "RemoveGameplayTag" }, // 722904835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_Base.h" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Base_Statics::NewProp_FullHealthTag_MetaData[] = {
		{ "Category", "Character_Base" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Base_Statics::NewProp_FullHealthTag = { "FullHealthTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Base, FullHealthTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Base_Statics::NewProp_FullHealthTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::NewProp_FullHealthTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AttributeSetBaseComp_MetaData[] = {
		{ "Category", "Character_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AttributeSetBaseComp = { "AttributeSetBaseComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Base, AttributeSetBaseComp), Z_Construct_UClass_UAttributeSet_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AttributeSetBaseComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AttributeSetBaseComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AbilitySystemComp_MetaData[] = {
		{ "Category", "Character_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AbilitySystemComp = { "AbilitySystemComp", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Base, AbilitySystemComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AbilitySystemComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AbilitySystemComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Base_Statics::NewProp_FullHealthTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AttributeSetBaseComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Base_Statics::NewProp_AbilitySystemComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacter_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacter_Base, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Base_Statics::ClassParams = {
		&ACharacter_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacter_Base_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter_Base, 2105769371);
	template<> SULTUS_API UClass* StaticClass<ACharacter_Base>()
	{
		return ACharacter_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_Base(Z_Construct_UClass_ACharacter_Base, &ACharacter_Base::StaticClass, TEXT("/Script/Sultus"), TEXT("ACharacter_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
