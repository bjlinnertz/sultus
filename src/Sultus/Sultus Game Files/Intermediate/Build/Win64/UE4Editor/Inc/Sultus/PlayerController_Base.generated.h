// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SULTUS_PlayerController_Base_generated_h
#error "PlayerController_Base.generated.h already included, missing '#pragma once' in PlayerController_Base.h"
#endif
#define SULTUS_PlayerController_Base_generated_h

#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_RPC_WRAPPERS
#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController_Base(); \
	friend struct Z_Construct_UClass_APlayerController_Base_Statics; \
public: \
	DECLARE_CLASS(APlayerController_Base, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_Base)


#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerController_Base(); \
	friend struct Z_Construct_UClass_APlayerController_Base_Statics; \
public: \
	DECLARE_CLASS(APlayerController_Base, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_Base)


#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController_Base(APlayerController_Base&&); \
	NO_API APlayerController_Base(const APlayerController_Base&); \
public:


#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController_Base(APlayerController_Base&&); \
	NO_API APlayerController_Base(const APlayerController_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController_Base)


#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_PRIVATE_PROPERTY_OFFSET
#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_12_PROLOG
#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_RPC_WRAPPERS \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_INCLASS \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_INCLASS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class APlayerController_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Game_Files_Source_Sultus_Public_PlayerController_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
