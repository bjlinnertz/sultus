// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilityTypes.h"
#include "PlayerController_Base.generated.h"

/**
 * 
 */
UCLASS()
class SULTUS_API APlayerController_Base : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "PlayerControllerBase")
		void AddAbilityToUI(FGameplayAbilityInfo AbilityInfo);
};
