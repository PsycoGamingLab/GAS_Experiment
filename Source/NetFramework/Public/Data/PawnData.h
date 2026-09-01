// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PawnData.generated.h"

/**
 * 
 */



UCLASS( BlueprintType, Const, Meta = (DisplayName = "Pawn Data", ShortTooltip = "Data asset used to define a Pawn."))
class NETFRAMEWORK_API UPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	// Class to instantiate for this pawn (should usually derive from ALyraPawn or ALyraCharacter).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Networking|Pawn")
	TSubclassOf<APawn> PawnClass;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Networking|Pawn")
	FString PawnName;
	
	
	// // Ability sets to grant to this pawn's ability system.
	// UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Networking|Abilities")
	// TArray<TObjectPtr<>> AbilitySets;
};
