//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPVEHICLE_HPP
#define MPVEHICLE_HPP

#pragma once

struct stSAMPVehicle final {
	struct stSAMPEntity<class cAutomobile> MPEntity {};
	class cAutomobile *pGTA_Trailer{nullptr};
	class cAutomobile *pGTA_Vehicle{nullptr};
	unsigned __int8 ui8Unk1[8];
	__int32 i32IsMotorOn{0};
	__int32 i32IsLightsOn{0};
	__int32 i32IsLocked{0};
	bool bIsObjective{false};
	__int32 i32ObjectiveBlipCreated{0};
	unsigned __int8 ui8Unk2[16];
	unsigned __int8 ui8Color[2];
	__int32 i32ColorSync{0};
	__int32 i32ColorSomething{0};
};

#endif