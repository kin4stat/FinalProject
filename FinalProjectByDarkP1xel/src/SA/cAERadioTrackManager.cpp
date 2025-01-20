//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cAERadioTrackManager.hpp"

auto cAERadioTrackManager::stopRadio(class cVehicleAudioSettings *pVehAudSettings, const bool bUnk) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cAERadioTrackManager *pThis, class cVehicleAudioSettings *pVehAudSettings, const bool bUnk)>(0x4E9820)(this, pVehAudSettings, bUnk);
}