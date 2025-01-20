//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAOBJECT_HPP
#define SAOBJECT_HPP

#pragma once

#include "SA/cPhysical.hpp"

class cObject final {
	public:
	class cPhysical Physical {};
	void *pControlCodeList{nullptr};
	unsigned __int8 ui8ObjectType{0};
	unsigned __int8 ui8BonusValue{0};
	unsigned __int16 ui16CostValue{0};
	union {
		struct stObjectFlags final {
			unsigned __int32 b01 : 1;
			unsigned __int32 b02 : 1;
			unsigned __int32 bPickupPropertyForSale : 1;
			unsigned __int32 bPickupInShopOutOfStock : 1;
			unsigned __int32 bGlassBroken : 1;
			unsigned __int32 b06 : 1;
			unsigned __int32 bIsExploded : 1;
			unsigned __int32 b08 : 1;

			unsigned __int32 bIsLampPost : 1;
			unsigned __int32 bIsTargatable : 1;
			unsigned __int32 bIsBroken : 1;
			unsigned __int32 bTrainCrossEnabled : 1;
			unsigned __int32 bIsPhotographed : 1;
			unsigned __int32 bIsLiftable : 1;
			unsigned __int32 bIsDoorMoving : 1;
			unsigned __int32 bIsDoorOpen : 1;

			unsigned __int32 bHasNoModel : 1;
			unsigned __int32 bIsScaled : 1;
			unsigned __int32 bCanBeAttachedToMagnet : 1;
			unsigned __int32 b20 : 1;
			unsigned __int32 b21 : 1;
			unsigned __int32 b22 : 1;
			unsigned __int32 bFadingIn : 1;
			unsigned __int32 bAffectedByColBrightness : 1;

			unsigned __int32 b25 : 1;
			unsigned __int32 bDoNotRender : 1;
			unsigned __int32 bFadingIn2 : 1;
			unsigned __int32 b28 : 1;
			unsigned __int32 b29 : 1;
			unsigned __int32 b30 : 1;
			unsigned __int32 b31 : 1;
			unsigned __int32 b32 : 1;
		} ObjectFlags;
		unsigned __int32 ui32ObjectFlags{0};
	};
	unsigned __int8 ui8ColDamageEffect{0};
	unsigned __int8 ui8StoredColDamageEffect{0};
	__int8 i8Field_146{0};
	__int8 i8GarageDoorGarageIndex{0};
	unsigned __int8 ui8LastWeaponDamage{0};
	unsigned __int8 ui8DayBrightness : 4;
	unsigned __int8 ui8NightBrightness : 4;
	__int16 i16RefModelIndex{0};
	unsigned __int8 ui8CarColor[4]; 
	unsigned __int32 ui32RemovalTime{0};
	float fHealth{0};
	float fDoorStartAngle{0};
	float fScale{0};
	class cObjectInfo *pObjectInfo{nullptr};
	class ñFire *pFire{nullptr};
	__int16 i16ScriptTriggerIndex{0};
	__int16 i16RemapTxd{0};
	struct stRwTexture *pRemapTexture{nullptr};
	class cDummyObject *pDummyObject{nullptr};
	unsigned __int32 ui32BurnTime{0};
	float fBurnDamage{0};

	explicit cObject::cObject(void) = delete;
	cObject::~cObject(void) = delete;

	static auto cObject::deleteAllTempObjects(void) -> void;
	static auto cObject::deleteAllMissionObjects(void) -> void;
	static auto cObject::deleteAllTempObjectsInArea(const class cVector3D *pPoint, const float fRadius) -> void;

	private:
};

#endif