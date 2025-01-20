//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPLOCALPLAYER_HPP
#define MPLOCALPLAYER_HPP

#pragma once

#include "include\cMP.hpp"

struct stLocalPlayer037R1 final {
	struct stSAMPPed *pSAMP_Actor{nullptr};
	struct stAnimation Animation {};
	__int32 i32Unk1{0};
	__int32 i32IsActive{0};
	__int32 i32IsWasted{0};
	unsigned __int16 ui16CurrentVehicleID{0};
	unsigned __int16 ui16LastVehicleID{0};
	struct stOnFootData onFootData {};
	struct stPassengerData passengerData {};
	struct stTrailerData trailerData {};
	struct stInCarData inCarData {};
	struct stAimData aimData {};
	struct stSpawnInfo spawnInfo {};
	__int32 i32IsActorAlive{0};
	__int32 i32SpawnClassLoaded{0};
	unsigned long ulSpawnSelectionTick{0};
	unsigned __int32 ui32SpawnSelectionStart{0};
	__int32 i32IsSpectating{0};
	unsigned __int8 ui8TeamID{0};
	__int16 i16Unk2{0};
	unsigned long ulSendTick{0};
	unsigned long ulSpectateTick{0};
	unsigned long ulAimTick{0};
	unsigned long ulStatsTick{0};
	unsigned long ulWeapTick{0};
	struct stWeaponBaseData weaponBaseData {};
	__int32 i32PassengerDriveBy{0};
	unsigned __int8 ui8CurrentInterior{0};
	__int32 i32IsInRCVehicle{0};
	struct stCameraTarget cameraTarget {};
	struct stHeadSync headSyncData {};
	unsigned long ulHeadSyncTick{0};
	unsigned long ulHeadAnyTick{0};
	unsigned __int8 ui8Space3[255 + 1];
	struct stSurfData037R1 surfData {};
	struct stClassSelection classSelection {};
	unsigned long ulZoneDisplayingTick{0};
	struct stSpectating Spectating {};
	struct stDamageData vehicleDamageData {};

	explicit stLocalPlayer037R1::stLocalPlayer037R1(void) = delete;
	auto stLocalPlayer037R1::spawn(void) -> void;
	stLocalPlayer037R1::~stLocalPlayer037R1(void) = delete;
};

struct stLocalPlayer037R3 final {
	struct stSAMPPed *pSAMP_Actor{nullptr};
	struct stInCarData inCarData {};
	struct stAimData aimData {};
	struct stTrailerData trailerData {};
	struct stOnFootData onFootData {};
	struct stPassengerData passengerData {};
	__int32 i32IsActive{0};
	__int32 i32IsWasted{0};
	unsigned __int16 ui16CurrentVehicleID{0};
	unsigned __int16 ui16LastVehicleID{0};
	struct stAnimation Animation {};
	__int32 i32Unk1{0};
	__int32 i32IsSpectating{0};
	unsigned __int8 ui8TeamID{0};
	__int16 i16Unk2{0};
	unsigned long ulSendTick{0};
	unsigned long ulSpectateTick{0};
	unsigned long ulAimTick{0};
	unsigned long ulStatsTick{0};
	struct stCameraTarget cameraTarget {};
	unsigned long ulLastCameraTargetTick{0};
	struct stHeadSync headSyncData {};
	unsigned long ulHeadSyncTick{0};
	__int32 i32SpawnClassLoaded{0};
	unsigned long ulSpawnSelectionTick{0};
	unsigned __int32 ui32SpawnSelectionStart{0};
	struct stSpawnInfo spawnInfo {};
	__int32 i32HasSpawnInfo{0};
	unsigned long ulWeapTick{0};
	struct stWeaponBaseData weaponBaseData {};
	__int32 i32PassengerDriveBy{0};
	unsigned __int8 ui8CurrentInterior{0};
	__int32 i32IsInRCVehicle{0};
	char cName[255 + 1];
	struct stSurfData037R3 surfData {};
	struct stClassSelection classSelection {};
	unsigned long ulZoneDisplayingTick{0};
	struct stSpectating Spectating {};
	struct stDamageData vehicleDamageData {};

	explicit stLocalPlayer037R3::stLocalPlayer037R3(void) = delete;
	auto stLocalPlayer037R3::spawn(void) -> void;
	stLocalPlayer037R3::~stLocalPlayer037R3(void) = delete;
};

#endif