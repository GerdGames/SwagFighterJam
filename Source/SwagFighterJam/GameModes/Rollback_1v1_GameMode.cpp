// Fill out your copyright notice in the Description page of Project Settings.


#include "Rollback_1v1_GameMode.h"

ARollback_1v1_GameMode::ARollback_1v1_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	UE_LOG(LogTemp, Warning, TEXT("GameMode created in CPP"));

	GameStateClass = ARollback_1v1_GameState::StaticClass();
}

void ARollback_1v1_GameMode::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("GameMode BeginPlay in CPP"));
}
