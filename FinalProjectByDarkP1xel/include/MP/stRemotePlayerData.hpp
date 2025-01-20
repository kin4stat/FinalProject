//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPREMOTEPLAYERDATA_HPP
#define MPREMOTEPLAYERDATA_HPP

#pragma once

struct stRemotePlayerData037R1 final {
	struct stSAMPPed *pSAMP_Actor{nullptr};
	struct stSAMPVehicle *pSAMP_Vehicle{nullptr};
	unsigned __int8 ui8TeamID{0};
	unsigned __int8 ui8PlayerState{0};
	unsigned __int8 ui8SeatID{0};
	__int32 i32Unk1{0};
	__int32 i32PassengerDriveBy{0};
	__int8 i8Unk2[64];
	class cVector3D vecPositionDifference {};
	class cVector4D vecVehicleRoll {};
	__int32 i32Unk3[3];
	class cVector3D vecOnFootPosition {};
	class cVector3D vecOnFootMoveSpeed {};
	class cVector3D vecInVehiclePosition {};
	class cVector3D vecInVehicleMoveSpeed {};
	unsigned __int16 ui16PlayerID{0};
	unsigned __int16 ui16VehicleID{0};
	__int32 i32Unk4{0};
	__int32 i32ShowNameTag{0};
	__int32 i32HasJetPack{0};
	unsigned __int8 ui8SpecialAction{0};
	__int32 i32Unk5[3];
	struct stOnFootData onFootData {};
	struct stInCarData inCarData {};
	struct stTrailerData trailerData {};
	struct stPassengerData passengerData {};
	struct stAimData aimData {};
	float fActorArmor{0};
	float fActorHealth{0};
	struct stAnimation Animation {};
	__int8 i8UpdateType{0};
	unsigned long ulTick{0};
	unsigned long ulLastStreamedInTick{0};
	__int32 i32PerformingCustomAnimation{0};
	__int32 i32AFKState{0};
	struct stHeadSync headSyncData {};
	__int32 i32GlobalMarkerLoaded{0};
	__int32 i32GlobalMarkerLocation[3];
	unsigned __int32 ui32GlobalMarker_GTAID{0};
};

struct stRemotePlayerData037R3 final {
	struct stSAMPPed *pSAMP_Actor{nullptr};
	struct stSAMPVehicle *pSAMP_Vehicle{nullptr};
	unsigned __int16 ui16PlayerID{0};
	unsigned __int16 ui16VehicleID{0};
	__int32 i32Unk1{0};
	__int32 i32ShowNameTag{0};
	__int32 i32HasJetPack{0};
	unsigned __int8 ui8SpecialAction{0};
	struct stInCarData inCarData {};
	struct stTrailerData trailerData {};
	struct stAimData aimData {};
	struct stPassengerData passengerData {};
	struct stOnFootData onFootData {};
	unsigned __int8 ui8TeamID{0};
	unsigned __int8 ui8PlayerState{0};
	unsigned __int8 ui8SeatID{0};
	__int32 i32Unk2{0};
	__int32 i32PassengerDriveBy{0};
	class cVector3D vecOnFootPosition {};
	class cVector3D vecOnFootMoveSpeed {};
	class cVector3D vecInVehiclePosition {};
	class cVector3D vecInVehicleMoveSpeed {};
	__int8 i8Unk3[76];
	class cVector3D vecPositionDifference {};
	class cVector4D vecVehicleRoll {};
	float fActorArmor{0};
	float fActorHealth{0};
	__int8 i8Unk4[12];
	struct stAnimation Animation {};
	__int8 i8UpdateType{0};
	unsigned long ulTick{0};
	unsigned long ulLastStreamedInTick{0};
	__int32 i32PerformingCustomAnimation{0};
	__int32 i32AFKState{0};
	struct stHeadSync headSyncData {};
	__int32 i32GlobalMarkerLoaded{0};
	__int32 i32GlobalMarkerLocation[3];
	unsigned __int32 ui32GlobalMarker_GTAID{0};
};

#endif