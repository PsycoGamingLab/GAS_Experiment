// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CoreMinimal.h"
#include "VitalAttributeSet.generated.h"

// Helper macro to define the accessors for an attribute
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()

class GASEXP_API UVitalAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Current health of the owner
	UPROPERTY(BlueprintReadOnly,Category = "Attributes",ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health = 100.0f;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health)
 
	// Max health that the owner can have
	UPROPERTY(BlueprintReadOnly,Category = "Attributes",ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth= 100.0f;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth)
	
	// Current mana of the owner
UPROPERTY(BlueprintReadOnly,Category = "Attributes",ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana = 100.0f;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Mana)
 
	// Max mana that the owner can have
	UPROPERTY(BlueprintReadOnly,Category = "Attributes",ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana= 100.0f;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxMana)
	
protected:
	UFUNCTION()
	virtual void OnRep_Health(FGameplayAttributeData PreviousHealth);
	UFUNCTION()
	virtual void OnRep_MaxHealth(FGameplayAttributeData PreviousHealth);
	UFUNCTION()
	virtual void OnRep_Mana(FGameplayAttributeData PreviousMana);
	UFUNCTION()
	virtual void OnRep_MaxMana(FGameplayAttributeData PreviousMana);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
