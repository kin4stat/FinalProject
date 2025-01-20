//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPWEAPONUPDATE_HPP
#define MPWEAPONUPDATE_HPP

#pragma once

#include "include\MP\stWeaponSlot.hpp"

struct stWeaponUpdate final {
	unsigned __int16 ui16TargerPlayerID{0};
	unsigned __int16 ui16Unk{0};
	struct stWeaponSlot weaponSlots[13] {};
};

#endif