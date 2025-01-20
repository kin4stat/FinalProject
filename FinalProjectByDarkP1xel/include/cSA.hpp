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

#include "include\SA\cPed.hpp"
#include "include\SA\cPlayerInfo.hpp"
#include "include\SA\cAutomobile.hpp"
#include "include\SA\cCamera.hpp"
#include "include\SA\cWorld.hpp"
#include "include\SA\cStreaming.hpp"
#include "include\SA\cStreamingInfo.hpp"
#include "include\SA\cCheat.hpp"
#include "include\SA\cHandlingDataMgr.hpp"
#include "include\SA\cWeaponInfo.hpp"
#include "include\SA\cPad.hpp"
#include "include\SA\cColStore.hpp"
#include "include\SA\cAudioEngine.hpp"
#include "include\SA\cAERadioTrackManager.hpp"
#include "include\SA\cPathFind.hpp"
#include "include\SA\cIPLStore.hpp"
#include "include\SA\cStreamedScripts.hpp"
#include "include\SA\cRadar.hpp"
#include "include\SA\cMenuManager.hpp"
#include "include\SA\cRadarTrace.hpp"
#include "include\SA\cWeather.hpp"
#include "include\SA\cPools.hpp"
#include "include\SA\cVehicleModelInfo.hpp"
#include "include\SA\c3DMarker.hpp"
#include "include\SA\cDirectionArrow.hpp"
#include "include\SA\cFx.hpp"
#include "include\SA\cFxManager.hpp"
#include "include\SA\cQuadBike.hpp"
#include "include\SA\cHeli.hpp"
#include "include\SA\cPlane.hpp"
#include "include\SA\cBoat.hpp"
#include "include\SA\cBike.hpp"
#include "include\SA\cTrailer.hpp"
#include "include\SA\cObject.hpp"

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