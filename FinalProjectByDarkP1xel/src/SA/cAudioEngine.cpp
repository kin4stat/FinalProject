//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cAudioEngine.hpp"

auto cAudioEngine::reset(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cAudioEngine *pThis)>(0x507A90)(this);
	return;
}


auto cAudioEngine::reportFrontendAudioEvent(const unsigned __int16 ui16EventID, const float fVolumeChange, const float fSpeed) -> void {
	reinterpret_cast<void(__thiscall *)(class cAudioEngine *pThis, const unsigned __int16 ui16EventID, const float fVolumeChange, const float fSpeed)>(0x506EA0)(this, ui16EventID, fVolumeChange, fSpeed);
	return;
}


auto cAudioEngine::reportMissionAudioEvent(const unsigned __int16 ui16EventID, const class cVector3D *pPos) -> void {
	reinterpret_cast<void(__thiscall *)(class cAudioEngine *pThis, const unsigned __int16 ui16EventID, const class cVector3D *pPos)>(0x507340)(this, ui16EventID, pPos);
	return;
}