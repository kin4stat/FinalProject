//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cWeapon.hpp"	

auto cWeapon::shutdown(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cWeapon *pThis)>(0x73A380)(this);
	return;
}