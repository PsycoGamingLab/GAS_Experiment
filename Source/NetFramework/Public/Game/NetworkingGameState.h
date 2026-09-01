// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "NetworkingGameState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyPlayerListChanged);


/**
 * 
 */
UCLASS()
class NETFRAMEWORK_API ANetworkingGameState : public AGameState
{
	GENERATED_BODY()
	
	public:
	
	UPROPERTY(BlueprintAssignable)
	FOnLobbyPlayerListChanged OnPlayerListChanged;
	

	virtual void AddPlayerState(APlayerState* PlayerState) override;
	virtual void RemovePlayerState(APlayerState* PlayerState) override;
};
