//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPONFOOTDATA_HPP
#define MPONFOOTDATA_HPP

#pragma once

struct stOnFootData final {
	struct stControllerState controllerState {};
	class cVector3D vecPosition {};
	class cVector4D vecQuaternion {};
	unsigned __int8 ui8Health{0};
	unsigned __int8 ui8Armor{0};
	unsigned __int8 ui8CurrentWeapon : 6;
	unsigned __int8 ui8SpecialKey : 2;
	unsigned __int8 ui8SpecialAction{0};
	class cVector3D vecMoveSpeed {};
	class cVector3D vecSurfingOffsets {};
	unsigned __int16 ui16SurfingVehicleID{0};
	struct stAnimation Animation {};
};

#endif