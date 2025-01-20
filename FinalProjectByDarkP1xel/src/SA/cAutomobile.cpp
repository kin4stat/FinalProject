//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cAutomobile.hpp"

auto cAutomobile::getDamageManager(void) const -> class cDamageManager * {
	return reinterpret_cast<class cDamageManager *>(reinterpret_cast<const unsigned __int32>(this) + 0x5A0);
}


auto cAutomobile::fix(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cAutomobile *pThis)>(0x6A3440)(this);
	return;
}


auto cAutomobile::teleport(const class cVector3D *pPos, const bool bResetAngle) -> void {
	reinterpret_cast<void(__thiscall *)(class cAutomobile *pThis, const class cVector3D vecPos, const bool bResetAngle)>(0x6A9CA0)(this, *pPos, bResetAngle);
	return;
}


auto cAutomobile::setPanelDamage(const cDamageManager::ePanels Panel, const bool bCreateWindowGlass) -> void {
	reinterpret_cast<void(__thiscall *)(class cAutomobile *pThis, const cDamageManager::ePanels Panel, const bool bCreateWindowGlass)>(0x6B1480)(this, Panel, bCreateWindowGlass);
	return;
}


auto cAutomobile::popPanel(const unsigned __int32 ui32NodeID, const cDamageManager::ePanels Panel, const bool bShowVisualEffect) -> void {
	reinterpret_cast<void(__thiscall *)(class cAutomobile *pThis, const unsigned __int32 ui32NodeID, const cDamageManager::ePanels Panel, const bool bShowVisualEffect)>(0x6ADF80)(this, ui32NodeID, Panel, bShowVisualEffect);
	return;
}


auto cAutomobile::getComponentWorldPosition(const unsigned __int32 ui32ComponentID, class cVector3D *pResult) -> void {
	reinterpret_cast<void(__thiscall *)(class cAutomobile *pThis, const unsigned __int32 ui32ComponentID, class cVector3D *pResult)>(0x6A2210)(this, ui32ComponentID, pResult);
	return;
}


auto cAutomobile::setModelIndex(const unsigned __int32 ui32ModelID) -> void {
	reinterpret_cast<void(__thiscall *)(class cAutomobile *pThis, const unsigned __int32 ui32ModelID)>(0x6A6590)(this, ui32ModelID);
	return;
}


auto cAutomobile::setTowLink(const class cVehicle *pVehicle, const bool bUnk) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cAutomobile *pThis, const class cVehicle *pVehicle, const bool bUnk)>(0x6B4410)(this, pVehicle, bUnk);
}