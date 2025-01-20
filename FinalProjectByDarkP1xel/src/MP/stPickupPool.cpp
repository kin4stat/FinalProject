//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\MP\stPickupPool.hpp"

auto stPickupPool::forAllPickups(bool(__cdecl *pFunc)(const unsigned __int16 ui16PickupID, struct stPickup *pPickUp)) -> void {
	for (unsigned __int16 ui16PickupID{0}; ui16PickupID < 4096; ++ui16PickupID) {
		if (this->ui32GTAPickupID[ui16PickupID]) {
			if (!pFunc(ui16PickupID, &this->pickup[ui16PickupID])) {
				break;
			}
		}
	} return;
}