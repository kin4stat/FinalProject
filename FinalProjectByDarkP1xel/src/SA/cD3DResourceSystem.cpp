//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cD3DResourceSystem.hpp"

auto cD3DResourceSystem::cancelBuffering(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x730900)();
	return;
}


auto cD3DResourceSystem::tidyUpD3DTextures(const unsigned __int32 ui32Count) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32Count)>(0x7305E0)(ui32Count);
	return;
}


auto cD3DResourceSystem::tidyUpD3DIndexBuffers(const unsigned __int32 ui32Count) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32Count)>(0x730740)(ui32Count);
	return;
}