// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SULTUS_GATargetActorGroundSelect_generated_h
#error "GATargetActorGroundSelect.generated.h already included, missing '#pragma once' in GATargetActorGroundSelect.h"
#endif
#define SULTUS_GATargetActorGroundSelect_generated_h

#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerLookingPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutViewPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerLookingPoint(Z_Param_Out_OutViewPoint); \
		P_NATIVE_END; \
	}


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerLookingPoint) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutViewPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPlayerLookingPoint(Z_Param_Out_OutViewPoint); \
		P_NATIVE_END; \
	}


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGATargetActorGroundSelect(); \
	friend struct Z_Construct_UClass_AGATargetActorGroundSelect_Statics; \
public: \
	DECLARE_CLASS(AGATargetActorGroundSelect, AGameplayAbilityTargetActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(AGATargetActorGroundSelect)


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGATargetActorGroundSelect(); \
	friend struct Z_Construct_UClass_AGATargetActorGroundSelect_Statics; \
public: \
	DECLARE_CLASS(AGATargetActorGroundSelect, AGameplayAbilityTargetActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(AGATargetActorGroundSelect)


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGATargetActorGroundSelect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGATargetActorGroundSelect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGATargetActorGroundSelect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGATargetActorGroundSelect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGATargetActorGroundSelect(AGATargetActorGroundSelect&&); \
	NO_API AGATargetActorGroundSelect(const AGATargetActorGroundSelect&); \
public:


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGATargetActorGroundSelect(AGATargetActorGroundSelect&&); \
	NO_API AGATargetActorGroundSelect(const AGATargetActorGroundSelect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGATargetActorGroundSelect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGATargetActorGroundSelect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGATargetActorGroundSelect)


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_PRIVATE_PROPERTY_OFFSET
#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_14_PROLOG
#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_RPC_WRAPPERS \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_INCLASS \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_INCLASS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class AGATargetActorGroundSelect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Game_Files_Source_Sultus_Public_GATargetActorGroundSelect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
