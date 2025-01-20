//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cHandlingDataMgr.hpp"

auto cHandlingDataMgr::convertDataToWorldUnits(const class cAutoHandlingData *pAutoHandling) -> void {
	reinterpret_cast<void(__thiscall *)(class cHandlingDataMgr *pThis, const class cAutoHandlingData *pHandling)>(0x6F5010)(this, pAutoHandling);
	return;
}


auto cHandlingDataMgr::makeElegyDriftMode(const unsigned __int32 ui32Status) -> void {
	class cAutoHandlingData *pElegyData{&this->autoHandling[120]};
	class cTransmission *pElegyTransmission{&pElegyData->transmissionData};
	class cVector3D *pCentreOfMass{&pElegyData->vecCentreOfMass};
	if (ui32Status) {
		pElegyData->fMass = 1260.0F;
		pElegyData->fField_8 = 0.000793651F;
		pElegyData->fTurnMass = 2210.0F;
		pElegyData->fDragMult = 2.0F;
		pElegyData->fBuoyancyConstant = 13.44F;
		pElegyData->fTractionMultiplier = 0.60F;
		pElegyData->fBrakeDeceleration = 0.0062F;
		pElegyData->fSteeringLock = 50.0F;
		pElegyData->fTractionLoss = 0.75F;
		pElegyData->fTractionBias = 0.57F;
		pElegyData->fSuspensionForceLevel = 1.2F;
		pElegyData->fSuspensionHighSpdComDamp = 0.01F;
		pElegyData->fSuspensionUpperLimit = 0.3F;
		pElegyData->fSuspensionLowerLimit = -0.01F;
		pElegyData->fCollisionDamageMultiplier = 0.952381F;
		pElegyData->ui32ModelFlags = 0xC0002804;
		pElegyData->ui32HandlingFlags = 0x40000004;
		pElegyData->ui32MonetaryValue = 135000;

		pCentreOfMass->fY = 0.1F;
		pCentreOfMass->fZ = -0.9F;

		pElegyTransmission->ui8DriveType = 52;
		pElegyTransmission->ui32HandlingFlags = 0x40000004;
		pElegyTransmission->fEngineAcceleration = 0.0016F;
		pElegyTransmission->fEngineInertia = 1.0F;
		pElegyTransmission->fMaxGearVelocity = 1.23467F;
		pElegyTransmission->fMinGearVelocity = -0.308667F;

		pElegyTransmission->transmGears[0].fMaxVelocity = -0.308667F;
		pElegyTransmission->transmGears[0].fChangeDownVelocity = -0.308667F;

		pElegyTransmission->transmGears[1].fMaxVelocity = 0.345707F;
		pElegyTransmission->transmGears[1].fChangeUpVelocity = 0.230483F;

		pElegyTransmission->transmGears[2].fMaxVelocity = 0.567948F;
		pElegyTransmission->transmGears[2].fChangeUpVelocity = 0.493875F;
		pElegyTransmission->transmGears[2].fChangeDownVelocity = 0.145197F;

		pElegyTransmission->transmGears[3].fMaxVelocity = 0.790188F;
		pElegyTransmission->transmGears[3].fChangeUpVelocity = 0.716116F;
		pElegyTransmission->transmGears[3].fChangeDownVelocity = 0.439048F;

		pElegyTransmission->transmGears[4].fMaxVelocity = 1.01243F;
		pElegyTransmission->transmGears[4].fChangeUpVelocity = 0.938356F;
		pElegyTransmission->transmGears[4].fChangeDownVelocity = 0.661289F;

		pElegyTransmission->transmGears[5].fMaxVelocity = 1.23467F;
		pElegyTransmission->transmGears[5].fChangeUpVelocity = 1.23467F;
		pElegyTransmission->transmGears[5].fChangeDownVelocity = 0.883529F;
	} else {
		pElegyData->fMass = 1500.0F;
		pElegyData->fField_8 = 0.000666667F;
		pElegyData->fTurnMass = 3500.0F;
		pElegyData->fDragMult = 2.2F;
		pElegyData->fBuoyancyConstant = 16.0F;
		pElegyData->fTractionMultiplier = 0.65F;
		pElegyData->fBrakeDeceleration = 0.0032F;
		pElegyData->fSteeringLock = 35.0F;
		pElegyData->fTractionLoss = 0.9F;
		pElegyData->fTractionBias = 0.5F;
		pElegyData->fSuspensionForceLevel = 1.0F;
		pElegyData->fSuspensionHighSpdComDamp = 0;
		pElegyData->fSuspensionUpperLimit = 0.28F;
		pElegyData->fSuspensionLowerLimit = -0.1F;
		pElegyData->fCollisionDamageMultiplier = 0.8F;
		pElegyData->ui32ModelFlags = 0x40002804;
		pElegyData->ui32HandlingFlags = 0x4000001;
		pElegyData->ui32MonetaryValue = 35000;

		pCentreOfMass->fY = 0.3F;
		pCentreOfMass->fZ = -0.15F;

		pElegyTransmission->ui8DriveType = 82;
		pElegyTransmission->ui32HandlingFlags = 0x4000001;
		pElegyTransmission->fEngineAcceleration = 0.00224F;
		pElegyTransmission->fEngineInertia = 5.0F;
		pElegyTransmission->fMaxGearVelocity = 0.985335F;
		pElegyTransmission->fMinGearVelocity = -0.246334F;

		pElegyTransmission->transmGears[0].fMaxVelocity = -0.246334F;
		pElegyTransmission->transmGears[0].fChangeDownVelocity = -0.246334F;

		pElegyTransmission->transmGears[1].fMaxVelocity = 0.275894F;
		pElegyTransmission->transmGears[1].fChangeUpVelocity = 0.183938F;

		pElegyTransmission->transmGears[2].fMaxVelocity = 0.453254F;
		pElegyTransmission->transmGears[2].fChangeUpVelocity = 0.39414F;
		pElegyTransmission->transmGears[2].fChangeDownVelocity = 0.115875F;

		pElegyTransmission->transmGears[3].fMaxVelocity = 0.630614F;
		pElegyTransmission->transmGears[3].fChangeUpVelocity = 0.5715F;
		pElegyTransmission->transmGears[3].fChangeDownVelocity = 0.350385F;

		pElegyTransmission->transmGears[4].fMaxVelocity = 0.807975F;
		pElegyTransmission->transmGears[4].fChangeUpVelocity = 0.74886F;
		pElegyTransmission->transmGears[4].fChangeDownVelocity = 0.527745F;

		pElegyTransmission->transmGears[5].fMaxVelocity = 0.985335F;
		pElegyTransmission->transmGears[5].fChangeUpVelocity = 0.985335F;
		pElegyTransmission->transmGears[5].fChangeDownVelocity = 0.705106F;
	} return;
}