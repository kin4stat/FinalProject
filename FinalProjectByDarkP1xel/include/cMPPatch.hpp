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

#include "include\cMain.hpp"

class cMPPatch final {
	public:
	explicit cMPPatch::cMPPatch(class cMain *pMain);
	auto cMPPatch::patchWarnCrash(void) const -> void;
	auto cMPPatch::patchAntiCheat(void) const -> void;
	auto cMPPatch::patchTextDrawFreezer(void) const -> void;
	auto cMPPatch::WallHack(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoSetEngineState(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::FPSUnlock(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoConnectionDelay(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoDialogLock(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::SendRate(const unsigned __int32 ui32Status, const __int32 *pSendRate) const -> void;
	auto cMPPatch::QuickScreen(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoVehColorReset(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoDLLimit(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::No3DTextDrawDist(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoPedToVehAttach(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::DialogHider(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::FastChatOff(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::TextDrawHider(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::DisableNameTagsAndBars(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoClosedDoors(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::GangZoneHider(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoConnectLock(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoCloseChatOnDialog(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::DisableChatTKey(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::FakeWeapon(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoLockOnSpec(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::AlwaysSync(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::SpectatorMode(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoHeadMoveDelay(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::SyncSpec(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::NoLockInfoOnSpec(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::CustomGiveDamage(const unsigned __int32 ui32Status, const float *pDamage) const -> void;
	auto cMPPatch::CustomTakeDamage(const unsigned __int32 ui32Status, const float *pDamage) const -> void;
	auto cMPPatch::NoStatistic(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::AlwaysActiveConnection(const unsigned __int32 ui32Status) const -> void;
	auto cMPPatch::QuitMPNoDelay(const unsigned __int32 ui32Status) const -> void;
	cMPPatch::~cMPPatch(void);

	private:
	class cMain *pMain{nullptr};
};

#endif