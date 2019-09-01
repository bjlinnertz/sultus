// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SULTUS_SultusCharacter_generated_h
#error "SultusCharacter.generated.h already included, missing '#pragma once' in SultusCharacter.h"
#endif
#define SULTUS_SultusCharacter_generated_h

#define Sultus_Source_Sultus_SultusCharacter_h_14_RPC_WRAPPERS
#define Sultus_Source_Sultus_SultusCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Sultus_Source_Sultus_SultusCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASultusCharacter(); \
	friend struct Z_Construct_UClass_ASultusCharacter_Statics; \
public: \
	DECLARE_CLASS(ASultusCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(ASultusCharacter)


#define Sultus_Source_Sultus_SultusCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASultusCharacter(); \
	friend struct Z_Construct_UClass_ASultusCharacter_Statics; \
public: \
	DECLARE_CLASS(ASultusCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(ASultusCharacter)


#define Sultus_Source_Sultus_SultusCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASultusCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASultusCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASultusCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASultusCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASultusCharacter(ASultusCharacter&&); \
	NO_API ASultusCharacter(const ASultusCharacter&); \
public:


#define Sultus_Source_Sultus_SultusCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASultusCharacter(ASultusCharacter&&); \
	NO_API ASultusCharacter(const ASultusCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASultusCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASultusCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASultusCharacter)


#define Sultus_Source_Sultus_SultusCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ASultusCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ASultusCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ASultusCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ASultusCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ASultusCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ASultusCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ASultusCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ASultusCharacter, L_MotionController); }


#define Sultus_Source_Sultus_SultusCharacter_h_11_PROLOG
#define Sultus_Source_Sultus_SultusCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Source_Sultus_SultusCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Sultus_Source_Sultus_SultusCharacter_h_14_RPC_WRAPPERS \
	Sultus_Source_Sultus_SultusCharacter_h_14_INCLASS \
	Sultus_Source_Sultus_SultusCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Source_Sultus_SultusCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Source_Sultus_SultusCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Sultus_Source_Sultus_SultusCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Source_Sultus_SultusCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Sultus_Source_Sultus_SultusCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class ASultusCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Source_Sultus_SultusCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
