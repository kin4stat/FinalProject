//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAAUTOMOBILE_HPP
#define SAAUTOMOBILE_HPP

#pragma once

#include "SA/cVehicle.hpp"
#include "SA/cDamageManager.hpp"

class cAutomobile final {
	public:
	class cVehicle Vehicle {};

	explicit cAutomobile::cAutomobile(void) = default;
	auto cAutomobile::getDamageManager(void) const -> class cDamageManager *;
	auto cAutomobile::fix(void) -> void;
	auto cAutomobile::teleport(const class cVector3D *pPos, const bool bResetAngle) -> void;
	auto cAutomobile::setPanelDamage(const cDamageManager::ePanels Panel, const bool bCreateWindowGlass) -> void;
	auto cAutomobile::popPanel(const unsigned __int32 ui32NodeID, const cDamageManager::ePanels Panel, const bool bShowVisualEffect) -> void;
	auto cAutomobile::getComponentWorldPosition(const unsigned __int32 ui32ComponentID, class cVector3D *pResult) -> void;
	auto cAutomobile::setModelIndex(const unsigned __int32 ui32ModelID) -> void;
	auto cAutomobile::setTowLink(const class cVehicle *pVehicle, const bool bUnk) -> bool;
	cAutomobile::~cAutomobile(void) = default;

	private:
};

#endif