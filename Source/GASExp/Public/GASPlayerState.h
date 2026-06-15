// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/Attributes/VitalAttributeSet.h"
#include "GameFramework/PlayerState.h"
#include "GASPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GASEXP_API AGASPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AGASPlayerState();	
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;	

	protected:
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;
	
	/*
	* ATTRIBUTES
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	const UVitalAttributeSet* PrimaryAttributeSet = nullptr;



};
