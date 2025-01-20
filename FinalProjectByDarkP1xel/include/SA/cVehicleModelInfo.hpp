//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAVEHICLEMODELINFO_HPP
#define SAVEHICLEMODELINFO_HPP

#pragma once

#include "include\SA\cClumpModelInfo.hpp"
#include "include\SA\cVehicleStructure.hpp"

class cVehicleModelInfo final {
	public:
	class cClumpModelInfo clumpModelInfo {};
	struct stRpMaterial *pPlateMaterial{nullptr};
	char cPlateText[8];
	__int8 i8Field_30{0};
	unsigned __int8 ui8PlateType{0};
	char cGameName[8];
	__int16 i16Pad3A{0};
	unsigned __int32 ui32VehicleType{0};
	float fWheelSizeFront{0};
	float fWheelSizeRear{0};
	unsigned __int16 ui16WheelModelIndex{0};
	unsigned __int16 ui16HandlingID{0};
	unsigned __int8 ui8NumDoors{0};
	unsigned __int8 ui8VehicleClass{0};
	unsigned __int8 ui8Flags{0};
	unsigned __int8 ui8WheelUpgradeClass{0};
	unsigned __int8 ui8TimesUsed{0};
	__int8 i8Field_51{0};
	unsigned __int16 ui16Frq{0};
	unsigned __int32 ui32Comprules{0};
	float fBikeSteerAngle{0};
	class cVehicleStructure *pVehicleStructure{nullptr};
	__int8 i8Field_60[464];
	struct stRpMaterial *pDirtMaterials[32];
	unsigned __int8 ui8PrimaryColors[8];
	unsigned __int8 ui8SecondaryColors[8];
	unsigned __int8 ui8TertiaryColors[8];
	unsigned __int8 ui8QuaternaryColors[8];
	unsigned __int8 ui8NumColorVariations{0};
	unsigned __int8 ui8LastColorVariation{0};
	unsigned __int8 ui8CurrentPrimaryColor{0};
	unsigned __int8 ui8CurrentSecondaryColor{0};
	unsigned __int8 ui8CurrentTertiaryColor{0};
	unsigned __int8 ui8CurrentQuaternaryColor{0};
	__int16 i16Upgrades[18];
	__int16 i16RemapTxds[4];
	__int16 i16Pad302{0};
	class cAnimBlock *pAnimBlock{nullptr};

	explicit cVehicleModelInfo::cVehicleModelInfo(void) = default;
	cVehicleModelInfo::~cVehicleModelInfo(void) = default;

	private:
};

#endif