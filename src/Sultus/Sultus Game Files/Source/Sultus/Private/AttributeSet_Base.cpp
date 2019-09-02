// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSet_Base.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffect.h"
#include "Character_Base.h"

UAttributeSet_Base::UAttributeSet_Base()
	:Health(200.0f),
	MaxHealth(200.0f),
	Quintessence(100.0f),
	MaxQuintessence(100.0f)
{

}

void UAttributeSet_Base::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<UProperty>(UAttributeSet_Base::StaticClass(), GET_MEMBER_NAME_CHECKED(UAttributeSet_Base, Health)))
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(), 0.f, MaxHealth.GetCurrentValue()));
		Health.SetBaseValue(FMath::Clamp(Health.GetCurrentValue(), 0.f, MaxHealth.GetCurrentValue()));
		UE_LOG(LogTemp, Warning, TEXT("Health is %f"), Health.GetCurrentValue());
		OnHealthChange.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue());
		ACharacter_Base* CharacterOwner = Cast<ACharacter_Base>(GetOwningActor());
		if (Health.GetCurrentValue() == MaxHealth.GetCurrentValue())
		{
			if (CharacterOwner)
			{
				CharacterOwner->AddGameplayTag(CharacterOwner->FullHealthTag);
			}
		}
		else
		{
			if (CharacterOwner)
			{
				CharacterOwner->RemoveGameplayTag(CharacterOwner->FullHealthTag);
			}
		}
	}
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<UProperty>(UAttributeSet_Base::StaticClass(), GET_MEMBER_NAME_CHECKED(UAttributeSet_Base, Quintessence)))
	{
		Quintessence.SetCurrentValue(FMath::Clamp(Quintessence.GetCurrentValue(), 0.f, MaxQuintessence.GetCurrentValue()));
		Quintessence.SetBaseValue(FMath::Clamp(Quintessence.GetCurrentValue(), 0.f, MaxQuintessence.GetCurrentValue()));
		OnQuintessenceChange.Broadcast(Quintessence.GetCurrentValue(), MaxQuintessence.GetCurrentValue());
	}
}

