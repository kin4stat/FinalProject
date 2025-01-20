//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cDamageManager.hpp"

auto cDamageManager::setLightStatus(const cDamageManager::eLights Light, const bool bStatus) -> void {
	reinterpret_cast<void(__thiscall *)(class cDamageManager *pThis, const cDamageManager::eLights Light, const bool bStatus)>(0x6C2100)(this, Light, bStatus);
	return;
}


auto cDamageManager::setPanelStatus(const cDamageManager::ePanels Panel, const bool bStatus) -> void {
	reinterpret_cast<void(__thiscall *)(class cDamageManager *pThis, const cDamageManager::ePanels Light, const bool bStatus)>(0x6C2150)(this, Panel, bStatus);
	return;
}