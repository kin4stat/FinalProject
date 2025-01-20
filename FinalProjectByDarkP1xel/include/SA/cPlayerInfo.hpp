//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPLAYERINFO_HPP
#define SAPLAYERINFO_HPP

#pragma once

class cPlayerInfo final {
	public:
	class cPed *pPed{nullptr};

	explicit cPlayerInfo::cPlayerInfo(void) = delete;
	auto cPlayerInfo::getTimeCanRun(void) const -> float;
	auto cPlayerInfo::getState(void) const -> unsigned __int8;
	auto cPlayerInfo::setState(const unsigned __int8 ui8State) -> void;
	auto cPlayerInfo::makePlayerSafe(const bool bLock, const float fRadius) -> void;
	cPlayerInfo::~cPlayerInfo(void) = delete;

	private:
};

#endif