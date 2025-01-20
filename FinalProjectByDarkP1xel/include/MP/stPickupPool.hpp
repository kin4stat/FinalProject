//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPICKUPPOOL_HPP
#define MPPICKUPPOOL_HPP

#pragma once

#include "MP/stPickup.hpp"

struct stPickupPool final {
	unsigned __int32 ui32PickupsCount{0};
	unsigned __int32 ui32GTAPickupID[4096];
	unsigned __int32 ui32PickupID[4096];
	unsigned __int32 ui32TimePickup[4096];
	unsigned __int8 ui8Unk[4096 * 3];
	struct stPickup pickup[4096]{};

	explicit stPickupPool(void) = delete;
	auto forAllPickups(bool(__cdecl *pFunc)(const unsigned __int16 ui16PickupID, struct stPickup *pPickUp)) -> void;
	~stPickupPool(void) = delete;
};

#endif