//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cObject.hpp"

auto cObject::deleteAllTempObjects(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x5A18B0)();
	return;
}


auto cObject::deleteAllMissionObjects(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x5A1910)();
	return;
}


auto cObject::deleteAllTempObjectsInArea(const class cVector3D *pPoint, const float fRadius) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D pPoint, const float fRadius)>(0x5A1980)(*pPoint, fRadius);
	return;
}