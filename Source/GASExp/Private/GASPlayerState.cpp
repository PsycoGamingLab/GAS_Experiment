// Fill out your copyright notice in the Description page of Project Settings.

#include "GASPlayerState.h"
#include "AbilitySystemComponent.h"

AGASPlayerState::AGASPlayerState()
{
	// NetFrequency extreme high for the GAS functionality
	SetNetUpdateFrequency(100.f);
	
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

UAbilitySystemComponent* AGASPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
