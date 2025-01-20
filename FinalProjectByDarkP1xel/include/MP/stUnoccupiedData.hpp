//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPUNOCCUPIEDDATA_HPP
#define MPUNOCCUPIEDDATA_HPP

#pragma once

struct stUnoccupiedData final {
	unsigned __int16 ui16VehicleID{0};
	unsigned __int8 ui8SeatID{0};
	class cVector3D vecRoll {};
	class cVector3D vecDirection {};
	class cVector3D vecPosition {};
	class cVector3D vecMoveSpeed {};
	class cVector3D vecTurnSpeed {};
	float fHealth{0};
};

#endif