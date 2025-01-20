//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAVEHICLEAUDIOSETTINGS_HPP
#define SAVEHICLEAUDIOSETTINGS_HPP

#pragma once

class cVehicleAudioSettings final {
	public:
	unsigned __int8 ui8VehicleSoundType{0};
	__int8 i8Field_1{0};
	__int16 i16EngineOnSoundBankID{0};
	__int16 i16EngineOffSoundBankID{0};
	bool bStereo{false};
	__int8 i8Field_7{0};
	float fBassEq{0};
	float fField_C{0};
	__int8 i8HornTon{0};
	__int8 i8Field_11[3];
	float fHornHigh{0};
	__int8 i8DoorSound{0};
	__int8 i8Field_19{0};
	__int8 i8RadioNum{0};
	__int8 i8RadioType{0};
	__int8 i8VehTypeForAudio{0};
	__int8 i8Field_1D[3];
	float fHornVolumeDelta{0};

	explicit cVehicleAudioSettings::cVehicleAudioSettings(void) = default;
	cVehicleAudioSettings::~cVehicleAudioSettings(void) = default;

	private:
};

#endif