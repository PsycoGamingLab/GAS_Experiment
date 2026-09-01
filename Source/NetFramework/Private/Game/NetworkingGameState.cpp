// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/NetworkingGameState.h"

void ANetworkingGameState::AddPlayerState(APlayerState* PlayerState)
{
	Super::AddPlayerState(PlayerState);
	OnPlayerListChanged.Broadcast();
}

void ANetworkingGameState::RemovePlayerState(APlayerState* PlayerState)
{
	Super::RemovePlayerState(PlayerState);
	OnPlayerListChanged.Broadcast();
}