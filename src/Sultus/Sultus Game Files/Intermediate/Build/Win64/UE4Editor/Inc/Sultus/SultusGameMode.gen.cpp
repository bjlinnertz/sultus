// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/SultusGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSultusGameMode() {}
// Cross Module References
	SULTUS_API UClass* Z_Construct_UClass_ASultusGameMode_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_ASultusGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sultus();
// End Cross Module References
	void ASultusGameMode::StaticRegisterNativesASultusGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASultusGameMode_NoRegister()
	{
		return ASultusGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASultusGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASultusGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASultusGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SultusGameMode.h" },
		{ "ModuleRelativePath", "SultusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASultusGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASultusGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASultusGameMode_Statics::ClassParams = {
		&ASultusGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASultusGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASultusGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASultusGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASultusGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASultusGameMode, 2586341413);
	template<> SULTUS_API UClass* StaticClass<ASultusGameMode>()
	{
		return ASultusGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASultusGameMode(Z_Construct_UClass_ASultusGameMode, &ASultusGameMode::StaticClass, TEXT("/Script/Sultus"), TEXT("ASultusGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASultusGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
