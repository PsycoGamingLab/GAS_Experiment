// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/VitalAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UVitalAttributeSet::OnRep_Health(FGameplayAttributeData PreviousHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UVitalAttributeSet, Health, PreviousHealth);
}

void UVitalAttributeSet::OnRep_MaxHealth(FGameplayAttributeData PreviousHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UVitalAttributeSet, MaxHealth, PreviousHealth);
}

void UVitalAttributeSet::OnRep_Mana(FGameplayAttributeData PreviousMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UVitalAttributeSet, MaxHealth, PreviousMana);
}

void UVitalAttributeSet::OnRep_MaxMana(FGameplayAttributeData PreviousMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UVitalAttributeSet, MaxHealth, PreviousMana);
}

void UVitalAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	// Replication logic to replicate all attributes
	DOREPLIFETIME(UVitalAttributeSet, MaxHealth);
	DOREPLIFETIME(UVitalAttributeSet, Health);
	DOREPLIFETIME(UVitalAttributeSet, Mana);
	DOREPLIFETIME(UVitalAttributeSet, MaxMana);
	
}



