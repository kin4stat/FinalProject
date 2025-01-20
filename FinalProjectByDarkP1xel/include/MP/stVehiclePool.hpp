//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPVEHICLEPOOL_HPP
#define MPVEHICLEPOOL_HPP

#pragma once

#include "cMP.hpp"

struct stVehiclePool final {
	__int32 i32VehicleCount{0};
	struct stVehicleInfo vehInfoEntry[100]{};
	__int32 i32IsNotEmpty[100];
	struct stSAMPVehicle *pSAMP_Vehicle[2000];
	__int32 i32IsListed[2000];
	class cAutomobile *pGTA_Vehicle[2000];
	__int32 i32Unk1[2000];
	unsigned __int16 ui16LastUnDrivenID[2000];
	unsigned long ulLastUnDrivenProcessTick[2000];
	__int32 i32IsActive[2000];
	__int32 i32IsDestroyed[2000];
	unsigned long ulTickWhenDestroyed[2000];
	class cVector3D vecSpawnPos[2000]{};
	__int32 i32NeedsToInitializeLicensePlates{0};

	explicit stVehiclePool(void) = delete;
	auto getVehicleIDByHandle(class cAutomobile *pAuto) const -> unsigned __int16;
	auto forAllRemoteVehs(bool(__cdecl *pFunc)(const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh)) const -> void;
	~stVehiclePool(void) = delete;
};

#endif