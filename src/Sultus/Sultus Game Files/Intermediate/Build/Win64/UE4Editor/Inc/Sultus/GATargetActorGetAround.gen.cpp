// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/Public/GATargetActorGetAround.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGATargetActorGetAround() {}
// Cross Module References
	SULTUS_API UClass* Z_Construct_UClass_AGATargetActorGetAround_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_AGATargetActorGetAround();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	UPackage* Z_Construct_UPackage__Script_Sultus();
// End Cross Module References
	void AGATargetActorGetAround::StaticRegisterNativesAGATargetActorGetAround()
	{
	}
	UClass* Z_Construct_UClass_AGATargetActorGetAround_NoRegister()
	{
		return AGATargetActorGetAround::StaticClass();
	}
	struct Z_Construct_UClass_AGATargetActorGetAround_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGATargetActorGetAround_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGATargetActorGetAround_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GATargetActorGetAround.h" },
		{ "ModuleRelativePath", "Public/GATargetActorGetAround.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGATargetActorGetAround_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "FindAround" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GATargetActorGetAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGATargetActorGetAround_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGATargetActorGetAround, Radius), METADATA_PARAMS(Z_Construct_UClass_AGATargetActorGetAround_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGATargetActorGetAround_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGATargetActorGetAround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGATargetActorGetAround_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGATargetActorGetAround_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGATargetActorGetAround>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGATargetActorGetAround_Statics::ClassParams = {
		&AGATargetActorGetAround::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGATargetActorGetAround_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGATargetActorGetAround_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGATargetActorGetAround_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGATargetActorGetAround_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGATargetActorGetAround()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGATargetActorGetAround_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGATargetActorGetAround, 1189055716);
	template<> SULTUS_API UClass* StaticClass<AGATargetActorGetAround>()
	{
		return AGATargetActorGetAround::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGATargetActorGetAround(Z_Construct_UClass_AGATargetActorGetAround, &AGATargetActorGetAround::StaticClass, TEXT("/Script/Sultus"), TEXT("AGATargetActorGetAround"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGATargetActorGetAround);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
