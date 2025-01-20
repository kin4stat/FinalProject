//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPSAMP_HPP
#define MPSAMP_HPP

#pragma once

#include "include\cMP.hpp"

struct stSAMP037R1 final {

	enum class eGameState : const unsigned __int32 {
		eWAIT_CONNECT = 9,
		eCONNECTING = 13,
		eAWAIT_JOIN = 15,
		eCONNECTED = 14,
		eRESTARTING = 18
	};

	void *pUnk1{nullptr};
	struct stServerInfo *pServerInfo{nullptr};
	__int8 i8Unk2[24];
	char cIP[256 + 1];
	char cHostname[256 + 1];
	bool bDisableCollision{false};
	bool bUpdateCameraTarget{false};
	bool bNametagStatus{false};
	unsigned __int32 ui32Port{0};
	__int32 i32LanMode{0};
	unsigned __int32 ui32MapIcons[100];
	stSAMP037R1::eGameState GameState{stSAMP037R1::eGameState::eWAIT_CONNECT};
	unsigned long ulConnectTick{0};
	struct stServerPresets *pSettings{nullptr};
	class cRakClient *pRakClientInterface{nullptr};
	struct stSAMPPools037R1 *pPools{nullptr};

	explicit stSAMP037R1(void) = delete;
	auto restartGame(void) -> void;
	auto reAllocPools1(void) -> void;
	auto reAllocPools2(void) -> void;
	~stSAMP037R1(void) = delete;
};

struct stSAMP037R3 final {

	enum class eGameState : const unsigned __int32 {
		eWAIT_CONNECT = 1,
		eCONNECTING,
		eCONNECTED = 5,
		eAWAIT_JOIN,
		eRESTARTING = 11
	};

	__int8 i8Unk1[44];
	class cRakClient *pRakClientInterface{nullptr};
	char cIP[256 + 1];
	char cHostname[256 + 1];
	bool bDisableCollision{false};
	bool bUpdateCameraTarget{false};
	bool bNametagStatus{false};
	unsigned __int32 ui32Port{0};
	__int32 i32LanMode{0};
	unsigned __int32 ui32MapIcons[100];
	stSAMP037R3::eGameState GameState{stSAMP037R3::eGameState::eWAIT_CONNECT};
	unsigned long ulConnectTick{0};
	struct stServerPresets *pSettings{nullptr};
	__int8 i8Unk2[5];
	struct stSAMPPools037R3 *pPools{nullptr};

	explicit stSAMP037R3(void) = delete;
	auto restartGame(void) -> void;
	auto reAllocPools1(void) -> void;
	auto reAllocPools2(void) -> void;
	~stSAMP037R3(void) = delete;

};

#endif