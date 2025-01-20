//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cPad.hpp"

auto cPad::updatePads(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPad *pThis)>(0x541DD0)(this);
	return;
}


auto cPad::jumpJustDown(void) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cPad *pThis)>(0x540770)(this);
}