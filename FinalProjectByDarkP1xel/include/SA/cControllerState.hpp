//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACONTROLLERSTATE_HPP
#define SACONTROLLERSTATE_HPP

#pragma once

class cControllerState final {
	public:
	__int16 i16LeftStickX{0};
	__int16 i16LeftStickY{0};
	__int16 i16RightStickX{0};
	__int16 i16RightStickY{0};

	__int16 i16LeftShoulder1{0};
	__int16 i16LeftShoulder2{0};
	__int16 i16RightShoulder1{0};
	__int16 i16RightShoulder2{0};

	__int16 i16DPadUp{0};
	__int16 i16DPadDown{0};
	__int16 i16DPadLeft{0};
	__int16 i16DPadRight{0};

	__int16 i16Start{0};
	__int16 i16Select{0};

	__int16 i16ButtonSquare{0};
	__int16 i16ButtonTriangle{0};
	__int16 i16ButtonCross{0};
	__int16 i16ButtonCircle{0};

	__int16 i16ShockButtonL{0};
	__int16 i16ShockButtonR{0};

	__int16 i16ChatIndicated{0};
	__int16 i16PedWalk{0};
	__int16 i16VehicleMouseLook{0};
	__int16 i16RadioTrackSkip{0};

	explicit cControllerState(void) = default;
	~cControllerState(void) = default;

	private:
};

#endif