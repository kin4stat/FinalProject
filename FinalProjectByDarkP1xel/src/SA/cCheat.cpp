//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cCheat.hpp"

auto cCheat::suicide(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x438FF0)();
	return;
}


auto cCheat::giveJetPack(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x439600)();
	return;
}