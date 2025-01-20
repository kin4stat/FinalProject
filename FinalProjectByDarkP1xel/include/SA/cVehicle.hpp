//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAVEHICLE_HPP
#define SAVEHICLE_HPP

#pragma once

#include "SA/cPhysical.hpp"

class cVehicle final {
	public:

	enum class eVehDoors : const unsigned __int32 {
		NOT_USED,
		UNLOCKED,
		LOCKED,
		LOCKOUT_PLAYER_ONLY,
		LOCKED_PLAYER_INSIDE,
		COP_CAR,
		FORCE_SHUT_DOORS,
		SKIP_SHUT_DOORS
	};

	class cPhysical Physical {};
	__int8 i8Pad[0x2F0];
	struct stVehFlags final {
		unsigned __int8 bIsLawEnforcer : 1;
		unsigned __int8 bIsAmbulanceOnDuty : 1;
		unsigned __int8 bIsFireTruckOnDuty : 1;
		unsigned __int8 bIsLocked : 1;
		unsigned __int8 bEngineOn : 1;
		unsigned __int8 bIsHandbrakeOn : 1;
		unsigned __int8 bLightsOn : 1;
		unsigned __int8 bFreebies : 1;
		unsigned __int8 bIsVan : 1;
		unsigned __int8 bIsBus : 1;
		unsigned __int8 bIsBig : 1;
		unsigned __int8 bLowVehicle : 1;
		unsigned __int8 bComedyControls : 1;
		unsigned __int8 bWarnedPeds : 1;
		unsigned __int8 bCraneMessageDone : 1;
		unsigned __int8 bTakeLessDamage : 1;
		unsigned __int8 bIsDamaged : 1;
		unsigned __int8 bHasBeenOwnedByPlayer : 1;
		unsigned __int8 bFadeOut : 1;
		unsigned __int8 bIsBeingCarJacked : 1;
		unsigned __int8 bCreateRoadBlockPeds : 1;
		unsigned __int8 bCanBeDamaged : 1;
		unsigned __int8 bOccupantsHaveBeenGenerated : 1;
		unsigned __int8 bGunSwitchedOff : 1;
		unsigned __int8 bVehicleColProcessed : 1;
		unsigned __int8 bIsCarParkVehicle : 1;
		unsigned __int8 bHasAlreadyBeenRecorded : 1;
		unsigned __int8 bPartOfConvoy : 1;
		unsigned __int8 bHeliMinimumTilt : 1;
		unsigned __int8 bAudioChangingGear : 1;
		unsigned __int8 bIsDrowning : 1;
		unsigned __int8 bTyresDontBurst : 1;
		unsigned __int8 bCreatedAsPoliceVehicle : 1;
		unsigned __int8 bRestingOnPhysical : 1;
		unsigned __int8 bParking : 1;
		unsigned __int8 bCanPark : 1;
		unsigned __int8 bFireGun : 1;
		unsigned __int8 bDriverLastFrame : 1;
		unsigned __int8 bNeverUseSmallerRemovalRange : 1;
		unsigned __int8 bIsRCVehicle : 1;
		unsigned __int8 bAlwaysSkidMarks : 1;
		unsigned __int8 bEngineBroken : 1;
		unsigned __int8 bVehicleCanBeTargetted : 1;
		unsigned __int8 bPartOfAttackWave : 1;
		unsigned __int8 bWinchCanPickMeUp : 1;
		unsigned __int8 bImpounded : 1;
		unsigned __int8 bVehicleCanBeTargettedByHS : 1;
		unsigned __int8 bSirenOrAlarm : 1;
		unsigned __int8 bHasGangLeaningOn : 1;
		unsigned __int8 bGangMembersForRoadBlock : 1;
		unsigned __int8 bDoesProvideCover : 1;
		unsigned __int8 bMadDriver : 1;
		unsigned __int8 bUpgradedStereo : 1;
		unsigned __int8 bConsideredByPlayer : 1;
		unsigned __int8 bPetrolTankIsWeakPoint : 1;
		unsigned __int8 bDisableParticles : 1;
		unsigned __int8 bHasBeenResprayed : 1;
		unsigned __int8 bUseCarCheats : 1;
		unsigned __int8 bDontSetColourWhenRemapping : 1;
		unsigned __int8 bUsedForReplay : 1;
	} VehFlags{};

	explicit cVehicle::cVehicle(void) = default;
	auto cVehicle::getDriver(void) const -> class cPed *;
	auto cVehicle::getTractor(void) const -> class cAutomobile *;
	auto cVehicle::getTrailer(void) const -> class cTrailer *;
	auto cVehicle::getHealth(void) const -> float;
	auto cVehicle::setHealth(const float fHealth) -> void;
	auto cVehicle::setEngineState(const bool bState) -> void;
	auto cVehicle::getInterior(void) const -> unsigned __int8;
	auto cVehicle::setInterior(const unsigned __int8 ui8Interior) -> void;
	auto cVehicle::getColor(const unsigned __int8 *pPrimary, const unsigned __int8 *pSecondary = nullptr, const unsigned __int8 *pTertiary = nullptr, const unsigned __int8 *pQuaternary = nullptr) const -> void;
	auto cVehicle::setColor(const unsigned __int8 *pPrimary, const unsigned __int8 *pSecondary = nullptr, const unsigned __int8 *pTertiary = nullptr, const unsigned __int8 *pQuaternary = nullptr) -> void;
	auto cVehicle::getClass(void) const -> unsigned __int32;
	auto cVehicle::getSubClass(void) const -> unsigned __int32;
	auto cVehicle::getDoorsStatus(void) const->cVehicle::eVehDoors;
	auto cVehicle::getHandlingData(void) const -> class cAutoHandlingData *;
	auto cVehicle::setModelIndex(const unsigned __int32 ui32ModelID) -> void;
	auto cVehicle::setRemap(const __int32 i32RemapID) -> void;
	auto cVehicle::setRemapTexDictionary(const __int32 i32RemapID) -> void;
	auto cVehicle::isEmpty(void) const -> bool;
	cVehicle::~cVehicle(void) = default;

	private:
};

#endif