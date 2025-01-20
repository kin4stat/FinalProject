//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cPool.hpp"

auto cPool<class cPed>::forAllPeds(bool(__cdecl *pFunc)(class cPed *pPed)) const -> void {
	__int32 i32PoolSize{this->i32Size};
	if (i32PoolSize) {
		__int32 i32FullPoolSize{1988 * i32PoolSize};
		do {
			i32FullPoolSize -= 1988;
			if ((reinterpret_cast<const unsigned __int8 *>(this->pByteMap)[i32PoolSize-- - 1] & 0x80) == 0) {
				class cPed *pPed{reinterpret_cast<class cPed *>(reinterpret_cast<unsigned __int8 *>(this->pObjects) + i32FullPoolSize)};
				if (pPed != nullptr) {
					if (!pFunc(pPed)) {
						break;
					}
				}
			}
		} while (i32PoolSize);
	} return;
}


auto cPool<class cAutomobile>::forAllVehs(bool(__cdecl *pFunc)(class cAutomobile *pAuto)) const -> void {
	__int32 i32PoolSize{this->i32Size};
	if (i32PoolSize) {
		__int32 i32FullPoolSize{2584 * i32PoolSize};
		do {
			i32FullPoolSize -= 2584;
			if ((reinterpret_cast<const unsigned __int8 *>(this->pByteMap)[i32PoolSize-- - 1] & 0x80) == 0) {
				class cAutomobile *pAuto{reinterpret_cast<class cAutomobile *>(reinterpret_cast<unsigned __int8 *>(this->pObjects) + i32FullPoolSize)};
				if (pAuto != nullptr) {
					if (!pFunc(pAuto)) {
						break;
					}
				}
			}
		} while (i32PoolSize);
	} return;
}


auto cPool<class cObject>::forAllObjs(bool(__cdecl *pFunc)(class cObject *pObject)) const -> void {
	 __int32 i32PoolSize{this->i32Size};
	if (i32PoolSize) {
		__int32 i32FullPoolSize{412 * i32PoolSize};
		do {
			i32FullPoolSize -= 412;
			if ((reinterpret_cast<const unsigned __int8 *>(this->pByteMap)[i32PoolSize-- - 1] & 0x80) == 0) {
				class cObject *pObject{reinterpret_cast<class cObject *>(reinterpret_cast<unsigned __int8 *>(this->pObjects) + i32FullPoolSize)};
				if (pObject != nullptr) {
					if (!pFunc(pObject)) {
						break;
					}
				}
			}
		} while (i32PoolSize);
	} return;
}