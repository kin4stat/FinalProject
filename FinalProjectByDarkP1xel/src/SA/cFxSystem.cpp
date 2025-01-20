//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cFxSystem.hpp"

auto cFxSystem::addParticle(const class cVector3D *pPos, const class cVector3D *pVelocity, const float fUnk1, const class cFxPrtMult *pPrtMult, const float fUnk2, const float fBrightness, const float fBrightnessMin, const unsigned __int8 ui8Unk3) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis, const class cVector3D *pPos, const class cVector3D *pVelocity, const float fUnk1, const class cFxPrtMult *pPrtMult, const float fUnk2, const float fBrightness, const float fBrightnessMin, const unsigned __int8 ui8Unk3)>(0x4AA440)(this, pPos, pVelocity, fUnk1, pPrtMult, fUnk2, fBrightness, fBrightnessMin, ui8Unk3);
	return;
}


auto cFxSystem::play(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis)>(0x4AA2F0)(this);
	return;
}


auto cFxSystem::playAndKill(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis)>(0x4AA3D0)(this);
	return;
}


auto cFxSystem::stop(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis)>(0x4AA390)(this);
	return;
}


auto cFxSystem::getPlayStatus(void) -> __int8 {
	return reinterpret_cast<__int8(__thiscall *)(class cFxSystem *pThis)>(0x4AA900)(this);
}


auto cFxSystem::copyParentMatrix(void) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cFxSystem *pThis)>(0x4AA890)(this);
}


auto cFxSystem::setConstTime(const bool bUseTime, const float fTime) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis, const bool bUseTime, const float fTime)>(0x4AA6C0)(this, bUseTime, fTime);
	return;
}


auto cFxSystem::setLocalParticles(const bool bLocal) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis, const bool bLocal)>(0x4AA910)(this, bLocal);
	return;
}


auto cFxSystem::setOffsetPos(const class cVector3D *pOffset) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis, const class cVector3D *pOffset)>(0x4AA660)(this, pOffset);
	return;
}


auto cFxSystem::setMatrix(const struct stRwMatrix *pMatrix) -> void {
	reinterpret_cast<void(__thiscall *)(class cFxSystem *pThis, const struct stRwMatrix *pMatrix)>(0x4AA630)(this, pMatrix);
	return;
}