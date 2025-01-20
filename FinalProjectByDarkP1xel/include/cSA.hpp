//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SA_HPP
#define SA_HPP

#pragma once

#include "cMain.hpp"

#include "SA/cPed.hpp"
#include "SA/cPlayerInfo.hpp"
#include "SA/cAutomobile.hpp"
#include "SA/cCamera.hpp"
#include "SA/cWorld.hpp"
#include "SA/cStreaming.hpp"
#include "SA/cStreamingInfo.hpp"
#include "SA/cCheat.hpp"
#include "SA/cHandlingDataMgr.hpp"
#include "SA/cWeaponInfo.hpp"
#include "SA/cPad.hpp"
#include "SA/cColStore.hpp"
#include "SA/cAudioEngine.hpp"
#include "SA/cAERadioTrackManager.hpp"
#include "SA/cPathFind.hpp"
#include "SA/cIPLStore.hpp"
#include "SA/cStreamedScripts.hpp"
#include "SA/cRadar.hpp"
#include "SA/cMenuManager.hpp"
#include "SA/cRadarTrace.hpp"
#include "SA/cWeather.hpp"
#include "SA/cPools.hpp"
#include "SA/cVehicleModelInfo.hpp"
#include "SA/c3DMarker.hpp"
#include "SA/cDirectionArrow.hpp"
#include "SA/cFx.hpp"
#include "SA/cFxManager.hpp"
#include "SA/cQuadBike.hpp"
#include "SA/cHeli.hpp"
#include "SA/cPlane.hpp"
#include "SA/cBoat.hpp"
#include "SA/cBike.hpp"
#include "SA/cTrailer.hpp"
#include "SA/cObject.hpp"

class cSA final {
	public:
	explicit cSA(class cMain *pMain);
	auto getPatch(void) const -> class cSAPatch *;
	auto getPlayerPed(void) const -> class cPed *;
	auto getPlayerInfo(void) const -> class cPlayerInfo *;
	auto getPlayerVehicle(const bool bIncludeRemote = false) const -> class cAutomobile *;
	auto getCamera(void) const -> class cCamera *;
	auto getHandlingDataMgr(void) const -> class cHandlingDataMgr *;
	auto getWeaponInfo(const unsigned __int8 ui8WeaponID, const unsigned __int8 ui8SkillID) const -> class cWeaponInfo *;
	auto getPad(const unsigned __int8 ui8PadID = 0) const -> class cPad *;
	auto getAudioEngine(void) const -> class cAudioEngine *;
	auto getRadioTrackManager(void) const -> class cAERadioTrackManager *;
	auto getPathFind(void) const -> class cPathFind *;
	auto getStreamedScripts(void) const -> class cStreamedScripts *;
	auto getMenuManager(void) const -> class cMenuManager *;
	auto getRadarTrace(const unsigned __int16 ui16TraceID) const -> class cRadarTrace *;
	auto getVehicleModelInfo(const unsigned __int16 ui16ModelIndex) const -> class cVehicleModelInfo *;
	auto get3DMarkerPoint(const unsigned __int8 ui8ID) const -> class c3DMarker *;
	auto getCurrent3DMarkerPoint(void) const -> class c3DMarker *;
	auto getDirectionArrow(const unsigned __int8 ui8ID) const -> class cDirectionArrow *;
	auto getFx(void) const -> class cFx *;
	auto getFxManager(void) const -> class cFxManager *;
	auto getStreamingInfo(const unsigned __int32 ui32ModelIndex) const -> class cStreamingInfo *;
	auto getDirect3D9(void) const->IDirect3D9 *;
	auto getCurrentD3DDevice(void) const->IDirect3DDevice9 *;
	auto getD3DPresentParams(void) const->D3DPRESENT_PARAMETERS *;
	auto isVersionUS10(void) const -> bool;
	auto isGamePaused(void) const -> bool;
	auto isInputBlocked(void) const -> bool;
	auto getGameState(void) const -> unsigned __int32;
	auto getFPS(void) const -> float;
	~cSA(void);

	static auto fixAnyVeh(void *pAnyVehicle) -> void;
	static auto disembarkPed(const class cPed *pPed) -> void;
	static auto flipVeh(class cVehicle *pVehicle) -> void;
	static auto unfreeze(const class cMain *pMain) -> void;
	static auto getPosition(const class cSA *pSA) -> class cVector3D *;
	static auto getWaypointPos(const class cSA *pSA, class cVector3D &&vecMarkOut) -> bool;
	static auto teleport(const class cSA *pSA, const class cVector3D *pPos, const bool bLoadScene = false, const bool bFindZ = false, const float fAddToZ = 0) -> bool;

	private:
	class cSAPatch *pPatch{nullptr};
};

#endif