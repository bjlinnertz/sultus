// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sultus/Public/PlayerController_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_Base() {}
// Cross Module References
	SULTUS_API UClass* Z_Construct_UClass_APlayerController_Base_NoRegister();
	SULTUS_API UClass* Z_Construct_UClass_APlayerController_Base();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Sultus();
// End Cross Module References
	void APlayerController_Base::StaticRegisterNativesAPlayerController_Base()
	{
	}
	UClass* Z_Construct_UClass_APlayerController_Base_NoRegister()
	{
		return APlayerController_Base::StaticClass();
	}
	struct Z_Construct_UClass_APlayerController_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerController_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Sultus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController_Base.h" },
		{ "ModuleRelativePath", "Public/PlayerController_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerController_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_Base_Statics::ClassParams = {
		&APlayerController_Base::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerController_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerController_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerController_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerController_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerController_Base, 3378770324);
	template<> SULTUS_API UClass* StaticClass<APlayerController_Base>()
	{
		return APlayerController_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerController_Base(Z_Construct_UClass_APlayerController_Base, &APlayerController_Base::StaticClass, TEXT("/Script/Sultus"), TEXT("APlayerController_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
