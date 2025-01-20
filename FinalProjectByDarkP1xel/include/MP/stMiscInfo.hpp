//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPMISCINFO_HPP
#define MPMISCINFO_HPP

#pragma once

#include "Vector/cVector3D.hpp"

struct stMiscInfo037R1 final {
	struct stAudio *pAudio{nullptr};
	struct stCamera *pCamera{nullptr};
	class cPed *pPlayerPed{nullptr};
	class cVector3D vecCheckpointPosition {};
	class cVector3D vecCheckpointSize {};
	unsigned __int32 ui32CheckpointEnabled{0};
	void *pCheckpointGTAHandle{nullptr};
	class cVector3D vecRacingCheckpointCurrentPosition {};
	class cVector3D vecRacingCheckpointNextPosition {};
	float fRacingCheckpointSize{0};
	unsigned __int8 ui8RacingCheckpointType{0};
	unsigned __int32 ui32RacingCheckpointEnabled{0};
	void *pRacingCheckpointGTAMarker{nullptr};
	void *pRacingCheckpointGTAHandle{nullptr};
	unsigned __int32 ui32CursorMode{0};
	unsigned __int32 ui32InputEnableWaitFrames{0};
	unsigned __int32 ui32ClockEnabled{0};
	__int32 i32Field_61{0};
	unsigned __int32 ui32HeadMove{0};
	unsigned __int32 ui32FrameLimiter{0};
	__int8 i8Field_6D{0};
	bool bKeepLoadedVehicleModels[212];

	explicit stMiscInfo037R1::stMiscInfo037R1(void) = delete;
	stMiscInfo037R1::~stMiscInfo037R1(void) = delete;
};

struct stMiscInfo037R3 final {
	struct stAudio *pAudio{nullptr};
	struct stCamera *pCamera{nullptr};
	class cPed *pPlayerPed{nullptr};
	class cVector3D vecRacingCheckpointCurrentPosition {};
	class cVector3D vecRacingCheckpointNextPosition {};
	float fRacingCheckpointSize{0};
	unsigned __int8 ui8RacingCheckpointType{0};
	unsigned __int32 ui32RacingCheckpointEnabled{0};
	void *pRacingCheckpointGTAMarker{nullptr};
	void *pRacingCheckpointGTAHandle{nullptr};
	class cVector3D vecCheckpointPosition {};
	class cVector3D vecCheckpointSize {};
	unsigned __int32 ui32CheckpointEnabled{0};
	void *pCheckpointGTAHandle{nullptr};
	__int32 i32Field_61{0};
	unsigned __int32 ui32HeadMove{0};
	unsigned __int32 ui32FrameLimiter{0};
	unsigned __int32 ui32CursorMode{0};
	unsigned __int32 ui32InputEnableWaitFrames{0};
	unsigned __int32 ui32ClockEnabled{0};
	__int8 i8Field_6D{0};
	bool bKeepLoadedVehicleModels[212];

	explicit stMiscInfo037R3::stMiscInfo037R3(void) = delete;
	stMiscInfo037R3::~stMiscInfo037R3(void) = delete;
};

#endif