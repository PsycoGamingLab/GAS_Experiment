// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/VitalAttributeSet.h"
#include "Characters/GASExpCharacter.h"
#include "Data/GASAbilitySet.h"
#include "GASCharacterBase.generated.h"

UCLASS()
class GASEXP_API AGASCharacterBase : public AGASExpCharacter,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGASCharacterBase();
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	/** STATS **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	TSubclassOf<UGameplayEffect> Stats_GE;
	
	
	/** ABILITY **/
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	/** Ability System Component. Required to use Gameplay Attributes and Gameplay Abilities. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	UGASAbilitySet* AbilitySet;
	

	
private:
	void GrantAbilities();
	void InitStats();
	
	UPROPERTY()
	bool bAbilitiesGranted = false;
	UPROPERTY()
	bool bInitStats = false;
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> GrantedHandles;
	

};
