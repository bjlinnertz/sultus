// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT3_MyProject3Character_generated_h
#error "MyProject3Character.generated.h already included, missing '#pragma once' in MyProject3Character.h"
#endif
#define MYPROJECT3_MyProject3Character_generated_h

#define MyProject3_Source_MyProject3_MyProject3Character_h_12_RPC_WRAPPERS
#define MyProject3_Source_MyProject3_MyProject3Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject3_Source_MyProject3_MyProject3Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject3Character(); \
	friend struct Z_Construct_UClass_AMyProject3Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject3Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(AMyProject3Character)


#define MyProject3_Source_MyProject3_MyProject3Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject3Character(); \
	friend struct Z_Construct_UClass_AMyProject3Character_Statics; \
public: \
	DECLARE_CLASS(AMyProject3Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject3"), NO_API) \
	DECLARE_SERIALIZER(AMyProject3Character)


#define MyProject3_Source_MyProject3_MyProject3Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject3Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject3Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject3Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject3Character(AMyProject3Character&&); \
	NO_API AMyProject3Character(const AMyProject3Character&); \
public:


#define MyProject3_Source_MyProject3_MyProject3Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject3Character(AMyProject3Character&&); \
	NO_API AMyProject3Character(const AMyProject3Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject3Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject3Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject3Character)


#define MyProject3_Source_MyProject3_MyProject3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProject3Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProject3Character, FollowCamera); }


#define MyProject3_Source_MyProject3_MyProject3Character_h_9_PROLOG
#define MyProject3_Source_MyProject3_MyProject3Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_RPC_WRAPPERS \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_INCLASS \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject3_Source_MyProject3_MyProject3Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_INCLASS_NO_PURE_DECLS \
	MyProject3_Source_MyProject3_MyProject3Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT3_API UClass* StaticClass<class AMyProject3Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject3_Source_MyProject3_MyProject3Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
