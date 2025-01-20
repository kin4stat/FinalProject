//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cPedIntelligence.hpp"	 

auto cPedIntelligence::flushImmediately(const bool bUnk) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cPedIntelligence *pThis, const bool bUnk)>(0x601640)(this, bUnk);
}


auto cPedIntelligence::clearTasks(const bool bFirst, const bool bSecond) -> void {
	reinterpret_cast<void(__thiscall *)(class cPedIntelligence *pThis, const bool bFirst, const bool bSecond)>(0x601420)(this, bFirst, bSecond);
	return;
}