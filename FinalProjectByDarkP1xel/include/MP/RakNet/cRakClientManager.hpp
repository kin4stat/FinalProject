//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPRAKCLIENTMANAGER_HPP
#define MPRAKCLIENTMANAGER_HPP

#pragma once

#include "cMP.hpp"

class cRakClientManager final {
	public:
	explicit cRakClientManager(class cMP *pMP);
	auto connect(const char *pIP, const unsigned __int16 ui16Port) const -> bool;
	auto sendPacket(void *pData, const unsigned __int32 ui32DataLenBytes, const unsigned __int32 ui32Priority = 1, const unsigned __int32 ui32Reliability = 7, const __int8 i8OrderingChannel = 1) const -> bool;
	auto sendRPC(unsigned __int8 ui32RPCID, void *pData, const unsigned __int32 ui32DataLenBytes, const unsigned __int32 ui32Priority = 1, const unsigned __int32 ui32Reliability = 7, const __int8 i8OrderingChannel = 1, const bool bShiftTimestamp = false) const -> bool;
	auto sendEnterVehicle(const unsigned __int16 ui16VehicleID, const bool bPassenger) const -> bool;
	auto sendExitVehicle(unsigned __int16 ui16VehicleID) const -> bool;
	auto sendDmgVehicle(const unsigned __int16 ui16VehicleID, const unsigned __int32 ui32BumperDamage, const unsigned __int32 ui32DoorDamage, const unsigned __int8 ui8LightDamage, const unsigned __int8 ui8WheelDamage) const -> bool;
	auto sendSCMEvent(const __int32 i32VehicleID, const __int32 i32ParamA, const __int32 i32ParamB, const __int32 i32EventID) const -> bool;
	auto sendGiveTakeDamage(const bool bGive, const unsigned __int16 ui16PlayerID, const float fDamage, const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32BodyPartID) const -> void;
	auto sendUnkGiveTakeDamage(const unsigned __int16 ui16PlayerID, const float fDamage, const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32BodyPartID) const -> void;
	auto sendCommand(const char *pCMD) const -> void;
	auto sendSay(const char *pMsg) const -> void;
	auto sendVehicleDestroyed(unsigned __int16 ui16VehicleID) const -> bool;
	auto sendPickedUpWeaponPickup(__int16 i16WeaponPickupID) const -> bool;
	auto sendInteriorChange(unsigned __int8 ui8InteriorID) const -> bool;
	auto sendPickedUpPickup(unsigned __int32 ui32PickupID) const -> bool;
	auto sendDeath(const unsigned __int8 ui8Reason, const unsigned __int16 ui16KillerID) const -> bool;
	auto sendMapMarker(class cVector3D vecPos) const -> bool;
	auto sendRequestClass(__int32 i32ClassID) const -> bool;
	auto sendSpawn(void) const -> bool;
	auto sendRequestSpawn(void) const -> bool;
	auto sendMenuQuit(void) const -> bool;
	auto sendMenuSelect(unsigned __int8 ui8Select) const -> bool;
	auto sendClickTextDraw(unsigned __int16 ui16TextDrawID) const -> bool;
	~cRakClientManager(void);

	private:
	class cMP *pMP{nullptr};
};

#endif