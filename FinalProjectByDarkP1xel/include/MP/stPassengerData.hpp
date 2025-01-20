//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPASSENGERDATA_HPP
#define MPPASSENGERDATA_HPP

#pragma once

struct stPassengerData final {
	unsigned __int16 ui16VehicleID{0};
	unsigned __int8	ui8SeatID : 6;
	bool bDriveBy : 1;
	bool bCuffed : 1;
	unsigned __int8	ui8CurrentWeapon : 6;
	unsigned __int8	ui8SpecialKey : 2;
	unsigned __int8	ui8Health{0};
	unsigned __int8	ui8Armor{0};
	struct stControllerState controllerState {};
	class cVector3D vecPosition {};
};

#endif