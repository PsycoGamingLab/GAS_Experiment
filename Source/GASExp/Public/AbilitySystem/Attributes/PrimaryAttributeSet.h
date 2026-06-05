// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CoreMinimal.h"
#include "PrimaryAttributeSet.generated.h"

// Helper macro to define the accessors for an attribute
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()

class GASEXP_API UPrimaryAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Current health of the owner
	UPROPERTY()
	FGameplayAttributeData Health = 100.0f;
	ATTRIBUTE_ACCESSORS(UPrimaryAttributeSet, Health)
 
	// Max health that the owner can have
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData MaxHealth= 100.0f;
	ATTRIBUTE_ACCESSORS(UPrimaryAttributeSet, MaxHealth)
};
