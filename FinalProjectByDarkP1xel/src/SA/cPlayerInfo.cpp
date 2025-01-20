//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cPlayerInfo.hpp"

auto cPlayerInfo::getTimeCanRun(void) const -> float {
	return *reinterpret_cast<const float *>(reinterpret_cast<const unsigned __int32>(this) + 0x4 + 0x18);
}


auto cPlayerInfo::getState(void) const -> unsigned __int8 {
	return *reinterpret_cast<const unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0xDC);
}


auto cPlayerInfo::setState(const unsigned __int8 ui8State) -> void {
	*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0xDC) = ui8State;
	return;
}


auto cPlayerInfo::makePlayerSafe(const bool bLock, const float fRadius) -> void {
	reinterpret_cast<void(__thiscall *)(class cPlayerInfo *pThis, const bool bCanMove, const float fRadius)>(0x56E870)(this, bLock, fRadius);
	return;
}