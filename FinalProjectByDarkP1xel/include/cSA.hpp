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

#include "include\cMain.hpp"

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
	explicit cSA::cSA(class cMain *pMain);
	auto cSA::getPatch(void) const -> class cSAPatch *;
	auto cSA::getPlayerPed(void) const -> class cPed *;
	auto cSA::getPlayerInfo(void) const -> class cPlayerInfo *;
	auto cSA::getPlayerVehicle(const bool bIncludeRemote = false) const -> class cAutomobile *;
	auto cSA::getCamera(void) const -> class cCamera *;
	auto cSA::getHandlingDataMgr(void) const -> class cHandlingDataMgr *;
	auto cSA::getWeaponInfo(const unsigned __int8 ui8WeaponID, const unsigned __int8 ui8SkillID) const -> class cWeaponInfo *;
	auto cSA::getPad(const unsigned __int8 ui8PadID = 0) const -> class cPad *;
	auto cSA::getAudioEngine(void) const -> class cAudioEngine *;
	auto cSA::getRadioTrackManager(void) const -> class cAERadioTrackManager *;
	auto cSA::getPathFind(void) const -> class cPathFind *;
	auto cSA::getStreamedScripts(void) const -> class cStreamedScripts *;
	auto cSA::getMenuManager(void) const -> class cMenuManager *;
	auto cSA::getRadarTrace(const unsigned __int16 ui16TraceID) const -> class cRadarTrace *;
	auto cSA::getVehicleModelInfo(const unsigned __int16 ui16ModelIndex) const -> class cVehicleModelInfo *;
	auto cSA::get3DMarkerPoint(const unsigned __int8 ui8ID) const -> class c3DMarker *;
	auto cSA::getCurrent3DMarkerPoint(void) const -> class c3DMarker *;
	auto cSA::getDirectionArrow(const unsigned __int8 ui8ID) const -> class cDirectionArrow *;
	auto cSA::getFx(void) const -> class cFx *;
	auto cSA::getFxManager(void) const -> class cFxManager *;
	auto cSA::getStreamingInfo(const unsigned __int32 ui32ModelIndex) const -> class cStreamingInfo *;
	auto cSA::getDirect3D9(void) const->IDirect3D9 *;
	auto cSA::getCurrentD3DDevice(void) const->IDirect3DDevice9 *;
	auto cSA::getD3DPresentParams(void) const->D3DPRESENT_PARAMETERS *;
	auto cSA::isVersionUS10(void) const -> bool;
	auto cSA::isGamePaused(void) const -> bool;
	auto cSA::isInputBlocked(void) const -> bool;
	auto cSA::getGameState(void) const -> unsigned __int32;
	auto cSA::getFPS(void) const -> float;
	cSA::~cSA(void);

	static auto cSA::fixAnyVeh(void *pAnyVehicle) -> void;
	static auto cSA::disembarkPed(const class cPed *pPed) -> void;
	static auto cSA::flipVeh(class cVehicle *pVehicle) -> void;
	static auto cSA::unfreeze(const class cMain *pMain) -> void;
	static auto cSA::getPosition(const class cSA *pSA) -> class cVector3D *;
	static auto cSA::getWaypointPos(const class cSA *pSA, class cVector3D &&vecMarkOut) -> bool;
	static auto cSA::teleport(const class cSA *pSA, const class cVector3D *pPos, const bool bLoadScene = false, const bool bFindZ = false, const float fAddToZ = 0) -> bool;

	private:
	class cSAPatch *pPatch{nullptr};
};

#endif