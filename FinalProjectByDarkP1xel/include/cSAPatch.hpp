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
	explicit cSAPatch(class cMain *pMain);
	auto patchLeaveCarAndDie(void) const -> void;
	auto patchFlickr(void) const -> void;
	auto patchRandomGPCI(void) const -> void;
	auto patchExtraColour(void) const -> void;
	auto patchEntryExitStackPosn(void) const -> void;
	auto DisableMouseUpdateETC(const unsigned __int32 ui32Status) const -> void;
	auto ProtHPVeh(const unsigned __int32 ui32Status) const -> void;
	auto ProtDieInVeh(const unsigned __int32 ui32Status) const -> void;
	auto ProtDieEnterVehOnFire(const unsigned __int32 ui32Status) const -> void;
	auto ProtTriggerExplosion(const unsigned __int32 ui32Status) const -> void;
	auto WallShot(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysCrossHair(const unsigned __int32 ui32Status) const -> void;
	auto QuickCrossHair(const unsigned __int32 ui32Status) const -> void;
	auto FastSpawn(const unsigned __int32 ui32Status) const -> void;
	auto NoSpreadPro(const unsigned __int32 ui32Status) const -> void;
	auto SprintSpeed(const unsigned __int32 ui32Status, const float *pSprintSpeed) const -> void;
	auto JetPackSpeed(const unsigned __int32 ui32Status, const float *pJetPackSpeed) const -> void;
	auto NoJetPackDropPickup(const unsigned __int32 ui32Status) const -> void;
	auto NoJetPackSounds(const unsigned __int32 ui32Status) const -> void;
	auto HudPercentage(const unsigned __int32 ui32Status, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) const -> void;
	auto NoHudBorder(const unsigned __int32 ui32Status) const -> void;
	auto ForegroundWork(const unsigned __int32 ui32Status) const -> void;
	auto NoCamCollision(const unsigned __int32 ui32Status) const -> void;
	auto DisableEffects(const unsigned __int32 ui32Status) const -> void;
	auto DrawDistance(const unsigned __int32 ui32Status, const float *pDrawDistance) const -> void;
	auto NoZerosInMoney(const unsigned __int32 ui32Status) const -> void;
	auto NoClosedDoors(const unsigned __int32 ui32Status) const -> void;
	auto NoPlaneHeightLimit(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysVehEnterExit(const unsigned __int32 ui32Status) const -> void;
	auto BunnyHopSpeed(const unsigned __int32 ui32Status, const float *pBunnyHopSpeed) const -> void;
	auto BunnyHopHeight(const unsigned __int32 ui32Status, const float *pBunnyHopHeight) const -> void;
	auto ColorfulSmoke(const unsigned __int32 ui32Status, const float *fR, const float *fG, const float *fB) const -> void;
	auto GunRun(const unsigned __int32 ui32Status) const -> void;
	auto GunJump(const unsigned __int32 ui32Status) const -> void;
	auto RapidFire(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysDriftSmoke(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysWeaponSwitch(const unsigned __int32 ui32Status) const -> void;
	auto AllSkills(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysDuck(const unsigned __int32 ui32Status) const -> void;
	auto QuickInterior(const unsigned __int32 ui32Status) const -> void;
	auto NoInertia(const unsigned __int32 ui32Status) const -> void;
	auto LongBulletTrack(const unsigned __int32 ui32Status) const -> void;
	auto DayVehLights(const unsigned __int32 ui32Status) const -> void;
	auto LongLights(const unsigned __int32 ui32Status, const float *pLongLights) const -> void;
	auto BrightnessLights(const unsigned __int32 ui32Status, const unsigned __int8 ui8BrightnessLights) const -> void;
	auto AlwaysGlide(const unsigned __int32 ui32Status) const -> void;
	auto NoModelLimit(const unsigned __int32 ui32Status) const -> void;
	auto WeaponWallHack(const unsigned __int32 ui32Status) const -> void;
	auto RadarStreamSize(const unsigned __int32 ui32Status) const -> void;
	auto InfiniteAmmo(const unsigned __int32 ui32Status) const -> void;
	auto NoReload(const unsigned __int32 ui32Status) const -> void;
	auto AllowDropJetPack(const unsigned __int32 ui32Status) const -> void;
	auto RenderGrass(const unsigned __int32 ui32Status) const -> void;
	auto SunMoon(const unsigned __int32 ui32Status) const -> void;
	auto UseGameCheats(const unsigned __int32 ui32Status) const -> void;
	auto FullAiming(const unsigned __int32 ui32Status) const -> void;
	auto DrawBlurOnSpeed(const unsigned __int32 ui32Status, const unsigned __int8 ui8BlurIntensity, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) const -> void;
	auto NoLeaveVehUnderWorld(const unsigned __int32 ui32Status, const float *pLimit) const -> void;
	auto NeverDrunk(const unsigned __int32 ui32Status) const -> void;
	auto DrawVehNames(const unsigned __int32 ui32Status) const -> void;
	auto LightMap(const unsigned __int32 ui32Status) const -> void;
	auto HPBar160(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysRainOnVeh(const unsigned __int32 ui32Status) const -> void;
	auto BlipScaler(const unsigned __int32 ui32Status, const unsigned __int8 ui8Size) const -> void;
	auto PlayerBlipScale(const unsigned __int32 ui32Status, const float *pSize) const -> void;
	auto NoBlipInfelicity(const unsigned __int32 ui32Status) const -> void;
	auto NoNorthBlip(const unsigned __int32 ui32Status) const -> void;
	auto NoGaragesCamera(const unsigned __int32 ui32Status) const -> void;
	auto HudClock(const unsigned __int32 ui32Status) const -> void;
	auto NoWaterCollision(const unsigned __int32 ui32Status) const -> void;
	auto AirBreak(const unsigned __int32 ui32Status) const -> void;
	auto NoWetRoads(const unsigned __int32 ui32Status) const -> void;
	auto NoUpsideDownAnim(const unsigned __int32 ui32Status) const -> void;
	auto Ripazha(const unsigned __int32 ui32Status) const -> void;
	auto NoBladeRotating(const unsigned __int32 ui32Status) const -> void;
	auto SpeechMore(const unsigned __int32 ui32Status) const -> void;
	auto NoCameraResetAfterAim(const unsigned __int32 ui32Status) const -> void;
	auto CutCameraAnim(const unsigned __int32 ui32Status) const -> void;
	auto LightPedsVehs(const unsigned __int32 ui32Status) const -> void;
	auto NoPedStopAnim(const unsigned __int32 ui32Status) const -> void;
	auto NoRadio(const unsigned __int32 ui32Status) const -> void;
	auto FixedAmmoDraw(const unsigned __int32 ui32Status) const -> void;
	auto MatrixSkins(const unsigned __int32 ui32Status) const -> void;
	auto NoFall(const unsigned __int32 ui32Status) const -> void;
	auto NoAngleDelay(const unsigned __int32 ui32Status) const -> void;
	auto NoWindSound(const unsigned __int32 ui32Status) const -> void;
	auto FishEye(const unsigned __int32 ui32Status) const -> void;
	auto NoFog(const unsigned __int32 ui32Status) const -> void;
	auto DisableCarMoveZ(const unsigned __int32 ui32Status) const -> void;
	auto WaterProofEngine(const unsigned __int32 ui32Status) const -> void;
	auto NoClouds(const unsigned __int32 ui32Status) const -> void;
	auto NoLODs(const unsigned __int32 ui32Status) const -> void;
	auto NoParaAfterLeaveFlyVeh(const unsigned __int32 ui32Status) const -> void;
	auto SpeedHackMenuMap(const unsigned __int32 ui32Status, const float *pZoomSpeed, const float *pMoveSpeed) const -> void;
	auto DarkShadows(const unsigned __int32 ui32Status) const -> void;
	auto NoDarkUnderWater(const unsigned __int32 ui32Status) const -> void;
	auto LockCameraTargetEntity(const unsigned __int32 ui32Status) const -> void;
	auto NoHeatHaze(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysHUD(const unsigned __int32 ui32Status) const -> void;
	auto JetPackAnyWeapon(const unsigned __int32 ui32Status) const -> void;
	auto NoFallenTeleport(const unsigned __int32 ui32Status) const -> void;
	auto PlusC(const unsigned __int32 ui32Status) const -> void;
	auto WallHackRadarTraces(const unsigned __int32 ui32Status) const -> void;
	auto ObjectPunchPower(const unsigned __int32 ui32Status) const -> void;
	auto StanceStyle(const unsigned __int32 ui32Status, const float *pStanceTotal) const -> void;
	auto FatWheels(const unsigned __int32 ui32Status, const float *pFatTotal) const -> void;
	auto InfiniteRun(const unsigned __int32 ui32Status) const -> void;
	auto DriveOnWater(const unsigned __int32 ui32Status) const -> void;
	auto InfiniteOxygen(const unsigned __int32 ui32Status) const -> void;
	auto PressAuto(const unsigned __int32 ui32Status, const float *pPressAuto) const -> void;
	auto PowerSteering(const unsigned __int32 ui32Status) const -> void;
	auto AlwaysAsphalt(const unsigned __int32 ui32Status) const -> void;
	auto NoTexturesAlpha(const unsigned __int32 ui32Status) const -> void;
	auto LongTimeBlood(const unsigned __int32 ui32Status) const -> void;
	auto LockAimAngle(const unsigned __int32 ui32Status) const -> void;
	auto NoCancelJump(const unsigned __int32 ui32Status) const -> void;
	auto NoCancelAim(const unsigned __int32 ui32Status) const -> void;
	auto NoWaterWaves(const unsigned __int32 ui32Status) const -> void;
	auto WaterAlpha(const unsigned __int32 ui32Status) const -> void;
	auto WeaponSwitchFire(const unsigned __int32 ui32Status) const -> void;
	auto SubmergedSwimming(const unsigned __int32 ui32Status, const float *pSubmer) const -> void;
	auto WaterForceOfGravity(const unsigned __int32 ui32Status, const float *pForceOfGravity) const -> void;
	auto FallOnWater(const unsigned __int32 ui32Status) const -> void;
	auto SteeringWheelSpeed(const unsigned __int32 ui32Status, const float *pWheelSpeed) const -> void;
	auto EversionOfWheels(const unsigned __int32 ui32Status, const float *pWheelSpeed) const -> void;
	auto AcceleratedRetraction(const unsigned __int32 ui32Status, const float *pRetraction) const -> void;
	auto NoDayAndNightVision(const unsigned __int32 ui32Status) const -> void;
	auto NoSteerBlock(const unsigned __int32 ui32Status) const -> void;
	auto HeightSphere(const unsigned __int32 ui32Status) const -> void;
	auto BoostOnDrift(const unsigned __int32 ui32Status, const float *pBoost) const -> void;
	auto LongTimeFootSmoke(const unsigned __int32 ui32Status) const -> void;
	auto NewGunFlash(const unsigned __int32 ui32Status) const -> void;
	auto QuickBikeHop(const unsigned __int32 ui32Status) const -> void;
	auto BikeSpinner(const unsigned __int32 ui32Status) const -> void;
	auto ArmOnWindow(const unsigned __int32 ui32Status) const -> void;
	auto BigHead(const unsigned __int32 ui32Status, const float fSize) const -> void;
	auto NoVehStopOnPedLeave(const unsigned __int32 ui32Status) const -> void;
	auto InteriorRunningFix(const unsigned __int32 ui32Status) const -> void;
	auto StaticVehCamera(const unsigned __int32 ui32Status) const -> void;
	auto QuickParkour(const unsigned __int32 ui32Status) const -> void;
	auto NoVehWheelReset(const unsigned __int32 ui32Status) const -> void;
	auto NoVehInAirRotate(const unsigned __int32 ui32Status) const -> void;
	auto VehRLRotate(const unsigned __int32 ui32Status) const -> void;
	auto WeaponAllAxis(const unsigned __int32 ui32Status) const -> void;
	auto NoBikeJumpLimit(const unsigned __int32 ui32Status) const -> void;
	auto FastPassenger(const unsigned __int32 ui32Status) const -> void;
	auto NoCameraLock(const unsigned __int32 ui32Status) const -> void;
	auto NoSpeedLock(const unsigned __int32 ui32Status) const -> void;
	auto NoGameSpeedReset(const unsigned __int32 ui32Status) const -> void;
	auto NoShadows(const unsigned __int32 ui32Status) const -> void;
	auto MoreVehReflection(const unsigned __int32 ui32Status) const -> void;
	auto FreePayNSpray(const unsigned __int32 ui32Status) const -> void;
	auto PickUpInVeh(const unsigned __int32 ui32Status) const -> void;
	~cSAPatch(void);

	private:
	class cMain *pMain{nullptr};
};

#endif