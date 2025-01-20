//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\MP\stVehiclePool.hpp"

auto stVehiclePool::getVehicleIDByHandle(class cAutomobile *pAuto) const -> unsigned __int16 {
	static class cAutomobile *pSavedAuto{pAuto};			pSavedAuto = pAuto;
	static unsigned __int16 ui16SavedVehicleID{65535};		ui16SavedVehicleID = 65535;

	this->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh) -> bool {
		const class cAutomobile *pAuto{pRemoteVeh->MPEntity.pGTAEntity};
		if (pAuto != nullptr && pAuto == pSavedAuto) {
			ui16SavedVehicleID = ui16VehicleID;
			return false;
		} return true;
	});

	return ui16SavedVehicleID;
}


auto stVehiclePool::forAllRemoteVehs(bool(__cdecl *pFunc)(const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh)) const -> void {
	for (unsigned __int16 ui16VehicleID{0}; ui16VehicleID < 2000; ++ui16VehicleID) {
		if (this->i32IsListed[ui16VehicleID] && this->i32IsActive[ui16VehicleID]) {
			struct stSAMPVehicle *pRemoteVeh{this->pSAMP_Vehicle[ui16VehicleID]};
			if (pRemoteVeh != nullptr) {
				if (!pFunc(ui16VehicleID, pRemoteVeh)) {
					break;
				}
			}
		}
	} return;
}