// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/NetworkPlayerState.h"

#include "Net/UnrealNetwork.h"

void ANetworkPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	// FDoRepLifetimeParams SharedParams;
	// SharedParams.bIsPushBased = true;
	//
	// DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass,PawnData,SharedParams);
	
	DOREPLIFETIME(ThisClass,LobbyPlayerState);
}

void ANetworkPlayerState::OnRep_Ready() const
{
	OnLobbyPlayerStateChange.Broadcast(LobbyPlayerState);
}

void ANetworkPlayerState::SetLobbyPlayerState(ELobbyPlayerState NewLobbyPlayerState)
{
	if (HasAuthority())
	{
		if (LobbyPlayerState == NewLobbyPlayerState) return;
		LobbyPlayerState = NewLobbyPlayerState;
		OnRep_Ready();
		return;
	}
	ServerSetLobbyPlayerState(NewLobbyPlayerState);
	
}

void ANetworkPlayerState::ServerSetLobbyPlayerState_Implementation(ELobbyPlayerState NewLobbyPlayerState)
{
	SetLobbyPlayerState(NewLobbyPlayerState);
}
