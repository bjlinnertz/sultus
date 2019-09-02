// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SULTUS_SultusGameMode_generated_h
#error "SultusGameMode.generated.h already included, missing '#pragma once' in SultusGameMode.h"
#endif
#define SULTUS_SultusGameMode_generated_h

#define Sultus_Source_Sultus_SultusGameMode_h_12_RPC_WRAPPERS
#define Sultus_Source_Sultus_SultusGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Sultus_Source_Sultus_SultusGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASultusGameMode(); \
	friend struct Z_Construct_UClass_ASultusGameMode_Statics; \
public: \
	DECLARE_CLASS(ASultusGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sultus"), SULTUS_API) \
	DECLARE_SERIALIZER(ASultusGameMode)


#define Sultus_Source_Sultus_SultusGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASultusGameMode(); \
	friend struct Z_Construct_UClass_ASultusGameMode_Statics; \
public: \
	DECLARE_CLASS(ASultusGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Sultus"), SULTUS_API) \
	DECLARE_SERIALIZER(ASultusGameMode)


#define Sultus_Source_Sultus_SultusGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SULTUS_API ASultusGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASultusGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SULTUS_API, ASultusGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASultusGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SULTUS_API ASultusGameMode(ASultusGameMode&&); \
	SULTUS_API ASultusGameMode(const ASultusGameMode&); \
public:


#define Sultus_Source_Sultus_SultusGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SULTUS_API ASultusGameMode(ASultusGameMode&&); \
	SULTUS_API ASultusGameMode(const ASultusGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SULTUS_API, ASultusGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASultusGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASultusGameMode)


#define Sultus_Source_Sultus_SultusGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Sultus_Source_Sultus_SultusGameMode_h_9_PROLOG
#define Sultus_Source_Sultus_SultusGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Source_Sultus_SultusGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Sultus_Source_Sultus_SultusGameMode_h_12_RPC_WRAPPERS \
	Sultus_Source_Sultus_SultusGameMode_h_12_INCLASS \
	Sultus_Source_Sultus_SultusGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Source_Sultus_SultusGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Source_Sultus_SultusGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Sultus_Source_Sultus_SultusGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Source_Sultus_SultusGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Sultus_Source_Sultus_SultusGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class ASultusGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Source_Sultus_SultusGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
