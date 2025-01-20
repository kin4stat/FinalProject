//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SADAMAGEMANAGER_HPP
#define SADAMAGEMANAGER_HPP

#pragma once

class cDamageManager final {
	public:

	enum class eLights : const unsigned __int8 {
		eFRONT_LEFT,
		eFRONT_RIGHT,
		eREAR_RIGHT,
		eREAR_LEFT
	};

	enum class ePanels : const unsigned __int8 {
		eWING_FRONT_LEFT,
		eWING_FRONT_RIGHT,
		eWINDSCREEN = 4,
		eBUMP_FRONT,
		eBUMP_REAR
	};

	float fWheelDamageEffect{0};
	unsigned __int8 ui8EngineStatus{0};
	unsigned __int8 ui8RightRearWheelsStatus{0};
	unsigned __int8 ui8RightFrontWheelsStatus{0};
	unsigned __int8 ui8LeftRearWheelsStatus{0};
	unsigned __int8 ui8LeftFrontWheelsStatus{0};
	unsigned __int8 ui8BonnetStatus{0};
	unsigned __int8 ui8BootStatus{0};
	unsigned __int8 ui8LeftFrontDoorStatus{0};
	unsigned __int8 ui8RightFrontDoorStatus{0};
	unsigned __int8 ui8LeftRearDoorStatus{0};
	unsigned __int8 ui8RightRearDoorStatus{0};
	unsigned __int32 ui32LeftFrontLightStatus : 2;
	unsigned __int32 ui32RightFrontLightStatus : 2;
	unsigned __int32 ui32RightRearLightStatus : 2;
	unsigned __int32 ui32LeftRearLightStatus : 2;
	unsigned __int32 ui32PanelsStatus{0};

	explicit cDamageManager(void) = default;
	auto setLightStatus(const cDamageManager::eLights Light, const bool bStatus) -> void;
	auto setPanelStatus(const cDamageManager::ePanels Panel, const bool bStatus) -> void;
	~cDamageManager(void) = default;

	private:
};

#endif