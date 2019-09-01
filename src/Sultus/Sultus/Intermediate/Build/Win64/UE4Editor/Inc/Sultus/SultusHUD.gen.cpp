// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/SultusHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSultusHUD() {}
// Cross Module References
	SULTUS_API UClass* Z_Construct_UClass_ASultusHUD_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_ASultusHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Sultus();
// End Cross Module References
	void ASultusHUD::StaticRegisterNativesASultusHUD()
	{
	}
	UClass* Z_Construct_UClass_ASultusHUD_NoRegister()
	{
		return ASultusHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASultusHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASultusHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASultusHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SultusHUD.h" },
		{ "ModuleRelativePath", "SultusHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASultusHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASultusHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASultusHUD_Statics::ClassParams = {
		&ASultusHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASultusHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASultusHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASultusHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASultusHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASultusHUD, 4269069859);
	template<> SULTUS_API UClass* StaticClass<ASultusHUD>()
	{
		return ASultusHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASultusHUD(Z_Construct_UClass_ASultusHUD, &ASultusHUD::StaticClass, TEXT("/Script/Sultus"), TEXT("ASultusHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASultusHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
