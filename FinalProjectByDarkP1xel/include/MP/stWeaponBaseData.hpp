//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPWEAPONBASEDATA_HPP
#define MPWEAPONBASEDATA_HPP

#pragma once

struct stWeaponBaseData final {
	unsigned __int16 ui16AimingAtPID{0};
	unsigned __int16 ui16AimedActor{0};
	unsigned __int8 ui8CurrentWeapon{0};
	unsigned __int8 ui8WeaponInventory[13];
	__int32 i32WeaponAmmo[13];
};

#endif