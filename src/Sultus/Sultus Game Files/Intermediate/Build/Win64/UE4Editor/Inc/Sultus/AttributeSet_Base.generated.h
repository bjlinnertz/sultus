// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SULTUS_AttributeSet_Base_generated_h
#error "AttributeSet_Base.generated.h already included, missing '#pragma once' in AttributeSet_Base.h"
#endif
#define SULTUS_AttributeSet_Base_generated_h

#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_13_DELEGATE \
struct _Script_Sultus_eventOnManaChangeDelegate_Parms \
{ \
	float Quintessence; \
	float MaxQuintessence; \
}; \
static inline void FOnManaChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnManaChangeDelegate, float Quintessence, float MaxQuintessence) \
{ \
	_Script_Sultus_eventOnManaChangeDelegate_Parms Parms; \
	Parms.Quintessence=Quintessence; \
	Parms.MaxQuintessence=MaxQuintessence; \
	OnManaChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_12_DELEGATE \
struct _Script_Sultus_eventOnHealthChangeDelegate_Parms \
{ \
	float Health; \
	float MaxHealth; \
}; \
static inline void FOnHealthChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangeDelegate, float Health, float MaxHealth) \
{ \
	_Script_Sultus_eventOnHealthChangeDelegate_Parms Parms; \
	Parms.Health=Health; \
	Parms.MaxHealth=MaxHealth; \
	OnHealthChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_RPC_WRAPPERS
#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSet_Base(); \
	friend struct Z_Construct_UClass_UAttributeSet_Base_Statics; \
public: \
	DECLARE_CLASS(UAttributeSet_Base, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSet_Base)


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeSet_Base(); \
	friend struct Z_Construct_UClass_UAttributeSet_Base_Statics; \
public: \
	DECLARE_CLASS(UAttributeSet_Base, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSet_Base)


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeSet_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeSet_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSet_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSet_Base(UAttributeSet_Base&&); \
	NO_API UAttributeSet_Base(const UAttributeSet_Base&); \
public:


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSet_Base(UAttributeSet_Base&&); \
	NO_API UAttributeSet_Base(const UAttributeSet_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSet_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSet_Base)


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_PRIVATE_PROPERTY_OFFSET
#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_14_PROLOG
#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_RPC_WRAPPERS \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_INCLASS \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_INCLASS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class UAttributeSet_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Game_Files_Source_Sultus_Public_AttributeSet_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
