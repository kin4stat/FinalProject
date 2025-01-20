//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAWORLD_HPP
#define SAWORLD_HPP

#pragma once

#include"cMain.hpp"

class cWorld final {
	public:
	explicit cWorld(void) = delete;
	~cWorld(void) = delete;

	static auto add(class cEntity *pEntity) -> void;
	static auto remove(class cEntity *pEntity) -> void;
	static auto findGroundZFor3DCoord(const class cVector3D *pPos, bool *bOutResult = nullptr, class cEntity **pOutEntity = nullptr) -> float;
	static auto getDistanceBetweenTwoPoints(const class cVector3D *pPosA, const class cVector3D *pPosB) -> float;
	static auto getDistanceBetweenTwoPoints(const class cVector2D *pPosA, const class cVector2D *pPosB) -> float;
	static auto transform3DTo2DPoint(const class cVector3D *p3D, class cVector3D *pResult3D) -> bool;
	static auto transformRealWorldPointToRadarSpace(class cVector2D *pResult, const class cVector2D *pPos) -> void;
	static auto transformRealWorldToTexCoordSpace(class cVector3D *pResult, const class cVector3D *pPos, const unsigned __int32 ui32UnkA = 0, const unsigned __int32 ui32UnkB = 0) -> class cVector3D *;
	static auto getCurrentInterior(void) -> unsigned __int32;
	static auto setCurrentInterior(const class cMain *pMain, const unsigned __int32 ui32InteriorID) -> void;
	static auto resetStuffUponResurrection(void) -> void;
	static auto sortOutStreamingAndMemory(const class cVector3D *pPos, const float fAngle) -> void;
	static auto clearExcitingStuffFromArea(const class cVector3D *pPoint, const float fRadius, const bool bRemoveProjectilesAndShadows) -> void;
	static auto getIsLineOfSightClear(const class cVector3D *pOrigin, const class cVector3D *pTarget, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies, const bool bSeeThrough, const bool bDoCameraIgnoreCheck) -> bool;
	static auto processLineOfSight(const class cVector3D *pOrigin, const class cVector3D *pTarget, class cColPoint *pOutColPoint, class cEntity **ppOutEntity, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies, const bool bSeeThrough, const bool bDoIgnoreCameraCheck, const bool bShootThrough) -> bool;
	static auto findObjectsInRange(const class cVector3D *pPoint, const float fRadius, const bool b2D, unsigned __int32 *pOutCount, const unsigned __int16 ui16MaxCount, class cEntity **ppOutEntities, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies) -> void;


	private:
};

#endif