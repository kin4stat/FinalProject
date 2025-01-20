//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPVEHICLEINFO_HPP
#define MPVEHICLEINFO_HPP

#pragma once

struct stVehicleInfo final {
	unsigned __int16 ui16VehicleID{0};
	__int32 i32Type{0};
	class cVector3D vecPosition {};
	float fRotation{0};
	unsigned __int8 ui8PrimaryColor{0};
	unsigned __int8 ui8SecondaryColor{0};
	float fHealth{0};
	unsigned __int8 ui8Interior{0};
	unsigned __int32 ui32DoorDamageStatus{0};
	unsigned __int32 ui32PanelDamageStatus{0};
	unsigned __int8 ui8LightDamageStatus{0};
	bool bDoorsLocked{false};
	bool bHasSiren{false};
};

#endif