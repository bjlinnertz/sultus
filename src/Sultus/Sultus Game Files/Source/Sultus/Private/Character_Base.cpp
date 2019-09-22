// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Base.h"
#include "AttributeSet_Base.h"
#include "GameFramework/PlayerController.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "GameplayAbilityBase.h"
#include "PlayerController_Base.h"
// Sets default values
ACharacter_Base::ACharacter_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComp = CreateDefaultSubobject < UAbilitySystemComponent>("AbilitySystemComp");
	AttributeSetBaseComp = CreateDefaultSubobject<UAttributeSet_Base>("AbilitySetBaseComp");
	IsDead = false;
	TeamID = 255;

}

// Called when the game starts or when spawned
void ACharacter_Base::BeginPlay()
{
	Super::BeginPlay();
	AttributeSetBaseComp->OnHealthChange.AddDynamic(this, &ACharacter_Base::OnHealthChange);
	AttributeSetBaseComp->OnQuintessenceChange.AddDynamic(this, &ACharacter_Base::OnManaChange);
	AutoDetermineTeamIdByControllerType();
}

// Called every frame
void ACharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
UAbilitySystemComponent * ACharacter_Base::GetAbilitySystemComponent() const
{
	return AbilitySystemComp;
}

void ACharacter_Base::AcquireAbility(TSubclassOf<UGameplayAbility> AbilityToAcquire)
{
	if (AbilitySystemComp)
	{
		if (HasAuthority() && AbilityToAcquire)
		{
			AbilitySystemComp->GiveAbility(FGameplayAbilitySpec(AbilityToAcquire, 1, 0));
		}
		AbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}

void ACharacter_Base::AcquireAbilities(TArray<TSubclassOf<UGameplayAbility>> AbilityToAquire)
{
	for (TSubclassOf<UGameplayAbility> AbilityItem : AbilityToAquire)
	{
		AcquireAbility(AbilityItem);
		if (AbilityItem->IsChildOf(UGameplayAbilityBase::StaticClass()))
		{
			TSubclassOf<UGameplayAbilityBase> AbilityBaseClass = *AbilityItem;
			if (AbilityBaseClass != nullptr)
			{
				AddAbilityToUI(AbilityBaseClass);
			}
		}
	}
}

void ACharacter_Base::OnHealthChange(float Health, float MaxHealth)
{
	if (Health <= 0.0f && !IsDead)
	{
		BP_Die();
		Dead();
		IsDead = true;
	}
	BP_OnHealthChange(Health, MaxHealth);
}

void ACharacter_Base::OnManaChange(float Mana, float MaxMana)
{
	BP_OnManaChange(Mana, MaxMana);
}

bool ACharacter_Base::IsOtherHostile(ACharacter_Base* Other)
{
	return TeamID != Other->GetTeamID();
}

uint8 ACharacter_Base::GetTeamID() const
{
	return TeamID;
}

void ACharacter_Base::AddGameplayTag(FGameplayTag TagToAdd)
{
	GetAbilitySystemComponent()->AddLooseGameplayTag(TagToAdd);
	GetAbilitySystemComponent()->SetTagMapCount(TagToAdd, 1);
}

void ACharacter_Base::RemoveGameplayTag(FGameplayTag TagToRemove)
{
	GetAbilitySystemComponent()->RemoveLooseGameplayTag(TagToRemove);
}

void ACharacter_Base::AutoDetermineTeamIdByControllerType()
{
	if (GetController() && GetController()->IsPlayerController())
	{
		TeamID = 0;
	}

}


void ACharacter_Base::Dead()
{
	DisableInputControl();
}

void ACharacter_Base::DisableInputControl()
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		PC->DisableInput(PC);
	}
	AAIController* AIC = Cast<AAIController>(GetController());
	if (AIC)
	{
		AIC->GetBrainComponent()->StopLogic("Dead");
	}
}

void ACharacter_Base::EnableInputControl()
{
	if (!IsDead)
	{
		APlayerController* PC = Cast<APlayerController>(GetController());
		if (PC)
		{
			PC->EnableInput(PC);
		}
		AAIController* AIC = Cast<AAIController>(GetController());
		if (AIC)
		{
			AIC->GetBrainComponent()->RestartLogic();
		}
	}
}

void ACharacter_Base::AddAbilityToUI(TSubclassOf<UGameplayAbilityBase> AbilityToAdd)
{
	APlayerController_Base* PlayerControlerBase = Cast<APlayerController_Base>(GetController());
	if (PlayerControlerBase)
	{
		UGameplayAbilityBase* AbilityInstance = AbilityToAdd.Get()->GetDefaultObject<UGameplayAbilityBase>();
		if (AbilityInstance)
		{
			FGameplayAbilityInfo AbilityInfo = AbilityInstance->GetAbilityInfo();
			PlayerControlerBase->AddAbilityToUI(AbilityInfo);
		}
	}
}
void ACharacter_Base::HitStun(float StunDuration)
{
	DisableInputControl();
	GetWorldTimerManager().SetTimer(StunTimeHandle, this, &ACharacter_Base::EnableInputControl, StunDuration, false);
}
