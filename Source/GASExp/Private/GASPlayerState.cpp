// Fill out your copyright notice in the Description page of Project Settings.

#include "GASPlayerState.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/PrimaryAttributeSet.h"

AGASPlayerState::AGASPlayerState()
{
	// NetFrequency extreme high for the GAS functionality
	SetNetUpdateFrequency(100.f);
	
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);	
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	//Attributes
	PrimaryAttributeSet = CreateDefaultSubobject<UPrimaryAttributeSet>(TEXT("PrimaryAttributeSet"));
}

UAbilitySystemComponent* AGASPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
