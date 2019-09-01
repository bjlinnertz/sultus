// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class ACharacter_Base;
class UGameplayAbility;
#ifdef SULTUS_Character_Base_generated_h
#error "Character_Base.generated.h already included, missing '#pragma once' in Character_Base.h"
#endif
#define SULTUS_Character_Base_generated_h

#define Sultus_Source_Sultus_Public_Character_Base_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGameplayTag(Z_Param_TagToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGameplayTag(Z_Param_TagToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOtherHostile) \
	{ \
		P_GET_OBJECT(ACharacter_Base,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOtherHostile(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnManaChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Quintessence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxQuintessence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnManaChange(Z_Param_Quintessence,Z_Param_MaxQuintessence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChange(Z_Param_Health,Z_Param_MaxHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcquireAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityToAcquire); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AcquireAbility(Z_Param_AbilityToAcquire); \
		P_NATIVE_END; \
	}


#define Sultus_Source_Sultus_Public_Character_Base_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGameplayTag(Z_Param_TagToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGameplayTag) \
	{ \
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGameplayTag(Z_Param_TagToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOtherHostile) \
	{ \
		P_GET_OBJECT(ACharacter_Base,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOtherHostile(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnManaChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Quintessence); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxQuintessence); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnManaChange(Z_Param_Quintessence,Z_Param_MaxQuintessence); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHealthChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChange(Z_Param_Health,Z_Param_MaxHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcquireAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_AbilityToAcquire); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AcquireAbility(Z_Param_AbilityToAcquire); \
		P_NATIVE_END; \
	}


#define Sultus_Source_Sultus_Public_Character_Base_h_16_EVENT_PARMS \
	struct Character_Base_eventBP_OnHealthChange_Parms \
	{ \
		float Health; \
		float MaxHealth; \
	}; \
	struct Character_Base_eventBP_OnManaChange_Parms \
	{ \
		float Quintessence; \
		float MaxQuintessence; \
	};


#define Sultus_Source_Sultus_Public_Character_Base_h_16_CALLBACK_WRAPPERS
#define Sultus_Source_Sultus_Public_Character_Base_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter_Base(); \
	friend struct Z_Construct_UClass_ACharacter_Base_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Base) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacter_Base*>(this); }


#define Sultus_Source_Sultus_Public_Character_Base_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACharacter_Base(); \
	friend struct Z_Construct_UClass_ACharacter_Base_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Base) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacter_Base*>(this); }


#define Sultus_Source_Sultus_Public_Character_Base_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Base(ACharacter_Base&&); \
	NO_API ACharacter_Base(const ACharacter_Base&); \
public:


#define Sultus_Source_Sultus_Public_Character_Base_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Base(ACharacter_Base&&); \
	NO_API ACharacter_Base(const ACharacter_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacter_Base)


#define Sultus_Source_Sultus_Public_Character_Base_h_16_PRIVATE_PROPERTY_OFFSET
#define Sultus_Source_Sultus_Public_Character_Base_h_13_PROLOG \
	Sultus_Source_Sultus_Public_Character_Base_h_16_EVENT_PARMS


#define Sultus_Source_Sultus_Public_Character_Base_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Source_Sultus_Public_Character_Base_h_16_PRIVATE_PROPERTY_OFFSET \
	Sultus_Source_Sultus_Public_Character_Base_h_16_RPC_WRAPPERS \
	Sultus_Source_Sultus_Public_Character_Base_h_16_CALLBACK_WRAPPERS \
	Sultus_Source_Sultus_Public_Character_Base_h_16_INCLASS \
	Sultus_Source_Sultus_Public_Character_Base_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Source_Sultus_Public_Character_Base_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Source_Sultus_Public_Character_Base_h_16_PRIVATE_PROPERTY_OFFSET \
	Sultus_Source_Sultus_Public_Character_Base_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Source_Sultus_Public_Character_Base_h_16_CALLBACK_WRAPPERS \
	Sultus_Source_Sultus_Public_Character_Base_h_16_INCLASS_NO_PURE_DECLS \
	Sultus_Source_Sultus_Public_Character_Base_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class ACharacter_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Source_Sultus_Public_Character_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
