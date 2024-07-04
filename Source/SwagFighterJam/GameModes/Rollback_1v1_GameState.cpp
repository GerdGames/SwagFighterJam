// Fill out your copyright notice in the Description page of Project Settings.


#include "Rollback_1v1_GameState.h"



ARollback_1v1_GameState::ARollback_1v1_GameState()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;

}

void ARollback_1v1_GameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARollback_1v1_GameState::BeginPlay()
{
	Super::BeginPlay();

	GGPOSession ggpo;
	GGPOErrorCode result;
	GGPOSessionCallbacks cb;

	/* fill in all callback functions */
	cb.begin_game = cb_begin_game;
	cb.advance_frame = cb_advance_frame;
	cb.load_game_state = cb_load_game_state;
	cb.log_game_state = cb_log_game_state;
	cb.save_game_state = cb_save_game_state;
	cb.free_buffer = cb_free_buffer;
	cb.on_event = cb_on_event;

	/* Start a new session */
	result = GGPONet::ggpo_start_session(&ggpo,         // the new session object
		&cb,           // our callbacks
		"test_app",    // application name
		2,             // 2 players
		sizeof(int),   // size of an input packet
		8001);         // our local udp port
}

bool ARollback_1v1_GameState::cb_begin_game(const char* game)
{
	return false;
}

bool ARollback_1v1_GameState::cb_save_game_state(unsigned char** buffer, int* len, int* checksum, int frame)
{
	return false;
}

bool ARollback_1v1_GameState::cb_load_game_state(unsigned char* buffer, int len)
{
	return false;
}

bool ARollback_1v1_GameState::cb_log_game_state(char* filename, unsigned char* buffer, int len)
{
	return false;
}

void ARollback_1v1_GameState::cb_free_buffer(void* buffer)
{
}

bool ARollback_1v1_GameState::cb_advance_frame(int flags)
{
	return false;
}

bool ARollback_1v1_GameState::cb_on_event(GGPOEvent* info)
{
	return false;
}
