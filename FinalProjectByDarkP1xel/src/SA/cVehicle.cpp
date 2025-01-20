//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cVehicle.hpp"

auto cVehicle::getDriver(void) const -> class cPed * {
	return *reinterpret_cast<class cPed **>(reinterpret_cast<const unsigned __int32>(this) + 0x460);
}


auto cVehicle::getTractor(void) const -> class cAutomobile * {
	return *reinterpret_cast<class cAutomobile **>(reinterpret_cast<const unsigned __int32>(this) + 0x4C4);
}


auto cVehicle::getTrailer(void) const -> class cTrailer * {
	return *reinterpret_cast<class cTrailer **>(reinterpret_cast<const unsigned __int32>(this) + 0x4C8);
}


auto cVehicle::getHealth(void) const -> float {
	return *reinterpret_cast<const float *>(reinterpret_cast<const unsigned __int32>(this) + 0x4C0);
}


auto cVehicle::setHealth(const float fHealth) -> void {
	*reinterpret_cast<float *>(reinterpret_cast<const unsigned __int32>(this) + 0x4C0) = fHealth;
	return;
}


auto cVehicle::setEngineState(const bool bState) -> void {
	reinterpret_cast<void(__thiscall *)(class cVehicle *pThis, const bool bState)>(0x41BDD0)(this, bState);
	return;
}


auto cVehicle::getInterior(void) const -> unsigned __int8 {
	return *reinterpret_cast<const unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x2F);
}


auto cVehicle::setInterior(const unsigned __int8 ui8Interior) -> void {
	*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x2F) = ui8Interior;
	return;
}


auto cVehicle::getColor(const unsigned __int8 *pPrimary, const unsigned __int8 *pSecondary, const unsigned __int8 *pTertiary, const unsigned __int8 *pQuaternary) const -> void {
	if (pPrimary != nullptr) {
		pPrimary = *reinterpret_cast<const unsigned __int8 **>(reinterpret_cast<const unsigned __int32>(this) + 0x434);
	}
	if (pSecondary != nullptr) {
		pSecondary = *reinterpret_cast<const unsigned __int8 **>(reinterpret_cast<const unsigned __int32>(this) + 0x435);
	}
	if (pTertiary != nullptr) {
		pTertiary = *reinterpret_cast<const unsigned __int8 **>(reinterpret_cast<const unsigned __int32>(this) + 0x436);
	}
	if (pQuaternary != nullptr) {
		pQuaternary = *reinterpret_cast<const unsigned __int8 **>(reinterpret_cast<const unsigned __int32>(this) + 0x437);
	} return;
}


auto cVehicle::setColor(const unsigned __int8 *pPrimary, const unsigned __int8 *pSecondary, const unsigned __int8 *pTertiary, const unsigned __int8 *pQuaternary) -> void {
	if (pPrimary != nullptr) {
		*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x434) = *pPrimary;
	}
	if (pSecondary != nullptr) {
		*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x435) = *pSecondary;
	}
	if (pTertiary != nullptr) {
		*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x436) = *pTertiary;
	}
	if (pQuaternary != nullptr) {
		*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x437) = *pQuaternary;
	} return;
}


auto cVehicle::getClass(void) const -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(reinterpret_cast<const unsigned __int32>(this) + 0x590);
}


auto cVehicle::getSubClass(void) const -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(reinterpret_cast<const unsigned __int32>(this) + 0x594);
}


auto cVehicle::getDoorsStatus(void) const -> cVehicle::eVehDoors {
	return *reinterpret_cast<const cVehicle::eVehDoors *>(reinterpret_cast<const unsigned __int32>(this) + 0x4F8);
}


auto cVehicle::getHandlingData(void) const -> class cAutoHandlingData * {
	return *reinterpret_cast<class cAutoHandlingData **>(reinterpret_cast<const unsigned __int32>(this) + 0x384);
}


auto cVehicle::setModelIndex(const unsigned __int32 ui32ModelID) -> void {
	reinterpret_cast<void(__thiscall *)(class cVehicle *pThis, const unsigned __int32 ui32ModelID)>(0x6D6A40)(this, ui32ModelID);
	return;
}


auto cVehicle::setRemap(const __int32 i32RemapID) -> void {
	reinterpret_cast<void(__thiscall *)(class cVehicle *pThis, const __int32 i32RemapID)>(0x6D0C00)(this, i32RemapID);
	return;
}


auto cVehicle::setRemapTexDictionary(const __int32 i32RemapID) -> void {
	reinterpret_cast<void(__thiscall *)(class cVehicle *pThis, const __int32 i32RemapID)>(0x6D0BC0)(this, i32RemapID);
	return;
}


auto cVehicle::isEmpty(void) const -> bool {
	for (unsigned __int32 UI32{0}; UI32 < 8; ++UI32) {
		if (*reinterpret_cast<const class cPed **>(reinterpret_cast<const unsigned __int32>(this) + 0x460 + (UI32 * 4)) != nullptr) {
			return false;
		}
	} return true;
}