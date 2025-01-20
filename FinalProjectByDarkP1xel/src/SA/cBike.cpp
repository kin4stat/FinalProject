//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cBike.hpp"

auto cBike::fix(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cBike *pThis)>(0x6B7050)(this);
	return;
}


auto cBike::teleport(const class cVector3D *pPos, const bool bResetAngle) -> void {
	reinterpret_cast<void(__thiscall *)(class cBike *pThis, const class cVector3D vecPos, const bool bResetAngle)>(0x6BCFC0)(this, *pPos, bResetAngle);
	return;
}


auto cBike::getComponentWorldPosition(const unsigned __int32 ui32ComponentID, class cVector3D *pResult) -> void {
	reinterpret_cast<void(__thiscall *)(class cBike *pThis, const unsigned __int32 ui32ComponentID, class cVector3D *pResult)>(0x6B5990)(this, ui32ComponentID, pResult);
	return;
}