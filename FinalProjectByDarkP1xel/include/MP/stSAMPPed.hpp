//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPED_HPP
#define MPPED_HPP

#pragma once

struct stSAMPPed final {
	struct stSAMPEntity<class cPed> MPEntity {};
	__int32 i32UsingCellPhone{0};
	unsigned __int8 ui8Unk1[600];
	class cPed *pGTA_Ped{nullptr};
	unsigned __int8 ui8Unk2[22];
	unsigned __int8 ui8KeysID{0};
	unsigned __int16 ui16GTA_UrinateParticle_ID{0};
	__int32 i32DrinkingOrSmoking{0};
	__int32 i32ObjectInHand{0};
	__int32 i32DrunkLevel{0};
	unsigned __int8 ui8Unk3[5];
	__int32 i32IsDancing{0};
	__int32 i32DanceStyle{0};
	__int32 i32DanceMove{0};
	unsigned __int8 ui8Unk4[20];
	__int32 i32IsUrinating{0};
};

#endif