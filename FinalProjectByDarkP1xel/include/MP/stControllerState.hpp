//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPCONTROLLERSTATE_HPP
#define MPCONTROLLERSTATE_HPP

#pragma once

struct stControllerState final {
	__int16 i16LeftRightKeys{0};
	__int16 i16UpDownKeys{0};
	union {
		struct stSAMPKeys final {
			unsigned __int8 ui8PrimaryFire : 1;
			unsigned __int8 ui8Horn_Crouch : 1;
			unsigned __int8 ui8SecondaryFire_Shoot : 1;
			unsigned __int8 ui8Accel_ZoomOut : 1;
			unsigned __int8 ui8EnterExitCar : 1;
			unsigned __int8 ui8Decel_Jump : 1;
			unsigned __int8 ui8CircleRight : 1;
			unsigned __int8 ui8Aim : 1;
			unsigned __int8 ui8CircleLeft : 1;
			unsigned __int8 ui8LandingGear_LookBack : 1;
			unsigned __int8 ui8Unknown_WalkSlow : 1;
			unsigned __int8 ui8SpecialCtrlUp : 1;
			unsigned __int8 ui8SpecialCtrlDown : 1;
			unsigned __int8 ui8SpecialCtrlLeft : 1;
			unsigned __int8 ui8SpecialCtrlRight : 1;
			unsigned __int8 ui8Unused : 1;
		} mpKeys;
		__int16 i16Keys{0};
	};
};

#endif