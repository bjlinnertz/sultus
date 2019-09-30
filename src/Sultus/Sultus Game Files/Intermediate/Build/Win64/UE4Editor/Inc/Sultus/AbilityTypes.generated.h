// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SULTUS_AbilityTypes_generated_h
#error "AbilityTypes.generated.h already included, missing '#pragma once' in AbilityTypes.h"
#endif
#define SULTUS_AbilityTypes_generated_h

#define Sultus_Game_Files_Source_Sultus_Public_AbilityTypes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics; \
	SULTUS_API static class UScriptStruct* StaticStruct();


template<> SULTUS_API UScriptStruct* StaticStruct<struct FGameplayAbilityInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sultus_Game_Files_Source_Sultus_Public_AbilityTypes_h


#define FOREACH_ENUM_EABILITYCOSTTYPE(op) \
	op(EAbilityCostType::Health) \
	op(EAbilityCostType::Quintessence) \
	op(EAbilityCostType::Strength) 

enum class EAbilityCostType : uint8;
template<> SULTUS_API UEnum* StaticEnum<EAbilityCostType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
