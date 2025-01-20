//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "MP/RakNet\cRakClientManager.hpp"

cRakClientManager::cRakClientManager(class cMP *pMP) {
	this->pMP = pMP;
	return;
}


auto cRakClientManager::connect(const char *pIP, const unsigned __int16 ui16Port) const -> bool {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			class cRakClient *pRakClientInterface{this->pMP->getMainStructR1()->pRakClientInterface};
			return pRakClientInterface != nullptr ? pRakClientInterface->Connect(pIP, ui16Port, 0, 0, 2) : false;
		}
		case cMP::eVer::e037R3: {
			class cRakClient *pRakClientInterface{this->pMP->getMainStructR3()->pRakClientInterface};
			return pRakClientInterface != nullptr ? pRakClientInterface->Connect(pIP, ui16Port, 0, 0, 2) : false;
		} default: break;
	} return false;
}


auto cRakClientManager::sendPacket(void *pData, const unsigned __int32 ui32DataLenBytes, const unsigned __int32 ui32Priority, const unsigned __int32 ui32Reliability, const __int8 i8OrderingChannel) const -> bool {
	class cBitStream BitStream { pData, ui32DataLenBytes };
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			class cRakClient *pRakClientInterface{this->pMP->getMainStructR1()->pRakClientInterface};
			return pRakClientInterface != nullptr ? pRakClientInterface->Send(&BitStream, ui32Priority, ui32Reliability, i8OrderingChannel) : false;
		}
		case cMP::eVer::e037R3: {
			class cRakClient *pRakClientInterface{this->pMP->getMainStructR3()->pRakClientInterface};
			return pRakClientInterface != nullptr ? pRakClientInterface->Send(&BitStream, ui32Priority, ui32Reliability, i8OrderingChannel) : false;
		} default: break;
	} return false;
}


auto cRakClientManager::sendRPC(unsigned __int8 ui8RPCID, void *pData, const unsigned __int32 ui32DataLenBytes, const unsigned __int32 ui32Priority, const unsigned __int32 ui32Reliability, const __int8 i8OrderingChannel, const bool bShiftTimestamp) const -> bool {
	class cBitStream BitStream { pData, ui32DataLenBytes };
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			class cRakClient *pRakClientInterface{this->pMP->getMainStructR1()->pRakClientInterface};
			return pRakClientInterface != nullptr ? pRakClientInterface->RPC(&ui8RPCID, &BitStream, ui32Priority, ui32Reliability, i8OrderingChannel, bShiftTimestamp) : false;
		}
		case cMP::eVer::e037R3: {
			class cRakClient *pRakClientInterface{this->pMP->getMainStructR3()->pRakClientInterface};
			return pRakClientInterface != nullptr ? pRakClientInterface->RPC(&ui8RPCID, &BitStream, ui32Priority, ui32Reliability, i8OrderingChannel, bShiftTimestamp) : false;
		} default: break;
	} return false;
}


auto cRakClientManager::sendEnterVehicle(const unsigned __int16 ui16VehicleID, const bool bPassenger) const -> bool {
	struct stEnterVehicle EnterVehicle {};
	EnterVehicle.ui16VehicleID = ui16VehicleID;
	EnterVehicle.bPassenger = bPassenger;
	return this->sendRPC(26, &EnterVehicle, sizeof(struct stEnterVehicle));
}


auto cRakClientManager::sendExitVehicle(unsigned __int16 ui16VehicleID) const -> bool {
	return this->sendRPC(154, &ui16VehicleID, sizeof(unsigned __int16));
}


auto cRakClientManager::sendDmgVehicle(const unsigned __int16 ui16VehicleID, const unsigned __int32 ui32BumperDamage, const unsigned __int32 ui32DoorDamage, const unsigned __int8 ui8LightDamage, const unsigned __int8 ui8WheelDamage) const -> bool {
	struct stDamageData DamageVehicle {};
	DamageVehicle.ui16VehicleID = ui16VehicleID;
	DamageVehicle.ui32BumperDamage = ui32BumperDamage;
	DamageVehicle.ui32DoorDamage = ui32DoorDamage;
	DamageVehicle.ui8LightDamage = ui8LightDamage;
	DamageVehicle.ui8WheelDamage = ui8WheelDamage;
	return this->sendRPC(106, &DamageVehicle, sizeof(struct stDamageData));
}


auto cRakClientManager::sendSCMEvent(const __int32 i32VehicleID, const __int32 i32ParamA, const __int32 i32ParamB, const __int32 i32EventID) const -> bool {
	struct stSCMEvent SCMEvent {};
	SCMEvent.i32VehicleID = i32VehicleID;
	SCMEvent.i32ParamA = i32ParamA;
	SCMEvent.i32ParamB = i32ParamB;
	SCMEvent.i32EventID = i32EventID;
	return this->sendRPC(96, &SCMEvent, sizeof(struct stSCMEvent));
}


auto cRakClientManager::sendGiveTakeDamage(const bool bGive, const unsigned __int16 ui16PlayerID, const float fDamage, const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32BodyPartID) const -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			reinterpret_cast<void(__stdcall *)(unsigned __int16 ui16PlayerID, float fDamage, unsigned __int32 ui32WeaponID, unsigned __int32 ui32BodyPartID)>(cMP::ui32SAMPBase + (bGive ? 0x6770 : 0x6660))(ui16PlayerID, fDamage * 3.030303F, ui32WeaponID, ui32BodyPartID);
			break;
		}
		case cMP::eVer::e037R3: {
			reinterpret_cast<void(__stdcall *)(unsigned __int16 ui16PlayerID, float fDamage, unsigned __int32 ui32WeaponID, unsigned __int32 ui32BodyPartID)>(cMP::ui32SAMPBase + (bGive ? 0x6780 : 0x6670))(ui16PlayerID, fDamage * 3.030303F, ui32WeaponID, ui32BodyPartID);
			break;
		} default: break;
	} return;
}


auto cRakClientManager::sendUnkGiveTakeDamage(const unsigned __int16 ui16PlayerID, const float fDamage, const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32BodyPartID) const -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			reinterpret_cast<void(__stdcall *)(unsigned __int16 ui16PlayerID, float fDamage, unsigned __int32 ui32WeaponID, unsigned __int32 ui32BodyPartID)>(cMP::ui32SAMPBase + 0x6880)(ui16PlayerID, fDamage * 3.030303F, ui32WeaponID, ui32BodyPartID);
			break;
		}
		case cMP::eVer::e037R3: {
			reinterpret_cast<void(__stdcall *)(unsigned __int16 ui16PlayerID, float fDamage, unsigned __int32 ui32WeaponID, unsigned __int32 ui32BodyPartID)>(cMP::ui32SAMPBase + 0x6890)(ui16PlayerID, fDamage * 3.030303F, ui32WeaponID, ui32BodyPartID);
			break;
		} default: break;
	} return;
}


auto cRakClientManager::sendCommand(const char *pCMD) const -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			reinterpret_cast<void(__stdcall *)(const char *pCMD)>(cMP::ui32SAMPBase + 0x65C60)(pCMD);
			break;
		}
		case cMP::eVer::e037R3: {
			reinterpret_cast<void(__stdcall *)(const char *pCMD)>(cMP::ui32SAMPBase + 0x69190)(pCMD);
			break;
		} default: break;
	} return;
}


auto cRakClientManager::sendSay(const char *pMsg) const -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			reinterpret_cast<void(__stdcall *)(const char *pMsg)>(cMP::ui32SAMPBase + 0x57F0)(pMsg);
			break;
		}
		case cMP::eVer::e037R3: {
			reinterpret_cast<void(__stdcall *)(const char *pMsg)>(cMP::ui32SAMPBase + 0x5820)(pMsg);
			break;
		} default: break;
	} return;
}


auto cRakClientManager::sendVehicleDestroyed(unsigned __int16 ui16VehicleID) const -> bool {
	return this->sendRPC(136, &ui16VehicleID, sizeof(unsigned __int16));
}


auto cRakClientManager::sendPickedUpWeaponPickup(__int16 i16WeaponPickupID) const -> bool {
	return this->sendRPC(97, &i16WeaponPickupID, sizeof(__int16));
}


auto cRakClientManager::sendInteriorChange(unsigned __int8 ui8InteriorID) const -> bool {
	return this->sendRPC(118, &ui8InteriorID, sizeof(unsigned __int8));
}


auto cRakClientManager::sendPickedUpPickup(unsigned __int32 ui32PickupID) const -> bool {
	return this->sendRPC(131, &ui32PickupID, sizeof(unsigned __int32));
}


auto cRakClientManager::sendDeath(const unsigned __int8 ui8Reason, const unsigned __int16 ui16KillerID) const -> bool {
	struct stDeath Death {};
	Death.ui8Reason = ui8Reason;
	Death.ui16KillerID = ui16KillerID;
	return this->sendRPC(53, &Death, sizeof(struct stDeath));
}


auto cRakClientManager::sendMapMarker(class cVector3D vecPos) const -> bool {
	return this->sendRPC(119, &vecPos, sizeof(class cVector3D));
}


auto cRakClientManager::sendRequestClass(__int32 i32ClassID) const -> bool {
	return this->sendRPC(128, &i32ClassID, sizeof(__int32));
}


auto cRakClientManager::sendSpawn(void) const -> bool {
	return this->sendRPC(52, nullptr, 0);
}


auto cRakClientManager::sendRequestSpawn(void) const -> bool {
	return this->sendRPC(129, nullptr, 0);
}


auto cRakClientManager::sendMenuQuit(void) const -> bool {
	return this->sendRPC(140, nullptr, 0);
}


auto cRakClientManager::sendMenuSelect(unsigned __int8 ui8Select) const -> bool {
	return this->sendRPC(132, &ui8Select, sizeof(unsigned __int8));
}


auto cRakClientManager::sendClickTextDraw(unsigned __int16 ui16TextDrawID) const -> bool {
	return this->sendRPC(83, &ui16TextDrawID, sizeof(unsigned __int16));
}


cRakClientManager::~cRakClientManager(void) {
	this->pMP = nullptr;
	return;
}