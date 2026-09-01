// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/LobbyPlayerRowWidget.h"

#include "Player/NetworkPlayerState.h"

void ULobbyPlayerRowWidget::InitFromPlayerState(ANetworkPlayerState* InPS)
{
	BoundPlayerState = InPS;
	InPS->OnLobbyPlayerStateChange.AddUniqueDynamic(this, &ULobbyPlayerRowWidget::OnReadyStateChanged);
}
