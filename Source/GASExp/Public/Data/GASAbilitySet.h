// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Abilities/GameplayAbility.h"
#include "Engine/DataAsset.h"
#include "GASAbilitySet.generated.h"

USTRUCT(BlueprintType)
struct FGASAbilityBindInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameplayAbility> GameplayAbilityClass;

	UPROPERTY(EditAnywhere)
	FGameplayTag InputTag;
	
	UPROPERTY(EditAnywhere)
	int32 AbilityLevel = 1;
};

UCLASS()
class UGASAbilitySet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TArray<FGASAbilityBindInfo> Abilities;
};
