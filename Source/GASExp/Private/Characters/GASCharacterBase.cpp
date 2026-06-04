// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/GASCharacterBase.h"
#include "Abilities/GameplayAbility.h"
#include "GASPlayerState.h"
#include "Data/GASAbilitySet.h"

// Sets default values
AGASCharacterBase::AGASCharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGASCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGASCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	SetOwner(NewController);

	AGASPlayerState* PS = GetPlayerState<AGASPlayerState>();
	if (PS)
	{
		AbilitySystemComponent = Cast<UAbilitySystemComponent>(PS->GetAbilitySystemComponent());
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
		GrantAbilities();
	}
}

// Client only
void AGASCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AGASPlayerState* PS = GetPlayerState<AGASPlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<UAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
	}

	// ...
}

// Called every frame
void AGASCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGASCharacterBase::GrantAbilities()
{
	if (!HasAuthority() || bAbilitiesGranted)
		return;

	UAbilitySystemComponent* ASC = GetAbilitySystemComponent();
	if (!ASC || !AbilitySet)
		return;

	for (const FGASAbilityBindInfo& BindInfo : AbilitySet->Abilities)
	{
		if (!BindInfo.GameplayAbilityClass) continue;

		FGameplayAbilitySpec Spec(BindInfo.GameplayAbilityClass, BindInfo.AbilityLevel, INDEX_NONE, this);
		if (BindInfo.InputTag.IsValid())
			Spec.GetDynamicSpecSourceTags().AddTag(BindInfo.InputTag);

		GrantedHandles.Add(ASC->GiveAbility(Spec));
	}

	bAbilitiesGranted = true;
}

// Called to bind functionality to input
void AGASCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UAbilitySystemComponent* AGASCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

