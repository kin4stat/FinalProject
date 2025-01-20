//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAHANDLINGDATA_HPP
#define SAHANDLINGDATA_HPP

#pragma once

#include "Vector/cVector3D.hpp"
#include "SA/cTransmission.hpp"

class cAutoHandlingData final {
	public:
	__int32 i32VehicleID{0};
	float fMass{0};
	float fField_8{0};
	float fTurnMass{0};
	float fDragMult{0};
	class cVector3D vecCentreOfMass {};
	unsigned __int8 ui8PercentSubmerged{0};
	__int8 i8Field_21{0};
	__int8 i8Field_22{0};
	__int8 i8Field_23{0};
	float fBuoyancyConstant{0};
	float fTractionMultiplier{0};
	class cTransmission transmissionData {};
	float fBrakeDeceleration{0};
	float fBrakeBias{0};
	bool bABS{false};
	__int8 i8Field_9D{0};
	__int8 i8Field_9E{0};
	__int8 i8Field_9F{0};
	float fSteeringLock{0};
	float fTractionLoss{0};
	float fTractionBias{0};
	float fSuspensionForceLevel{0};
	float fSuspensionDampingLevel{0};
	float fSuspensionHighSpdComDamp{0};
	float fSuspensionUpperLimit{0};
	float fSuspensionLowerLimit{0};
	float fSuspensionBiasBetweenFrontAndRear{0};
	float fSuspensionAntiDiveMultiplier{0};
	float fCollisionDamageMultiplier{0};
	union {
		struct stModelFlags final {
			unsigned __int32 bIsVan : 1;
			unsigned __int32 bIsBus : 1;
			unsigned __int32 bIsLow : 1;
			unsigned __int32 bIsBig : 1;
			unsigned __int32 bReverseBonnet : 1;
			unsigned __int32 bHangingBoot : 1;
			unsigned __int32 bTailgateBoot : 1;
			unsigned __int32 bNoswingBoot : 1;
			unsigned __int32 bNoDoors : 1;
			unsigned __int32 bTandemSeats : 1;
			unsigned __int32 bSitInBoat : 1;
			unsigned __int32 bConvertible : 1;
			unsigned __int32 bNoExhaust : 1;
			unsigned __int32 bDoubleExhaust : 1;
			unsigned __int32 bNo1fpsLookBehind : 1;
			unsigned __int32 bForceDoorCheck : 1;
			unsigned __int32 bAxleFNotlit : 1;
			unsigned __int32 bAxleFSolid : 1;
			unsigned __int32 bAxleFMcpherson : 1;
			unsigned __int32 bAxleFReverse : 1;
			unsigned __int32 bAxleRNotlit : 1;
			unsigned __int32 bAxleRSolid : 1;
			unsigned __int32 bAxleRMcpherson : 1;
			unsigned __int32 bAxleRReverse : 1;
			unsigned __int32 bIsBike : 1;
			unsigned __int32 bIsHeli : 1;
			unsigned __int32 bIsPlane : 1;
			unsigned __int32 bIsBoat : 1;
			unsigned __int32 bBouncePanels : 1;
			unsigned __int32 bDoubleRwheels : 1;
			unsigned __int32 bForceGroundClearance : 1;
			unsigned __int32 bIsHatchback : 1;
		} ModelFlags;
		unsigned __int32 ui32ModelFlags{0};
	};
	union {
		struct stHandlingFlags final {
			unsigned __int32 b1gBoost : 1;
			unsigned __int32 b2gBoost : 1;
			unsigned __int32 bNpcAntiRoll : 1;
			unsigned __int32 bNpcNeutralHandl : 1;
			unsigned __int32 bNoHandbrake : 1;
			unsigned __int32 bSteerRearwheels : 1;
			unsigned __int32 bHbRearwheelSteer : 1;
			unsigned __int32 bAltSteerOpt : 1;
			unsigned __int32 bWheelFNarrow2 : 1;
			unsigned __int32 bWheelFNarrow : 1;
			unsigned __int32 bWheelFWide : 1;
			unsigned __int32 bWheelFWide2 : 1;
			unsigned __int32 bWheelRNarrow2 : 1;
			unsigned __int32 bWheelRNarrow : 1;
			unsigned __int32 bWheelRWide : 1;
			unsigned __int32 bWheelRWide2 : 1;
			unsigned __int32 bHydraulicGeom : 1;
			unsigned __int32 bHydraulicInst : 1;
			unsigned __int32 bHydraulicNone : 1;
			unsigned __int32 bNosInst : 1;
			unsigned __int32 bOffroadAbility : 1;
			unsigned __int32 bOffroadAbility2 : 1;
			unsigned __int32 bHalogenLights : 1;
			unsigned __int32 bProcRearwheelFirst : 1;
			unsigned __int32 bUseMaxspLimit : 1;
			unsigned __int32 bLowRider : 1;
			unsigned __int32 bStreetRacer : 1;
			unsigned __int32 bSwingingChassis : 1;
		} HandlingFlags;
		unsigned __int32 ui32HandlingFlags{0};
	};
	float fSeatOffsetDistance{0};
	unsigned __int32 ui32MonetaryValue{0};
	unsigned __int8 ui8FrontLights{0};
	unsigned __int8 ui8RearLights{0};
	unsigned __int8 ui8AnimGroup{0};
	__int8 i8Field_DF{0};

	explicit cAutoHandlingData::cAutoHandlingData(void) = default;
	cAutoHandlingData::~cAutoHandlingData(void) = default;

	private:
};

#endif