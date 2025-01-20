//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cPools.hpp"

auto cPools::getPlayerPool(void) -> class cPool<class cPed> * {
	return *reinterpret_cast<class cPool<class cPed> **>(0xB74490);
}


auto cPools::getVehiclePool(void) -> class cPool<class cAutomobile> * {
	return *reinterpret_cast<class cPool<class cAutomobile> **>(0xB74494);
}


auto cPools::getObjectPool(void) -> class cPool<class cObject> * {
	return *reinterpret_cast<class cPool<class cObject> **>(0xB7449C);
}