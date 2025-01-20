//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPINCARDATA_HPP
#define MPINCARDATA_HPP

#pragma once

struct stInCarData final {
	unsigned __int16 ui16VehicleID{0};
	struct stControllerState controllerState {};
	class cVector4D vecQuaternion {};
	class cVector3D vecPosition {};
	class cVector3D vecMoveSpeed {};
	float fVehicleHealth{0};
	unsigned __int8 ui8PlayerHealth{0};
	unsigned __int8 ui8PlayerArmor{0};
	unsigned __int8 ui8CurrentWeapon : 6;
	unsigned __int8 ui8SpecialKey : 2;
	bool bSiren{false};
	bool bLandingGearState{false};
	unsigned __int16 ui16TrailerID{0};
	union {
		float fBikeLean;
		float fTrainSpeed{0};
		unsigned __int16 ui16HydraThrustAngle[2];
	};
};

#endif