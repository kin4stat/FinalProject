//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPREMOTEPLAYER_HPP
#define MPREMOTEPLAYER_HPP

#pragma once

struct stRemotePlayer037R1 final {
	struct stRemotePlayerData037R1 *pPlayerData{nullptr};
	__int32 i32IsNPC{0};
	void *pUnk{nullptr};
	std::string sPlayerName{};
	__int32 i32Score{0};
	unsigned __int32 ui32Ping{0};
};

struct stRemotePlayer037R3 final {
	struct stRemotePlayerData037R3 *pPlayerData{nullptr};
	unsigned __int32 ui32Ping{0};
	void *pUnk{nullptr};
	std::string sPlayerName{};
	__int32 i32Score{0};
	__int32 i32IsNPC{0};
};

#endif