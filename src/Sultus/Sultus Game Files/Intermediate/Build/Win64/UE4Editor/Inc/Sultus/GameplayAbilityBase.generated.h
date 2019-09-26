// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityInfo;
#ifdef SULTUS_GameplayAbilityBase_generated_h
#error "GameplayAbilityBase.generated.h already included, missing '#pragma once' in GameplayAbilityBase.h"
#endif
#define SULTUS_GameplayAbilityBase_generated_h

#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAbilityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfo(); \
		P_NATIVE_END; \
	}


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAbilityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfo(); \
		P_NATIVE_END; \
	}


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbilityBase(); \
	friend struct Z_Construct_UClass_UGameplayAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbilityBase, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbilityBase)


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbilityBase(); \
	friend struct Z_Construct_UClass_UGameplayAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbilityBase, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbilityBase)


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayAbilityBase(UGameplayAbilityBase&&); \
	NO_API UGameplayAbilityBase(const UGameplayAbilityBase&); \
public:


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayAbilityBase(UGameplayAbilityBase&&); \
	NO_API UGameplayAbilityBase(const UGameplayAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilityBase)


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_13_PROLOG
#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_RPC_WRAPPERS \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_INCLASS \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_INCLASS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class UGameplayAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Game_Files_Source_Sultus_Public_GameplayAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
