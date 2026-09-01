// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Utilities/NetworkingTypes.h"
#include "LobbyWidget.generated.h"

class UVerticalBox;
class ULobbyPlayerRowWidget;
class UScrollBox;
/**
 * 
 */
UCLASS()
class NETFRAMEWORK_API ULobbyWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ULobbyPlayerRowWidget> RowWidgetClass;

	UPROPERTY()
	TMap<TWeakObjectPtr<APlayerState>, ULobbyPlayerRowWidget*> RowWidgets;
	
protected:
	UPROPERTY(meta = (BindWidget))
	UScrollBox* PlayerListBox;
public:
	virtual void NativeConstruct() override;
	
	UFUNCTION()
	void RefreshPlayerList();
	
	UFUNCTION()
	void OnAnyPlayerStateChanged(ELobbyPlayerState NewState);
};
