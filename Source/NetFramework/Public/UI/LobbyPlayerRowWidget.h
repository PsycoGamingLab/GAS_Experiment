// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Player/NetworkPlayerState.h"
#include "LobbyPlayerRowWidget.generated.h"

/**
 * 
 */
UCLASS()
class NETFRAMEWORK_API ULobbyPlayerRowWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	ANetworkPlayerState* BoundPlayerState;
	
	UFUNCTION()
	void InitFromPlayerState(ANetworkPlayerState* InPS);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnReadyStateChanged(ELobbyPlayerState NewState);
};
