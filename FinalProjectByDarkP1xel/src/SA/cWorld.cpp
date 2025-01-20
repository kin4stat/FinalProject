//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cWorld.hpp"

auto cWorld::add(class cEntity *pEntity) -> void {
	reinterpret_cast<void(__cdecl *)(class cEntity *pEntity)>(0x563220)(pEntity);
	return;
}


auto cWorld::remove(class cEntity *pEntity) -> void {
	reinterpret_cast<void(__cdecl *)(class cEntity *pEntity)>(0x563280)(pEntity);
	return;
}


auto cWorld::findGroundZFor3DCoord(const class cVector3D *pPos, bool *bOutResult, class cEntity **pOutEntity) -> float {
	return reinterpret_cast<float(__cdecl *)(const class cVector3D vecPos, bool *bOutResult, class cEntity **pOutEntity)>(0x5696C0)(*pPos, bOutResult, pOutEntity);
}


auto cWorld::getDistanceBetweenTwoPoints(const class cVector3D *pPosA, const class cVector3D *pPosB) -> float {
	return std::sqrtf(std::powf(pPosA->fX - pPosB->fX, 2) + std::powf(pPosA->fY - pPosB->fY, 2) + std::powf(pPosA->fZ - pPosB->fZ, 2));
}


auto cWorld::getDistanceBetweenTwoPoints(const class cVector2D *pPosA, const class cVector2D *pPosB) -> float {
	return std::sqrtf(std::powf(pPosA->fX - pPosB->fX, 2) + std::powf(pPosA->fY - pPosB->fY, 2));
}


auto cWorld::transform3DTo2DPoint(const class cVector3D *p3D, class cVector3D *pResult3D) -> bool {
	return reinterpret_cast<bool(__cdecl *)(const class cVector3D *p3D, class cVector3D *pResult3D)>(0x71DAB0)(p3D, pResult3D);
}


auto cWorld::transformRealWorldPointToRadarSpace(class cVector2D *pResult, const class cVector2D *pPos) -> void {
	reinterpret_cast<void(__cdecl *)(class cVector2D *pResult, const class cVector2D *pPos)>(0x583530)(pResult, pPos);
	return;
}


auto cWorld::transformRealWorldToTexCoordSpace(class cVector3D *pResult, const class cVector3D *pPos, const unsigned __int32 ui32UnkA, const unsigned __int32 ui32UnkB) -> class cVector3D * {
	return reinterpret_cast<class cVector3D *(__cdecl *)(class cVector3D *pResult, const class cVector3D *pPos, const unsigned __int32 ui32UnkA, const unsigned __int32 ui32UnkB)>(0x71DAB0)(pResult, pPos, ui32UnkA, ui32UnkB);
}


auto cWorld::getCurrentInterior(void) -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(0xB72914);
}


auto cWorld::setCurrentInterior(const class cMain *pMain, const unsigned __int32 ui32InteriorID) -> void {
	pMain->patchAddress(reinterpret_cast<void *>(0xB72914), reinterpret_cast<const char *>(&ui32InteriorID), 4);
	return;
}


auto cWorld::resetStuffUponResurrection(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x442980)();
	return;
}


auto cWorld::sortOutStreamingAndMemory(const class cVector3D *pPos, const float fAngle) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pPos, const float fAngle)>(0x441440)(pPos, fAngle);
	return;
}


auto cWorld::clearExcitingStuffFromArea(const class cVector3D *pPoint, const float fRadius, const bool bRemoveProjectilesAndShadows) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pPoint, const float fRadius, const bool bRemoveProjectilesAndShadows)>(0x56A0D0)(pPoint, fRadius, bRemoveProjectilesAndShadows);
	return;
}


auto cWorld::getIsLineOfSightClear(const class cVector3D *pOrigin, const class cVector3D *pTarget, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies, const bool bSeeThrough, const bool bDoCameraIgnoreCheck) -> bool {
	return reinterpret_cast<bool(__cdecl *)(const class cVector3D *pOrigin, const class cVector3D *pTarget, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies, const bool bSeeThrough, const bool bDoCameraIgnoreCheck)>(0x56A490)(pOrigin, pTarget, bBuildings, bVehicles, bPeds, bObjects, bDummies, bSeeThrough, bDoCameraIgnoreCheck);
}


auto cWorld::processLineOfSight(const class cVector3D *pOrigin, const class cVector3D *pTarget, class cColPoint *pOutColPoint, class cEntity **ppOutEntity, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies, const bool bSeeThrough, const bool bDoIgnoreCameraCheck, const bool bShootThrough) -> bool {
	return reinterpret_cast<bool(__cdecl *)(const class cVector3D *pOrigin, const class cVector3D *pTarget, class cColPoint *pOutColPoint, class cEntity **ppOutEntity, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies, const bool bSeeThrough, const bool bDoIgnoreCameraCheck, const bool bShootThrough)>(0x56BA00)(pOrigin, pTarget, pOutColPoint, ppOutEntity, bBuildings, bVehicles, bPeds, bObjects, bDummies, bSeeThrough, bDoIgnoreCameraCheck, bShootThrough);
}


auto cWorld::findObjectsInRange(const class cVector3D *pPoint, const float fRadius, const bool b2D, unsigned __int32 *pOutCount, const unsigned __int16 ui16MaxCount, class cEntity **ppOutEntities, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pPoint, const float fRadius, const bool b2D, unsigned __int32 *pOutCount, const unsigned __int16 ui16MaxCount, class cEntity **ppOutEntities, const bool bBuildings, const bool bVehicles, const bool bPeds, const bool bObjects, const bool bDummies)>(0x564A20)(pPoint, fRadius, b2D, pOutCount, ui16MaxCount, ppOutEntities, bBuildings, bVehicles, bPeds, bObjects, bDummies);
	return;
}