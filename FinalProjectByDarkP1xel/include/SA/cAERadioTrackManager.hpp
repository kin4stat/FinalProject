//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SARADIOTRACKMANAGER_HPP
#define SARADIOTRACKMANAGER_HPP

#pragma once

class cAERadioTrackManager final {
	public:
	__int8 i8Field_0{0};
	__int8 i8Field_1{0};
	__int8 i8Field_2{0};
	__int8 i8Field_3{0};
	__int8 i8Field_4{0};
	__int8 i8Field_5{0};
	__int8 i8Field_6{0};
	bool bRadioAutoSelect{false};
	__int8 i8Field_8[14];
	unsigned __int8 ui8MonthDay{0};
	unsigned __int8 ui8ClockHours{0};
	__int32 i32PlayerStats[14];
	__int32 i32Field_50{0};
	unsigned __int32 ui32TimeToDisplayRadioName{0};
	__int32 i32Field_58{0};
	__int32 i32Field_5C{0};
	__int32 i32Field_60{0};
	__int32 i32Field_64{0};
	__int32 i32Field_68{0};
	__int32 i32StationsListed{0};
	__int32 i32StationsListDown{0};
	__int32 i32Field_74{0};
	__int32 i32Field_78{0};
	__int32 i32Field_7C{0};
	__int32 i32Field_80{0};
	__int32 i32Field_84{0};
	__int8 i8Field_88{0};
	__int8 i8Field_89[19];
	__int32 i32Field_9C{0};
	__int32 i32Field_A0{0};
	__int32 i32Field_A4{0};
	__int32 i32Field_A8{0};
	__int8 i8Field_AC{0};
	__int8 i8CurrentRadioStation{0};
	__int8 i8Field_AE{0};
	__int8 i8Field_AF[10];
	__int8 i8Field_B9{0};
	__int8 i8Field_BA{0};
	__int8 i8Field_BB[5];
	__int8 i8Field_C0{0};
	__int8 i8Field_C1{0};
	__int8 i8Field_C2[2];
	__int8 i8Field_C4{0};
	__int8 i8Field_C5[25];
	__int8 i8Field_DE[10];
	__int8 i8Field_E8{0};
	__int8 i8RadioStationState{0};
	bool bStereoActive{false};
	__int8 i8Field_EB{0};
	__int32 i32Field_EC{0};
	__int8 i8Field_F0{0};
	__int8 i8Field_F1{0};
	__int8 i8Field_F2{0};
	__int8 i8Field_F3[5];
	__int8 i8Field_F8{0};
	__int8 i8Field_F9[15];
	__int8 i8Field_108{0};
	__int8 i8Field_109[3];
	__int32 i32Field_10C[143];
	__int8 i8Field_348[32];
	__int32 i32Field_368{0};
	__int8 i8Field_36C{0};
	__int8 i8Field_36D[3];

	explicit cAERadioTrackManager::cAERadioTrackManager(void) = delete;
	auto cAERadioTrackManager::stopRadio(class cVehicleAudioSettings *pVehAudSettings, const bool bUnk) -> bool;
	cAERadioTrackManager::~cAERadioTrackManager(void) = delete;

	private:
};

#endif