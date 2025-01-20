//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPLAYERPOOL_HPP
#define MPPLAYERPOOL_HPP

#pragma once

#include "include\cMP.hpp"

struct stPlayerPool037R1 final {
	unsigned __int32 ui32MaxPlayerID{0};
	unsigned __int16 ui16LocalPlayerID{0};
	void *pUnk{nullptr};
	std::string sLocalPlayerName{};
	struct stLocalPlayer037R1 *pLocalPlayer{nullptr};
	__int32 i32Ping{0};
	__int32 i32Score{0};
	struct stRemotePlayer037R1 *pRemotePlayer[1004];
	__int32 i32IsListed[1004];
	__int32 i32PlayerIP[1004];

	explicit stPlayerPool037R1::stPlayerPool037R1(void) = delete;
	auto stPlayerPool037R1::getPlayerNameByID(const unsigned __int16 ui16PlayerID) const->std::string;
	auto stPlayerPool037R1::getLocalVehicleID(void) const -> unsigned __int16;
	auto stPlayerPool037R1::getPlayerIDByHandle(class cPed *pPed) const -> unsigned __int16;
	auto stPlayerPool037R1::getPlayerNameByHandle(class cPed *pPed) const->std::string;
	auto stPlayerPool037R1::getPlayerAFK(const unsigned __int16 ui16PlayerID) const -> bool;
	auto stPlayerPool037R1::removeAllPlayers(void) -> void;
	auto stPlayerPool037R1::forAllRemotePeds(bool(__cdecl *pFunc)(const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer)) const -> void;
	stPlayerPool037R1::~stPlayerPool037R1(void) = delete;
};

struct stPlayerPool037R3 final {
	unsigned __int32 ui32MaxPlayerID{0};
	struct stRemotePlayer037R3 *pRemotePlayer[1004];
	__int32 i32IsListed[1004];
	__int32 i32PlayerIP[1004];
	__int32 i32Ping{0};
	__int32 i32Score{0};
	unsigned __int16 ui16LocalPlayerID{0};
	void *pUnk{nullptr};
	std::string sLocalPlayerName{};
	struct stLocalPlayer037R3 *pLocalPlayer{nullptr};

	explicit stPlayerPool037R3::stPlayerPool037R3(void) = delete;
	auto stPlayerPool037R3::getPlayerNameByID(const unsigned __int16 ui16PlayerID) const->std::string;
	auto stPlayerPool037R3::getLocalVehicleID(void) const -> unsigned __int16;
	auto stPlayerPool037R3::getPlayerIDByHandle(class cPed *pPed) const -> unsigned __int16;
	auto stPlayerPool037R3::getPlayerNameByHandle(class cPed *pPed) const->std::string;
	auto stPlayerPool037R3::getPlayerAFK(const unsigned __int16 ui16PlayerID) const -> bool;
	auto stPlayerPool037R3::removeAllPlayers(void) -> void;
	auto stPlayerPool037R3::forAllRemotePeds(bool(__cdecl *pFunc)(const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer)) const -> void;
	stPlayerPool037R3::~stPlayerPool037R3(void) = delete;
};

#endif