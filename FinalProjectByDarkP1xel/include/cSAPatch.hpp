//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPATCH_HPP
#define SAPATCH_HPP

#pragma once

#include "include\cMain.hpp"

class cSAPatch final {
	public:
	explicit cSAPatch::cSAPatch(class cMain *pMain);
	auto cSAPatch::patchLeaveCarAndDie(void) const -> void;
	auto cSAPatch::patchFlickr(void) const -> void;
	auto cSAPatch::patchRandomGPCI(void) const -> void;
	auto cSAPatch::patchExtraColour(void) const -> void;
	auto cSAPatch::patchEntryExitStackPosn(void) const -> void;
	auto cSAPatch::DisableMouseUpdateETC(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ProtHPVeh(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ProtDieInVeh(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ProtDieEnterVehOnFire(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ProtTriggerExplosion(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WallShot(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysCrossHair(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::QuickCrossHair(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::FastSpawn(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoSpreadPro(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::SprintSpeed(const unsigned __int32 ui32Status, const float *pSprintSpeed) const -> void;
	auto cSAPatch::JetPackSpeed(const unsigned __int32 ui32Status, const float *pJetPackSpeed) const -> void;
	auto cSAPatch::NoJetPackDropPickup(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoJetPackSounds(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::HudPercentage(const unsigned __int32 ui32Status, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) const -> void;
	auto cSAPatch::NoHudBorder(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ForegroundWork(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoCamCollision(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DisableEffects(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DrawDistance(const unsigned __int32 ui32Status, const float *pDrawDistance) const -> void;
	auto cSAPatch::NoZerosInMoney(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoClosedDoors(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoPlaneHeightLimit(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysVehEnterExit(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::BunnyHopSpeed(const unsigned __int32 ui32Status, const float *pBunnyHopSpeed) const -> void;
	auto cSAPatch::BunnyHopHeight(const unsigned __int32 ui32Status, const float *pBunnyHopHeight) const -> void;
	auto cSAPatch::ColorfulSmoke(const unsigned __int32 ui32Status, const float *fR, const float *fG, const float *fB) const -> void;
	auto cSAPatch::GunRun(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::GunJump(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::RapidFire(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysDriftSmoke(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysWeaponSwitch(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AllSkills(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysDuck(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::QuickInterior(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoInertia(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LongBulletTrack(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DayVehLights(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LongLights(const unsigned __int32 ui32Status, const float *pLongLights) const -> void;
	auto cSAPatch::BrightnessLights(const unsigned __int32 ui32Status, const unsigned __int8 ui8BrightnessLights) const -> void;
	auto cSAPatch::AlwaysGlide(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoModelLimit(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WeaponWallHack(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::RadarStreamSize(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::InfiniteAmmo(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoReload(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AllowDropJetPack(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::RenderGrass(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::SunMoon(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::UseGameCheats(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::FullAiming(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DrawBlurOnSpeed(const unsigned __int32 ui32Status, const unsigned __int8 ui8BlurIntensity, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) const -> void;
	auto cSAPatch::NoLeaveVehUnderWorld(const unsigned __int32 ui32Status, const float *pLimit) const -> void;
	auto cSAPatch::NeverDrunk(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DrawVehNames(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LightMap(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::HPBar160(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysRainOnVeh(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::BlipScaler(const unsigned __int32 ui32Status, const unsigned __int8 ui8Size) const -> void;
	auto cSAPatch::PlayerBlipScale(const unsigned __int32 ui32Status, const float *pSize) const -> void;
	auto cSAPatch::NoBlipInfelicity(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoNorthBlip(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoGaragesCamera(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::HudClock(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoWaterCollision(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AirBreak(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoWetRoads(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoUpsideDownAnim(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::Ripazha(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoBladeRotating(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::SpeechMore(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoCameraResetAfterAim(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::CutCameraAnim(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LightPedsVehs(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoPedStopAnim(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoRadio(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::FixedAmmoDraw(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::MatrixSkins(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoFall(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoAngleDelay(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoWindSound(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::FishEye(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoFog(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DisableCarMoveZ(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WaterProofEngine(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoClouds(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoLODs(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoParaAfterLeaveFlyVeh(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::SpeedHackMenuMap(const unsigned __int32 ui32Status, const float *pZoomSpeed, const float *pMoveSpeed) const -> void;
	auto cSAPatch::DarkShadows(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoDarkUnderWater(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LockCameraTargetEntity(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoHeatHaze(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysHUD(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::JetPackAnyWeapon(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoFallenTeleport(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::PlusC(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WallHackRadarTraces(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ObjectPunchPower(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::StanceStyle(const unsigned __int32 ui32Status, const float *pStanceTotal) const -> void;
	auto cSAPatch::FatWheels(const unsigned __int32 ui32Status, const float *pFatTotal) const -> void;
	auto cSAPatch::InfiniteRun(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::DriveOnWater(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::InfiniteOxygen(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::PressAuto(const unsigned __int32 ui32Status, const float *pPressAuto) const -> void;
	auto cSAPatch::PowerSteering(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::AlwaysAsphalt(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoTexturesAlpha(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LongTimeBlood(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::LockAimAngle(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoCancelJump(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoCancelAim(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoWaterWaves(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WaterAlpha(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WeaponSwitchFire(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::SubmergedSwimming(const unsigned __int32 ui32Status, const float *pSubmer) const -> void;
	auto cSAPatch::WaterForceOfGravity(const unsigned __int32 ui32Status, const float *pForceOfGravity) const -> void;
	auto cSAPatch::FallOnWater(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::SteeringWheelSpeed(const unsigned __int32 ui32Status, const float *pWheelSpeed) const -> void;
	auto cSAPatch::EversionOfWheels(const unsigned __int32 ui32Status, const float *pWheelSpeed) const -> void;
	auto cSAPatch::AcceleratedRetraction(const unsigned __int32 ui32Status, const float *pRetraction) const -> void;
	auto cSAPatch::NoDayAndNightVision(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoSteerBlock(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::HeightSphere(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::BoostOnDrift(const unsigned __int32 ui32Status, const float *pBoost) const -> void;
	auto cSAPatch::LongTimeFootSmoke(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NewGunFlash(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::QuickBikeHop(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::BikeSpinner(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::ArmOnWindow(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::BigHead(const unsigned __int32 ui32Status, const float fSize) const -> void;
	auto cSAPatch::NoVehStopOnPedLeave(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::InteriorRunningFix(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::StaticVehCamera(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::QuickParkour(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoVehWheelReset(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoVehInAirRotate(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::VehRLRotate(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::WeaponAllAxis(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoBikeJumpLimit(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::FastPassenger(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoCameraLock(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoSpeedLock(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoGameSpeedReset(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::NoShadows(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::MoreVehReflection(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::FreePayNSpray(const unsigned __int32 ui32Status) const -> void;
	auto cSAPatch::PickUpInVeh(const unsigned __int32 ui32Status) const -> void;
	cSAPatch::~cSAPatch(void);

	private:
	class cMain *pMain{nullptr};
};

#endif