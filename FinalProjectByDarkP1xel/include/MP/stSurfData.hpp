//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPSURFDATA_HPP
#define MPSURFDATA_HPP

#pragma once

struct stSurfData037R1 final {
	__int32 i32IsSurfing{0};
	class cVector3D vecSurfPosition {};
	__int32 i32IsActive{0};
	unsigned __int16 ui16SurfingVehicleID{0};
	unsigned __int32 ui32SurfTick{0};
	struct stSAMPVehicle *pSurfingVehicle{nullptr};
	__int32 i32Stuck{0};
	__int32 i32SurfMode{0};
};

struct stSurfData037R3 final {
	unsigned __int16 ui16SurfingVehicleID{0};
	unsigned __int32 ui32SurfTick{0};
	struct stSAMPVehicle *pSurfingVehicle{nullptr};
	__int32 i32Stuck{0};
	__int32 i32IsActive{0};
	class cVector3D vecSurfPosition {};
	__int32 i32Unk{0};
	__int32 i32SurfMode{0};
};

#endif