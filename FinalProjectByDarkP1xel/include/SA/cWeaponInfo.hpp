//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAWEAPONINFO_HPP
#define SAWEAPONINFO_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cWeaponInfo final {
	public:
	unsigned __int32 ui32WeaponFire{0};
	float fTargetRange{0};
	float fWeaponRange{0};
	__int32 i32ModelID1{0};
	__int32 i32ModelID2{0};
	unsigned __int32 ui32Slot{0};
	struct stWeaponFlags final {
		unsigned __int32 bCanAim : 1;
		unsigned __int32 bAimWithArm : 1;
		unsigned __int32 b1stPerson : 1;
		unsigned __int32 bOnlyFreeAim : 1;
		unsigned __int32 bMoveAim : 1;
		unsigned __int32 bMoveFire : 1;
		unsigned __int32 b06 : 1;
		unsigned __int32 b07 : 1;
		unsigned __int32 bThrow : 1;
		unsigned __int32 bHeavy : 1;
		unsigned __int32 bContinuosFire : 1;
		unsigned __int32 bTwinPistol : 1;
		unsigned __int32 bReload : 1;
		unsigned __int32 bCrouchFire : 1;
		unsigned __int32 bReload2Start : 1;
		unsigned __int32 bLongReload : 1;
		unsigned __int32 bSlowdown : 1;
		unsigned __int32 bRandSpeed : 1;
		unsigned __int32 bExpands : 1;
	} WeaponFlags{};
	unsigned __int32 ui32AnimGroup{0};
	unsigned __int16 ui16AmmoClip{0};
	unsigned __int16 ui16Damage{0};
	class cVector3D vecFireOffset {};
	unsigned __int32 ui32SkillLevel{0};
	unsigned __int32 ui32ReqStatLevel{0};
	float fAccuracy{0};
	float fMoveSpeed{0};
	float fAnimLoopStart{0};
	float fAnimLoopEnd{0};
	float fAnimLoopFire{0};
	float fAnimLoop2Start{0};
	float fAnimLoop2End{0};
	float fAnimLoop2Fire{0};
	float fBreakoutTime{0};
	float fSpeed{0};
	float fRadius{0};
	float fLifespan{0};
	float fSpread{0};
	unsigned __int16 ui16AimOffsetIndex{0};
	unsigned __int8 ui8BaseCombo{0};
	unsigned __int8 ui8NumCombos{0};

	explicit cWeaponInfo::cWeaponInfo(void) = delete;
	cWeaponInfo::~cWeaponInfo(void) = delete;

	private:
};

#endif