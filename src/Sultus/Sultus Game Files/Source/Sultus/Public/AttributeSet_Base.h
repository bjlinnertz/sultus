// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet_Base.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangeDelegate, float, Health, float, MaxHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnManaChangeDelegate, float, Quintessence, float, MaxQuintessence);
UCLASS()
class SULTUS_API UAttributeSet_Base : public UAttributeSet
{
	GENERATED_BODY()
public:
	UAttributeSet_Base();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData Quintessence;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase")
		FGameplayAttributeData MaxQuintessence;

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;

	FOnHealthChangeDelegate OnHealthChange;
	FOnManaChangeDelegate OnQuintessenceChange;
};
