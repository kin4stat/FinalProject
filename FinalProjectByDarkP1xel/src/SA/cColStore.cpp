//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cColStore.hpp"

auto cColStore::requestCollision(const class cVector3D *pVecPos, const unsigned __int32 ui32InteriorID) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pVecPos, const unsigned __int32 ui32InteriorID)>(0x410C00)(pVecPos, ui32InteriorID);
	return;
}


auto cColStore::removeAllCollision(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x410E00)();
	return;
}