//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPAD_HPP
#define SAPAD_HPP

#pragma once

#include "SA/cControllerState.hpp"

class cPad final {
	public:
	class cControllerState newState {};
	class cControllerState oldState {};
	__int16 i16SteeringLeftRightBuffer[10];
	__int32 i32DrunkDrivingBufferUsed{0};
	class cControllerState pcTempKeyState {};
	class cControllerState pcTempJoyState {};
	class cControllerState pcTempMouseState {};
	__int8 i8Phase{0};
	__int8 i8Pad109{0};
	__int16 i16Mode{0};
	__int16 i16ShakeDur{0};
	union {
		struct stPadFlags final {
			unsigned __int16 bUnk1 : 1;
			unsigned __int16 bUnk2 : 1;
			unsigned __int16 bPlayerAwaitsInGarage : 1;
			unsigned __int16 bPlayerOnInteriorTransition : 1;
			unsigned __int16 bUnk3 : 1;
			unsigned __int16 bPlayerSafe : 1;
			unsigned __int16 bPlayerTalksOnPhone : 1;
			unsigned __int16 bPlayerSafeForCutscene : 1;
			unsigned __int16 bPlayerSkipsToDestination : 1;
		} PadFlags;
		unsigned __int16 ui16DisablePlayerControls{0};
	};
	__int8 i8ShakeFreq{0};
	__int8 i8HornHistory[5];
	__int8 i8CurrHornHistory{0};
	__int8 i8JustOutOfFrontEnd{0};
	__int8 i8ApplyBrakes{0};
	__int8 i8DisablePlayerEnterCar{0};
	__int8 i8DisablePlayerDuck{0};
	__int8 i8DisablePlayerFireWeapon{0};
	__int8 i8DisablePlayerFireWeaponWithL1{0};
	__int8 i8DisablePlayerCycleWeapon{0};
	__int8 i8DisablePlayerJump{0};
	__int8 i8DisablePlayerDisplayVitalStats{0};
	__int32 i32LastTimeTouched{0};
	__int32 i32AverageWeapon{0};
	__int32 i32AverageEntries{0};
	__int32 i32NoShakeBeforeThis{0};
	__int8 i8NoShakeFreq{0};
	__int8 i8Pad131[3];

	explicit cPad::cPad(void) = delete;
	auto cPad::updatePads(void) -> void;
	auto cPad::jumpJustDown(void) -> bool;
	cPad::~cPad(void) = delete;

	private:
};

#endif