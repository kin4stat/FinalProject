//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAVEHICLESTRUCTURE_HPP
#define SAVEHICLESTRUCTURE_HPP

#pragma once

#include "SA/cUpgradePosnDesc.hpp"

class cVehicleStructure final {
	public:
	class cVector3D vecDummyPos[15]{};
	class cUpgradePosnDesc descUpgrades[18]{};
	struct stRpAtomic *pExtras[6];
	unsigned __int8 ui8NumExtras{0};
	__int8 i8Pad[3];
	unsigned __int32 ui32MaskComponentsDamagable{0};

	explicit cVehicleStructure::cVehicleStructure(void) = delete;
	cVehicleStructure::~cVehicleStructure(void) = delete;

	private:
};

#endif