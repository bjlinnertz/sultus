// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SULTUS_SultusProjectile_generated_h
#error "SultusProjectile.generated.h already included, missing '#pragma once' in SultusProjectile.h"
#endif
#define SULTUS_SultusProjectile_generated_h

#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASultusProjectile(); \
	friend struct Z_Construct_UClass_ASultusProjectile_Statics; \
public: \
	DECLARE_CLASS(ASultusProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(ASultusProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASultusProjectile(); \
	friend struct Z_Construct_UClass_ASultusProjectile_Statics; \
public: \
	DECLARE_CLASS(ASultusProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sultus"), NO_API) \
	DECLARE_SERIALIZER(ASultusProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASultusProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASultusProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASultusProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASultusProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASultusProjectile(ASultusProjectile&&); \
	NO_API ASultusProjectile(const ASultusProjectile&); \
public:


#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASultusProjectile(ASultusProjectile&&); \
	NO_API ASultusProjectile(const ASultusProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASultusProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASultusProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASultusProjectile)


#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASultusProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASultusProjectile, ProjectileMovement); }


#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_9_PROLOG
#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_RPC_WRAPPERS \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_INCLASS \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Sultus_Game_Files_Source_Sultus_SultusProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SULTUS_API UClass* StaticClass<class ASultusProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Game_Files_Source_Sultus_SultusProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
