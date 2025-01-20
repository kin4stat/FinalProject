//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAOBJECTINFO_HPP
#define SAOBJECTINFO_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cObjectInfo final {
	public:
	float fMass{0};
	float fTurnMass{0};
	float fAirResistance{0};
	float fElasticity{0};
	float fBuoyancyConstant{0};
	float fUprootLimit{0};
	float fColDamageMultiplier{0};
	unsigned __int8 ui8ColDamageEffect{0};
	unsigned __int8 ui8SpecialColResponseCase{0};
	unsigned __int8 ui8CameraAvoidObject{0};
	unsigned __int8 ui8CausesExplosion{0};
	unsigned __int8 ui8FxType{0};
	__int8 i8Padding0[3];
	class cVector3D vecFxOffset {};
	class cFxSystem_c *pFxSystem{nullptr};
	float fSmashMultiplier{0};
	class cVector3D vecBreakVelocity {};
	float fBreakVelocityRand{0};
	unsigned __int32 ui32GunBreakMode{0};
	unsigned __int32 ui32SparksOnImpact{0};

	explicit cObjectInfo::cObjectInfo(void) = delete;
	cObjectInfo::~cObjectInfo(void) = delete;

	private:
};

#endif