//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPATCH_HPP
#define MPPATCH_HPP

#pragma once

#include "cMain.hpp"

class cMPPatch final {
	public:
	explicit cMPPatch(class cMain *pMain);
	auto patchWarnCrash(void) const -> void;
	auto patchAntiCheat(void) const -> void;
	auto patchTextDrawFreezer(void) const -> void;
	auto WallHack(const unsigned __int32 ui32Status) const -> void;
	auto NoSetEngineState(const unsigned __int32 ui32Status) const -> void;
	auto FPSUnlock(const unsigned __int32 ui32Status) const -> void;
	auto NoConnectionDelay(const unsigned __int32 ui32Status) const -> void;
	auto NoDialogLock(const unsigned __int32 ui32Status) const -> void;
	auto SendRate(const unsigned __int32 ui32Status, const __int32 *pSendRate) const -> void;
	auto QuickScreen(const unsigned __int32 ui32Status) const -> void;
	auto NoVehColorReset(const unsigned __int32 ui32Status) const -> void;
	auto NoDLLimit(const unsigned __int32 ui32Status) const -> void;
	auto No3DTextDrawDist(const unsigned __int32 ui32Status) const -> void;
	auto NoPedToVehAttach(const unsigned __int32 ui32Status) const -> void;
	auto DialogHider(const unsigned __int32 ui32Status) const -> void;
	auto FastChatOff(const unsigned __int32 ui32Status) const -> void;
	auto TextDrawHider(const unsigned __int32 ui32Status) const -> void;
	auto DisableNameTagsAndBars(const unsigned __int32 ui32Status) const -> void;
	auto NoClosedDoors(const unsigned __int32 ui32Status) const -> void;
	auto GangZoneHider(const unsigned __int32 ui32Status) const -> void;
	auto NoConnectLock(const unsigned __int32 ui32Status) const -> void;
	auto NoCloseChatOnDialog(const unsigned __int32 ui32Status) const -> void;
	auto DisableChatTKey(const unsigned __int32 ui32Status) const -> void;
	auto FakeWeapon(const unsigned __int32 ui32Status) const -> void;
	auto NoLockOnSpec(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysSync(const unsigned __int32 ui32Status) const -> void;
	auto SpectatorMode(const unsigned __int32 ui32Status) const -> void;
	auto NoHeadMoveDelay(const unsigned __int32 ui32Status) const -> void;
	auto SyncSpec(const unsigned __int32 ui32Status) const -> void;
	auto NoLockInfoOnSpec(const unsigned __int32 ui32Status) const -> void;
	auto CustomGiveDamage(const unsigned __int32 ui32Status, const float *pDamage) const -> void;
	auto CustomTakeDamage(const unsigned __int32 ui32Status, const float *pDamage) const -> void;
	auto NoStatistic(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysActiveConnection(const unsigned __int32 ui32Status) const -> void;
	auto QuitMPNoDelay(const unsigned __int32 ui32Status) const -> void;
	~cMPPatch(void);

	private:
	class cMain *pMain{nullptr};
};

#endif