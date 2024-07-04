// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "..\..\..\Plugins\GGPOUE5-master\Source\GGPOUE4\Public\include\ggponet.h"
#include "Rollback_1v1_GameState.generated.h"

/**
 * 
 */
UCLASS()
class SWAGFIGHTERJAM_API ARollback_1v1_GameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ARollback_1v1_GameState();

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	//GGPO callbacks
	bool cb_begin_game (const char* game);
	bool cb_save_game_state(unsigned char** buffer, int* len, int* checksum, int frame);
	bool cb_load_game_state(unsigned char* buffer, int len);
	bool cb_log_game_state(char* filename, unsigned char* buffer, int len);
	void cb_free_buffer(void* buffer);
	bool cb_advance_frame(int flags);
	bool cb_on_event(GGPOEvent* info);

};
