// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Utilities/NetworkingTypes.h"
#include "NetworkPlayerState.generated.h"

class UPawnData;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyPlayerStateChange, ELobbyPlayerState,NewLobbyPlayerState);
/**
 * 
 */
UCLASS()
class NETFRAMEWORK_API ANetworkPlayerState : public APlayerState
{
	GENERATED_BODY()	

public:
	UPROPERTY(ReplicatedUsing=OnRep_Ready)
	ELobbyPlayerState LobbyPlayerState = ELobbyPlayerState::EUnready;
	
	// protected:
	// UPROPERTY(ReplicatedUsing=OnRep_PawnData)
	// TObjectPtr<const UPawnData> PawnData;

	UFUNCTION()
	void OnRep_Ready() const;
	
	UFUNCTION(BlueprintCallable, Category = "Networking|Pawn")
	void SetLobbyPlayerState(ELobbyPlayerState NewLobbyPlayerState);
	
	UFUNCTION(Server,Reliable, Category = "Networking|Pawn")
	void ServerSetLobbyPlayerState(ELobbyPlayerState NewLobbyPlayerState);
	
	UPROPERTY(BlueprintAssignable)
	FOnLobbyPlayerStateChange OnLobbyPlayerStateChange;
};
