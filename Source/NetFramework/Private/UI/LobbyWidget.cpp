// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/LobbyWidget.h"

#include "Components/ScrollBox.h"
#include "Game/NetworkingGameState.h"
#include "GameFramework/GameStateBase.h"
#include "Player/NetworkPlayerState.h"
#include "UI/LobbyPlayerRowWidget.h"


void ULobbyWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (ANetworkingGameState* NGS =Cast<ANetworkingGameState>( GetWorld()->GetGameState()))
	{
		NGS->OnPlayerListChanged.AddUniqueDynamic(this,&ULobbyWidget::RefreshPlayerList);
	}
	
}

void ULobbyWidget::RefreshPlayerList()
{
	AGameStateBase* GS = GetWorld()->GetGameState();
	if (!GS) return;

	// Rimuovi le righe di chi e' uscito
	for (auto It = RowWidgets.CreateIterator(); It; ++It)
	{
		if (!It->Key.IsValid() || !GS->PlayerArray.Contains(It->Key.Get()))
		{
			It->Value->RemoveFromParent();
			It.RemoveCurrent();
		}
	}
	// Aggiungi una riga per ogni nuovo giocatore, riusando quelle esistenti
	for (APlayerState* PS : GS->PlayerArray)
	{
		if (!RowWidgets.Contains(PS))
		{
			ULobbyPlayerRowWidget* Row = CreateWidget<ULobbyPlayerRowWidget>(this, RowWidgetClass);
			Row->InitFromPlayerState(Cast<ANetworkPlayerState>(PS));
			PlayerListBox->AddChild(Row);
			RowWidgets.Add(PS, Row);
		}
	}
}

void ULobbyWidget::OnAnyPlayerStateChanged(ELobbyPlayerState NewState)
{
	// Qui aggiorni solo la riga di QUEL giocatore, non tutta la lista
}