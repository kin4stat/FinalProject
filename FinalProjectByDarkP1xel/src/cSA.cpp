//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cSA.hpp"

cSA::cSA(class cMain *pMain) {
	this->pPatch = new cSAPatch{pMain};
	return;
}


auto cSA::getPatch(void) const -> class cSAPatch * {
	return this->pPatch;
}


auto cSA::getPlayerPed(void) const -> class cPed * {
	return reinterpret_cast<class cPed *(__cdecl *)(const __int8 i8PlayerID)>(0x56E210)(0);
}


auto cSA::getPlayerInfo(void) const -> class cPlayerInfo * {
	return reinterpret_cast<class cPlayerInfo *>(0xB7CD98);
}


auto cSA::getPlayerVehicle(const bool bIncludeRemote) const -> class cAutomobile * {
	return reinterpret_cast<class cAutomobile *(__cdecl *)(const __int8 i8PlayerID, const bool bIncludeRemote)>(0x56E0D0)(0, bIncludeRemote);
}


auto cSA::getCamera(void) const -> class cCamera * {
	return reinterpret_cast<class cCamera *>(0xB6F028);
}


auto cSA::getHandlingDataMgr(void) const -> class cHandlingDataMgr * {
	return reinterpret_cast<class cHandlingDataMgr *>(0xC2B9C8);
}


auto cSA::getWeaponInfo(const unsigned __int8 ui8WeaponID, const unsigned __int8 ui8SkillID) const -> class cWeaponInfo * {
	return reinterpret_cast<class cWeaponInfo *(__cdecl *)(const unsigned __int8 ui8WeaponID, const unsigned __int8 ui8SkillID)>(0x743C60)(ui8WeaponID, ui8SkillID);
}


auto cSA::getPad(const unsigned __int8 ui8PadID) const -> class cPad * {
	return reinterpret_cast<class cPad *(__cdecl *)(const unsigned __int8 ui8PadID)>(0x53FB70)(ui8PadID);
}


auto cSA::getAudioEngine(void) const -> class cAudioEngine * {
	return reinterpret_cast<class cAudioEngine *>(0xB6BC90);
}


auto cSA::getRadioTrackManager(void) const -> class cAERadioTrackManager * {
	return reinterpret_cast<class cAERadioTrackManager *>(0x8CB6F8);
}


auto cSA::getPathFind(void) const -> class cPathFind * {
	return reinterpret_cast<class cPathFind *>(0x96F050);
}


auto cSA::getStreamedScripts(void) const -> class cStreamedScripts * {
	return reinterpret_cast<class cStreamedScripts *>(0xA47B60);
}


auto cSA::getMenuManager(void) const -> class cMenuManager * {
	return reinterpret_cast<class cMenuManager *>(0xBA6748);
}


auto cSA::getRadarTrace(const unsigned __int16 ui16TraceID) const -> class cRadarTrace * {
	return reinterpret_cast<class cRadarTrace *>(0xBA86F0 + ui16TraceID * sizeof(class cRadarTrace));
}


auto cSA::getVehicleModelInfo(const unsigned __int16 ui16ModelIndex) const -> class cVehicleModelInfo * {
	return &*reinterpret_cast<class cVehicleModelInfo **>(0xA9B0C8)[ui16ModelIndex];
}


auto cSA::get3DMarkerPoint(const unsigned __int8 ui8ID) const -> class c3DMarker * {
	return reinterpret_cast<class c3DMarker *>(0xC7DD58 + ui8ID * sizeof(class c3DMarker));
}


auto cSA::getCurrent3DMarkerPoint(void) const -> class c3DMarker * {
	return reinterpret_cast<class c3DMarker *>(0xC7DE98);
}


auto cSA::getDirectionArrow(const unsigned __int8 ui8ID) const -> class cDirectionArrow * {
	return reinterpret_cast<class cDirectionArrow *>(0xC802E8 + ui8ID * sizeof(class cDirectionArrow));
}


auto cSA::getFx(void) const -> class cFx * {
	return reinterpret_cast<class cFx *>(0xA9AE00);
}


auto cSA::getFxManager(void) const -> class cFxManager * {
	return reinterpret_cast<class cFxManager *>(0xA9AE80);
}


auto cSA::getStreamingInfo(const unsigned __int32 ui32ModelIndex) const -> class cStreamingInfo * {
	return &reinterpret_cast<class cStreamingInfo *>(0x8E4CC0)[ui32ModelIndex];
}


auto cSA::getDirect3D9(void) const -> IDirect3D9 * {
	return *reinterpret_cast<IDirect3D9 **>(0xC97C20);
}


auto cSA::getCurrentD3DDevice(void) const -> IDirect3DDevice9 * {
	return *reinterpret_cast<IDirect3DDevice9 **>(0xC97C28);
}


auto cSA::getD3DPresentParams(void) const -> D3DPRESENT_PARAMETERS * {
	return reinterpret_cast<D3DPRESENT_PARAMETERS *>(0xC9C040);
}


auto cSA::isVersionUS10(void) const -> bool {
	return *reinterpret_cast<const unsigned __int32 *>(0x8A4004) == 0x8339CA;
}


auto cSA::isGamePaused(void) const -> bool {
	return *reinterpret_cast<const bool *>(0xB7CB49);
}


auto cSA::isInputBlocked(void) const -> bool {
	return *reinterpret_cast<const unsigned __int8 *>(0x6194A0) == 0xC3;
}


auto cSA::getGameState(void) const -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(0xC8D4C0);
}


auto cSA::getFPS(void) const -> float {
	return *reinterpret_cast<const float *>(0xB7CB50);
}


cSA::~cSA(void) {
	delete this->pPatch;				this->pPatch = nullptr;
	return;
}


auto cSA::fixAnyVeh(void *pAnyVehicle) -> void {
	if (pAnyVehicle != nullptr) {
		switch (static_cast<const class cVehicle *>(pAnyVehicle)->getClass()) {
			case 0: {
				switch (static_cast<const class cVehicle *>(pAnyVehicle)->getSubClass()) {
					case 0: {
						static_cast<class cAutomobile *>(pAnyVehicle)->fix();
						break;
					}
					case 2: {
						static_cast<class cQuadBike *>(pAnyVehicle)->fix();
						break;
					}
					case 3: {
						static_cast<class cHeli *>(pAnyVehicle)->fix();
						break;
					}
					case 4: {
						static_cast<class cPlane *>(pAnyVehicle)->fix();
						break;
					} default: break;
				} break;
			}
			case 9: {
				static_cast<class cBike *>(pAnyVehicle)->fix();
				break;
			} default: break;
		}
	} return;
}


auto cSA::disembarkPed(const class cPed *pPed) -> void {
	if (pPed != nullptr) {
		class cPedIntelligence *pIntelligence{pPed->getPedIntelligence()};
		if (pIntelligence != nullptr) {
			pIntelligence->flushImmediately(true);
			pIntelligence->clearTasks(true, true);
		}
	} return;
}


auto cSA::flipVeh(class cVehicle *pVehicle) -> void {
	if (pVehicle != nullptr) {
		class cVector3D vecForce { 0, 0, 1.0F };
		pVehicle->Physical.Entity.Placeable.getMatrix()->Matrix.forceUpVector(&vecForce);

		class cTrailer *pTrailer{pVehicle->getTrailer()};
		if (pTrailer != nullptr) {
			pTrailer->Automobile.Vehicle.Physical.Entity.Placeable.getMatrix()->Matrix.forceUpVector(&vecForce);
		}
	} return;
}


auto cSA::unfreeze(const class cMain *pMain) -> void {
	const class cSA *pSA{pMain->getSA()};

	pMain->patchAddress(reinterpret_cast<void *>(0x6194A0), "\xE9", 0x1); // psMouseSetPos
	pMain->patchAddress(reinterpret_cast<void *>(0x541DF5), "\xE8\x46\xF3\xFE\xFF", 0x5); // CPad::UpdatePads()

	pSA->getPlayerInfo()->makePlayerSafe(false, 10.0F);

	class cPad *pPad{pSA->getPad()};
	pPad->ui16DisablePlayerControls = 0;
	pPad->i8DisablePlayerCycleWeapon = 0;
	pPad->i8DisablePlayerDuck = 0;
	pPad->i8DisablePlayerEnterCar = 0;
	pPad->i8DisablePlayerFireWeapon = 0;
	pPad->i8DisablePlayerFireWeaponWithL1 = 0;
	pPad->i8DisablePlayerJump = 0;

	class cPed *pPed{pSA->getPlayerPed()};
	if (pPed != nullptr) {
		pPed->Physical.ui32PhysicalFlags &= 0xFFFFDFFF;

		struct cPed::stPedFlags *pPedFlags{&pPed->PedFlags};
		pPedFlags->bStayInSamePlace = 0;
		pPedFlags->bKindaStayInSamePlace = 0;
		pPedFlags->bNotAllowedToDuck = 0;
		pPedFlags->bCanExitCar = 1;
		pPedFlags->bStuckUnderCar = 0;
		pPedFlags->bIsDyingStuck = 0;
		pPedFlags->bDontFight = 0;
	} return;
}


auto cSA::getPosition(const class cSA *pSA) -> class cVector3D * {
	class cAutomobile *pAuto{pSA->getPlayerVehicle()};
	if (pAuto != nullptr) {
		return pAuto->Vehicle.Physical.Entity.Placeable.getPosition();
	}

	class cPed *pPed{pSA->getPlayerPed()};
	if (pPed != nullptr) {
		return pPed->Physical.Entity.Placeable.getPosition();
	} return nullptr;
}


auto cSA::getWaypointPos(const class cSA *pSA, class cVector3D &&vecMarkOut) -> bool {
	const class cMenuManager *pMenuManager{pSA->getMenuManager()};
	if (pMenuManager->ui32TargetBlipIndex) {
		class cRadarTrace *pRadarTrace{pSA->getRadarTrace(static_cast<const unsigned __int16>(pMenuManager->ui32TargetBlipIndex))};
		if (pRadarTrace->ui8BlipDisplayFlag) {
			vecMarkOut = pRadarTrace->vecPosition;
			vecMarkOut.fZ = 500.0F;
			vecMarkOut.fZ = cWorld::findGroundZFor3DCoord(&vecMarkOut) + 1.0F;
			return true;
		}
	} return false;
}


auto cSA::teleport(const class cSA *pSA, const class cVector3D *pPos, const bool bLoadScene, const bool bFindZ, const float fAddToZ) -> bool {
	if (pPos != nullptr) {

		class cVector3D vecPos { *pPos };

		if (bLoadScene) {
			cStreaming::loadSceneCollision(&vecPos);
			cStreaming::loadScene(&vecPos);
		}

		if (bFindZ) {
			vecPos.fZ = 500.0F;
			vecPos.fZ = cWorld::findGroundZFor3DCoord(&vecPos) + 2.0F;
		} vecPos.fZ += fAddToZ;

		class cAutomobile *pAuto{pSA->getPlayerVehicle()};
		if (pAuto != nullptr) {
			switch (pAuto->Vehicle.getClass()) {
				case 0: {
					class cTrailer *pTrailer{pAuto->Vehicle.getTrailer()};
					if (pTrailer != nullptr) {
						pTrailer->Automobile.teleport(&vecPos, false);
					} pAuto->teleport(&vecPos, false);
					break;
				}
				case 5: {
					reinterpret_cast<class cBoat *>(pAuto)->teleport(&vecPos, false);
					break;
				}
				case 9: {
					reinterpret_cast<class cBike *>(pAuto)->teleport(&vecPos, false);
					break;
				} default: break;
			} return true;
		}

		class cPed *pPed{pSA->getPlayerPed()};
		if (pPed != nullptr) {
			pPed->teleport(&vecPos);
			return true;
		}

	} return false;
}