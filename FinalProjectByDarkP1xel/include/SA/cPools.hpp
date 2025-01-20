//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPOOLS_HPP
#define SAPOOLS_HPP

#pragma once

#include "SA/cPool.hpp"

class cPools final {
	public:
	explicit cPools::cPools(void) = delete;
	cPools::~cPools(void) = default;

	static auto cPools::getPlayerPool(void) -> class cPool<class cPed> *;
	static auto cPools::getVehiclePool(void) -> class cPool<class cAutomobile> *;
	static auto cPools::getObjectPool(void) -> class cPool<class cObject> *;

	private:

};

#endif