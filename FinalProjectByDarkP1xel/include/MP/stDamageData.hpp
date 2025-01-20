//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPDAMAGEDATA_HPP
#define MPDAMAGEDATA_HPP

#pragma once

struct stDamageData final {
	unsigned __int16 ui16VehicleID{0};
	unsigned __int32 ui32BumperDamage{0};
	unsigned __int32 ui32DoorDamage{0};
	unsigned __int8 ui8LightDamage{0};
	unsigned __int8 ui8WheelDamage{0};
};

#endif