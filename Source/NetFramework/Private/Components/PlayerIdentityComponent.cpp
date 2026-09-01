// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/PlayerIdentityComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UPlayerIdentityComponent::UPlayerIdentityComponent()
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}


// Called when the game starts
void UPlayerIdentityComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UPlayerIdentityComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	//DOREPLIFETIME(UPlayerIdentityComponent,PlayerInfo);
}


// Called every frame
void UPlayerIdentityComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

