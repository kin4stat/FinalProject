//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACOLPOINT_HPP
#define SACOLPOINT_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cColPoint final {
	public:
	class cVector3D vecPoint {};
	float fField_C{0};
	class cVector3D vecNormal {};
	float fField_1C{0};
	unsigned __int8 ui8SurfaceTypeA{0};
	unsigned __int8 ui8PieceTypeA{0};
	unsigned __int8 ui8LightingDayA : 4;
	unsigned __int8 ui8LightingNightA : 4;
	__int8 i8Pad1{0};
	unsigned __int8 ui8SurfaceTypeB{0};
	unsigned __int8 ui8PieceTypeB{0};
	unsigned __int8 ui8LightingDayB : 4;
	unsigned __int8 ui8LightingNightB : 4;
	__int8 i8Pad2{0};
	float fDepth{0};

	explicit cColPoint::cColPoint(void) = default;
	cColPoint::~cColPoint(void) = default;

	private:
};

#endif