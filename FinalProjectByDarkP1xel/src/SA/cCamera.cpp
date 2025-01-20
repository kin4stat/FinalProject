//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cCamera.hpp"

auto cCamera::restoreWithJumpCut(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cCamera *pThis)>(0x50BAB0)(this);
	return;
}


auto cCamera::setFadeColour(const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) -> void {
	reinterpret_cast<void(__thiscall *)(class cCamera *pThis, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B)>(0x50BF00)(this, ui8R, ui8G, ui8B);
	return;
}


auto cCamera::fade(const float fDuration, const unsigned __int16 ui16InOut) -> void {
	reinterpret_cast<void(__thiscall *)(class cCamera *pThis, const float fDuration, const unsigned __int16 ui16InOut)>(0x40116D)(this, fDuration, ui16InOut);
	return;
}


auto cCamera::find3rdPersonCamTargetVector(const float fRange, const class cVector3D *pSource, class cVector3D *pCamera, class cVector3D *pPoint) -> void {
	reinterpret_cast<void(__thiscall *)(class cCamera *pThis, const float fRange, const class cVector3D vecSource, class cVector3D *pCamera, class cVector3D *pPoint)>(0x514970)(this, fRange, *pSource, pCamera, pPoint);
	return;
}