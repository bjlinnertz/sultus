// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "Character_Base.generated.h"

class UAttributeSet_Base;
class UGameplayAbilityBase;
UCLASS()
class SULTUS_API ACharacter_Base : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character_Base")
		UAbilitySystemComponent* AbilitySystemComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character_Base")
		UAttributeSet_Base* AttributeSetBaseComp;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	UFUNCTION(BlueprintCallable, Category = "CharacterBase")
		void AcquireAbility(TSubclassOf<UGameplayAbility> AbilityToAcquire);

	UFUNCTION(BlueprintCallable, Category = "CharacterBase")
		void AcquireAbilities(TArray<TSubclassOf<UGameplayAbility>> AbilityToAquire);

	UFUNCTION(BlueprintCallable, Category = "Character_Base")
		void OnHealthChange(float Health, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, Category = "Character_Base", meta = (DisplayName = "OnHealthChange"))
		void BP_OnHealthChange(float Health, float MaxHealth);

	UFUNCTION(BlueprintCallable, Category = "Character_Base")
		void OnManaChange(float Quintessence, float MaxQuintessence);

	UFUNCTION(BlueprintImplementableEvent, Category = "Character_Base", meta = (DisplayName = "OnQuintessenceChange"))
		void BP_OnManaChange(float Quintessence, float MaxQuintessence);

	UFUNCTION(BlueprintCallable, Category = "Character_Base")
		bool IsOtherHostile(ACharacter_Base* Other);


	UFUNCTION(BlueprintImplementableEvent, Category = "Character_Base", meta = (DisplayName = "Die"))
		void BP_Die();
	uint8 GetTeamID() const;


	UFUNCTION(BlueprintCallable, Category = "Character_Base")
		void AddGameplayTag(FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category = "Character_Base")
		void RemoveGameplayTag(FGameplayTag TagToRemove);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character_Base")
		FGameplayTag FullHealthTag;
	UFUNCTION(BlueprintCallable, Category = "CharacterBase")
		void HitStun(float StunDuration);
protected:
	bool IsDead;
	uint8 TeamID;
	void AutoDetermineTeamIdByControllerType();
	void Dead();
	void DisableInputControl();
	void EnableInputControl();
	FTimerHandle StunTimeHandle;
	void AddAbilityToUI(TSubclassOf<UGameplayAbilityBase> AbilityToAdd);
};
