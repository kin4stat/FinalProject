//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#define LANG_RUS true
#define PROJECT_VERSION_A "1.0.8.9"
#define PROJECT_VERSION_W L"1.0.8.9"

#include "include\cMain.hpp"
#include "include\cExportAPI.hpp"

//#pragma warning(push)
//#pragma warning(disable:4740)	/* Разрешает оставлять объекты препятствующих глобальной оптимизации */
//#pragma warning(disable:4725)	/* Некоторые инструкции Pentium */
//#pragma warning(disable:4189)	/* Разрешает оставлять неиспользуемое */
//#pragma warning(disable:4100)	/* Формальные параметры */


static const class cMain *pMain{nullptr};


static auto __cdecl __AutoLoadPROTS(const unsigned __int32 ui32Status) -> void {
	const class cGui *pGui{pMain->getGui()};
	const class cSAPatch *pSAPatch{pMain->getSA()->getPatch()};
	pSAPatch->ProtDieInVeh(pGui->getUInteger(cGui::eSyncUIntegers::eProtDieInVeh) ? ui32Status : 0);
	pSAPatch->ProtDieEnterVehOnFire(pGui->getUInteger(cGui::eSyncUIntegers::eProtDieEnterVehOnFire) ? ui32Status : 0);
	pSAPatch->ProtHPVeh(pGui->getUInteger(cGui::eSyncUIntegers::eProtHPVeh) ? ui32Status : 0);
	pSAPatch->ProtTriggerExplosion(pGui->getUInteger(cGui::eSyncUIntegers::eProtTriggerExplosion) ? ui32Status : 0);
	return;
}
static auto __cdecl __AutoLoad(const unsigned __int32 ui32Status) -> void {
	class cGui *pGui{pMain->getGui()};
	const class cSA *pSA{pMain->getSA()};
	const class cSAPatch *pSAPatch{pSA->getPatch()};
	const class cMPPatch *pMPPatch{pMain->getMP()->getPatch()};

	__AutoLoadPROTS(pGui->getUInteger(cGui::eSyncUIntegers::eProt) ? ui32Status : 0);
	pSAPatch->LockAimAngle(0);
	pSAPatch->LockCameraTargetEntity(0);
	pSAPatch->AirBreak(0);
	pSAPatch->NoGameSpeedReset(0);
	pMPPatch->NoLockInfoOnSpec(0);
	pSAPatch->WallShot(pGui->getUInteger(cGui::eSyncUIntegers::eWallShot) ? ui32Status : 0);
	pSAPatch->AlwaysCrossHair(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysCrossHair) ? ui32Status : 0);
	pSAPatch->QuickCrossHair(pGui->getUInteger(cGui::eSyncUIntegers::eQuickCrossHair) ? ui32Status : 0);
	pSAPatch->FastSpawn(pGui->getUInteger(cGui::eSyncUIntegers::eFastSpawn) ? ui32Status : 0);
	pSAPatch->NoSpreadPro(pGui->getUInteger(cGui::eSyncUIntegers::eNoSpreadPro) ? ui32Status : 0);
	pSAPatch->NoJetPackDropPickup(pGui->getUInteger(cGui::eSyncUIntegers::eNoJetPackDropPickup) ? ui32Status : 0);
	pSAPatch->NoJetPackSounds(pGui->getUInteger(cGui::eSyncUIntegers::eNoJetPackSounds) ? ui32Status : 0);
	pSAPatch->NoHudBorder(pGui->getUInteger(cGui::eSyncUIntegers::eNoHudBorder) ? ui32Status : 0);
	pSAPatch->ForegroundWork(pGui->getUInteger(cGui::eSyncUIntegers::eForegroundWork) ? ui32Status : 0);
	pSAPatch->NoCamCollision(pGui->getUInteger(cGui::eSyncUIntegers::eNoCamCollision) ? ui32Status : 0);
	pSAPatch->DisableEffects(pGui->getUInteger(cGui::eSyncUIntegers::eDisableEffects) ? ui32Status : 0);
	pSAPatch->NoZerosInMoney(pGui->getUInteger(cGui::eSyncUIntegers::eNoZerosInMoney) ? ui32Status : 0);
	pSAPatch->NoClosedDoors(pGui->getUInteger(cGui::eSyncUIntegers::eNoClosedDoors) ? ui32Status : 0);
	pSAPatch->NoPlaneHeightLimit(pGui->getUInteger(cGui::eSyncUIntegers::eNoPlaneHeightLimit) ? ui32Status : 0);
	pSAPatch->AlwaysVehEnterExit(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysVehEnterExit) ? ui32Status : 0);
	pSAPatch->GunRun(pGui->getUInteger(cGui::eSyncUIntegers::eGunRun) ? ui32Status : 0);
	pSAPatch->GunJump(pGui->getUInteger(cGui::eSyncUIntegers::eGunJump) ? ui32Status : 0);
	pSAPatch->RapidFire(pGui->getUInteger(cGui::eSyncUIntegers::eRapidFire) ? ui32Status : 0);
	pSAPatch->AlwaysDriftSmoke(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysDriftSmoke) ? ui32Status : 0);
	pSAPatch->AlwaysWeaponSwitch(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysWeaponSwitch) ? ui32Status : 0);
	pSAPatch->AllSkills(pGui->getUInteger(cGui::eSyncUIntegers::eAllSkills) ? ui32Status : 0);
	pSAPatch->AlwaysDuck(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysDuck) ? ui32Status : 0);
	pSAPatch->QuickInterior(pGui->getUInteger(cGui::eSyncUIntegers::eQuickInterior) ? ui32Status : 0);
	pSAPatch->NoInertia(pGui->getUInteger(cGui::eSyncUIntegers::eNoInertia) ? ui32Status : 0);
	pSAPatch->LongBulletTrack(pGui->getUInteger(cGui::eSyncUIntegers::eLongBulletTrack) ? ui32Status : 0);
	pSAPatch->DayVehLights(pGui->getUInteger(cGui::eSyncUIntegers::eDayVehLights) ? ui32Status : 0);
	pSAPatch->AlwaysGlide(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysGlide) ? ui32Status : 0);
	pSAPatch->NoModelLimit(pGui->getUInteger(cGui::eSyncUIntegers::eNoModelLimit) ? ui32Status : 0);
	pSAPatch->WeaponWallHack(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackWeapon) ? ui32Status : 0);
	pSAPatch->RadarStreamSize(pGui->getUInteger(cGui::eSyncUIntegers::eRadarStreamSize) ? ui32Status : 0);
	pSAPatch->InfiniteAmmo(pGui->getUInteger(cGui::eSyncUIntegers::eInfiniteAmmo) ? ui32Status : 0);
	pSAPatch->NoReload(pGui->getUInteger(cGui::eSyncUIntegers::eNoReload) ? ui32Status : 0);
	pSAPatch->AllowDropJetPack(pGui->getUInteger(cGui::eSyncUIntegers::eAllowDropJetPack) ? ui32Status : 0);
	pSAPatch->RenderGrass(pGui->getUInteger(cGui::eSyncUIntegers::eRenderGrass) ? ui32Status : 0);
	pSAPatch->SunMoon(pGui->getUInteger(cGui::eSyncUIntegers::eSunMoon) ? ui32Status : 0);
	pSAPatch->UseGameCheats(pGui->getUInteger(cGui::eSyncUIntegers::eUseGameCheats) ? ui32Status : 0);
	pSAPatch->FullAiming(pGui->getUInteger(cGui::eSyncUIntegers::eFullAiming) ? ui32Status : 0);
	pSAPatch->NeverDrunk(pGui->getUInteger(cGui::eSyncUIntegers::eNeverDrunk) ? ui32Status : 0);
	pSAPatch->DrawVehNames(pGui->getUInteger(cGui::eSyncUIntegers::eDrawVehNames) ? ui32Status : 0);
	pSAPatch->LightMap(pGui->getUInteger(cGui::eSyncUIntegers::eLightMap) ? ui32Status : 0);
	pSAPatch->HPBar160(pGui->getUInteger(cGui::eSyncUIntegers::e160HP) ? ui32Status : 0);
	pSAPatch->AlwaysRainOnVeh(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysRainOnVeh) ? ui32Status : 0);
	pSAPatch->NoBlipInfelicity(pGui->getUInteger(cGui::eSyncUIntegers::eNoBlipInfelicity) ? ui32Status : 0);
	pSAPatch->NoNorthBlip(pGui->getUInteger(cGui::eSyncUIntegers::eNoNorthBlip) ? ui32Status : 0);
	pSAPatch->NoGaragesCamera(pGui->getUInteger(cGui::eSyncUIntegers::eNoGaragesCamera) ? ui32Status : 0);
	pSAPatch->HudClock(pGui->getUInteger(cGui::eSyncUIntegers::eHudClock) ? ui32Status : 0);
	pSAPatch->NoWaterCollision(pGui->getUInteger(cGui::eSyncUIntegers::eNoWaterCollision) ? ui32Status : 0);
	pSAPatch->NoWetRoads(pGui->getUInteger(cGui::eSyncUIntegers::eNoWetRoads) ? ui32Status : 0);
	pSAPatch->NoUpsideDownAnim(pGui->getUInteger(cGui::eSyncUIntegers::eNoUpsideDownAnim) ? ui32Status : 0);
	pSAPatch->Ripazha(pGui->getUInteger(cGui::eSyncUIntegers::eRipazha) ? ui32Status : 0);
	pSAPatch->NoBladeRotating(pGui->getUInteger(cGui::eSyncUIntegers::eNoBladeRotating) ? ui32Status : 0);
	pSAPatch->SpeechMore(pGui->getUInteger(cGui::eSyncUIntegers::eSpeechMore) ? ui32Status : 0);
	pSAPatch->NoCameraResetAfterAim(pGui->getUInteger(cGui::eSyncUIntegers::eNoCameraResetAfterAim) ? ui32Status : 0);
	pSAPatch->CutCameraAnim(pGui->getUInteger(cGui::eSyncUIntegers::eCutCameraAnim) ? ui32Status : 0);
	pSAPatch->LightPedsVehs(pGui->getUInteger(cGui::eSyncUIntegers::eLightPedsVehs) ? ui32Status : 0);
	pSAPatch->NoPedStopAnim(pGui->getUInteger(cGui::eSyncUIntegers::eNoPedStopAnim) ? ui32Status : 0);
	pSAPatch->NoRadio(pGui->getUInteger(cGui::eSyncUIntegers::eNoRadio) ? ui32Status : 0);
	pSAPatch->FixedAmmoDraw(pGui->getUInteger(cGui::eSyncUIntegers::eFixedAmmoDraw) ? ui32Status : 0);
	pSAPatch->MatrixSkins(pGui->getUInteger(cGui::eSyncUIntegers::eMatrixSkins) ? ui32Status : 0);
	pSAPatch->NoFall(pGui->getUInteger(cGui::eSyncUIntegers::eNoFall) ? ui32Status : 0);
	pSAPatch->NoAngleDelay(pGui->getUInteger(cGui::eSyncUIntegers::eNoAngleDelay) ? ui32Status : 0);
	pSAPatch->NoWindSound(pGui->getUInteger(cGui::eSyncUIntegers::eNoWindSound) ? ui32Status : 0);
	pSAPatch->FishEye(pGui->getUInteger(cGui::eSyncUIntegers::eFishEye) ? ui32Status : 0);
	pSAPatch->NoFog(pGui->getUInteger(cGui::eSyncUIntegers::eNoFog) ? ui32Status : 0);
	pSAPatch->DisableCarMoveZ(pGui->getUInteger(cGui::eSyncUIntegers::eDisableCarMoveZ) ? ui32Status : 0);
	pSAPatch->WaterProofEngine(pGui->getUInteger(cGui::eSyncUIntegers::eWaterProofEngine) ? ui32Status : 0);
	pSAPatch->NoClouds(pGui->getUInteger(cGui::eSyncUIntegers::eNoClouds) ? ui32Status : 0);
	pSAPatch->NoLODs(pGui->getUInteger(cGui::eSyncUIntegers::eNoLODs) ? ui32Status : 0);
	pSAPatch->NoParaAfterLeaveFlyVeh(pGui->getUInteger(cGui::eSyncUIntegers::eNoParaAfterLeaveFlyVeh) ? ui32Status : 0);
	pSAPatch->DarkShadows(pGui->getUInteger(cGui::eSyncUIntegers::eDarkShadows) ? ui32Status : 0);
	pSAPatch->NoDarkUnderWater(pGui->getUInteger(cGui::eSyncUIntegers::eNoDarkUnderWater) ? ui32Status : 0);
	pSAPatch->NoHeatHaze(pGui->getUInteger(cGui::eSyncUIntegers::eNoHeatHaze) ? ui32Status : 0);
	pSAPatch->AlwaysHUD(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysHUD) ? ui32Status : 0);
	pSAPatch->JetPackAnyWeapon(pGui->getUInteger(cGui::eSyncUIntegers::eJetPackAnyWeapon) ? ui32Status : 0);
	pSAPatch->NoFallenTeleport(pGui->getUInteger(cGui::eSyncUIntegers::eNoFallenTeleport) ? ui32Status : 0);
	pSAPatch->PlusC(pGui->getUInteger(cGui::eSyncUIntegers::ePlusC) ? ui32Status : 0);
	pSAPatch->WallHackRadarTraces(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRadarTraces) ? ui32Status : 0);
	pSAPatch->ObjectPunchPower(pGui->getUInteger(cGui::eSyncUIntegers::eObjectPunchPower) ? ui32Status : 0);
	pSAPatch->InfiniteRun(pGui->getUInteger(cGui::eSyncUIntegers::eInfiniteRun) ? ui32Status : 0);
	pSAPatch->DriveOnWater(pGui->getUInteger(cGui::eSyncUIntegers::eDriveOnWater) ? ui32Status : 0);
	pSAPatch->InfiniteOxygen(pGui->getUInteger(cGui::eSyncUIntegers::eInfiniteOxygen) ? ui32Status : 0);
	pSAPatch->PowerSteering(pGui->getUInteger(cGui::eSyncUIntegers::ePowerSteering) ? ui32Status : 0);
	pSAPatch->AlwaysAsphalt(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysAsphalt) ? ui32Status : 0);
	pSAPatch->NoTexturesAlpha(pGui->getUInteger(cGui::eSyncUIntegers::eNoTexturesAlpha) ? ui32Status : 0);
	pSAPatch->LongTimeBlood(pGui->getUInteger(cGui::eSyncUIntegers::eLongTimeBlood) ? ui32Status : 0);
	pSAPatch->NoCancelJump(pGui->getUInteger(cGui::eSyncUIntegers::eNoCancelJump) ? ui32Status : 0);
	pSAPatch->NoCancelAim(pGui->getUInteger(cGui::eSyncUIntegers::eNoCancelAim) ? ui32Status : 0);
	pSAPatch->NoWaterWaves(pGui->getUInteger(cGui::eSyncUIntegers::eNoWaterWaves) ? ui32Status : 0);
	pSAPatch->WaterAlpha(pGui->getUInteger(cGui::eSyncUIntegers::eWaterAlpha) ? ui32Status : 0);
	pSAPatch->WeaponSwitchFire(pGui->getUInteger(cGui::eSyncUIntegers::eWeaponSwitchFire) ? ui32Status : 0);
	pSAPatch->FallOnWater(pGui->getUInteger(cGui::eSyncUIntegers::eFallOnWater) ? ui32Status : 0);
	pSAPatch->NoDayAndNightVision(pGui->getUInteger(cGui::eSyncUIntegers::eNoDayAndNightVision) ? ui32Status : 0);
	pSAPatch->NoSteerBlock(pGui->getUInteger(cGui::eSyncUIntegers::eNoSteerBlock) ? ui32Status : 0);
	pSAPatch->HeightSphere(pGui->getUInteger(cGui::eSyncUIntegers::eHeightSphere) ? ui32Status : 0);
	pSAPatch->LongTimeFootSmoke(pGui->getUInteger(cGui::eSyncUIntegers::eLongTimeFootSmoke) ? ui32Status : 0);
	pSAPatch->NewGunFlash(pGui->getUInteger(cGui::eSyncUIntegers::eNewGunFlash) ? ui32Status : 0);
	pSAPatch->QuickBikeHop(pGui->getUInteger(cGui::eSyncUIntegers::eQuickBikeHop) ? ui32Status : 0);
	pSAPatch->BikeSpinner(pGui->getUInteger(cGui::eSyncUIntegers::eBikeSpinner) ? ui32Status : 0);
	pSAPatch->ArmOnWindow(pGui->getUInteger(cGui::eSyncUIntegers::eArmOnWindow) ? ui32Status : 0);
	pSAPatch->NoVehStopOnPedLeave(pGui->getUInteger(cGui::eSyncUIntegers::eNoVehStopOnPedLeave) ? ui32Status : 0);
	pSAPatch->InteriorRunningFix(pGui->getUInteger(cGui::eSyncUIntegers::eInteriorRunningFix) ? ui32Status : 0);
	pSAPatch->StaticVehCamera(pGui->getUInteger(cGui::eSyncUIntegers::eStaticVehCamera) ? ui32Status : 0);
	pSAPatch->QuickParkour(pGui->getUInteger(cGui::eSyncUIntegers::eQuickParkour) ? ui32Status : 0);
	pSAPatch->NoVehWheelReset(pGui->getUInteger(cGui::eSyncUIntegers::eNoVehWheelReset) ? ui32Status : 0);
	pSAPatch->NoVehInAirRotate(pGui->getUInteger(cGui::eSyncUIntegers::eNoVehInAirRotate) ? ui32Status : 0);
	pSAPatch->VehRLRotate(pGui->getUInteger(cGui::eSyncUIntegers::eVehRLRotate) ? ui32Status : 0);
	pSAPatch->WeaponAllAxis(pGui->getUInteger(cGui::eSyncUIntegers::eWeaponAllAxis) ? ui32Status : 0);
	pSAPatch->NoBikeJumpLimit(pGui->getUInteger(cGui::eSyncUIntegers::eNoBikeJumpLimit) ? ui32Status : 0);
	pSAPatch->FastPassenger(pGui->getUInteger(cGui::eSyncUIntegers::eFastPassenger) ? ui32Status : 0);
	pSAPatch->NoCameraLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectLock) ? ui32Status : 0);
	pSAPatch->NoSpeedLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoSpeedLock) ? ui32Status : 0);
	pSAPatch->NoShadows(pGui->getUInteger(cGui::eSyncUIntegers::eNoShadows) ? ui32Status : 0);
	pSAPatch->MoreVehReflection(pGui->getUInteger(cGui::eSyncUIntegers::eMoreVehReflection) ? ui32Status : 0);
	pSAPatch->FreePayNSpray(pGui->getUInteger(cGui::eSyncUIntegers::eFreePayNSpray) ? ui32Status : 0);
	pSAPatch->PickUpInVeh(pGui->getUInteger(cGui::eSyncUIntegers::ePickUpInVeh) ? ui32Status : 0);
	pSA->getHandlingDataMgr()->makeElegyDriftMode(pGui->getUInteger(cGui::eSyncUIntegers::eElegyDriftMode) ? ui32Status : 0);
	pMPPatch->WallHack(pGui->getUInteger(cGui::eSyncUIntegers::eWallHack) ? ui32Status : 0);
	pMPPatch->NoSetEngineState(pGui->getUInteger(cGui::eSyncUIntegers::eNoSetEngineState) ? ui32Status : 0);
	pMPPatch->FPSUnlock(pGui->getUInteger(cGui::eSyncUIntegers::eFPSUnlock) ? ui32Status : 0);
	pMPPatch->NoConnectionDelay(pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectionDelay) ? ui32Status : 0);
	pMPPatch->NoDialogLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoDialogLock) ? ui32Status : 0);
	pMPPatch->QuickScreen(pGui->getUInteger(cGui::eSyncUIntegers::eQuickScreen) ? ui32Status : 0);
	pMPPatch->NoVehColorReset(pGui->getUInteger(cGui::eSyncUIntegers::NoVehColorReset) ? ui32Status : 0);
	pMPPatch->NoDLLimit(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNoDLLimit) ? ui32Status : 0);
	pMPPatch->No3DTextDrawDist(pGui->getUInteger(cGui::eSyncUIntegers::eWallHack3DText) ? ui32Status : 0);
	pMPPatch->NoPedToVehAttach(pGui->getUInteger(cGui::eSyncUIntegers::eNoPedToVehAttach) ? ui32Status : 0);
	pMPPatch->DialogHider(pGui->getUInteger(cGui::eSyncUIntegers::eDialogHider) ? ui32Status : 0);
	pMPPatch->FastChatOff(pGui->getUInteger(cGui::eSyncUIntegers::eFastChatOff) ? ui32Status : 0);
	pMPPatch->TextDrawHider(pGui->getUInteger(cGui::eSyncUIntegers::eTextDrawHider) ? ui32Status : 0);
	pMPPatch->DisableNameTagsAndBars(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNames) ? ui32Status : 0);
	pMPPatch->NoClosedDoors(pGui->getUInteger(cGui::eSyncUIntegers::eNoClosedDoors) ? ui32Status : 0);
	pMPPatch->GangZoneHider(pGui->getUInteger(cGui::eSyncUIntegers::eGangZoneHider) ? ui32Status : 0);
	pMPPatch->NoConnectLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectLock) ? ui32Status : 0);
	pMPPatch->NoCloseChatOnDialog(pGui->getUInteger(cGui::eSyncUIntegers::eNoCloseChatOnDialog) ? ui32Status : 0);
	pMPPatch->FakeWeapon(pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeapon) ? ui32Status : 0);
	pMPPatch->NoLockOnSpec(pGui->getUInteger(cGui::eSyncUIntegers::eNoLockOnSpec) ? ui32Status : 0);
	pMPPatch->AlwaysSync(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysSync) ? ui32Status : 0);
	pMPPatch->SpectatorMode(pGui->getUInteger(cGui::eSyncUIntegers::eSpectatorMode) ? ui32Status : 0);
	pMPPatch->NoHeadMoveDelay(pGui->getUInteger(cGui::eSyncUIntegers::eNoHeadMoveDelay) ? ui32Status : 0);
	pMPPatch->SyncSpec(pGui->getUInteger(cGui::eSyncUIntegers::eSyncSpec) ? ui32Status : 0);
	pMPPatch->NoStatistic(pGui->getUInteger(cGui::eSyncUIntegers::eNoStatistic) ? ui32Status : 0);
	pMPPatch->AlwaysActiveConnection(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysActiveConnection) ? ui32Status : 0);
	pMPPatch->QuitMPNoDelay(pGui->getUInteger(cGui::eSyncUIntegers::eQuitMPNoDelay) ? ui32Status : 0);
	pSAPatch->BlipScaler(pGui->getUInteger(cGui::eSyncUIntegers::eBlipScaler) ? ui32Status : 0, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlipScale)));
	pSAPatch->BrightnessLights(pGui->getUInteger(cGui::eSyncUIntegers::eBrightnessLights) ? ui32Status : 0, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBrightnessLights)));
	pSAPatch->HudPercentage(pGui->getUInteger(cGui::eSyncUIntegers::eHudPercentage) ? ui32Status : 0, static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageB2)));
	pSAPatch->DrawBlurOnSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eDrawBlurOnSpeed) ? ui32Status : 0, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlurIntensity)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurB2)));
	pSAPatch->SpeedHackMenuMap(pGui->getUInteger(cGui::eSyncUIntegers::eSpeedHackMenuMap) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eMenuZoomSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eMenuMoveSpeed));
	pSAPatch->ColorfulSmoke(pGui->getUInteger(cGui::eSyncUIntegers::eColorfulSmoke) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeR2), pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeG2), pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeB2));
	pSAPatch->BigHead(pGui->getUInteger(cGui::eSyncUIntegers::eBigHead) ? ui32Status : 0, pGui->getFloat(cGui::eSyncFloats::eBigHead));
	pSAPatch->SprintSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eSprintSpeed) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eSprintSpeed));
	pSAPatch->JetPackSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eJetPackSpeed) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eJetPackSpeed));
	pSAPatch->DrawDistance(pGui->getUInteger(cGui::eSyncUIntegers::eDrawDistance) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eDrawDistance));
	pSAPatch->BunnyHopSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eBunnyHopSpeed) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eBunnyHopSpeed));
	pSAPatch->BunnyHopHeight(pGui->getUInteger(cGui::eSyncUIntegers::eBunnyHopHeight) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eBunnyHopHeight));
	pSAPatch->LongLights(pGui->getUInteger(cGui::eSyncUIntegers::eLongLights) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eLongLights));
	pSAPatch->PlayerBlipScale(pGui->getUInteger(cGui::eSyncUIntegers::ePlayerBlipScale), pGui->getFloatPtr(cGui::eSyncFloats::ePlayerBlipScale));
	pSAPatch->StanceStyle(pGui->getUInteger(cGui::eSyncUIntegers::eStanceStyle) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eStanceStyle));
	pSAPatch->FatWheels(pGui->getUInteger(cGui::eSyncUIntegers::eFatWheels) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eFatWheels));
	pSAPatch->PressAuto(pGui->getUInteger(cGui::eSyncUIntegers::ePressAuto) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::ePressAuto));
	pSAPatch->SubmergedSwimming(pGui->getUInteger(cGui::eSyncUIntegers::eSubmergedSwimming) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eSubmergedSwimming));
	pSAPatch->WaterForceOfGravity(pGui->getUInteger(cGui::eSyncUIntegers::eWaterForceOfGravity) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eWaterForceOfGravity));
	pSAPatch->SteeringWheelSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eSteeringWheelSpeed) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eSteeringWheelSpeed));
	pSAPatch->EversionOfWheels(pGui->getUInteger(cGui::eSyncUIntegers::eEversionOfWheels) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eEversionOfWheels));
	pSAPatch->AcceleratedRetraction(pGui->getUInteger(cGui::eSyncUIntegers::eAcceleratedRetraction) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eAcceleratedRetraction));
	pSAPatch->BoostOnDrift(pGui->getUInteger(cGui::eSyncUIntegers::eBoostOnDrift) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eBoostOnDrift));
	pSAPatch->NoLeaveVehUnderWorld(pGui->getUInteger(cGui::eSyncUIntegers::eNoLeaveVehUnderWorld) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eVehUnderWorldDistance));
	pMPPatch->SendRate(pGui->getUInteger(cGui::eSyncUIntegers::eLags) ? ui32Status : 0, pGui->getIntegerPtr(cGui::eSyncIntegers::eLagsTime));
	pMPPatch->CustomGiveDamage(pGui->getUInteger(cGui::eSyncUIntegers::eCustomGiveDamage) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eCustomGiveDamage));
	pMPPatch->CustomTakeDamage(pGui->getUInteger(cGui::eSyncUIntegers::eCustomTakeDamage) ? ui32Status : 0, pGui->getFloatPtr(cGui::eSyncFloats::eCustomTakeDamage));
	return;
}


static auto __stdcall __UnhandledExceptionFilter(_EXCEPTION_POINTERS *) -> long {
	const class cGui *pGui{pMain->getGui()};
	return !pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eTurnOffWhenCrash) ? EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_EXECUTION;
}


#pragma region MP
static void *pSetTime_JMP{nullptr};
static unsigned __int32 ui32SetTime{0}, ui32HourCT{0}, ui32MinuteCT{0};
static auto __cdecl SetTime_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32SetTime = !pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eCustomTime);
	if (ui32SetTime) {
		ui32HourCT = pGui->getInteger(cGui::eSyncIntegers::eCustomTime1);
		ui32MinuteCT = pGui->getInteger(cGui::eSyncIntegers::eCustomTime2);
	} return;
}
static auto __declspec(noinline) __declspec(naked) SetTime_HOOK(void) -> void {
	__asm {
		pushfd;
		pushad;
		call SetTime_CALL_1;
		mov eax, ui32SetTime;
		test eax, eax;
		je noProcess;
		jmp process;
	}

noProcess:
	__asm {
		popad;
		popfd;

		mov eax, [esp + 0x8];
		mov ecx, [esp + 0x4];

		jmp pSetTime_JMP;
	}

process:
	__asm {
		popad;
		popfd;

		mov ecx, ui32HourCT;
		mov eax, ui32MinuteCT;

		jmp pSetTime_JMP;
	}
}


static void *piRPC_WithParams_JMP{nullptr};
static struct stRPCParameters *piRPC_WithParams{nullptr};
static struct stRPCNode *piRPC_WithNode{nullptr};
static auto __cdecl iRPC_WithParams_CALL_1(void) -> void {
	class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic) {
		const unsigned __int8 ui8RPCID{piRPC_WithNode->ui8UniqueID};

		if (!std::all_of(pGui->vecIncomeRPCs.cbegin(), pGui->vecIncomeRPCs.cend(), [&ui8RPCID](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> const bool {
			if (std::get<0>(tIncomeRPC) && ui8RPCID == std::get<1>(tIncomeRPC)) {
				return false;
			} return true;
		})) {
			return;
		}

		unsigned __int8 *pData{piRPC_WithParams->pData};
		if (pData != nullptr) {
			const class cSA *pSA{pMain->getSA()};
			const class cMP *pMP{pMain->getMP()};

			switch (ui8RPCID) {
				case 35: /* SetPlayerDrunkLevel */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeFPS)) {
						*reinterpret_cast<unsigned __int32 *>(pData) = 150;
					} break;
				}

				case 59: /* ChatBubble */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eChatBubbleToChat)) {
						const unsigned __int32 ui32BubbleColor{*reinterpret_cast<const unsigned __int32 *>(pData + 0x2)};
						const unsigned __int8 ui8BubbleLen{*static_cast<const unsigned __int8 *>(pData + 0xE)};
						std::string sBubbleText{reinterpret_cast<const char *>(pData + 0xF), reinterpret_cast<const char *>(pData + 0xF + ui8BubbleLen)};

						switch (cMP::SAMPVer) {
							case cMP::eVer::e037R1: {
								sBubbleText.insert(0, std::move("|||{FFFFFF} [{33544A}ChatBubble{FFFFFF}] -> [" + std::move(pMP->getMainStructR1()->pPools->pPlayer->getPlayerNameByID(*reinterpret_cast<const unsigned __int16 *>(pData))) + "] -> "));
								break;
							}
							case cMP::eVer::e037R3: {
								sBubbleText.insert(0, std::move("|||{FFFFFF} [{33544A}ChatBubble{FFFFFF}] -> [" + std::move(pMP->getMainStructR3()->pPools->pPlayer->getPlayerNameByID(*reinterpret_cast<const unsigned __int16 *>(pData))) + "] -> "));
								break;
							} default: break;
						}

						if (sBubbleText != pGui->sLastBubbleText) {
							pMP->getChatInfo()->addColorMessage(ui32BubbleColor, &sBubbleText[0]);
							pGui->sLastBubbleText = std::move(sBubbleText);
						}
					} break;
				}

				case 79: /* CreateExplosion */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eProt) && pGui->getUInteger(cGui::eSyncUIntegers::eProtCreateExplosionFix) &&
						cWorld::getDistanceBetweenTwoPoints(reinterpret_cast<const class cVector3D *>(pData), cSA::getPosition(pSA)) <= 10.0F) {
						// OFF
						pGui->setUInteger(cGui::eSyncUIntegers::eProt, 0);
						__AutoLoadPROTS(0);
						// BLOW
						piRPC_WithNode->staticFunctionPointer(piRPC_WithParams);
						// ON
						pGui->setUInteger(cGui::eSyncUIntegers::eProt, 1);
						__AutoLoadPROTS(1);
						return;
					} break;
				}

				case 12: /* SetPlayerPos */
				case 13: /* SetPlayerPosFindZ */
				case 159: /* SetVehiclePos */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eMarkerTPWhenSetPos)) {
						class cVector3D vecWayPos {};
						if (cSA::getWaypointPos(pSA, std::move(vecWayPos))) {
							cSA::teleport(pSA, &vecWayPos, true, true, 1.0F);
							return;
						}
					} break;
				}

				case 115: /* TakeDamage */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eTakeDamageRepeater)) {
						for (__int32 I32{0}; I32 < pGui->getInteger(cGui::eSyncIntegers::eTakeDamageRepeater); ++I32) {
							piRPC_WithNode->staticFunctionPointer(piRPC_WithParams);
						}
					} break;
				}

				case 137: /* ServerJoin */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eShowNPC)) {
						*reinterpret_cast<bool *>(pData + 0x6) = false;
					}

					const unsigned __int16 ui16PlayerID{*reinterpret_cast<const unsigned __int16 *>(pData)};
					const unsigned __int8 ui8NickLen{*static_cast<const unsigned __int8 *>(pData + 0x7)};
					const char *pNickName{reinterpret_cast<const char *>(pData + 0x8)};
					pGui->sJoinQuit.append(std::move('[' + std::move(pMain->getTimeA(true)) + "] [Вход] [ID: " + std::move(std::to_string(ui16PlayerID)) + "] " + std::move(std::string{pNickName, ui8NickLen}) + '\n'));
					break;
				}
				case 138: /* ServerQuit */ {
					const unsigned __int16 ui16PlayerID{*reinterpret_cast<const unsigned __int16 *>(pData)};
					const unsigned __int8 ui8Reason{*static_cast<const unsigned __int8 *>(pData + 0x2)};

					std::string sReason{};
					switch (ui8Reason) {
						case 0: {
							sReason.append("Краш");
							break;
						}
						case 1: {
							sReason.append("Выход");
							break;
						}
						case 2: {
							sReason.append("Кик/Бан");
							break;
						} default: break;
					}

					switch (cMP::SAMPVer) {
						case cMP::eVer::e037R1: {
							pGui->sJoinQuit.append(std::move('[' + std::move(pMain->getTimeA(true)) + "] [" + std::move(sReason) + "] [ID: " + std::move(std::to_string(ui16PlayerID)) + "] " + std::move(pMP->getMainStructR1()->pPools->pPlayer->getPlayerNameByID(ui16PlayerID)) + '\n'));
							break;
						}
						case cMP::eVer::e037R3: {
							pGui->sJoinQuit.append(std::move('[' + std::move(pMain->getTimeA(true)) + "] [" + std::move(sReason) + "] [ID: " + std::move(std::to_string(ui16PlayerID)) + "] " + std::move(pMP->getMainStructR3()->pPools->pPlayer->getPlayerNameByID(ui16PlayerID)) + '\n'));
							break;
						} default: break;
					} break;
				} default: break;
			}
		}

	} piRPC_WithNode->staticFunctionPointer(piRPC_WithParams);
	return;
}
static auto __declspec(noinline) __declspec(naked) iRPC_WithParams_HOOK(void) -> void {

	__asm {
		lea eax, [ebp + 0x44];
		push eax;
		mov [ebp + 0x44], esi;

		mov piRPC_WithParams, eax;
		mov piRPC_WithNode, edi;

		pushfd;
		pushad;
		call iRPC_WithParams_CALL_1;
		popad;
		popfd;

		jmp piRPC_WithParams_JMP;
	}

}


static void *piRPC_Clear_JMP{nullptr};
static struct stRPCParameters *piRPC_ClearParams{nullptr};
static struct stRPCNode *piRPC_ClearNode{nullptr};
static auto __cdecl iRPC_Clear_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic) {
		const unsigned __int8 ui8RPCID{piRPC_ClearNode->ui8UniqueID};

		if (!std::all_of(pGui->vecIncomeRPCs.cbegin(), pGui->vecIncomeRPCs.cend(), [&ui8RPCID](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> const bool {
			if (std::get<0>(tIncomeRPC) && ui8RPCID == std::get<1>(tIncomeRPC)) {
				return false;
			} return true;
		})) {
			return;
		}

	} piRPC_ClearNode->staticFunctionPointer(piRPC_ClearParams);
	return;
}
static auto __declspec(noinline) __declspec(naked) iRPC_Clear_HOOK(void) -> void {

	__asm {
		mov [ebp + 0x44], 0x0;

		mov piRPC_ClearParams, ecx;
		mov piRPC_ClearNode, edi;

		pushfd;
		pushad;
		call iRPC_Clear_CALL_1;
		popad;
		popfd;

		jmp piRPC_Clear_JMP;
	}

}


static void *pSendImmediate_JMP{nullptr};
using SendImmediate_t = bool(__thiscall *)(void *pRakPeer, unsigned __int8 *pData, unsigned __int32 ui32NumberOfBitsToSend, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, struct stPlayerID playerID, bool bBroadcast, bool bUseCallerDataAllocation, unsigned __int64 ui64CurrentTime);
static SendImmediate_t pSendImmediate_t{nullptr};
static auto __fastcall RakPeerSendImmediate_HOOK(void *pRakPeer, void *, unsigned __int8 *pData, unsigned __int32 ui32NumberOfBitsToSend, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, struct stPlayerID playerID, bool bBroadcast, bool bUseCallerDataAllocation, unsigned __int64 ui64CurrentTime) -> bool {
	class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pData != nullptr) {
		const unsigned __int8 ui8PacketID{*pData};

		if (!std::all_of(pGui->vecOutcomePackets.cbegin(), pGui->vecOutcomePackets.cend(), [&ui8PacketID](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tOutcomePacket) -> const bool {
			if (std::get<0>(tOutcomePacket) && ui8PacketID == std::get<1>(tOutcomePacket)) {
				return false;
			} return true;
		})) {
			return false;
		}

		const class cSA *pSA{pMain->getSA()};
		const class cMP *pMP{pMain->getMP()};

		switch (ui8PacketID) {
			case 9: /* ID_CONNECTED_PONG  */ {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakePing)) {
					*reinterpret_cast<unsigned __int64 *>(pData + 1) -= pGui->getInteger(cGui::eSyncIntegers::eFakePingTime);
				} break;
			}
			case 200: /* ID_VEHICLE_SYNC */ {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeapon)) {
					reinterpret_cast<struct stInCarData *>(pData + 1)->ui8CurrentWeapon = std::get<0>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponID)]);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeHP)) {
					reinterpret_cast<struct stInCarData *>(pData + 1)->ui8PlayerHealth = static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eFakeHP));
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeAP)) {
					reinterpret_cast<struct stInCarData *>(pData + 1)->ui8PlayerArmor = static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eFakeAP));
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysHorn)) {
					reinterpret_cast<struct stInCarData *>(pData + 1)->controllerState.mpKeys.ui8Horn_Crouch = 1;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAim)) {
					reinterpret_cast<struct stInCarData *>(pData + 1)->controllerState.mpKeys.ui8Aim = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAttackKey)) {
					struct stInCarData *pInCarData{reinterpret_cast<struct stInCarData *>(pData + 1)};
					pInCarData->controllerState.mpKeys.ui8PrimaryFire = 0;
					pInCarData->controllerState.mpKeys.ui8SecondaryFire_Shoot = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eSendExitVehicleOnDrive)) {
					static unsigned long ulOldTick{0};
					const unsigned long ulNewTick{pMain->getWinAPIFuncs()->getTickCount()};

					if (ulNewTick > ulOldTick) {
						pMP->getRakClientManager()->sendExitVehicle(reinterpret_cast<struct stInCarData *>(pData + 1)->ui16VehicleID);
						ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eSendExitVehicleOnDrive);
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eLimitMoveSpeed)) {
					struct stInCarData *pInCarData{reinterpret_cast<struct stInCarData *>(pData + 1)};
					const float fLimitMoveSpeed{pGui->getFloat(cGui::eSyncFloats::eLimitMoveSpeed)};
					if (pGui->getUInteger(cGui::eSyncUIntegers::eLimitMoveSpeedStatic)) {
						pInCarData->vecMoveSpeed.fX = fLimitMoveSpeed;
						pInCarData->vecMoveSpeed.fY = fLimitMoveSpeed;
						pInCarData->vecMoveSpeed.fZ = fLimitMoveSpeed;
					} else {
						if (pInCarData->vecMoveSpeed.fX > fLimitMoveSpeed) {
							pInCarData->vecMoveSpeed.fX = fLimitMoveSpeed;
						} else if (pInCarData->vecMoveSpeed.fX < -fLimitMoveSpeed) {
							pInCarData->vecMoveSpeed.fX = -fLimitMoveSpeed;
						}

						if (pInCarData->vecMoveSpeed.fY > fLimitMoveSpeed) {
							pInCarData->vecMoveSpeed.fY = fLimitMoveSpeed;
						} else if (pInCarData->vecMoveSpeed.fY < -fLimitMoveSpeed) {
							pInCarData->vecMoveSpeed.fY = -fLimitMoveSpeed;
						}

						if (pInCarData->vecMoveSpeed.fZ > fLimitMoveSpeed) {
							pInCarData->vecMoveSpeed.fZ = fLimitMoveSpeed;
						} else if (pInCarData->vecMoveSpeed.fZ < -fLimitMoveSpeed) {
							pInCarData->vecMoveSpeed.fZ = -fLimitMoveSpeed;
						}
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eInvisible)) {
					struct stInCarData *pInCarData{reinterpret_cast<struct stInCarData *>(pData + 1)};
					switch (std::get<0>(pGui->tInvisibleMode)) {
						case cGui::eInvisibleMode::eDown: {
							pInCarData->vecPosition.fZ = cWorld::findGroundZFor3DCoord(&pInCarData->vecPosition) - 5.0F;
							break;
						}
						case cGui::eInvisibleMode::eSky: {
							pInCarData->vecPosition.fZ += 1000.0F;
							break;
						} default: break;
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eRandQuaternion)) {
					struct stInCarData *pInCarData{reinterpret_cast<struct stInCarData *>(pData + 1)};

					std::mt19937 randEngine{std::random_device{}()};
					const std::uniform_real_distribution<float>randQuater{-1.0F, 1.0F};
					pInCarData->vecQuaternion.fX = randQuater(randEngine);
					pInCarData->vecQuaternion.fY = randQuater(randEngine);
					pInCarData->vecQuaternion.fZ = randQuater(randEngine);
					pInCarData->vecQuaternion.fU = randQuater(randEngine);
				}
				if (pGui->bPizdaRvanka) {
					static float fCurrentDistance{0};				fCurrentDistance = pGui->getFloat(cGui::eSyncFloats::ePizdaDistance);
					static class cVector3D vecNearestPos {};		vecNearestPos.clear();

					cPools::getVehiclePool()->forAllVehs([](class cAutomobile *pAuto) -> bool {
						const class cSA *pSA{pMain->getSA()};
						if (pAuto != pSA->getPlayerVehicle() && !pAuto->Vehicle.isEmpty()) {
							const class cVector3D *pVehiclePos{pAuto->Vehicle.Physical.Entity.Placeable.getPosition()};
							const float fDistance{cWorld::getDistanceBetweenTwoPoints(pVehiclePos, cSA::getPosition(pSA))};
							if (fDistance < fCurrentDistance) {
								fCurrentDistance = fDistance;
								vecNearestPos = *pVehiclePos;
							}
						} return true;
					});

					cPools::getPlayerPool()->forAllPeds([](class cPed *pPed) -> bool {
						const class cSA *pSA{pMain->getSA()};
						if (pPed != pSA->getPlayerPed() && pPed->getAlive()) {
							const class cVector3D *pPedPos{pPed->Physical.Entity.Placeable.getPosition()};
							const float fDistance{cWorld::getDistanceBetweenTwoPoints(pPedPos, cSA::getPosition(pSA))};
							if (fDistance >= 3.0F && fDistance < fCurrentDistance) {
								fCurrentDistance = fDistance;
								vecNearestPos = *pPedPos;
							}
						} return true;
					});

					if (!vecNearestPos.isXYEmpty()) {
						struct stInCarData *pInCarData{reinterpret_cast<struct stInCarData *>(pData + 1)};
						pInCarData->vecPosition = std::move(vecNearestPos);
						pInCarData->vecPosition.fZ += pGui->getFloat(cGui::eSyncFloats::ePizdaZ);

						const unsigned __int32 ui32PizdaFullRand{pGui->getUInteger(cGui::eSyncUIntegers::ePizdaFullRand)};
						const float fPizdaRvanka{pGui->getFloat(cGui::eSyncFloats::ePizdaRvanka)};
						const float fPizdaHalf{pGui->getFloat(cGui::eSyncFloats::ePizdaHalf)};

						std::mt19937 randEngine{std::random_device{}()};
						const std::uniform_int_distribution<unsigned __int32> uniRand{0, 1};
						switch (pGui->pizdaVectorMode) {
							case cGui::ePizdaVector::eX: {
								pInCarData->vecMoveSpeed.fX = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eY: {
								pInCarData->vecMoveSpeed.fY = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eZ: {
								pInCarData->vecMoveSpeed.fZ = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eXY: {
								pInCarData->vecMoveSpeed.fX = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								pInCarData->vecMoveSpeed.fY = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eXYZ: {
								pInCarData->vecMoveSpeed.fX = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								pInCarData->vecMoveSpeed.fY = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								pInCarData->vecMoveSpeed.fZ = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							} default: break;
						}

						if (pGui->getUInteger(cGui::eSyncUIntegers::ePizdaQuaternion)) {
							pInCarData->vecQuaternion.fZ = std::uniform_real_distribution<float>{-0.5F, 0.5F}(randEngine);
						}
					}
				} break;
			}
			case 203: /* ID_AIM_SYNC */ {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eInvalidAIMPro)) {
					reinterpret_cast<struct stAimData *>(pData + 1)->fAimZ = std::numeric_limits<const float>::quiet_NaN();
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eShakingCamera)) {
					std::mt19937 randEngine{std::random_device{}()};
					reinterpret_cast<struct stAimData *>(pData + 1)->ui8CamMode = std::uniform_int_distribution<unsigned __int32>{0, 1}(randEngine) ? 34 : 45;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAim)) {
					struct stAimData *pAimData{reinterpret_cast<struct stAimData *>(pData + 1)};
					pAimData->ui8CamMode = 4;
					pAimData->ui8WeaponState = 0;
				}
				if (pGui->bDetonatorCrasher) {
					std::mt19937 randEngine{std::random_device{}()};
					const unsigned __int8 ui8CamModes[7]{7, 8, 34, 45, 46, 51, 65};
					reinterpret_cast<struct stAimData *>(pData + 1)->ui8CamMode = ui8CamModes[std::uniform_int_distribution<unsigned __int32>{0, 6}(randEngine)];
				} break;
			}
			case 206: /* ID_BULLET_SYNC */ {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeaponBullet)) {
					reinterpret_cast<struct stBulletData *>(pData + 1)->ui8WeaponID = std::get<0>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponBulletID)]);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eBell)) {
					if (reinterpret_cast<const struct stBulletData *>(pData + 1)->ui8Type == 1) {
						pSA->getAudioEngine()->reportFrontendAudioEvent(45);
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eBulletRepeater)) {
					const unsigned __int8 ui8BulletType{reinterpret_cast<const struct stBulletData *>(pData + 1)->ui8Type};
					if (ui8BulletType == 1 || ui8BulletType == 2) {
						for (__int32 i32Bullet{0}; i32Bullet < pGui->getInteger(cGui::eSyncIntegers::eBulletRepeater); ++i32Bullet) {
							pSendImmediate_t(pRakPeer, pData, ui32NumberOfBitsToSend, ui32Priority, ui32Reliability, i8OrderingChannel, playerID, bBroadcast, bUseCallerDataAllocation, ui64CurrentTime);
						}
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBulletTrace)) {
					const struct stBulletData *pBulletData{reinterpret_cast<const struct stBulletData *>(pData + 1)};
					if (!pBulletData->vecTarget.isXYEmpty()) {
						switch (cMP::SAMPVer) {
							case cMP::eVer::e037R1: {
								pGui->vecTracerInfos.emplace(pGui->vecTracerInfos.cbegin(), pMP->getMainStructR1()->pPools->pPlayer->ui16LocalPlayerID, pBulletData->vecOrigin, pBulletData->vecTarget);
								break;
							}
							case cMP::eVer::e037R3: {
								pGui->vecTracerInfos.emplace(pGui->vecTracerInfos.cbegin(), pMP->getMainStructR3()->pPools->pPlayer->ui16LocalPlayerID, pBulletData->vecOrigin, pBulletData->vecTarget);
								break;
							} default: break;
						}
					}
				} break;
			}
			case 207: /* ID_PLAYER_SYNC */ {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeapon)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->ui8CurrentWeapon = std::get<0>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponID)]);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeAnim)) {
					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};
					switch (std::get<0>(pGui->tFakeAnimMode)) {
						case cGui::eFakeAnimMode::eRapParty: {
							pOnFootData->Animation.ui32Value = 0x110406DD;
							break;
						}
						case cGui::eFakeAnimMode::eCatchYou: {
							pOnFootData->Animation.ui32Value = 0x170400B4;
							break;
						}
						case cGui::eFakeAnimMode::eShaking: {
							pOnFootData->Animation.ui32Value = 0x1704049B;
							break;
						}
						case cGui::eFakeAnimMode::eFears: {
							pOnFootData->Animation.ui32Value = 0x1E04042C;
							break;
						}
						case cGui::eFakeAnimMode::eFap: {
							pOnFootData->Animation.ui32Value = 0x160403E1;
							break;
						}
						case cGui::eFakeAnimMode::eWhoreDance: {
							pOnFootData->Animation.ui32Value = 0x110405D1;
							break;
						}
						case cGui::eFakeAnimMode::eEmpty: {
							pOnFootData->Animation.ui32Value = 0x800404A5;
							break;
						}
						case cGui::eFakeAnimMode::eWeedSmoker: {
							pOnFootData->Animation.ui32Value = 0x110405A8;
							break;
						}
						case cGui::eFakeAnimMode::eWayShow: {
							pOnFootData->Animation.ui32Value = 0x1E0403A4;
							break;
						}
						case cGui::eFakeAnimMode::eFakeDie: {
							pOnFootData->Animation.ui32Value = 0x1E0404B6;
							break;
						}
						case cGui::eFakeAnimMode::eViceDance: {
							pOnFootData->Animation.ui32Value = 0x170405C5;
							break;
						}
						case cGui::eFakeAnimMode::eParaFly: {
							pOnFootData->Animation.ui32Value = 0x1704046E;
							break;
						}
						case cGui::eFakeAnimMode::eGunFears: {
							pOnFootData->Animation.ui32Value = 0x11040592;
							break;
						}
						case cGui::eFakeAnimMode::eHandsUp: {
							pOnFootData->Animation.ui32Value = 0x1E040491;
							break;
						} default: break;
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeSpecialAction)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->ui8SpecialAction = std::get<0>(pGui->vecFakeSpecialActions[pGui->getInteger(cGui::eSyncIntegers::eFakeSpecialActionID)]);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eNoSurfInfo)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->ui16SurfingVehicleID = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeHP)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->ui8Health = static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eFakeHP));
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeAP)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->ui8Armor = static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eFakeAP));
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eNoAntiHop)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->controllerState.mpKeys.ui8Decel_Jump = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eInvalidAIMPro)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->controllerState.mpKeys.ui8Aim = 1;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAim)) {
					reinterpret_cast<struct stOnFootData *>(pData + 1)->controllerState.mpKeys.ui8Aim = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAttackKey)) {
					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};
					pOnFootData->controllerState.mpKeys.ui8PrimaryFire = 0;
					pOnFootData->controllerState.mpKeys.ui8SecondaryFire_Shoot = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::ePlusC)) {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eSyncPlusC) && pSA->getCamera()->camCams[0].ui16Mode == 53) {
						static bool bState{false};

						reinterpret_cast<struct stOnFootData *>(pData + 1)->controllerState.mpKeys.ui8Horn_Crouch = (bState ^= true);
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eRandQuaternion)) {
					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};

					std::mt19937 randEngine{std::random_device{}()};
					const std::uniform_real_distribution<float>randQuater{-1.0F, 1.0F};
					pOnFootData->vecQuaternion.fX = randQuater(randEngine);
					pOnFootData->vecQuaternion.fY = randQuater(randEngine);
					pOnFootData->vecQuaternion.fZ = randQuater(randEngine);
					pOnFootData->vecQuaternion.fU = randQuater(randEngine);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eInvisible)) {
					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};
					switch (std::get<0>(pGui->tInvisibleMode)) {
						case cGui::eInvisibleMode::eDown: {
							pOnFootData->vecPosition.fZ = cWorld::findGroundZFor3DCoord(&pOnFootData->vecPosition) - 5.0F;
							break;
						}
						case cGui::eInvisibleMode::eSky: {
							pOnFootData->vecPosition.fZ += 1000.0F;
							break;
						} default: break;
					}
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eLimitMoveSpeed)) {
					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};
					const float fLimitMoveSpeed{pGui->getFloat(cGui::eSyncFloats::eLimitMoveSpeed)};
					if (pGui->getUInteger(cGui::eSyncUIntegers::eLimitMoveSpeedStatic)) {
						pOnFootData->vecMoveSpeed.fX = fLimitMoveSpeed;
						pOnFootData->vecMoveSpeed.fY = fLimitMoveSpeed;
						pOnFootData->vecMoveSpeed.fZ = fLimitMoveSpeed;
					} else {
						if (pOnFootData->vecMoveSpeed.fX > fLimitMoveSpeed) {
							pOnFootData->vecMoveSpeed.fX = fLimitMoveSpeed;
						} else if (pOnFootData->vecMoveSpeed.fX < -fLimitMoveSpeed) {
							pOnFootData->vecMoveSpeed.fX = -fLimitMoveSpeed;
						}

						if (pOnFootData->vecMoveSpeed.fY > fLimitMoveSpeed) {
							pOnFootData->vecMoveSpeed.fY = fLimitMoveSpeed;
						} else if (pOnFootData->vecMoveSpeed.fY < -fLimitMoveSpeed) {
							pOnFootData->vecMoveSpeed.fY = -fLimitMoveSpeed;
						}

						if (pOnFootData->vecMoveSpeed.fZ > fLimitMoveSpeed) {
							pOnFootData->vecMoveSpeed.fZ = fLimitMoveSpeed;
						} else if (pOnFootData->vecMoveSpeed.fZ < -fLimitMoveSpeed) {
							pOnFootData->vecMoveSpeed.fZ = -fLimitMoveSpeed;
						}
					}
				}
				if (pGui->bRollCrasher) {
					static unsigned __int16 ui16NearestVehID{0};		ui16NearestVehID = 0;
					static float fCurrentDistance{0};					fCurrentDistance = 1000.0F;
					static class cAutomobile *pNearestAuto{nullptr};	pNearestAuto = nullptr;
					static class cVector3D vecNearestPos {};			vecNearestPos.clear();

					cPools::getVehiclePool()->forAllVehs([](class cAutomobile *pAuto) -> bool {
						if (pAuto->Vehicle.getDriver() == nullptr) {
							const class cVector3D *pVehiclePos{pAuto->Vehicle.Physical.Entity.Placeable.getPosition()};
							const float fDistance{cWorld::getDistanceBetweenTwoPoints(pVehiclePos, cSA::getPosition(pMain->getSA()))};
							if (fDistance < fCurrentDistance) {

								const class cMP *pMP{pMain->getMP()};
								switch (cMP::SAMPVer) {
									case cMP::eVer::e037R1: {
										ui16NearestVehID = pMP->getMainStructR1()->pPools->pVehicle->getVehicleIDByHandle(pAuto);
										break;
									}
									case cMP::eVer::e037R3: {
										ui16NearestVehID = pMP->getMainStructR3()->pPools->pVehicle->getVehicleIDByHandle(pAuto);
										break;
									} default: break;
								}

								fCurrentDistance = fDistance;
								pNearestAuto = pAuto;
								vecNearestPos = *pVehiclePos;
							}
						} return true;
					});

					if (pNearestAuto != nullptr && !vecNearestPos.isXYEmpty()) {
						struct stUnoccupiedPacket rollCrasher {};

						if (std::get<0>(pGui->tRollCrasher) == cGui::eRollCrasherMode::eOriginal) {
							std::mt19937 randEngine{std::random_device{}()};
							rollCrasher.unoccupiedData.ui8SeatID = static_cast<const unsigned __int8>(std::uniform_int_distribution<unsigned __int32>{0, 3}(randEngine));
						} rollCrasher.unoccupiedData.ui16VehicleID = ui16NearestVehID;
						rollCrasher.unoccupiedData.fHealth = pNearestAuto->Vehicle.getHealth();
						rollCrasher.unoccupiedData.vecRoll.fX = -99100000000.0F;
						rollCrasher.unoccupiedData.vecRoll.fY = -99100000000.0F;
						rollCrasher.unoccupiedData.vecRoll.fZ = -99100000000.0F;
						rollCrasher.unoccupiedData.vecPosition = vecNearestPos;
						reinterpret_cast<struct stOnFootData *>(pData + 1)->vecPosition = std::move(vecNearestPos);

						const class cRakClientManager *pRakClientManager{pMP->getRakClientManager()};
						pRakClientManager->sendEnterVehicle(ui16NearestVehID, false);
						pRakClientManager->sendPacket(&rollCrasher, sizeof(struct stUnoccupiedPacket));
					}
				}
				if (pGui->bDetonatorCrasher) {
					static bool bState{false}; bState ^= true;

					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};
					pOnFootData->controllerState.mpKeys.ui8Aim = 1;
					pOnFootData->ui8CurrentWeapon = 40;
					bState ? pOnFootData->vecPosition.clear() : true;
				}
				if (pGui->bNightGogglesFlooder) {
					static bool bState{false};	bState ^= true;

					struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};

					pOnFootData->ui8CurrentWeapon = bState ? 44 : 45;
					pOnFootData->controllerState.mpKeys.ui8SecondaryFire_Shoot = bState;
				}
				if (pGui->bPizdaRvanka) {
					static float fCurrentDistance{0};				fCurrentDistance = pGui->getFloat(cGui::eSyncFloats::ePizdaDistance);
					static class cVector3D vecNearestPos {};		vecNearestPos.clear();

					cPools::getVehiclePool()->forAllVehs([](class cAutomobile *pAuto) -> bool {
						const class cSA *pSA{pMain->getSA()};
						if (pAuto != pSA->getPlayerVehicle() && !pAuto->Vehicle.isEmpty()) {
							const class cVector3D *pVehiclePos{pAuto->Vehicle.Physical.Entity.Placeable.getPosition()};
							const float fDistance{cWorld::getDistanceBetweenTwoPoints(pVehiclePos, cSA::getPosition(pSA))};
							if (fDistance < fCurrentDistance) {
								fCurrentDistance = fDistance;
								vecNearestPos = *pVehiclePos;
							}
						} return true;
					});

					cPools::getPlayerPool()->forAllPeds([](class cPed *pPed) -> bool {
						const class cSA *pSA{pMain->getSA()};
						if (pPed != pSA->getPlayerPed() && pPed->getAlive()) {
							const class cVector3D *pPedPos{pPed->Physical.Entity.Placeable.getPosition()};
							const float fDistance{cWorld::getDistanceBetweenTwoPoints(pPedPos, cSA::getPosition(pSA))};
							if (fDistance >= 3.0F && fDistance < fCurrentDistance) {
								fCurrentDistance = fDistance;
								vecNearestPos = *pPedPos;
							}
						} return true;
					});

					if (!vecNearestPos.isXYEmpty()) {
						struct stOnFootData *pOnFootData{reinterpret_cast<struct stOnFootData *>(pData + 1)};
						pOnFootData->vecPosition = std::move(vecNearestPos);
						pOnFootData->vecPosition.fZ += pGui->getFloat(cGui::eSyncFloats::ePizdaZ);

						const unsigned __int32 ui32PizdaFullRand{pGui->getUInteger(cGui::eSyncUIntegers::ePizdaFullRand)};
						const float fPizdaRvanka{pGui->getFloat(cGui::eSyncFloats::ePizdaRvanka)};
						const float fPizdaHalf{pGui->getFloat(cGui::eSyncFloats::ePizdaHalf)};

						std::mt19937 randEngine{std::random_device{}()};
						const std::uniform_int_distribution<unsigned __int32> uniRand{0, 1};
						switch (pGui->pizdaVectorMode) {
							case cGui::ePizdaVector::eX: {
								pOnFootData->vecMoveSpeed.fX = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eY: {
								pOnFootData->vecMoveSpeed.fY = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eZ: {
								pOnFootData->vecMoveSpeed.fZ = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eXY: {
								pOnFootData->vecMoveSpeed.fX = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								pOnFootData->vecMoveSpeed.fY = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							}
							case cGui::ePizdaVector::eXYZ: {
								pOnFootData->vecMoveSpeed.fX = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								pOnFootData->vecMoveSpeed.fY = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								pOnFootData->vecMoveSpeed.fZ = ui32PizdaFullRand ? (uniRand(randEngine) ? -fPizdaRvanka : (uniRand(randEngine) ? fPizdaRvanka : fPizdaRvanka / fPizdaHalf)) : fPizdaRvanka;
								break;
							} default: break;
						}

						if (pGui->getUInteger(cGui::eSyncUIntegers::ePizdaQuaternion)) {
							pOnFootData->vecQuaternion.fZ = std::uniform_real_distribution<float>{-0.5F, 0.5F}(randEngine);
						}
					}
				} break;
			}
			case 209: /* ID_UNOCCUPIED_SYNC */ {
				break;
			}
			case 210: /* ID_TRAILER_SYNC */ {
				break;
			}
			case 211: /* ID_PASSENGER_SYNC */ {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeapon)) {
					reinterpret_cast<struct stPassengerData *>(pData + 1)->ui8CurrentWeapon = std::get<0>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponID)]);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeHP)) {
					reinterpret_cast<struct stPassengerData *>(pData + 1)->ui8Health = static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eFakeHP));
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeAP)) {
					reinterpret_cast<struct stPassengerData *>(pData + 1)->ui8Armor = static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eFakeAP));
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAim)) {
					reinterpret_cast<struct stPassengerData *>(pData + 1)->controllerState.mpKeys.ui8Aim = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eHideAttackKey)) {
					struct stPassengerData *pPassengerData{reinterpret_cast<struct stPassengerData *>(pData + 1)};
					pPassengerData->controllerState.mpKeys.ui8PrimaryFire = 0;
					pPassengerData->controllerState.mpKeys.ui8SecondaryFire_Shoot = 0;
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eRandPassSeat)) {
					struct stPassengerData *pPassengerData{reinterpret_cast<struct stPassengerData *>(pData + 1)};

					std::mt19937 randEngine{std::random_device{}()};
					pPassengerData->ui8SeatID = std::uniform_int_distribution<unsigned __int32>{1, 3}(randEngine);
					pMP->getRakClientManager()->sendExitVehicle(pPassengerData->ui16VehicleID);
				}
				if (pGui->getUInteger(cGui::eSyncUIntegers::eInvisible)) {
					struct stPassengerData *pPassengerData{reinterpret_cast<struct stPassengerData *>(pData + 1)};
					switch (std::get<0>(pGui->tInvisibleMode)) {
						case cGui::eInvisibleMode::eDown: {
							pPassengerData->vecPosition.fZ = cWorld::findGroundZFor3DCoord(&pPassengerData->vecPosition) - 5.0F;
							break;
						}
						case cGui::eInvisibleMode::eSky: {
							pPassengerData->vecPosition.fZ += 1000.0F;
							break;
						} default: break;
					}
				} break;
			} default: break;
		}

	} return pSendImmediate_t(pRakPeer, pData, ui32NumberOfBitsToSend, ui32Priority, ui32Reliability, i8OrderingChannel, playerID, bBroadcast, bUseCallerDataAllocation, ui64CurrentTime);
}


static void *pReceive_JMP{nullptr};
using Receive_t = struct stPacket *(__thiscall *)(void *pRakPeer);
static Receive_t pReceive_t{nullptr};
static auto __fastcall RakPeerReceive_HOOK(void *pRakPeer, void *) -> struct stPacket * {
	class cGui *pGui{pMain->getGui()};
	struct stPacket *pPacket{pReceive_t(pRakPeer)};
	if (!pGui->bPanic && pPacket != nullptr) {
		const unsigned __int8 *pData{pPacket->pData};
		if (pData != nullptr) {
			const unsigned __int8 ui8PacketID{*pData};

			if (!std::all_of(pGui->vecIncomePackets.cbegin(), pGui->vecIncomePackets.cend(), [&ui8PacketID](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomePacket) -> const bool {
				if (std::get<0>(tIncomePacket) && ui8PacketID == std::get<1>(tIncomePacket)) {
					return false;
				} return true;
			})) {
				return nullptr;
			}

			const class cSA *pSA{pMain->getSA()};
			const class cMP *pMP{pMain->getMP()};

			switch (ui8PacketID) {
				case 32: /* OnKick */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eReconnectOnKick)) {
						cMP::reconnect(pMain->getMP());
					} break;
				}
				case 200: /* ID_VEHICLE_SYNC */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eAntiTroll)) {
						const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
						if (pAuto != nullptr) {
							switch (cMP::SAMPVer) {
								case cMP::eVer::e037R1: {
									if (pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID() == *reinterpret_cast<const unsigned __int16 *>(pData + 3)) {
										return nullptr;
									} break;
								}
								case cMP::eVer::e037R3: {
									if (pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID() == *reinterpret_cast<const unsigned __int16 *>(pData + 3)) {
										return nullptr;
									} break;
								} default: break;
							}
						}
					} break;
				}
				case 203: /* ID_AIM_SYNC */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eFilterSync)) {
						const struct stAimData *pAimData{reinterpret_cast<const struct stAimData *>(pData + 3)};
						if (std::fpclassify(pAimData->fAimZ) != FP_NORMAL ||

							std::fpclassify(pAimData->vecAimF1.fX) != FP_NORMAL ||
							std::fpclassify(pAimData->vecAimF1.fY) != FP_NORMAL ||
							std::fpclassify(pAimData->vecAimF1.fZ) != FP_NORMAL ||

							std::fpclassify(pAimData->vecPosition.fX) != FP_NORMAL ||
							std::fpclassify(pAimData->vecPosition.fY) != FP_NORMAL ||
							std::fpclassify(pAimData->vecPosition.fZ) != FP_NORMAL) {
							return nullptr;
						}
					} break;
				}
				case 206: /* ID_BULLET_SYNC */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eFilterSync)) {
						const struct stBulletData *pBulletData{reinterpret_cast<const struct stBulletData *>(pData + 3)};
						if (std::fpclassify(pBulletData->vecOrigin.fX) != FP_NORMAL ||
							std::fpclassify(pBulletData->vecOrigin.fY) != FP_NORMAL ||
							std::fpclassify(pBulletData->vecOrigin.fZ) != FP_NORMAL ||

							std::fpclassify(pBulletData->vecTarget.fX) != FP_NORMAL ||
							std::fpclassify(pBulletData->vecTarget.fY) != FP_NORMAL ||
							std::fpclassify(pBulletData->vecTarget.fZ) != FP_NORMAL ||

							std::fpclassify(pBulletData->vecCenter.fX) != FP_NORMAL ||
							std::fpclassify(pBulletData->vecCenter.fY) != FP_NORMAL ||
							std::fpclassify(pBulletData->vecCenter.fZ) != FP_NORMAL) {
							return nullptr;
						}
					}
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBulletTrace)) {
						const struct stBulletData *pBulletData{reinterpret_cast<const struct stBulletData *>(pData + 3)};
						if (!pBulletData->vecTarget.isXYEmpty()) {
							pGui->vecTracerInfos.emplace(pGui->vecTracerInfos.cbegin(), *reinterpret_cast<const unsigned __int16 *>(pData + 1), pBulletData->vecOrigin, pBulletData->vecTarget);
						}
					}
					if (pGui->getUInteger(cGui::eSyncUIntegers::eBulletFool)) {
						const struct stBulletData *pBulletData{reinterpret_cast<const struct stBulletData *>(pData + 3)};
						if (pBulletData->ui8Type == 1) {

							unsigned __int16 ui16LocalPlayerID{0};
							switch (cMP::SAMPVer) {
								case cMP::eVer::e037R1: {
									ui16LocalPlayerID = pMP->getMainStructR1()->pPools->pPlayer->ui16LocalPlayerID;
									break;
								}
								case cMP::eVer::e037R3: {
									ui16LocalPlayerID = pMP->getMainStructR3()->pPools->pPlayer->ui16LocalPlayerID;
									break;
								} default: break;
							}

							if (ui16LocalPlayerID == pBulletData->ui16TargetID) {

								struct stBulletPacket bulletPacket {};
								bulletPacket.bulletData = *pBulletData;

								const class cPed *pPed{pSA->getPlayerPed()};
								if (pPed != nullptr && pGui->getUInteger(cGui::eSyncUIntegers::eBulletFoolMyWeapon)) {
									const unsigned __int8 ui8WeaponID{static_cast<const unsigned __int8>(pPed->getWeapon(pPed->getCurrentWeaponSlot())->ui32Type)};
									if ((ui8WeaponID >= 22 && ui8WeaponID <= 34) || ui8WeaponID == 38) {
										bulletPacket.bulletData.ui8WeaponID = ui8WeaponID;
									}
								}
								bulletPacket.bulletData.ui16TargetID = *reinterpret_cast<const unsigned __int16 *>(pData + 1);
								bulletPacket.bulletData.vecTarget = bulletPacket.bulletData.vecOrigin;
								bulletPacket.bulletData.vecOrigin = pBulletData->vecTarget;

								pMP->getRakClientManager()->sendPacket(&bulletPacket, sizeof(struct stBulletPacket));
							}
						}
					} break;
				}
				case 209: /* ID_UNOCCUPIED_SYNC */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eFilterSync)) {
						const struct stUnoccupiedData *pUnoccupied{reinterpret_cast<const struct stUnoccupiedData *>(pData + 3)};
						if (std::fpclassify(pUnoccupied->fHealth) != FP_NORMAL ||

							std::fpclassify(pUnoccupied->vecRoll.fX) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecRoll.fY) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecRoll.fZ) != FP_NORMAL ||

							std::fpclassify(pUnoccupied->vecDirection.fX) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecDirection.fY) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecDirection.fZ) != FP_NORMAL ||

							std::fpclassify(pUnoccupied->vecPosition.fX) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecPosition.fY) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecPosition.fZ) != FP_NORMAL ||

							std::fpclassify(pUnoccupied->vecMoveSpeed.fX) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecMoveSpeed.fY) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecMoveSpeed.fZ) != FP_NORMAL ||

							std::fpclassify(pUnoccupied->vecTurnSpeed.fX) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecTurnSpeed.fY) != FP_NORMAL ||
							std::fpclassify(pUnoccupied->vecTurnSpeed.fZ) != FP_NORMAL) {
							return nullptr;
						}
					} break;
				}
				case 210: /* ID_TRAILER_SYNC */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eFilterSync)) {
						const struct stTrailerData *pTrailerData{reinterpret_cast<const struct stTrailerData *>(pData + 3)};
						if (std::fpclassify(pTrailerData->vecPosition.fX) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecPosition.fY) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecPosition.fZ) != FP_NORMAL ||

							std::fpclassify(pTrailerData->vecMoveSpeed.fX) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecMoveSpeed.fY) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecMoveSpeed.fZ) != FP_NORMAL ||

							std::fpclassify(pTrailerData->vecSpin.fX) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecSpin.fY) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecSpin.fZ) != FP_NORMAL ||

							std::fpclassify(pTrailerData->vecQuaternion.fX) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecQuaternion.fY) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecQuaternion.fZ) != FP_NORMAL ||
							std::fpclassify(pTrailerData->vecQuaternion.fU) != FP_NORMAL) {
							return nullptr;
						}
					} break;
				}
				case 211: /* ID_PASSENGER_SYNC */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eFilterSync)) {
						const struct stPassengerData *pPassengerData{reinterpret_cast<const struct stPassengerData *>(pData + 3)};
						if (std::fpclassify(pPassengerData->vecPosition.fX) != FP_NORMAL ||
							std::fpclassify(pPassengerData->vecPosition.fY) != FP_NORMAL ||
							std::fpclassify(pPassengerData->vecPosition.fZ) != FP_NORMAL) {
							return nullptr;
						}
					} break;
				} default: break;
			}

		}
	} return pPacket;
}


static void *pRPC2_JMP{nullptr};
using RPC2_t = bool(__thiscall *)(void *pRakPeer, unsigned __int8 *pID, unsigned __int8 *pData, unsigned __int32 ui32NumberOfBitsToSend, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, struct stPlayerID playerID, bool bBroadcast, bool bShiftTimestamp, struct stNetworkID networkID);
static RPC2_t pRPC2_t{nullptr};
static auto __fastcall RakPeerRPC2_HOOK(void *pRakPeer, void *, unsigned __int8 *pID, unsigned __int8 *pData, unsigned __int32 ui32NumberOfBitsToSend, unsigned __int32 ui32Priority, unsigned __int32 ui32Reliability, __int8 i8OrderingChannel, struct stPlayerID playerID, bool bBroadcast, bool bShiftTimestamp, struct stNetworkID networkID) -> bool {
	class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pID != nullptr) {
		const unsigned __int8 ui8RPCID{*pID};

		if (!std::all_of(pGui->vecOutcomeRPCs.cbegin(), pGui->vecOutcomeRPCs.cend(), [&ui8RPCID](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tOutcomeRPC) -> const bool {
			if (std::get<0>(tOutcomeRPC) && ui8RPCID == std::get<1>(tOutcomeRPC)) {
				return false;
			} return true;
		})) {
			return false;
		}

		if (pData != nullptr) {
			switch (ui8RPCID) {
				case 25: /* ClientJoin */ {

					//const unsigned __int32 ui32Version{*reinterpret_cast<const unsigned __int32 *>(pData)};
					//const unsigned __int8 ui8Mode{*static_cast<const unsigned __int8 *>(pData + 0x4)};
					const unsigned __int8 ui8NickNameLen{*static_cast<const unsigned __int8 *>(pData + 0x5)};
					//const unsigned __int32 ui32ClientChallengeResponse{*reinterpret_cast<const unsigned __int32 *>(pData + 0x6 + ui8NickNameLen)};
					const unsigned __int8 ui8AuthKeyLen{*static_cast<const unsigned __int8 *>(pData + 0x6 + ui8NickNameLen + 0x4)};

					if (pGui->getUInteger(cGui::eSyncUIntegers::eConnectBeep)) {
						pMain->getWinAPIFuncs()->beep(750, 500);
					}

					if (pGui->getUInteger(cGui::eSyncUIntegers::eRandomGPCI)) {
						pMain->getSA()->getPatch()->patchRandomGPCI();
					}

					if (pGui->getUInteger(cGui::eSyncUIntegers::eRandNick)) {
						std::string sNickName{reinterpret_cast<char *>(pData + 0x6), reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen)};
						pMain->shuffleStringA(std::move(sNickName));
						std::memcpy(reinterpret_cast<char *>(pData + 0x6), &sNickName[0], ui8NickNameLen);
						pGui->sRandNick = std::move(sNickName);
					}

					if (pGui->getUInteger(cGui::eSyncUIntegers::eFakeMPVer)) {
						switch (std::get<0>(pGui->tFakeMPVerMode)) {
							case cGui::eFakeMPVerMode::eR1: {
								std::memcpy(reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1), "2549BD377D36EB41F2A762FDB38FCA4088D1C735CE0", 43);
								*static_cast<unsigned __int8 *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen) = 5;
								std::memcpy(reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen + 0x1), "0.3.7", 5);
								break;
							}
							case cGui::eFakeMPVerMode::eR4: {
								*static_cast<unsigned __int8 *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen) = 8;
								std::memcpy(reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen + 0x1), "0.3.7-R4", 8);
								break;
							}
							case cGui::eFakeMPVerMode::eDL: {
								*static_cast<unsigned __int8 *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen) = 9;
								std::memcpy(reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen + 0x1), "0.3.DL-R1", 9);
								break;
							}
							case cGui::eFakeMPVerMode::eAndroid: {
								std::memcpy(reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1), "39FB2DEEDB49ACFB8D4EECE6953D2507988CCCF4410", 43);
								*static_cast<unsigned __int8 *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen) = 14;
								std::memcpy(reinterpret_cast<char *>(pData + 0x6 + ui8NickNameLen + 0x4 + 0x1 + ui8AuthKeyLen + 0x1), "arizona-mobile", 14);
								break;
							} default: break;
						}
					} break;

				}

				case 50: /* SendCommand */ {
					const unsigned __int32 ui32CMDLen{*reinterpret_cast<const unsigned __int32 *>(pData)};
					const std::string sCMD{reinterpret_cast<char *>(pData + 0x5), reinterpret_cast<char *>(pData + 0x4 + ui32CMDLen)};
					if (!sCMD.empty()) {

					} break;
				}

				case 103: /* ClientCheckResponse */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eBypassClientCheck)) {
						//const unsigned __int8 ui8Type{*reinterpret_cast<const unsigned __int8 *>(pData)};
						const unsigned __int32 ui32Arg{*reinterpret_cast<const unsigned __int32 *>(pData + 1)};
						//const unsigned __int8 ui8Response{*reinterpret_cast<const unsigned __int8 *>(pData + 5)};
						switch (ui32Arg) {
							case 0x41A990: /* UNK */
							case 0x5E8606: /* UNK */
							case 0x4667DB: /* Fix CLEO */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 192;
								break;
							}
							case 0x53BF2D: /* Fix MoonLoader */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 140;
								break;
							}
							case 0x520190: /* Fix SAMPFuncs */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 8;
								break;
							}
							case 0x540720: /* UNK */
							case 0x469FEB: /* Fix CLEO */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 64;
								break;
							}
							case 0x685A01: /* UNK */
							case 0x9924F: /* Fix SAMPFuncs */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 136;
								break;
							}
							case 0x748DA3: /* UNK */
							case 0x53E293: /* UNK */
							case 0x4C3A4C: /* Fix FP */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 200;
								break;
							}
							case 0x6D30E4: /* Fix FP */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 12;
								break;
							}
							case 0x761134: /* UNK */
							case 0x5E7687: /* UNK */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 128;
								break;
							}
							case 0x6EFBC7: /* UNK */
							case 0x60B819: /* UNK */ {
								*static_cast<unsigned __int8 *>(pData + 0x5) = 196;
								break;
							} default: break;
						}
					} break;
				}

				case 115: /* GiveTakeDamage */ {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eGiveDamageRepeater)) {
						for (__int32 I32{0}; I32 < pGui->getInteger(cGui::eSyncIntegers::eGiveDamageRepeater); ++I32) {
							pRPC2_t(pRakPeer, pID, pData, ui32NumberOfBitsToSend, ui32Priority, ui32Reliability, i8OrderingChannel, playerID, bBroadcast, bShiftTimestamp, networkID);
						}
					} break;
				} default: break;
			}
		}

	} return pRPC2_t(pRakPeer, pID, pData, ui32NumberOfBitsToSend, ui32Priority, ui32Reliability, i8OrderingChannel, playerID, bBroadcast, bShiftTimestamp, networkID);
}


static void *pSetMaterialText_JMP{nullptr};
using SetMaterialText_t = void(__thiscall *)(void *pThis, unsigned __int32 ui32Index, char *pText, unsigned __int8 ui8MaterialSize, char *pFont, unsigned __int8 ui8FontSize, bool bBold, unsigned __int32 ui32FontColor, unsigned __int32 ui32BackgroundColor, bool bAlign);
static SetMaterialText_t pSetMaterialText_t{nullptr};
static auto __fastcall SetMaterialText_HOOK(void *pThis, void *, unsigned __int32 ui32Index, char *pText, unsigned __int8 ui8MaterialSize, char *pFont, unsigned __int8 ui8FontSize, bool bBold, unsigned __int32 ui32FontColor, unsigned __int32 ui32BackgroundColor, bool bAlign) -> void {
	class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pText != nullptr) {
		std::string sConverted{pText};
		sConverted = std::move(pMain->wideToMultiByte(CP_UTF8, std::move(pMain->multiByteToWide(1251, std::move(sConverted)))));

		pGui->sLastMaterialText.append(sConverted.cbegin(), sConverted.cend() - 1);
		pGui->sLastMaterialText.push_back('\n');
	} pSetMaterialText_t(pThis, ui32Index, pText, ui8MaterialSize, pFont, ui8FontSize, bBold, ui32FontColor, ui32BackgroundColor, bAlign);
	return;
}


static void *pAddMessage_JMP{nullptr};
using AddMessage_t = void(__thiscall *)(struct stChatInfo *pThis, __int32 i32Type, char *pMessage, char *pPrefix, unsigned __int32 ui32MessageColor, unsigned __int32 ui32PrefixColor);
static AddMessage_t pAddMessage_t{nullptr};
static auto __fastcall ChatInfoAddMessage_HOOK(struct stChatInfo *pThis, void *, __int32 i32Type, char *pMessage, char *pPrefix, unsigned __int32 ui32MessageColor, unsigned __int32 ui32PrefixColor) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eSendCMDOnChat)) {

		static unsigned long ulOldTick{0};
		const unsigned long ulNewTick{pMain->getWinAPIFuncs()->getTickCount()};

		if (ulNewTick > ulOldTick) {
			std::string sMessage{};
			if (pGui->getUInteger(cGui::eSyncUIntegers::eSendCMDOnChatPrefix)) {
				if (pPrefix != nullptr) {
					sMessage.append(pPrefix);
				}
			} else if (pMessage != nullptr) {
				sMessage.append(pMessage);
			}
			if (!sMessage.empty()) {
				sMessage = std::move(pMain->wideToMultiByte(CP_UTF8, std::move(pMain->multiByteToWide(1251, std::move(sMessage)))));

				for (unsigned __int32 UI32{0}; UI32 < 3; ++UI32) {
					if (!pGui->sMessages[UI32].empty() && !pGui->sCMDs[UI32].empty() &&
						sMessage.find(pGui->sMessages[UI32]) != sMessage.npos) {
						const class cRakClientManager *pRakClientManager{pMain->getMP()->getRakClientManager()};

						std::string sCMD{pGui->sCMDs[UI32]};
						sCMD = std::move(pMain->wideToMultiByte(1251, std::move(pMain->multiByteToWide(CP_UTF8, std::move(sCMD)))));
						if (sCMD[0] == '/') {
							pRakClientManager->sendCommand(&sCMD[0]);
						} else {
							pRakClientManager->sendSay(&sCMD[0]);
						}
					}
				}
			} ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eSendCMDOnChatTime);
		}

	} pAddMessage_t(pThis, i32Type, pMessage, pPrefix, ui32MessageColor, ui32PrefixColor);
	return;
}


static void *pSetCameraPos_JMP{nullptr};
using SetCameraPos_t = void(__thiscall *)(void *pCamera, class cVector3D vecPos, class cVector3D vecRot);
static SetCameraPos_t pSetCameraPos_t{nullptr};
static auto __fastcall SetCameraPos_HOOK(void *pCamera, void *, class cVector3D vecPos, class cVector3D vecRot) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic) {

		const unsigned __int32 ui32ReturnAddr{reinterpret_cast<const unsigned __int32>(_ReturnAddress()) - cMP::ui32SAMPBase};

		if (pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectLock)) {
			switch (ui32ReturnAddr) {
				case 0x2D1F9A:	// R1
				case 0x2C6CB2:	// R1

				case 0x86B6:	// R3
				case 0x5703D: {	// R3
					return;
				} default: break;
			}
		}

		if (pGui->getUInteger(cGui::eSyncUIntegers::eNoLockOnSpec)) {
			switch (ui32ReturnAddr) {
				case 0x654D:	// R1

				case 0x6560: {	// R3
					return;
				} default: break;
			}
		}

	} pSetCameraPos_t(pCamera, vecPos, vecRot);
	return;
}


static void *pSetCameraPointAt_JMP{nullptr};
using SetCameraPointAt_t = void(__thiscall *)(void *pCamera, class cVector3D vecPos, unsigned __int32 ui32Style);
static SetCameraPointAt_t pSetCameraPointAt_t{nullptr};
static auto __fastcall SetCameraPointAt_HOOK(void *pCamera, void *, class cVector3D vecPos, unsigned __int32 ui32Style) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic) {

		const unsigned __int32 ui32ReturnAddr{reinterpret_cast<const unsigned __int32>(_ReturnAddress()) - cMP::ui32SAMPBase};

		if (pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectLock)) {
			switch (ui32ReturnAddr) {
				case 0x2B5009:	// R1
				case 0x2B8D9E:	// R1

				case 0x86D5:	// R3
				case 0x5705C: {	// R3
					return;
				} default: break;
			}
		}

		if (pGui->getUInteger(cGui::eSyncUIntegers::eNoLockOnSpec)) {
			switch (ui32ReturnAddr) {
				case 0x656C:	// R1

				case 0x657F: {	// R3
					return;
				} default: break;
			}
		}

	} pSetCameraPointAt_t(pCamera, vecPos, ui32Style);
	return;
}


static void *pGetState_JMP{nullptr};
using GetState_t = unsigned __int8(__thiscall *)(void *pLocalPlayer);
static GetState_t pGetState_t{nullptr};
static auto __fastcall GetState_HOOK(void *pLocalPlayer, void *) -> unsigned __int8 {
	const class cGui *pGui{pMain->getGui()};
	return (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eFakeState)) ? static_cast<const unsigned __int8>(pGui->fakeState) : pGetState_t(pLocalPlayer);
}
#pragma endregion MP


#pragma region DX
static void *pIDirect3DDevice9_Reset_JMP{nullptr};
static auto __cdecl IDirect3DDevice9_BeforeReset_CALL(void) -> void {
	const class cDirectX *pDirectX{pMain->getDirectX()};
	const class cDXLine *pLine{pDirectX->getLine()};
	const class cDXFont *pFont{pDirectX->getFont()};

	ImGui_ImplDX9_InvalidateDeviceObjects();

	pLine->getLineInterface(cDXLine::eLineType::eNormal)->OnLostDevice();
	pLine->getLineInterface(cDXLine::eLineType::eFinalHud)->OnLostDevice();
	pLine->getLineInterface(cDXLine::eLineType::eNameTags)->OnLostDevice();
	pFont->getFontInterface(cDXFont::eFontType::eNormal)->OnLostDevice();
	pFont->getFontInterface(cDXFont::eFontType::eFinalHud)->OnLostDevice();
	pFont->getFontInterface(cDXFont::eFontType::eNameTags)->OnLostDevice();

	return;
}
static auto __cdecl IDirect3DDevice9_AfterReset_CALL(void) -> void {
	const class cDirectX *pDirectX{pMain->getDirectX()};
	const class cDXLine *pLine{pDirectX->getLine()};
	const class cDXFont *pFont{pDirectX->getFont()};

	pLine->getLineInterface(cDXLine::eLineType::eNormal)->OnResetDevice();
	pLine->getLineInterface(cDXLine::eLineType::eFinalHud)->OnResetDevice();
	pLine->getLineInterface(cDXLine::eLineType::eNameTags)->OnResetDevice();
	pFont->getFontInterface(cDXFont::eFontType::eNormal)->OnResetDevice();
	pFont->getFontInterface(cDXFont::eFontType::eFinalHud)->OnResetDevice();
	pFont->getFontInterface(cDXFont::eFontType::eNameTags)->OnResetDevice();

	ImGui_ImplDX9_CreateDeviceObjects();

	return;
}
static auto __declspec(noinline) __declspec(naked) IDirect3DDevice9_Reset_HOOK(void) -> void {
	__asm {
		pushfd;
		pushad;
		call IDirect3DDevice9_BeforeReset_CALL;
		popad;
		popfd;

		mov ecx, [eax];
		push edx;
		push eax;
		call[ecx + 0x40];

		pushfd;
		pushad;
		call IDirect3DDevice9_AfterReset_CALL;
		popad;
		popfd;

		jmp pIDirect3DDevice9_Reset_JMP;
	}
}


static void *pPresent_JMP{nullptr};
using IDirect3DDevice9_Present_t = HRESULT(__stdcall *)(IDirect3DDevice9 *pDeviceInterface, const RECT *pSourceRect, const RECT *pDestRect, HWND hDestWindowOverride, const RGNDATA *pDirtyRegion);
static IDirect3DDevice9_Present_t pPresent_t{nullptr};
static auto __stdcall IDirect3DDevice9_Present_HOOK(IDirect3DDevice9 *pDeviceInterface, const RECT *pSourceRect, const RECT *pDestRect, HWND hDestWindowOverride, const RGNDATA *pDirtyRegion) -> HRESULT {
	const class cSA *pSA{pMain->getSA()};
	if (!pSA->isGamePaused()) {
		class cGui *pGui{pMain->getGui()};
		const class cMP *pMP{pMain->getMP()};
		const class cSAPatch *pSAPatch{pSA->getPatch()};
		const class cMPPatch *pMPPatch{pMP->getPatch()};
		const class cDirectX *pDirectX{pMain->getDirectX()};
		const class cDXFont *pFont{pDirectX->getFont()};
		const class cDXLine *pLine{pDirectX->getLine()};
		const class cWinAPIFuncs *pWinAPIFuncs{pMain->getWinAPIFuncs()};
		const class cInternet *pInternet{pMain->getInternet()};

		if (pGui->bSpectator) {
			const class cEntity *pEntity{pSA->getCamera()->pTargetEntity};
			if (pEntity == nullptr || pEntity->pRwClump == nullptr) {
				pSAPatch->LockCameraTargetEntity((pGui->bSpectator = false));
			}
		}

		if (!pGui->bPanic) {
			if (pGui->bRepeatTrolling) {
				static unsigned long ulOldTick{0};
				const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};

				if (ulNewTick > ulOldTick) {
					switch (cMP::SAMPVer) {
						case cMP::eVer::e037R1: {
							cMP::sendTroll(pMain, pMP->getMainStructR1()->pPools->pPlayer->pRemotePlayer[pGui->ui32TrollPlayerID], nullptr);
							break;
						}
						case cMP::eVer::e037R3: {
							cMP::sendTroll(pMain, nullptr, pMP->getMainStructR3()->pPools->pPlayer->pRemotePlayer[pGui->ui32TrollPlayerID]);
							break;
						} default: break;
					} ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eRepeatTrollingTime);
				}
			}

			if (pGui->bComponentLagger) {
				static unsigned long ulOldTick{0};
				const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};

				if (ulNewTick > ulOldTick) {
					const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
					if (pAuto != nullptr) {

						unsigned __int16 ui16VehicleID{0};
						switch (cMP::SAMPVer) {
							case cMP::eVer::e037R1: {
								ui16VehicleID = pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID();
								break;
							}
							case cMP::eVer::e037R3: {
								ui16VehicleID = pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID();
								break;
							} default: break;
						}

						const class cRakClientManager *pRakClientManager{pMP->getRakClientManager()};
						pRakClientManager->sendDmgVehicle(ui16VehicleID, 0x3000000, 0x4040404, 0, 0);
						pRakClientManager->sendDmgVehicle(ui16VehicleID, 0, 0, 0, 0);
					} ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eComponentLaggerTime);
				}
			}

			if (pGui->getUInteger(cGui::eSyncUIntegers::eStickToVehicle)) {
				class cPed *pPed{pSA->getPlayerPed()};
				if (pPed != nullptr) {
					class cEntity *pContactEntity{pPed->getContactEntity()};
					if (pContactEntity != nullptr && pContactEntity->isVeh() && !reinterpret_cast<const class cVehicle *>(pContactEntity)->isEmpty()) {
						class cVector3D vecPos { *pContactEntity->Placeable.getPosition() };
						vecPos.fZ += 1.4F;
						pPed->Physical.Entity.Placeable.setPosition(&vecPos);
					}
				}
			}

			if (pGui->getUInteger(cGui::eSyncUIntegers::eCleanMemory)) {
				if (cStreaming::getMemoryUsed() > (cStreaming::getMemoryAvailable() / 2)) {

					const class cVector3D *pMyPos{cSA::getPosition(pSA)};

					cWorld::sortOutStreamingAndMemory(pMyPos, 0);

					cIPLStore::removeAllIPLs();

					cColStore::removeAllCollision();

					cStreaming::deleteAllRwObjects();
					cStreaming::deleteLeastUsedEntityRwObject(false);
					cStreaming::removeLeastUsedModel();
					cStreaming::removeAllUnusedModels();
					cStreaming::removeBigBuildings();
					cStreaming::removeBuildingsNotInArea();

					/* SA MODELS */
					for (unsigned __int32 UI32{615}; UI32 < 18668; ++UI32) {
						cStreaming::removeModel(UI32);
					}
					/* MP MODELS */
					for (unsigned __int32 UI32{18749}; UI32 < 20000; ++UI32) {
						cStreaming::removeModel(UI32);
					} cStreaming::loadScene(pMyPos);
				}
			}

			if (pGui->getUInteger(cGui::eSyncUIntegers::NoVehColorReset)) {
				static unsigned long ulOldTick{0};
				const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};

				if (ulNewTick > ulOldTick) {
					class cAutomobile *pAuto{pSA->getPlayerVehicle()};
					if (pAuto != nullptr) {

						unsigned __int16 ui16VehicleID{0};
						switch (cMP::SAMPVer) {
							case cMP::eVer::e037R1: {
								ui16VehicleID = pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID();
								break;
							}
							case cMP::eVer::e037R3: {
								ui16VehicleID = pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID();
								break;
							} default: break;
						}

						std::mt19937 randEngine{std::random_device{}()};
						const unsigned __int8 ui8Color{static_cast<const unsigned __int8>(std::uniform_int_distribution<unsigned __int32>{0, 255}(randEngine))};

						pAuto->Vehicle.setColor(&ui8Color, &ui8Color);
						pMP->getRakClientManager()->sendSCMEvent(ui16VehicleID, ui8Color, ui8Color, 3);
					} ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eRainBowCarTime);
				}
			}

			if (pGui->getUInteger(cGui::eSyncUIntegers::eTriggerBot)) {
				const unsigned __int32 ui32TriggerBotCrossStop{pGui->getUInteger(cGui::eSyncUIntegers::eTriggerBotCrossStop)};
				if (ui32TriggerBotCrossStop) {
					pSAPatch->LockAimAngle(0);
				}

				class cPed *pPed{pSA->getPlayerPed()};
				if (pPed != nullptr) {
					class cCamera *pCamera{pSA->getCamera()};
					const unsigned __int16 ui16Mode{pCamera->camCams[0].ui16Mode};
					if (ui16Mode == 53 || ui16Mode == 55) {
						class cVector3D vecCamera {}, vecPoint{};
						pCamera->find3rdPersonCamTargetVector(pGui->getFloat(cGui::eSyncFloats::eTriggerBot), pPed->Physical.Entity.Placeable.getPosition(), &vecCamera, &vecPoint);

						class cColPoint colPoint {};
						class cEntity *pEntity{nullptr};
						if (cWorld::processLineOfSight(&vecCamera, &vecPoint, &colPoint, &pEntity, true, true, true, true, true, true, false, true) &&
							pEntity != nullptr && pEntity != &pPed->Physical.Entity &&
							(pEntity->isPed() || (pGui->getUInteger(cGui::eSyncUIntegers::eTriggerBotVehs) && pEntity->isVeh() && !reinterpret_cast<const class cVehicle *>(pEntity)->isEmpty()))) {
							if (ui32TriggerBotCrossStop) {
								pSAPatch->LockAimAngle(1);
							} pSA->getPad()->pcTempJoyState.i16ButtonCircle = 255;
						}
					}
				}
			}

			if (pGui->getUInteger(cGui::eSyncUIntegers::eStrobeLights)) {

				static unsigned long ulOldTick{0};
				const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};

				if (ulNewTick > ulOldTick) {
					const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
					if (pAuto != nullptr && pAuto->Vehicle.getClass() == 0) {
						class cDamageManager *pDamageManager{pAuto->getDamageManager()};
						if (pDamageManager != nullptr) {

							static unsigned __int32 ui32Status{0};

							switch (std::get<0>(pGui->tStrobeLightsMode)) {
								case cGui::eStrobeMode::eDefault: {
									if (ui32Status == 0) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, false);
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, false);
									} else {
										ui32Status = 0;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, true);
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, true);
									} break;
								}
								case cGui::eStrobeMode::eLeftThenRight: {
									if (ui32Status == 0) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, false);
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, true);
									} else {
										ui32Status = 0;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, true);
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, false);
									} break;
								}
								case cGui::eStrobeMode::eDouble: {
									if (ui32Status == 0) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, true);
									} else if (ui32Status == 1) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, false);
									} else if (ui32Status == 2) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, true);
									} else if (ui32Status == 3) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_LEFT, false);
									} else if (ui32Status == 4) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, true);
									} else if (ui32Status == 5) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, false);
									} else if (ui32Status == 6) {
										++ui32Status;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, true);
									} else {
										ui32Status = 0;
										pDamageManager->setLightStatus(cDamageManager::eLights::eFRONT_RIGHT, false);
									} break;
								} default: break;
							}

						}

					} ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eStrobeLightsTime);
				}
			}
		}

		if (!pGui->bCleanScreen) {

			const unsigned __int32 ui32BackBufferHeight{cDirectX::pPresentationParameters->BackBufferHeight};
			const unsigned __int32 ui32BackBufferWidth{cDirectX::pPresentationParameters->BackBufferWidth};

			if (!pGui->bPanic) {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackTextDrawIDs)) {
					struct stTextDrawPool *pTextDrawPool{nullptr};
					switch (cMP::SAMPVer) {
						case cMP::eVer::e037R1: {
							pTextDrawPool = pMP->getMainStructR1()->pPools->pTextDraw;
							break;
						}
						case cMP::eVer::e037R3: {
							pTextDrawPool = pMP->getMainStructR3()->pPools->pTextDraw;
							break;
						} default: break;
					}

					pTextDrawPool->forAllTextDraws([](const unsigned __int16 ui16TextDrawID, struct stTextDraw *pTextDraw) -> bool {
						RECT rectText{pTextDraw->ui32ScreenCenterPos[1], pTextDraw->ui32ScreenCenterPos[0]};
						pMain->getDirectX()->getFont()->drawTextShadowedA(cDXFont::eFontType::eNormal, &std::move(std::to_string(ui16TextDrawID))[0], &rectText, DT_NOCLIP, 0xFFFFFFFF);
						return true;
					});
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackPickupIDs)) {
					struct stPickupPool *pPickupPool{nullptr};
					switch (cMP::SAMPVer) {
						case cMP::eVer::e037R1: {
							pPickupPool = pMP->getMainStructR1()->pPools->pPickup;
							break;
						}
						case cMP::eVer::e037R3: {
							pPickupPool = pMP->getMainStructR3()->pPools->pPickup;
							break;
						} default: break;
					}

					pPickupPool->forAllPickups([](const unsigned __int16 ui16PickupID, struct stPickup *pPickUp) -> bool {
						class cVector3D vecPos { pPickUp->vecPosition };
						if (cWorld::transform3DTo2DPoint(&vecPos, &vecPos)) {
							RECT rectText{static_cast<const long>(vecPos.fX), static_cast<const long>(vecPos.fY)};
							pMain->getDirectX()->getFont()->drawTextShadowedA(cDXFont::eFontType::eNameTags, &std::move("P: " + std::move(std::to_string(ui16PickupID)))[0], &rectText, DT_NOCLIP, 0xFFFFFFFF);
						} return true;
					});
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRadarTraces)) {
					for (unsigned __int16 ui16TraceID{0}; ui16TraceID < 175; ++ui16TraceID) {
						class cVector3D vecPos { pSA->getRadarTrace(ui16TraceID)->vecPosition };
						if (!vecPos.isXYEmpty() &&
							cWorld::transform3DTo2DPoint(&vecPos, &vecPos)) {
							RECT rectPos{static_cast<const long>(vecPos.fX), static_cast<const long>(vecPos.fY)};
							pFont->drawTextShadowedA(cDXFont::eFontType::eNormal, "|", &rectPos, DT_NOCLIP, 0xFFFFA500);
						}
					}
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBulletTrace)) {
					if (!pGui->vecTracerInfos.empty()) {
						std::for_each(pGui->vecTracerInfos.cbegin(), pGui->vecTracerInfos.cend(), [&pLine, &pGui, &pMP](const std::tuple<unsigned __int16, class cVector3D, class cVector3D> tTracerInfo) -> void {
							class cVector3D vecLineFrom { std::move(std::get<1>(tTracerInfo)) }, vecLineTo{std::move(std::get<2>(tTracerInfo))};
							if (cWorld::transform3DTo2DPoint(&vecLineFrom, &vecLineFrom) &&
								cWorld::transform3DTo2DPoint(&vecLineTo, &vecLineTo)) {
								pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors) ? pMP->getPlayerColor(std::get<0>(tTracerInfo)) : 0xFFFFFFFF);
							} return;
						});

						static unsigned long ulOldTick{0};
						const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};

						const bool bLimit{pGui->vecTracerInfos.size() > 20};
						if (bLimit || ulNewTick > ulOldTick) {
							if (!bLimit) {
								ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eWallHackBulletTraceTime);
							} pGui->vecTracerInfos.pop_back();
						}
					}
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackVehicle) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackVehDoors)) {
					cPools::getVehiclePool()->forAllVehs([](class cAutomobile *pAuto) -> bool {
						if (pAuto->Vehicle.Physical.Entity.isVisible()) {
							const class cGui *pGui{pMain->getGui()};
							const class cDirectX *pDirectX{pMain->getDirectX()};

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackVehicle)) {
								const class cDXLine *pLine{pDirectX->getLine()};

								switch (pAuto->Vehicle.getClass()) {
									case 0: {
										std::for_each(pGui->vecVehBones.cbegin(), pGui->vecVehBones.cend(), [&pAuto, &pLine](const std::tuple<const unsigned __int32, const unsigned __int32> tVehBone) -> void {
											class cVector3D vecLineFrom {}, vecLineTo{};
											pAuto->getComponentWorldPosition(std::get<0>(tVehBone), &vecLineFrom);
											pAuto->getComponentWorldPosition(std::get<1>(tVehBone), &vecLineTo);
											if (cWorld::getDistanceBetweenTwoPoints(&vecLineFrom, &vecLineTo) < 50.0F &&
												cWorld::transform3DTo2DPoint(&vecLineFrom, &vecLineFrom) &&
												cWorld::transform3DTo2DPoint(&vecLineTo, &vecLineTo)) {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, 0xFFFFFFFF);
											} return;
										});
										break;
									}
									case 9: {
										std::for_each(pGui->vecBikeBones.cbegin(), pGui->vecBikeBones.cend(), [&pAuto, &pLine](const std::tuple<const unsigned __int32, const unsigned __int32> tBikeBone) -> void {
											class cVector3D vecLineFrom {}, vecLineTo{};
											reinterpret_cast<class cBike *>(pAuto)->getComponentWorldPosition(std::get<0>(tBikeBone), &vecLineFrom);
											reinterpret_cast<class cBike *>(pAuto)->getComponentWorldPosition(std::get<1>(tBikeBone), &vecLineTo);
											if (cWorld::getDistanceBetweenTwoPoints(&vecLineFrom, &vecLineTo) < 50.0F &&
												cWorld::transform3DTo2DPoint(&vecLineFrom, &vecLineFrom) &&
												cWorld::transform3DTo2DPoint(&vecLineTo, &vecLineTo)) {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, 0xFFFFFFFF);
											} return;
										});
										break;
									} default: break;
								}
							}

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackVehDoors)) {
								const cVehicle::eVehDoors doorStatus{pAuto->Vehicle.getDoorsStatus()};
								if (doorStatus == cVehicle::eVehDoors::UNLOCKED || doorStatus == cVehicle::eVehDoors::NOT_USED) {
									class cVector3D vecPos { *pAuto->Vehicle.Physical.Entity.Placeable.getPosition() };
									if (cWorld::transform3DTo2DPoint(&vecPos, &vecPos)) {
										RECT rectPos{static_cast<const long>(vecPos.fX), static_cast<const long>(vecPos.fY)};
										pDirectX->getFont()->drawTextShadowedA(cDXFont::eFontType::eNormal, "+", &rectPos, DT_NOCLIP, 0xFF33FF33);
									}
								}
							}
						} return true;
					});
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRadar) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBombs) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRenderObjIcons)) {
					cPools::getObjectPool()->forAllObjs([](class cObject *pObject) -> bool {
						class cGui *pGui{pMain->getGui()};
						const class cDXFont *pFont{pMain->getDirectX()->getFont()};
						const unsigned __int16 ui16ModelIndex{pObject->Physical.Entity.ui16ModelIndex};

						if (pObject->Physical.Entity.isVisible()) {

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRadar)) {
								if (ui16ModelIndex == 18880) {
									class cVector3D vecPos { *pObject->Physical.Entity.Placeable.getPosition() };
									if (cWorld::transform3DTo2DPoint(&vecPos, &vecPos)) {
										RECT rectText{static_cast<const long>(vecPos.fX), static_cast<const long>(vecPos.fY)};
										pFont->drawTextShadowedW(cDXFont::eFontType::eNormal, L"[РАДАР]", &rectText, DT_NOCLIP, 0xFFFFA500);
									}
								}
							}

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBombs)) {
								const bool bIsGrenade{ui16ModelIndex == 342};
								const bool bTearGas{ui16ModelIndex == 343};
								const bool bMolotov{ui16ModelIndex == 344};
								const bool bRPG{ui16ModelIndex == 345};
								const bool bIsC4{ui16ModelIndex == 363};
								if (bIsGrenade || bTearGas || bMolotov || bRPG || bIsC4) {
									class cVector3D vecPos3D { *pObject->Physical.Entity.Placeable.getPosition() }, vecPos2D{};
									if (cWorld::transform3DTo2DPoint(&vecPos3D, &vecPos2D)) {

										RECT rectText{static_cast<const long>(vecPos2D.fX), static_cast<const long>(vecPos2D.fY)};
										std::wstring wsDrawedText{std::move(std::to_wstring(static_cast<const unsigned __int32>(std::ceilf(cWorld::getDistanceBetweenTwoPoints(&vecPos3D, cSA::getPosition(pMain->getSA())))))) + L']'};
										if (bIsGrenade) {
											wsDrawedText.insert(0, L"[Граната | ");
										} else if (bTearGas) {
											wsDrawedText.insert(0, L"[Газ | ");
										} else if (bMolotov) {
											wsDrawedText.insert(0, L"[Молотов | ");
										} else if (bRPG) {
											wsDrawedText.insert(0, L"[RPG | ");
										} else if (bIsC4) {
											wsDrawedText.insert(0, L"[C4 | ");
										} pFont->drawTextShadowedW(cDXFont::eFontType::eNormal, &wsDrawedText[0], &rectText, DT_NOCLIP, 0xFFFF0000);

										if (pObject->Physical.vecMoveSpeed.magnitude() >= 0.10F) {
											static unsigned long ulOldTick{0};
											const unsigned long ulNewTick{pMain->getWinAPIFuncs()->getTickCount()};

											if (ulNewTick > ulOldTick) {
												pGui->vecGrenadeWays.emplace(pGui->vecGrenadeWays.cbegin(), std::move(vecPos3D));
												ulOldTick = ulNewTick + 50;
											}
										}
									}
								}
							}
						}

						if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRenderObjIcons)) {
							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRenderMPObjIcons) ? ui16ModelIndex >= 11682 : true) {
								class cVector2D vecOut {};
								cRadar::transformRealWorldPointToRadarSpace(&vecOut, pObject->Physical.Entity.Placeable.getPosition());
								cRadar::limitRadarPoint(&vecOut);
								cRadar::transformRadarPointToScreenSpace(&vecOut, &vecOut);

								RECT rectText{static_cast<const long>(vecOut.fX), static_cast<const long>(vecOut.fY)};
								pFont->drawTextShadowedA(cDXFont::eFontType::eFinalHud, "*", &rectText, DT_NOCLIP, 0xFFFFFFFF);
							}
						} return true;
					});

					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBombs)) {
						if (!pGui->vecGrenadeWays.empty()) {
							std::for_each(pGui->vecGrenadeWays.cbegin(), pGui->vecGrenadeWays.cend(), [&pFont](const class cVector3D vecGrenadeWay) -> void {
								class cVector3D vecPos3D {};
								if (cWorld::transform3DTo2DPoint(&vecGrenadeWay, &vecPos3D)) {
									RECT rectText{static_cast<const long>(vecPos3D.fX), static_cast<const long>(vecPos3D.fY)};
									pFont->drawTextShadowedA(cDXFont::eFontType::eNormal, "*", &rectText, DT_NOCLIP, 0xFFFF0000);
								} return;
							});

							static unsigned long ulOldTick{0};
							const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};

							if (ulNewTick > ulOldTick) {
								pGui->vecGrenadeWays.pop_back();
								ulOldTick = ulNewTick + 100;
							}

							if (pGui->vecGrenadeWays.size() > 20) {
								pGui->vecGrenadeWays.pop_back();
							}
						}
					}
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBones) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRhombus) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackCircles) ||
					pGui->getUInteger(cGui::eSyncUIntegers::eWallHackAngle) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackLinesDist) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRenderRadarPlayerIDs)) {
					cPools::getPlayerPool()->forAllPeds([](class cPed *pPed) -> bool {
						const class cMP *pMP{pMain->getMP()};
						const class cGui *pGui{pMain->getGui()};
						const class cSA *pSA{pMain->getSA()};
						const class cPed *pLocalPed{pSA->getPlayerPed()};
						const class cDirectX *pDirectX{pMain->getDirectX()};
						const class cDXFont *pFont{pDirectX->getFont()};

						struct stPlayerPool037R1 *pPlayerPoolR1{nullptr};
						struct stPlayerPool037R3 *pPlayerPoolR3{nullptr};
						switch (cMP::SAMPVer) {
							case cMP::eVer::e037R1: {
								pPlayerPoolR1 = pMP->getMainStructR1()->pPools->pPlayer;
								break;
							}
							case cMP::eVer::e037R3: {
								pPlayerPoolR3 = pMP->getMainStructR3()->pPools->pPlayer;
								break;
							} default: break;
						}

						if (pPed->Physical.Entity.isVisible()) {
							const class cDXLine *pLine{pDirectX->getLine()};

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBones)) {
								std::for_each(pGui->vecPedBones.cbegin(), pGui->vecPedBones.cend(), [&pPed, &pGui, &pMP, &pLocalPed, &pLine, &pPlayerPoolR1, &pPlayerPoolR3](const std::tuple<const unsigned __int32, const unsigned __int32> tPedBone) -> void {
									class cVector3D vecLineFrom {}, vecLineTo{};
									pPed->getBonePosition(&vecLineFrom, std::get<0>(tPedBone));
									pPed->getBonePosition(&vecLineTo, std::get<1>(tPedBone));
									if (cWorld::transform3DTo2DPoint(&vecLineFrom, &vecLineFrom) &&
										cWorld::transform3DTo2DPoint(&vecLineTo, &vecLineTo)) {
										const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
										switch (cMP::SAMPVer) {
											case cMP::eVer::e037R1: {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR1->getPlayerIDByHandle(pPed) : pPlayerPoolR1->ui16LocalPlayerID) : 0xFFFFFFFF);
												break;
											}
											case cMP::eVer::e037R3: {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR3->getPlayerIDByHandle(pPed) : pPlayerPoolR3->ui16LocalPlayerID) : 0xFFFFFFFF);
												break;
											} default: break;
										}
									} return;
								});
							}

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRhombus)) {
								std::for_each(pGui->vecPedBonesRhombus.cbegin(), pGui->vecPedBonesRhombus.cend(), [&pPed, &pGui, &pMP, &pLocalPed, &pLine, &pPlayerPoolR1, &pPlayerPoolR3](const std::tuple<const unsigned __int32, const unsigned __int32> tPedBonesRhombu) -> void {
									class cVector3D vecLineFrom {}, vecLineTo{};
									pPed->getBonePosition(&vecLineFrom, std::get<0>(tPedBonesRhombu));
									pPed->getBonePosition(&vecLineTo, std::get<1>(tPedBonesRhombu));
									if (cWorld::transform3DTo2DPoint(&vecLineFrom, &vecLineFrom) &&
										cWorld::transform3DTo2DPoint(&vecLineTo, &vecLineTo)) {
										const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
										switch (cMP::SAMPVer) {
											case cMP::eVer::e037R1: {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR1->getPlayerIDByHandle(pPed) : pPlayerPoolR1->ui16LocalPlayerID) : 0xFFFFFFFF);
												break;
											}
											case cMP::eVer::e037R3: {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR3->getPlayerIDByHandle(pPed) : pPlayerPoolR3->ui16LocalPlayerID) : 0xFFFFFFFF);
												break;
											} default: break;
										}
									} return;
								});
							}

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackCircles)) {
								class cVector3D vecBonePos {}, vecCircle[2]{};
								pPed->getBonePosition(&vecBonePos, 1);

								const float fStep = D3DX_PI * 2.0F / 30.0F;
								for (float fRot{0}; fRot < D3DX_PI * 2.0F; fRot += fStep) {
									vecCircle[0].fX = std::cos(fRot) + vecBonePos.fX;
									vecCircle[0].fY = std::sin(fRot) + vecBonePos.fY;
									vecCircle[0].fZ = vecBonePos.fZ - 1.0F;

									vecCircle[1].fX = std::cos(fRot + fStep) + vecBonePos.fX;
									vecCircle[1].fY = std::sin(fRot + fStep) + vecBonePos.fY;
									vecCircle[1].fZ = vecCircle[0].fZ;

									if (cWorld::transform3DTo2DPoint(&vecCircle[0], &vecCircle[0]) &&
										cWorld::transform3DTo2DPoint(&vecCircle[1], &vecCircle[1])) {
										const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
										switch (cMP::SAMPVer) {
											case cMP::eVer::e037R1: {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecCircle[0], &vecCircle[1], ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR1->getPlayerIDByHandle(pPed) : pPlayerPoolR1->ui16LocalPlayerID) : 0xFFFFFFFF);
												break;
											}
											case cMP::eVer::e037R3: {
												pLine->drawLine(cDXLine::eLineType::eNormal, &vecCircle[0], &vecCircle[1], ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR3->getPlayerIDByHandle(pPed) : pPlayerPoolR3->ui16LocalPlayerID) : 0xFFFFFFFF);
												break;
											} default: break;
										}
									}
								}
							}

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackAngle)) {
								class cVector3D vecLineFrom {}, vecLineTo{};
								const class cVector3D vecPosMult { 0, 3.0F, 0 };
								cVector3D::multiply3x3(&vecLineTo, &pPed->Physical.Entity.Placeable.getMatrix()->Matrix, &vecPosMult);
								pPed->getBonePosition(&vecLineFrom, 5);
								vecLineTo += vecLineFrom;

								if (cWorld::transform3DTo2DPoint(&vecLineFrom, &vecLineFrom) &&
									cWorld::transform3DTo2DPoint(&vecLineTo, &vecLineTo)) {
									const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR1->getPlayerIDByHandle(pPed) : pPlayerPoolR1->ui16LocalPlayerID) : 0xFFFFFFFF);
											break;
										}
										case cMP::eVer::e037R3: {
											pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32PlayersColors ? pMP->getPlayerColor(pPed != pLocalPed ? pPlayerPoolR3->getPlayerIDByHandle(pPed) : pPlayerPoolR3->ui16LocalPlayerID) : 0xFFFFFFFF);
											break;
										} default: break;
									}
								}
							}

							if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackLinesDist)) {
								if (pPed != pLocalPed) {
									class cVector3D vecTextPos {}, vecTo[2]{};
									pPed->getBonePosition(&vecTo[0], 6);
									pPed->getBonePosition(&vecTextPos, 1); vecTextPos.fZ -= 1.3F;

									if (cWorld::transform3DTo2DPoint(&vecTo[0], &vecTo[1]) &&
										cWorld::transform3DTo2DPoint(&vecTextPos, &vecTextPos)) {

										unsigned __int32 ui32PlayerColor{0xFFFFFFFF};
										if (pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)) {
											switch (cMP::SAMPVer) {
												case cMP::eVer::e037R1: {
													ui32PlayerColor = pMP->getPlayerColor(pPlayerPoolR1->getPlayerIDByHandle(pPed));
													break;
												}
												case cMP::eVer::e037R3: {
													ui32PlayerColor = pMP->getPlayerColor(pPlayerPoolR3->getPlayerIDByHandle(pPed));
													break;
												} default: break;
											}
										}

										const class cVector2D vecLineFrom { static_cast<const float>(cDirectX::pPresentationParameters->BackBufferWidth / 2), 0 };
										pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecTo[1], ui32PlayerColor);

										RECT rectText{static_cast<const long>(vecTextPos.fX), static_cast<const long>(vecTextPos.fY)};
										pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &std::move(std::to_string(static_cast<const unsigned __int32>(std::ceilf(cWorld::getDistanceBetweenTwoPoints(cSA::getPosition(pSA), &vecTo[0])))))[0], &rectText, DT_NOCLIP, ui32PlayerColor);
									}
								}
							}
						}

						if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRenderRadarPlayerIDs)) {
							class cVector2D vecOut {};
							cRadar::transformRealWorldPointToRadarSpace(&vecOut, pPed->Physical.Entity.Placeable.getPosition());
							cRadar::limitRadarPoint(&vecOut);
							cRadar::transformRadarPointToScreenSpace(&vecOut, &vecOut);

							RECT rectText{static_cast<const long>(vecOut.fX), static_cast<const long>(vecOut.fY) + 20};
							const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
							switch (cMP::SAMPVer) {
								case cMP::eVer::e037R1: {
									const unsigned __int16 ui16PlayerID{pPed != pLocalPed ? pPlayerPoolR1->getPlayerIDByHandle(pPed) : pPlayerPoolR1->ui16LocalPlayerID};
									pFont->drawTextShadowedA(cDXFont::eFontType::eNormal, &std::move(std::to_string(ui16PlayerID))[0], &rectText, DT_NOCLIP, ui32PlayersColors ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);
									break;
								}
								case cMP::eVer::e037R3: {
									const unsigned __int16 ui16PlayerID{pPed != pLocalPed ? pPlayerPoolR3->getPlayerIDByHandle(pPed) : pPlayerPoolR3->ui16LocalPlayerID};
									pFont->drawTextShadowedA(cDXFont::eFontType::eNormal, &std::move(std::to_string(ui16PlayerID))[0], &rectText, DT_NOCLIP, ui32PlayersColors ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);
									break;
								} default: break;
							}
						} return true;
					});
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNames) || pGui->getUInteger(cGui::eSyncUIntegers::eWallHackLongLinesDist)) {
					switch (cMP::SAMPVer) {
						case cMP::eVer::e037R1: {
							pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
								const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
								if (pRemotePlayerData != nullptr) {
									const class cGui *pGui{pMain->getGui()};
									const class cMP *pMP{pMain->getMP()};
									const class cDirectX *pDirectX{pMain->getDirectX()};
									const class cDXFont *pFont{pDirectX->getFont()};
									const class cDXLine *pLine{pDirectX->getLine()};

									const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
									if (pMPPed != nullptr) {
										if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNames)) {
											class cPed *pPed{pMPPed->MPEntity.pGTAEntity};
											if (pPed != nullptr && pPed->Physical.Entity.isVisible()) {
												class cVector3D vecTextPos {};
												pPed->getBonePosition(&vecTextPos, 6);
												if (cWorld::transform3DTo2DPoint(&vecTextPos, &vecTextPos) && vecTextPos.fX > 0) {
													class cVector2D vecFrom {}, vecTo{};

													RECT rectText{};
													rectText.left = static_cast<const long>(vecTextPos.fX);
													rectText.top = static_cast<const long>(vecTextPos.fY - 50.0F);

													std::string sPlayerSTR{std::move(std::to_string(ui16PlayerID) + " | ")};
													const unsigned __int32 ui32IDSize{sPlayerSTR.length()};

													// ID
													vecFrom.fX = static_cast<const float>(rectText.left - 2);
													vecFrom.fY = static_cast<const float>(rectText.top + 7);
													vecTo.fX = static_cast<const float>(rectText.left + (ui32IDSize * 2) + 2);
													vecTo.fY = static_cast<const float>(rectText.top + 7);
													pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8000000);
													pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &sPlayerSTR[0], &rectText, DT_NOCLIP, 0xFFFFFFFF);
													rectText.left += 35;

													// Nick
													sPlayerSTR.append(pRemotePlayer->sPlayerName);
													pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &sPlayerSTR[ui32IDSize], &rectText, DT_CALCRECT, 0, 0, 0);
													pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &sPlayerSTR[ui32IDSize], &rectText, DT_NOCLIP, pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors) ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);
													if (pRemotePlayerData->i32AFKState != 0) {
														rectText.left = rectText.right + 4;
														pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, "| ", &rectText, DT_NOCLIP, 0xFFFFFFFF);
														rectText.left += 8;
														pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, "AFK", &rectText, DT_NOCLIP, 0xFFFF0000);
													}

													// Bars
													rectText.left = static_cast<const long>(vecTextPos.fX);
													rectText.top = static_cast<const long>(vecTextPos.fY - 75.0F);
													const float fActorHealth{pRemotePlayerData->fActorHealth};
													if (fActorHealth >= 0.001F) {
														vecFrom.fX = static_cast<const float>(rectText.left - 2);
														vecFrom.fY = static_cast<const float>(rectText.top + 20);
														vecTo.fX = static_cast<const float>(rectText.left + 2) + 100.0F;
														vecTo.fY = static_cast<const float>(rectText.top + 20);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8000000);
														vecFrom.fX = static_cast<const float>(rectText.left);
														vecFrom.fY = static_cast<const float>(rectText.top + 20);
														vecTo.fX = static_cast<const float>(rectText.left) + fActorHealth;
														vecTo.fY = static_cast<const float>(rectText.top + 20);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8FF0000);
													}

													rectText.top = static_cast<const long>(vecTextPos.fY - 58.0F);
													const float fActorArmor{pRemotePlayerData->fActorArmor};
													if (fActorArmor >= 0.001F) {
														vecFrom.fX = static_cast<const float>(rectText.left - 2);
														vecFrom.fY = static_cast<const float>(rectText.top + 30);
														vecTo.fX = static_cast<const float>(rectText.left + 2) + 100.0F;
														vecTo.fY = static_cast<const float>(rectText.top + 30);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8000000);
														vecFrom.fX = static_cast<const float>(rectText.left);
														vecFrom.fY = static_cast<const float>(rectText.top + 30);
														vecTo.fX = static_cast<const float>(rectText.left) + fActorArmor;
														vecTo.fY = static_cast<const float>(rectText.top + 30);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8808080);
													}
												}
											}
										}
									} else if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackLongLinesDist) && pRemotePlayerData->i32GlobalMarkerLoaded) {
										class cVector3D vecTo[2] {};
										const __int32 *pMarkPos{pRemotePlayerData->i32GlobalMarkerLocation};
										vecTo[0].fX = static_cast<const float>(pMarkPos[0]);
										vecTo[0].fY = static_cast<const float>(pMarkPos[1]);
										vecTo[0].fZ = static_cast<const float>(pMarkPos[2]);

										if (cWorld::transform3DTo2DPoint(&vecTo[0], &vecTo[1])) {
											const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
											const class cVector2D vecLineFrom { static_cast<const float>(cDirectX::pPresentationParameters->BackBufferWidth / 2), 0 };
											pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecTo[1], ui32PlayersColors ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);

											RECT rectText{static_cast<const long>(vecTo[1].fX), static_cast<const long>(vecTo[1].fY)};
											pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &std::move(std::to_string(static_cast<const unsigned __int32>(std::ceilf(cWorld::getDistanceBetweenTwoPoints(cSA::getPosition(pMain->getSA()), &vecTo[0])))))[0], &rectText, DT_NOCLIP, ui32PlayersColors ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);
										}
									}
								} return true;
							});
							break;
						}
						case cMP::eVer::e037R3: {
							pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
								const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
								if (pRemotePlayerData != nullptr) {
									const class cGui *pGui{pMain->getGui()};
									const class cMP *pMP{pMain->getMP()};
									const class cDirectX *pDirectX{pMain->getDirectX()};
									const class cDXFont *pFont{pDirectX->getFont()};
									const class cDXLine *pLine{pDirectX->getLine()};

									const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
									if (pMPPed != nullptr) {
										if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNames)) {
											class cPed *pPed{pMPPed->MPEntity.pGTAEntity};
											if (pPed != nullptr && pPed->Physical.Entity.isVisible()) {
												class cVector3D vecTextPos {};
												pPed->getBonePosition(&vecTextPos, 6);
												if (cWorld::transform3DTo2DPoint(&vecTextPos, &vecTextPos) && vecTextPos.fX > 0) {
													class cVector2D vecFrom {}, vecTo{};

													RECT rectText{};
													rectText.left = static_cast<const long>(vecTextPos.fX);
													rectText.top = static_cast<const long>(vecTextPos.fY - 50.0F);

													std::string sPlayerSTR{std::move(std::to_string(ui16PlayerID) + " | ")};
													const unsigned __int32 ui32IDSize{sPlayerSTR.length()};

													// ID
													vecFrom.fX = static_cast<const float>(rectText.left - 2);
													vecFrom.fY = static_cast<const float>(rectText.top + 7);
													vecTo.fX = static_cast<const float>(rectText.left + (ui32IDSize * 2) + 2);
													vecTo.fY = static_cast<const float>(rectText.top + 7);
													pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8000000);
													pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &sPlayerSTR[0], &rectText, DT_NOCLIP, 0xFFFFFFFF);
													rectText.left += 35;

													// Nick
													sPlayerSTR.append(pRemotePlayer->sPlayerName);
													pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &sPlayerSTR[ui32IDSize], &rectText, DT_CALCRECT, 0, 0, 0);
													pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &sPlayerSTR[ui32IDSize], &rectText, DT_NOCLIP, pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors) ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);
													if (pRemotePlayerData->i32AFKState != 0) {
														rectText.left = rectText.right + 4;
														pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, "| ", &rectText, DT_NOCLIP, 0xFFFFFFFF);
														rectText.left += 8;
														pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, "AFK", &rectText, DT_NOCLIP, 0xFFFF0000);
													}

													// Bars
													rectText.left = static_cast<const long>(vecTextPos.fX);
													rectText.top = static_cast<const long>(vecTextPos.fY - 75.0F);
													const float fActorHealth{pRemotePlayerData->fActorHealth};
													if (fActorHealth >= 0.001F) {
														vecFrom.fX = static_cast<const float>(rectText.left - 2);
														vecFrom.fY = static_cast<const float>(rectText.top + 20);
														vecTo.fX = static_cast<const float>(rectText.left + 2) + 100.0F;
														vecTo.fY = static_cast<const float>(rectText.top + 20);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8000000);
														vecFrom.fX = static_cast<const float>(rectText.left);
														vecFrom.fY = static_cast<const float>(rectText.top + 20);
														vecTo.fX = static_cast<const float>(rectText.left) + fActorHealth;
														vecTo.fY = static_cast<const float>(rectText.top + 20);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8FF0000);
													}

													rectText.top = static_cast<const long>(vecTextPos.fY - 58.0F);
													const float fActorArmor{pRemotePlayerData->fActorArmor};
													if (fActorArmor >= 0.001F) {
														vecFrom.fX = static_cast<const float>(rectText.left - 2);
														vecFrom.fY = static_cast<const float>(rectText.top + 30);
														vecTo.fX = static_cast<const float>(rectText.left + 2) + 100.0F;
														vecTo.fY = static_cast<const float>(rectText.top + 30);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8000000);
														vecFrom.fX = static_cast<const float>(rectText.left);
														vecFrom.fY = static_cast<const float>(rectText.top + 30);
														vecTo.fX = static_cast<const float>(rectText.left) + fActorArmor;
														vecTo.fY = static_cast<const float>(rectText.top + 30);
														pLine->drawLine(cDXLine::eLineType::eNameTags, &vecFrom, &vecTo, 0xC8808080);
													}
												}
											}
										}
									} else if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackLongLinesDist) && pRemotePlayerData->i32GlobalMarkerLoaded) {
										class cVector3D vecTo[2] {};
										const __int32 *pMarkPos{pRemotePlayerData->i32GlobalMarkerLocation};
										vecTo[0].fX = static_cast<const float>(pMarkPos[0]);
										vecTo[0].fY = static_cast<const float>(pMarkPos[1]);
										vecTo[0].fZ = static_cast<const float>(pMarkPos[2]);

										if (cWorld::transform3DTo2DPoint(&vecTo[0], &vecTo[1])) {
											const unsigned __int32 ui32PlayersColors{pGui->getUInteger(cGui::eSyncUIntegers::ePlayersColors)};
											const class cVector2D vecLineFrom { static_cast<const float>(cDirectX::pPresentationParameters->BackBufferWidth / 2), 0 };
											pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecTo[1], ui32PlayersColors ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);

											RECT rectText{static_cast<const long>(vecTo[1].fX), static_cast<const long>(vecTo[1].fY)};
											pFont->drawTextShadowedA(cDXFont::eFontType::eNameTags, &std::move(std::to_string(static_cast<const unsigned __int32>(std::ceilf(cWorld::getDistanceBetweenTwoPoints(cSA::getPosition(pMain->getSA()), &vecTo[0])))))[0], &rectText, DT_NOCLIP, ui32PlayersColors ? pMP->getPlayerColor(ui16PlayerID) : 0xFFFFFFFF);
										}
									}
								} return true;
							});
							break;
						} default: break;
					}
				}

				if (pGui->getUInteger(cGui::eSyncUIntegers::eDrawFinalHud)) {

					// LINES
					unsigned __int32 ui32LineThemeColor[2]{};
					class cVector2D vecLineFrom {}, vecLineTo{};
					switch (std::get<0>(pGui->tThemeMode)) {
						case cGui::eThemeMode::eDarkGreen: {
							ui32LineThemeColor[0] = 0xC833544A;
							ui32LineThemeColor[1] = 0xFF33544A;
							break;
						}
						case cGui::eThemeMode::eDarkBurgundy: {
							ui32LineThemeColor[0] = 0xC8543333;
							ui32LineThemeColor[1] = 0xFF543333;
							break;
						}
						case cGui::eThemeMode::eImGuiOriginalDark: {
							ui32LineThemeColor[0] = 0xC8294A7A;
							ui32LineThemeColor[1] = 0xFF294A7A;
							break;
						}
						case cGui::eThemeMode::eImGuiOriginalLight: {
							ui32LineThemeColor[0] = 0xC8FFFFFF;
							ui32LineThemeColor[1] = 0xFFFFFFFF;
							break;
						}
						case cGui::eThemeMode::eDarkPurple: {
							ui32LineThemeColor[0] = 0xC8453354;
							ui32LineThemeColor[1] = 0xFF966396;
							break;
						}
						case cGui::eThemeMode::eDarkGray: {
							ui32LineThemeColor[0] = 0xFF4C4E50;
							ui32LineThemeColor[1] = 0xFFFFFFFF;
							break;
						}
						case cGui::eThemeMode::eCyberDark: {
							ui32LineThemeColor[0] = 0xC8000000;
							ui32LineThemeColor[1] = 0xFF0A4F7D;
							break;
						} default: break;
					}
					vecLineFrom.fY = static_cast<const float>(ui32BackBufferHeight - 16);
					vecLineTo.fX = static_cast<const float>(ui32BackBufferWidth - 1);
					vecLineTo.fY = static_cast<const float>(ui32BackBufferHeight - 16);
					pLine->drawLine(cDXLine::eLineType::eFinalHud, &vecLineFrom, &vecLineTo, ui32LineThemeColor[0]);

					vecLineFrom.fY = static_cast<const float>(ui32BackBufferHeight - 31);
					vecLineTo.fY = static_cast<const float>(ui32BackBufferHeight - 31);
					pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32LineThemeColor[1]);
					vecLineFrom.fY = static_cast<const float>(ui32BackBufferHeight - 1);
					vecLineTo.fY = static_cast<const float>(ui32BackBufferHeight - 1);
					pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32LineThemeColor[1]);
					vecLineFrom.fY = static_cast<const float>(ui32BackBufferHeight - 31);
					vecLineTo.fX = 0;
					vecLineTo.fY = static_cast<const float>(ui32BackBufferHeight - 1);
					pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32LineThemeColor[1]);
					vecLineFrom.fY = static_cast<const float>(ui32BackBufferHeight - 16);
					vecLineTo.fX = static_cast<const float>(ui32BackBufferWidth - 1);
					vecLineTo.fY = static_cast<const float>(ui32BackBufferHeight - 16);
					pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32LineThemeColor[1]);
					vecLineFrom.fX = static_cast<const float>(ui32BackBufferWidth - 1);
					vecLineFrom.fY = static_cast<const float>(ui32BackBufferHeight - 31);
					vecLineTo.fY = static_cast<const float>(ui32BackBufferHeight - 1);
					pLine->drawLine(cDXLine::eLineType::eNormal, &vecLineFrom, &vecLineTo, ui32LineThemeColor[1]);


					// TEXT
					static const auto __addText = [](const class cDXFont *pFont, RECT *pRectText, const unsigned __int32 ui32Color, const std::wstring &wsText, const unsigned __int32 ui32Status, const float *pfValue, const __int32 *pi32Value, const unsigned __int8 ui8Length) -> void {
						if (ui32Status) {

							std::wstring wsRenderText{};
							if (pfValue != nullptr) {
								wsRenderText = std::move(L'[' + std::move(wsText) + L" : " + std::move(std::to_wstring(*pfValue)));
								if (ui8Length) {
									wsRenderText.erase(wsRenderText.rfind(L'.') + ui8Length + 1);
								} wsRenderText.push_back(L']');
							} else if (pi32Value != nullptr) {
								wsRenderText = std::move(L'[' + std::move(wsText) + L" : " + std::move(std::to_wstring(*pi32Value) + L']'));
							} else {
								wsRenderText = std::move(L'[' + std::move(wsText) + L']');
							}

							pFont->drawTextShadowedW(cDXFont::eFontType::eFinalHud, &wsRenderText[0], pRectText, DT_CALCRECT, 0, 0, 0);
							pFont->drawTextShadowedW(cDXFont::eFontType::eFinalHud, &wsRenderText[0], pRectText, DT_NOCLIP, ui32Color);
							pRectText->left = pRectText->right + 3;
							pFont->drawTextShadowedA(cDXFont::eFontType::eFinalHud, "|", pRectText, DT_NOCLIP, 0xFFFF0000);
							pRectText->left += 8;

						} return;
					};


					RECT rectText1{3, ui32BackBufferHeight - 30};
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Защита", pGui->getUInteger(cGui::eSyncUIntegers::eProt), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFFFF, L"Фильтрация", pGui->getUInteger(cGui::eSyncUIntegers::eFilterSync), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFFFF, L"Триггербот", pGui->getUInteger(cGui::eSyncUIntegers::eTriggerBot), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Своё время", pGui->getUInteger(cGui::eSyncUIntegers::eCustomTime), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFF0000, L"Скрывать диалоги", pGui->getUInteger(cGui::eSyncUIntegers::eDialogHider), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFF0000, L"Скрывать TextDraw", pGui->getUInteger(cGui::eSyncUIntegers::eTextDrawHider), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFF0000, L"Скрывать GangZone", pGui->getUInteger(cGui::eSyncUIntegers::eGangZoneHider), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFF0000, L"Эксплойт", pGui->bNoLockInfoOnSpec, nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Фейк анимация", pGui->getUInteger(cGui::eSyncUIntegers::eFakeAnim), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Невидимка", pGui->getUInteger(cGui::eSyncUIntegers::eInvisible), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Невалидное прицеливание", pGui->getUInteger(cGui::eSyncUIntegers::eInvalidAIMPro), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Не падать при прыжке", pGui->getUInteger(cGui::eSyncUIntegers::eNoAntiHop), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Ранд. Кванты", pGui->getUInteger(cGui::eSyncUIntegers::eRandQuaternion), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Вечный гудок", pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysHorn), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Тряска", pGui->getUInteger(cGui::eSyncUIntegers::eShakingCamera), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Анти сурф", pGui->getUInteger(cGui::eSyncUIntegers::eNoSurfInfo), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFFFF, L"+C", pGui->getUInteger(cGui::eSyncUIntegers::ePlusC), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Антиугон", pGui->getUInteger(cGui::eSyncUIntegers::eStayInCarOnJack), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFFFF, L"Очистка памяти", pGui->getUInteger(cGui::eSyncUIntegers::eCleanMemory), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Скорострельность", pGui->getUInteger(cGui::eSyncUIntegers::eRapidFire), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Пуля дура", pGui->getUInteger(cGui::eSyncUIntegers::eBulletFool), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Сайлент Аим", pGui->getUInteger(cGui::eSyncUIntegers::eSilentAim), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Рандомный ник", pGui->getUInteger(cGui::eSyncUIntegers::eRandNick), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFFFF, L"Коллизия", (pGui->getUInteger(cGui::eSyncUIntegers::eNoPedCollision) || pGui->getUInteger(cGui::eSyncUIntegers::eNoVehCollision) || pGui->getUInteger(cGui::eSyncUIntegers::eNoObjCollision) || pGui->getUInteger(cGui::eSyncUIntegers::eNoDumCollision) || pGui->getUInteger(cGui::eSyncUIntegers::eNoCamCollision) || pGui->getUInteger(cGui::eSyncUIntegers::eNoWaterCollision)), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFFFF, L"СпидХак", pGui->getUInteger(cGui::eSyncUIntegers::eSpeedHack), pGui->getFloatPtr(cGui::eSyncFloats::eSpeedHack), nullptr, 2);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Спуф", pGui->getUInteger(cGui::eSyncUIntegers::eFakeMPVer), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Радужный", pGui->getUInteger(cGui::eSyncUIntegers::NoVehColorReset), nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eRainBowCarTime), 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Флуд комп.", pGui->bComponentLagger, nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eComponentLaggerTime), 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Повтор пули", pGui->getUInteger(cGui::eSyncUIntegers::eBulletRepeater), nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eBulletRepeater), 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Фейк спец. действие", pGui->getUInteger(cGui::eSyncUIntegers::eFakeSpecialAction), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Подмена оружия", pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeapon), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Подмена пули", pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeaponBullet), nullptr, nullptr, 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Лаги", pGui->getUInteger(cGui::eSyncUIntegers::eLags), nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eLagsTime), 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Фейк ХП", pGui->getUInteger(cGui::eSyncUIntegers::eFakeHP), nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eFakeHP), 0);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Фейк АП", pGui->getUInteger(cGui::eSyncUIntegers::eFakeAP), nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eFakeAP), 0);
					__addText(pFont, &rectText1, 0xFFFF0000, L"АирБрейк", pGui->bAirBrake, pGui->getFloatPtr(cGui::eSyncFloats::eAirBrake), nullptr, 1);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Огран", pGui->getUInteger(cGui::eSyncUIntegers::eLimitMoveSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eLimitMoveSpeed), nullptr, 2);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Пиздарванка", pGui->bPizdaRvanka, pGui->getFloatPtr(cGui::eSyncFloats::ePizdaRvanka), nullptr, 2);
					__addText(pFont, &rectText1, 0xFFFFFF00, L"Фейк пинг", pGui->getUInteger(cGui::eSyncUIntegers::eFakePing), nullptr, pGui->getIntegerPtr(cGui::eSyncIntegers::eFakePingTime), 0);

					// Pos
					RECT rectText2{ui32BackBufferWidth - 290, ui32BackBufferHeight - 15};
					const class cVector3D *pMyPos{cSA::getPosition(pSA)};
					__addText(pFont, &rectText2, 0xFFFFFFFF, L"X", 1, &pMyPos->fX, nullptr, 1);
					__addText(pFont, &rectText2, 0xFFFFFFFF, L"Y", 1, &pMyPos->fY, nullptr, 1);
					__addText(pFont, &rectText2, 0xFFFFFFFF, L"Z", 1, &pMyPos->fZ, nullptr, 1);

					// Time + FPS
					const float fFPS{pSA->getFPS()};
					std::string sTime{std::move(pMain->getTimeA(true))};
					RECT rectRightPos{ui32BackBufferWidth - 100, ui32BackBufferHeight - 30};
					if (fFPS >= 60.0F) {
						pFont->drawTextShadowedA(cDXFont::eFontType::eFinalHud, &std::move(std::move(sTime) + " | " + pGui->sGameFPS)[0], &rectRightPos, DT_NOCLIP, 0xFF00FF00); // Зеленый
					} else if (fFPS >= 30.0F) {
						pFont->drawTextShadowedA(cDXFont::eFontType::eFinalHud, &std::move(std::move(sTime) + " | " + pGui->sGameFPS)[0], &rectRightPos, DT_NOCLIP, 0xFFFFFF00); // Жёлтый
					} else {
						pFont->drawTextShadowedA(cDXFont::eFontType::eFinalHud, &std::move(std::move(sTime) + " | " + pGui->sGameFPS)[0], &rectRightPos, DT_NOCLIP, 0xFFFF0000); // Красный
					}

					static unsigned long ulOldTick{0};
					const unsigned long ulNewTick{pWinAPIFuncs->getTickCount()};
					if (ulNewTick > ulOldTick) {
						pGui->sGameFPS = std::move(std::to_string(static_cast<const unsigned __int32>(fFPS)));
						ulOldTick = ulNewTick + 300;
					}
				}
			}

			if (pGui->bGUIStatus) {
				ImGui_ImplWin32_NewFrame(); ImGui_ImplDX9_NewFrame(); ImGui::NewFrame();

				if (!pGui->bNeedUpdate) {

					if (pGui->getUInteger(cGui::eSyncUIntegers::eDrawFinalHud)) {
						ImGui::SetNextWindowSize(std::move(ImVec2{350.0F, 100.0F}), ImGuiCond_::ImGuiCond_Appearing);
						ImGui::SetNextWindowPos(std::move(ImVec2{static_cast<const float>(ui32BackBufferWidth / 2 - 175), 0}), pGui->bResetGUIPos ? ImGuiCond_::ImGuiCond_Always : ImGuiCond_::ImGuiCond_Appearing);
						if (ImGui::Begin(LANG_RUS ? "Финальный Худ" : "Final Hud", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav | ImGuiWindowFlags_::ImGuiWindowFlags_NoMove | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse)) {

							char *pIP{nullptr};
							static unsigned __int16 ui16TotalStreamPlayers[2]{};	ui16TotalStreamPlayers[0] = 0; ui16TotalStreamPlayers[1] = 0;
							static unsigned __int16 ui16TotalStreamVehicles{0};		ui16TotalStreamVehicles = 0;
							switch (cMP::SAMPVer) {
								case cMP::eVer::e037R1: {
									struct stSAMP037R1 *pSAMP{pMP->getMainStructR1()};
									const struct stSAMPPools037R1 *pPools{pSAMP->pPools};

									pPools->pPlayer->forAllRemotePeds([](const unsigned __int16, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
										const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
										if (pRemotePlayerData != nullptr && pRemotePlayerData->pSAMP_Actor != nullptr) {
											++ui16TotalStreamPlayers[0];
											if (pRemotePlayerData->pSAMP_Vehicle != nullptr) {
												++ui16TotalStreamPlayers[1];
											}
										} return true;
									});

									pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16, struct stSAMPVehicle *) -> bool {
										++ui16TotalStreamVehicles;
										return true;
									});

									pIP = &pSAMP->cIP[0];
									break;
								}
								case cMP::eVer::e037R3: {
									struct stSAMP037R3 *pSAMP{pMP->getMainStructR3()};
									const struct stSAMPPools037R3 *pPools{pSAMP->pPools};

									pPools->pPlayer->forAllRemotePeds([](const unsigned __int16, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
										const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
										if (pRemotePlayerData != nullptr && pRemotePlayerData->pSAMP_Actor != nullptr) {
											++ui16TotalStreamPlayers[0];
											if (pRemotePlayerData->pSAMP_Vehicle != nullptr) {
												++ui16TotalStreamPlayers[1];
											}
										} return true;
									});

									pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16, struct stSAMPVehicle *) -> bool {
										++ui16TotalStreamVehicles;
										return true;
									});

									pIP = &pSAMP->cIP[0];
									break;
								} default: break;
							}
							ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 3.0F);
							ImGui::Text("\xEE\xB1\xA8 IP: [%s]", pIP);
							if (ImGui::IsItemClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
								ImGui::SetClipboardText(pIP);
								pSA->getAudioEngine()->reportFrontendAudioEvent(11);
							}
							ImGui::Separator();
							ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 5.0F);
							ImGui::Text(LANG_RUS ? "\xEE\xAC\x8C На ногах: [%d] | В транспорте: [%d]" : "\xEE\xAC\x8C OnFoot: [%d] | InCar: [%d]", ui16TotalStreamPlayers[0], ui16TotalStreamPlayers[1]);
							ImGui::Separator();
							ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 3.8F);
							ImGui::Text(LANG_RUS ? "\xEE\xB0\x8A Количество транспорта: [%d]" : "\xEE\xB0\x8A Total vehicles: [%d]", ui16TotalStreamVehicles);

							ImGui::End();
						}
					}

					ImGui::SetNextWindowSize(std::move(ImVec2{855.0F, 550.0F}), ImGuiCond_::ImGuiCond_Appearing);
					pGui->getUInteger(cGui::eSyncUIntegers::eDisableWndConstSize) ? true : ImGui::SetNextWindowSizeConstraints(std::move(ImVec2{855.0F, 550.0F}), std::move(ImVec2{static_cast<const float>(ui32BackBufferWidth), static_cast<const float>(ui32BackBufferHeight)}));
					ImGui::SetNextWindowPos(std::move(ImVec2{static_cast<const float>(ui32BackBufferWidth / 2 - 435), static_cast<const float>(ui32BackBufferHeight / 2 - 275)}), pGui->bResetGUIPos ? ImGuiCond_::ImGuiCond_Always : ImGuiCond_::ImGuiCond_Appearing);
					if (ImGui::Begin(LANG_RUS ? ("\xEE\xBC\xB5 Финальный Проект | " PROJECT_VERSION_A " | Разработчик: DarkP1xel \xEE\xBC\xB5") : ("\xEE\xBC\xB5 Final Project | " PROJECT_VERSION_A " | Developer: DarkP1xel \xEE\xBC\xB5"), &pGui->bOpen, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse)) {

						//static float fTest[4]{0, 0, 0, 5.0F};
						//static __int32 i32Test[4]{0, 0, 0, 0};
						//ImGui::SliderFloat4("TEST", &fTest[0], -500.0F, 500.0F, "%.1f");
						//ImGui::SliderInt("TEST", &i32Test[0], 0, 100);

						if (ImGui::IsItemHovered() &&
							ImGui::IsMouseDown(ImGuiMouseButton_::ImGuiMouseButton_Left) &&
							ImGui::IsMouseDown(ImGuiMouseButton_::ImGuiMouseButton_Right) &&
							ImGui::IsMouseDoubleClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {

							pWinAPIFuncs->beep(130, 100);
							pWinAPIFuncs->beep(262, 100);
							pWinAPIFuncs->beep(300, 100);
							pWinAPIFuncs->beep(392, 100);
							pWinAPIFuncs->beep(523, 100);
							pWinAPIFuncs->beep(660, 100);
							pWinAPIFuncs->beep(784, 300);
							pWinAPIFuncs->beep(660, 300);
							pWinAPIFuncs->beep(146, 100);
							pWinAPIFuncs->beep(262, 100);
							pWinAPIFuncs->beep(311, 100);
							pWinAPIFuncs->beep(415, 100);
							pWinAPIFuncs->beep(523, 100);
							pWinAPIFuncs->beep(622, 100);
							pWinAPIFuncs->beep(831, 300);
							pWinAPIFuncs->beep(622, 300);
							pWinAPIFuncs->beep(155, 100);
							pWinAPIFuncs->beep(294, 100);
							pWinAPIFuncs->beep(349, 100);
							pWinAPIFuncs->beep(466, 100);
							pWinAPIFuncs->beep(588, 100);
							pWinAPIFuncs->beep(699, 100);
							pWinAPIFuncs->beep(933, 500);
							pWinAPIFuncs->beep(1047, 400);

							ImGui::OpenPopup("\xEE\xB3\xAF Пасхальное яйцо \xEE\xB3\xAF");
						}
						if (ImGui::BeginPopupModal(LANG_RUS ? "\xEE\xB3\xAF Пасхальное яйцо \xEE\xB3\xAF" : "\xEE\xB3\xAF Easter egg \xEE\xB3\xAF", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
							ImGui::SameLine(110.0F);
							ImGui::Image(pGui->pLogoTexture, std::move(ImVec2{525.0F, 218.0F}));

							ImGui::SetCursorPosX(140.0F);
							ImGui::TextUnformatted("\xEE\xBC\x9E Вы только что обнаружили скрытое послание от разработчика проекта \xEE\xBC\x9E\n\n");
							ImGui::SetCursorPosX(107.0F);
							ImGui::TextUnformatted("Я вложил душу и уйму времени при разработке всего, что Вы сейчас видите на экране.");
							ImGui::SetCursorPosX(78.0F);
							ImGui::TextUnformatted("Никогда не сдаваться. Никогда не отчаиваться. Всегда быть на шаг впереди. Legends Never Die!\n\n");

							std::mt19937 randEngine{std::random_device{}()};
							ImGui::TextColored(std::move(ImVec4{
								std::uniform_real_distribution<float>{0, 1.0F}(randEngine),
								std::uniform_real_distribution<float>{0, 1.0F}(randEngine),
								std::uniform_real_distribution<float>{0, 1.0F}(randEngine),
								1.0F}), ">>> %s <<<\n\n", &pGui->sEasterEggKey[0]);
							if (ImGui::IsItemClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
								ImGui::SetClipboardText(&pGui->sEasterEggKey[0]);
								pWinAPIFuncs->beep(500, 300);
							}

							ImGui::SetCursorPosX(300.0F);
							ImGui::TextUnformatted("\"Хочу Осознать Rадость\"\n\n");
							ImGui::SetCursorPosX(150.0F);
							ImGui::TextUnformatted("Благодарю Hebere (Артём) | sanek (Александр) за Ваш вклад в это дело!");
							ImGui::SetCursorPosX(190.0F);
							ImGui::TextUnformatted("#SAMPЖИВИ | #ЛучшийПроект | #БластХак | #CPP | #420");

							if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
								ImGui::CloseCurrentPopup();
							}

							ImGui::EndPopup();
						}

						if (!pGui->getUInteger(cGui::eSyncUIntegers::eNoBackGroundImage)) {
							const ImVec2 vecContentRegionAvail{std::move(ImGui::GetContentRegionAvail())};
							ImVec2 vecCursorScreenPosA{std::move(ImGui::GetCursorScreenPos())};
							ImVec2 vecCursorScreenPosB = vecCursorScreenPosA;
							vecCursorScreenPosA.x -= 5.0F;
							vecCursorScreenPosA.y -= 36.0F;
							vecCursorScreenPosB.x += vecContentRegionAvail.x + 2.0F;
							vecCursorScreenPosB.y += vecContentRegionAvail.y + 2.0F;
							ImGui::GetWindowDrawList()->AddImage(pGui->pBackGroundTexture, vecCursorScreenPosA, vecCursorScreenPosB, std::move(ImVec2{}), std::move(ImVec2{1.0F, 1.0F}), IM_COL32(255, 255, 255, 30));
						}

						// Настройки##78
						if (ImGui::BeginTabBar("TABS", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoTooltip)) {

							ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{ImGui::GetContentRegionAvail().x, 10.0F}));
							if (ImGui::BeginTabItem(LANG_RUS ? "\tТроллинг" : "\t Trolling", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {

								ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

								if (ImGui::Button(LANG_RUS ? "\xEE\xB4\x83 Тролльнуть" : "\xEE\xB4\x83 Troll", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 35.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											cMP::sendTroll(pMain, pMP->getMainStructR1()->pPools->pPlayer->pRemotePlayer[pGui->ui32TrollPlayerID], nullptr);
											break;
										}
										case cMP::eVer::e037R3: {
											cMP::sendTroll(pMain, nullptr, pMP->getMainStructR3()->pPools->pPlayer->pRemotePlayer[pGui->ui32TrollPlayerID]);
											break;
										} default: break;
									}
								}
								ImGui::SameLine();
								if (ImGui::Button(LANG_RUS ? "\xEE\xB4\x93 Тролльнуть ВСЕХ" : "\xEE\xB4\x93 Troll ALL", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 35.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
												cMP::sendTroll(pMain, pRemotePlayer, nullptr);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
												cMP::sendTroll(pMain, nullptr, pRemotePlayer);
												return true;
											});
											break;
										} default: break;
									}
								}

								ImGui::Checkbox(LANG_RUS ? "\xEE\xBC\x94 Зациклить для выбранного игрока" : "\xEE\xBC\x94 Repeat on selected player", &pGui->bRepeatTrolling);
								ImGui::SameLine();
								ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
								ImGui::SliderInt("##ЗадержкаТроллинга", pGui->getIntegerPtr(cGui::eSyncIntegers::eRepeatTrollingTime), 30, 3000, "\xEE\xA9\x90 %d");
								ImGui::PopItemWidth();

								ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 66.0F);
								if (ImGui::BeginCombo(LANG_RUS ? "\xEE\xB4\x8F Игроки" : "\xEE\xB4\x8F Players", &pGui->sTrollPlayer[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {

									static bool bNone{true}; bNone = true;

									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
												const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
												if (pRemotePlayerData != nullptr) {
													const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
													const struct stSAMPVehicle *pMPVeh{pRemotePlayerData->pSAMP_Vehicle};
													if (pMPPed != nullptr && pMPVeh != nullptr) {
														if (bNone) {
															bNone = false;
														}

														std::string sLabel{'[' + std::move(std::to_string(ui16PlayerID)) + "] " + (pMPVeh->MPEntity.pGTAEntity->Vehicle.getDriver() == pMPPed->MPEntity.pGTAEntity ? "[\xEE\xB0\x8B] " : "") + pRemotePlayer->sPlayerName};
														if (ImGui::Selectable(&sLabel[0])) {
															class cGui *pGui{pMain->getGui()};
															pGui->ui32TrollPlayerID = ui16PlayerID;
															pGui->sTrollPlayer = std::move(sLabel);
															return false;
														} ImGui::Separator();
													}
												} return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
												const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
												if (pRemotePlayerData != nullptr) {
													const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
													const struct stSAMPVehicle *pMPVeh{pRemotePlayerData->pSAMP_Vehicle};
													if (pMPPed != nullptr && pMPVeh != nullptr) {
														if (bNone) {
															bNone = false;
														}

														std::string sLabel{'[' + std::move(std::to_string(ui16PlayerID)) + "] " + (pMPVeh->MPEntity.pGTAEntity->Vehicle.getDriver() == pMPPed->MPEntity.pGTAEntity ? "[\xEE\xB0\x8B] " : "") + pRemotePlayer->sPlayerName};
														if (ImGui::Selectable(&sLabel[0])) {
															class cGui *pGui{pMain->getGui()};
															pGui->ui32TrollPlayerID = ui16PlayerID;
															pGui->sTrollPlayer = std::move(sLabel);
															return false;
														} ImGui::Separator();
													}
												} return true;
											});
											break;
										} default: break;
									}

									if (bNone) {
										if (!pGui->sTrollPlayer.empty()) {
											pGui->sTrollPlayer.clear();
										} ImGui::TextUnformatted(LANG_RUS ? "\xEE\xAC\xB0 Поиск подходящих игроков..." : "\xEE\xAC\xB0 Searching for players...");
									}

									ImGui::EndCombo();
								}
								ImGui::PopItemWidth();

								ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - (LANG_RUS ? 62.0F : 55.0F));
								if (ImGui::BeginCombo(LANG_RUS ? "\xEE\xAD\x9E Режим" : "\xEE\xAD\x9E Mode", &std::move(std::get<1>(pGui->tTrollMode))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
									std::all_of(pGui->vecTrollModes.cbegin(), pGui->vecTrollModes.cend(), [&pGui](const std::tuple<const cGui::eTrollMode, const std::string> tTrollMode) -> const bool {
										if (ImGui::Selectable(&std::move(std::get<1>(tTrollMode))[0])) {
											pGui->tTrollMode = std::move(tTrollMode);
											return false;
										} ImGui::Separator();
										return true;
									});
									ImGui::EndCombo();
								}
								ImGui::PopItemWidth();

								ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - (LANG_RUS ? 46.0F : 53.0F));
								if (ImGui::BeginCombo(LANG_RUS ? "\xEE\xAD\x9B Тип" : "\xEE\xAD\x9B Type", &std::move(std::get<1>(pGui->tTrollType))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
									std::all_of(pGui->vecTrollTypes.cbegin(), pGui->vecTrollTypes.cend(), [&pGui](const std::tuple<const cGui::eTrollType, const std::string> tTrollType) -> const bool {
										if (ImGui::Selectable(&std::move(std::get<1>(tTrollType))[0])) {
											pGui->tTrollType = std::move(tTrollType);
											return false;
										} ImGui::Separator();
										return true;
									});
									ImGui::EndCombo();
								}
								ImGui::PopItemWidth();

								ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - (LANG_RUS ? 295.0F : 243.0F));
								ImGui::SliderInt(LANG_RUS ? "\xEE\xB2\x8F Количество пакетов при отправке троллинга" : "\xEE\xB2\x8F Number of packets on trolling to send", pGui->getIntegerPtr(cGui::eSyncIntegers::eTrollPacketsToSend), 1, 35, "%d", ImGuiSliderFlags_::ImGuiSliderFlags_NoInput);
								ImGui::PopItemWidth();

								/*
								Переход.
								*/

								ImGui::NewLine();
								ImGui::Separator();

								ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.5F);
								ImGui::RadioButton("Unoccupied \xEE\xA9\xAF", reinterpret_cast<__int32 *>(&pGui->trollSyncMode), 0);
								if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
									ImGui::OpenPopup(LANG_RUS ? "Настройки##75" : "Settings##75");
								}
								ImGui::SameLine();
								ImGui::RadioButton("InCar \xEE\xA9\xAF", reinterpret_cast<__int32 *>(&pGui->trollSyncMode), 1);
								if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
									ImGui::OpenPopup(LANG_RUS ? "Настройки##75" : "Settings##75");
								}
								if (ImGui::BeginPopupModal(LANG_RUS ? "Настройки##75" : "Settings##75", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

									ImGui::Checkbox(LANG_RUS ? "\xEE\xB0\x8B Только на водителях" : "\xEE\xB0\x8B Only on drivers", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTrollOnlyDrivers));

									ImGui::Separator();

									ImGui::PushItemWidth(420.0F);
									ImGui::SliderFloat(LANG_RUS ? "Дистанция срабатывания" : "Sensing distance", pGui->getFloatPtr(cGui::eSyncFloats::eTrollDistance), 1.0F, 300.0F, "%.1f");
									ImGui::PopItemWidth();

									if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
										ImGui::CloseCurrentPopup();
									}

									ImGui::EndPopup();
								}

								static bool bTroll1{false}, bTroll2{false}, bTroll3{false}, bTroll4{false}, bTroll5{false}, bTroll6{false};

								bTroll1 = ImGui::Button(LANG_RUS ? "\xEE\xB9\xBE Транспорт в центр карты" : "\xEE\xB9\xBE Vehicles to map center", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 4.0F, 25.0F}));
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted(LANG_RUS ? "\xEE\xB9\xAC Игроки которые сидят на пассажирском месте будут крашнуты." : "\xEE\xB9\xAC Players that on passenger seat will be crashed.");
									ImGui::EndTooltip();
								}
								ImGui::SameLine();
								bTroll2 = ImGui::Button(LANG_RUS ? "\xEE\xB9\xBE Транспорт к себе" : "\xEE\xB9\xBE Vehicles to me", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}));
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted(LANG_RUS ? "\xEE\xB9\xAC Отправляет синхронизацию на телепорт всего транспорта к себе." : "\xEE\xB9\xAC Send synchronization to teleport vehicles to me.");
									ImGui::EndTooltip();
								}
								ImGui::SameLine();
								bTroll3 = ImGui::Button(LANG_RUS ? "\xEE\xB9\xBE Поджог транспорта" : "\xEE\xB9\xBE Blow up vehicles", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}));
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted(LANG_RUS ? "\xEE\xB9\xAC Отправляет синхронизацию на поджог всего транспорта." : "\xEE\xB9\xAC Send synchronization to blow up vehicles.");
									ImGui::EndTooltip();
								}
								ImGui::SameLine();
								bTroll4 = ImGui::Button(LANG_RUS ? "\xEE\xB9\xBE Развернуть транспорт" : "\xEE\xB9\xBE Flip vehicles", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}));
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted(LANG_RUS ? "\xEE\xB9\xAC Отправляет синхронизацию на изменение кватерниона всего транспорта." : "\xEE\xB9\xAC Send synchronization to flip quaternion of vehicles.");
									ImGui::EndTooltip();
								}

								bTroll5 = ImGui::Button(LANG_RUS ? "\xEE\xB9\xBE Весь транспорт на игрока рядом" : "\xEE\xB9\xBE Vehicles to nearest player", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}));
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted(LANG_RUS ? "\xEE\xB9\xAC Отправляет синхронизацию на телепорт всего транспорта без водителя к ближайшему игроку от Вас." : "\xEE\xB9\xAC Send synchronization that teleport vehicles to nearest player.");
									ImGui::EndTooltip();
								}
								ImGui::SameLine();
								bTroll6 = ImGui::Button(LANG_RUS ? "\xEE\xB9\xBE Весь транспорт на игрока рядом, скорость \xEE\xA9\xAF" : "\xEE\xB9\xBE Vehicles to nearest player, speed \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}));
								if (ImGui::IsItemHovered()) {

									ImGui::BeginTooltip();
									ImGui::TextUnformatted(LANG_RUS ? "\xEE\xB9\xAC Отправляет синхронизацию на телепорт всего транспорта к ближайшему игроку от Вас со скоростью." : "\xEE\xB9\xAC Send synchronization to teleport vehicles on nearest player with speed.");
									ImGui::EndTooltip();

									if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
										ImGui::OpenPopup(LANG_RUS ? "Настройки##70" : "Settings##70");
									}
								}
								if (ImGui::BeginPopupModal(LANG_RUS ? "Настройки##70" : "Settings##70", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

									ImGui::PushItemWidth(420.0F);
									ImGui::SliderFloat(LANG_RUS ? "Скорость" : "Speed", pGui->getFloatPtr(cGui::eSyncFloats::eTrollSyncSpeed), -3.0F, 3.0F, "%.1f");
									ImGui::PopItemWidth();

									if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
										ImGui::CloseCurrentPopup();
									}

									ImGui::EndPopup();
								}

								if (bTroll1 || bTroll2 || bTroll3 || bTroll4 || bTroll5 || bTroll6) {
									static class cVector3D vecNearestPedPos {};			vecNearestPedPos.clear();

									if (bTroll5 || bTroll6) {
										static float fCurrentDistance{0};			fCurrentDistance = pGui->getFloat(cGui::eSyncFloats::eTrollDistance);

										cPools::getPlayerPool()->forAllPeds([](class cPed *pPed) -> bool {
											if (pPed->getAlive()) {
												class cPed *pLocalPed{pMain->getSA()->getPlayerPed()};
												if (pPed != pLocalPed) {

													class cVector3D vecPedPos {}, vecLocalPedPos{};
													pPed->getBonePosition(&vecPedPos, pPed->getVehicle() != nullptr ? 6 : 2);
													pLocalPed->getBonePosition(&vecLocalPedPos, 2);

													const float fNewDist{cWorld::getDistanceBetweenTwoPoints(&vecLocalPedPos, &vecPedPos)};
													if (fNewDist < fCurrentDistance) {
														fCurrentDistance = fNewDist;
														vecNearestPedPos = std::move(vecPedPos);
													}

												}
											} return true;
										});
									}

									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh) -> bool {
												const class cGui *pGui{pMain->getGui()};

												class cAutomobile *pAuto{pRemoteVeh->MPEntity.pGTAEntity};
												const class cPed *pDriver{pAuto->Vehicle.getDriver()};
												if (pGui->getUInteger(cGui::eSyncUIntegers::eTrollOnlyDrivers) ? pDriver != nullptr : pDriver == nullptr) {
													const class cSA *pSA{pMain->getSA()};
													const class cRakClientManager *pRakClientManager{pMain->getMP()->getRakClientManager()};

													switch (pGui->trollSyncMode) {
														case cGui::eTrollSyncMode::eUnoccupied: {
															std::mt19937 randEngine{std::random_device{}()};

															struct stUnoccupiedPacket unoccupiedVehicle {};
															unoccupiedVehicle.unoccupiedData.ui8SeatID = static_cast<const unsigned __int8>(std::uniform_int_distribution<unsigned __int32>{0, 3}(randEngine));
															unoccupiedVehicle.unoccupiedData.ui16VehicleID = ui16VehicleID;
															unoccupiedVehicle.unoccupiedData.fHealth = bTroll3 ? 249.0F : pAuto->Vehicle.getHealth();

															if (bTroll1) {
																unoccupiedVehicle.unoccupiedData.vecPosition.fX = 1.0F;
																unoccupiedVehicle.unoccupiedData.vecPosition.fY = 2.0F;
																unoccupiedVehicle.unoccupiedData.vecPosition.fZ = 1.0F;
															} else if (bTroll2) {
																unoccupiedVehicle.unoccupiedData.vecPosition = *cSA::getPosition(pSA);
															} else if (bTroll3 || bTroll4) {
																if (bTroll4) {
																	unoccupiedVehicle.unoccupiedData.vecRoll.fX = 0.964815F;
																	unoccupiedVehicle.unoccupiedData.vecRoll.fY = -0.262928F;
																	unoccupiedVehicle.unoccupiedData.vecRoll.fZ = -0.000420F;
																	unoccupiedVehicle.unoccupiedData.vecDirection.fX = -0.262332F;
																	unoccupiedVehicle.unoccupiedData.vecDirection.fY = -0.962519F;
																	unoccupiedVehicle.unoccupiedData.vecDirection.fZ = -0.068843F;
																} unoccupiedVehicle.unoccupiedData.vecPosition = *pAuto->Vehicle.Physical.Entity.Placeable.getPosition();
															} else if (bTroll5 || bTroll6 && !vecNearestPedPos.isXYEmpty()) {
																if (bTroll6) {
																	unoccupiedVehicle.unoccupiedData.vecMoveSpeed.fZ = pGui->getFloat(cGui::eSyncFloats::eTrollSyncSpeed);
																} unoccupiedVehicle.unoccupiedData.vecPosition = std::move(vecNearestPedPos);
															} pRakClientManager->sendPacket(&unoccupiedVehicle, sizeof(struct stUnoccupiedPacket));
															break;
														}
														case cGui::eTrollSyncMode::eInCar: {
															const class cPed *pLocalPed{pSA->getPlayerPed()};

															struct stInCarPacket inCarVehicle {};
															inCarVehicle.inCarData.ui16VehicleID = ui16VehicleID;
															inCarVehicle.inCarData.fVehicleHealth = bTroll3 ? 249.0F : pAuto->Vehicle.getHealth();
															inCarVehicle.inCarData.ui8PlayerHealth = static_cast<const unsigned __int8>(pLocalPed->getHealth());
															inCarVehicle.inCarData.ui8PlayerArmor = static_cast<const unsigned __int8>(pLocalPed->getArmor());
															inCarVehicle.inCarData.bSiren = true;

															if (bTroll1) {
																inCarVehicle.inCarData.vecPosition.fX = 1.0F;
																inCarVehicle.inCarData.vecPosition.fY = 2.0F;
																inCarVehicle.inCarData.vecPosition.fZ = 1.0F;
															} else if (bTroll2) {
																inCarVehicle.inCarData.vecPosition = *cSA::getPosition(pSA);
															} else if (bTroll3 || bTroll4) {
																if (bTroll4) {
																	inCarVehicle.inCarData.vecQuaternion.fX = 0.034900F;
																	inCarVehicle.inCarData.vecQuaternion.fY = 0.268227F;
																	inCarVehicle.inCarData.vecQuaternion.fZ = -0.954702F;
																	inCarVehicle.inCarData.vecQuaternion.fU = 0.124015F;
																} inCarVehicle.inCarData.vecPosition = *pAuto->Vehicle.Physical.Entity.Placeable.getPosition();
															} else if (bTroll5 || bTroll6 && !vecNearestPedPos.isXYEmpty()) {
																if (bTroll6) {
																	inCarVehicle.inCarData.vecMoveSpeed.fZ = pGui->getFloat(cGui::eSyncFloats::eTrollSyncSpeed);
																} inCarVehicle.inCarData.vecPosition = std::move(vecNearestPedPos);
															} pRakClientManager->sendPacket(&inCarVehicle, sizeof(struct stInCarPacket));
															break;
														} default: break;
													}

												} return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh) -> bool {
												const class cGui *pGui{pMain->getGui()};

												class cAutomobile *pAuto{pRemoteVeh->MPEntity.pGTAEntity};
												const class cPed *pDriver{pAuto->Vehicle.getDriver()};
												if (pGui->getUInteger(cGui::eSyncUIntegers::eTrollOnlyDrivers) ? pDriver != nullptr : pDriver == nullptr) {
													const class cSA *pSA{pMain->getSA()};
													const class cRakClientManager *pRakClientManager{pMain->getMP()->getRakClientManager()};

													switch (pGui->trollSyncMode) {
														case cGui::eTrollSyncMode::eUnoccupied: {
															std::mt19937 randEngine{std::random_device{}()};

															struct stUnoccupiedPacket unoccupiedVehicle {};
															unoccupiedVehicle.unoccupiedData.ui8SeatID = static_cast<const unsigned __int8>(std::uniform_int_distribution<unsigned __int32>{0, 3}(randEngine));
															unoccupiedVehicle.unoccupiedData.ui16VehicleID = ui16VehicleID;
															unoccupiedVehicle.unoccupiedData.fHealth = bTroll3 ? 249.0F : pAuto->Vehicle.getHealth();

															if (bTroll1) {
																unoccupiedVehicle.unoccupiedData.vecPosition.fX = 1.0F;
																unoccupiedVehicle.unoccupiedData.vecPosition.fY = 2.0F;
																unoccupiedVehicle.unoccupiedData.vecPosition.fZ = 1.0F;
															} else if (bTroll2) {
																unoccupiedVehicle.unoccupiedData.vecPosition = *cSA::getPosition(pSA);
															} else if (bTroll3 || bTroll4) {
																if (bTroll4) {
																	unoccupiedVehicle.unoccupiedData.vecRoll.fX = 0.964815F;
																	unoccupiedVehicle.unoccupiedData.vecRoll.fY = -0.262928F;
																	unoccupiedVehicle.unoccupiedData.vecRoll.fZ = -0.000420F;
																	unoccupiedVehicle.unoccupiedData.vecDirection.fX = -0.262332F;
																	unoccupiedVehicle.unoccupiedData.vecDirection.fY = -0.962519F;
																	unoccupiedVehicle.unoccupiedData.vecDirection.fZ = -0.068843F;
																} unoccupiedVehicle.unoccupiedData.vecPosition = *pAuto->Vehicle.Physical.Entity.Placeable.getPosition();
															} else if (bTroll5 || bTroll6 && !vecNearestPedPos.isXYEmpty()) {
																if (bTroll6) {
																	unoccupiedVehicle.unoccupiedData.vecMoveSpeed.fZ = pGui->getFloat(cGui::eSyncFloats::eTrollSyncSpeed);
																} unoccupiedVehicle.unoccupiedData.vecPosition = std::move(vecNearestPedPos);
															} pRakClientManager->sendPacket(&unoccupiedVehicle, sizeof(struct stUnoccupiedPacket));
															break;
														}
														case cGui::eTrollSyncMode::eInCar: {
															const class cPed *pLocalPed{pSA->getPlayerPed()};

															struct stInCarPacket inCarVehicle {};
															inCarVehicle.inCarData.ui16VehicleID = ui16VehicleID;
															inCarVehicle.inCarData.fVehicleHealth = bTroll3 ? 249.0F : pAuto->Vehicle.getHealth();
															inCarVehicle.inCarData.ui8PlayerHealth = static_cast<const unsigned __int8>(pLocalPed->getHealth());
															inCarVehicle.inCarData.ui8PlayerArmor = static_cast<const unsigned __int8>(pLocalPed->getArmor());
															inCarVehicle.inCarData.bSiren = true;

															if (bTroll1) {
																inCarVehicle.inCarData.vecPosition.fX = 1.0F;
																inCarVehicle.inCarData.vecPosition.fY = 2.0F;
																inCarVehicle.inCarData.vecPosition.fZ = 1.0F;
															} else if (bTroll2) {
																inCarVehicle.inCarData.vecPosition = *cSA::getPosition(pSA);
															} else if (bTroll3 || bTroll4) {
																if (bTroll4) {
																	inCarVehicle.inCarData.vecQuaternion.fX = 0.034900F;
																	inCarVehicle.inCarData.vecQuaternion.fY = 0.268227F;
																	inCarVehicle.inCarData.vecQuaternion.fZ = -0.954702F;
																	inCarVehicle.inCarData.vecQuaternion.fU = 0.124015F;
																} inCarVehicle.inCarData.vecPosition = *pAuto->Vehicle.Physical.Entity.Placeable.getPosition();
															} else if (bTroll5 || bTroll6 && !vecNearestPedPos.isXYEmpty()) {
																if (bTroll6) {
																	inCarVehicle.inCarData.vecMoveSpeed.fZ = pGui->getFloat(cGui::eSyncFloats::eTrollSyncSpeed);
																} inCarVehicle.inCarData.vecPosition = std::move(vecNearestPedPos);
															} pRakClientManager->sendPacket(&inCarVehicle, sizeof(struct stInCarPacket));
															break;
														} default: break;
													}

												} return true;
											});
											break;
										} default: break;
									}

								}

								ImGui::NewLine();
								ImGui::Separator();

								if (ImGui::Button(LANG_RUS ? "\xEE\xAC\xA4 Заспавнить весь транспорт в стриме без водителей" : "\xEE\xAC\xA4 Spawn vehicles in stream", std::move(ImVec2{-0.1F, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh) -> bool {
												if (pRemoteVeh->MPEntity.pGTAEntity->Vehicle.getDriver() == nullptr) {
													pMain->getMP()->getRakClientManager()->sendVehicleDestroyed(ui16VehicleID);
												} return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *pRemoteVeh) -> bool {
												if (pRemoteVeh->MPEntity.pGTAEntity->Vehicle.getDriver() == nullptr) {
													pMain->getMP()->getRakClientManager()->sendVehicleDestroyed(ui16VehicleID);
												} return true;
											});
											break;
										} default: break;
									}
								}
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted("\xEE\xB9\xAC Запрашивает у сервера спавн всего транспорта без водителей в зоне прорисовки.");
									ImGui::EndTooltip();
								}

								if (ImGui::Button(LANG_RUS ? "\xEE\xB1\x89 Разрушить весь транспорт в стриме 1" : "\xEE\xB1\x89 Destroy vehicles parts in stream 1", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												const class cRakClientManager *pRakClientManager{pMain->getMP()->getRakClientManager()};
												pRakClientManager->sendDmgVehicle(ui16VehicleID, 0x3000000, 0x4040404, 0, 0);
												pRakClientManager->sendDmgVehicle(ui16VehicleID, 0, 0, 0, 0);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												const class cRakClientManager *pRakClientManager{pMain->getMP()->getRakClientManager()};
												pRakClientManager->sendDmgVehicle(ui16VehicleID, 0x3000000, 0x4040404, 0, 0);
												pRakClientManager->sendDmgVehicle(ui16VehicleID, 0, 0, 0, 0);
												return true;
											});
											break;
										} default: break;
									}
								}
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted("\xEE\xB9\xAC Отрывает компоненты от всего транспорта в стриме.");
									ImGui::EndTooltip();
								}
								ImGui::SameLine();
								if (ImGui::Button(LANG_RUS ? "\xEE\xB1\x89 Разрушить весь транспорт в стриме 2" : "\xEE\xB1\x89 Destroy vehicles parts in stream 2", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												pMain->getMP()->getRakClientManager()->sendDmgVehicle(ui16VehicleID, 0x3000000, 0x4040404, 0, 0);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												pMain->getMP()->getRakClientManager()->sendDmgVehicle(ui16VehicleID, 0x3000000, 0x4040404, 0, 0);
												return true;
											});
											break;
										} default: break;
									}
								}
								if (ImGui::IsItemHovered()) {
									ImGui::BeginTooltip();
									ImGui::TextUnformatted("\xEE\xB9\xAC Отрывает компоненты от всего транспорта в стриме.");
									ImGui::EndTooltip();
								}

								if (ImGui::Button(LANG_RUS ? "\xEE\xB5\xBA Войти в весь транспорт в стриме" : "\xEE\xB5\xBA Enter vehicles in stream", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												pMain->getMP()->getRakClientManager()->sendEnterVehicle(ui16VehicleID, true);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												pMain->getMP()->getRakClientManager()->sendEnterVehicle(ui16VehicleID, true);
												return true;
											});
											break;
										} default: break;
									}
								}
								ImGui::SameLine();
								if (ImGui::Button(LANG_RUS ? "\xEE\xB5\xBB Выйти со всего транспорта в стриме" : "\xEE\xB5\xBB Leave vehicles in stream", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												pMain->getMP()->getRakClientManager()->sendExitVehicle(ui16VehicleID);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pVehicle->forAllRemoteVehs([](const unsigned __int16 ui16VehicleID, struct stSAMPVehicle *) -> bool {
												pMain->getMP()->getRakClientManager()->sendExitVehicle(ui16VehicleID);
												return true;
											});
											break;
										} default: break;
									}
								}

								if (ImGui::Button(LANG_RUS ? "\xEE\xAD\xAA Отправить урон всем игрокам" : "\xEE\xAD\xAA Give damage to everyone", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *) -> bool {
												pMain->getMP()->getRakClientManager()->sendGiveTakeDamage(true, ui16PlayerID, 46.20F, 24, 6);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *) -> bool {
												pMain->getMP()->getRakClientManager()->sendGiveTakeDamage(true, ui16PlayerID, 46.20F, 24, 6);
												return true;
											});
											break;
										} default: break;
									}
								}
								ImGui::SameLine();
								if (ImGui::Button(LANG_RUS ? "\xEE\xAD\xAF Получить урон от всех игроков" : "\xEE\xAD\xAF Take damage from everyone", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
									switch (cMP::SAMPVer) {
										case cMP::eVer::e037R1: {
											pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *) -> bool {
												pMain->getMP()->getRakClientManager()->sendGiveTakeDamage(false, ui16PlayerID, 46.20F, 24, 6);
												return true;
											});
											break;
										}
										case cMP::eVer::e037R3: {
											pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *) -> bool {
												pMain->getMP()->getRakClientManager()->sendGiveTakeDamage(false, ui16PlayerID, 46.20F, 24, 6);
												return true;
											});
											break;
										} default: break;
									}
								}

								ImGui::PopStyleVar();
								ImGui::EndTabItem();
							}
							ImGui::PopStyleVar();

							if (ImGui::BeginTabItem("\t  RPC\'s", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
								if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
									pGui->bResetScroll = true;
								}
								if (ImGui::BeginChild("SLIDER", std::move(ImVec2{}), false, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
									if (pGui->bResetScroll) {
										ImGui::SetScrollY(ImGui::GetScrollY() == 0 ? ImGui::GetScrollMaxY() : 0);
									}

									ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

									ImGui::Checkbox("\xEE\xB0\xA2 КомпонентЛаггер \xEE\xA9\xAF", &pGui->bComponentLagger);
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отбрасывает от Вашего транспорта взорванные компоненты, что приводит к лагам у игроков.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##44");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##44", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eComponentLaggerTime), 5, 3000, "\xEE\xA9\x90 %d");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xBA\xBF Подменивать FPS на низкий", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeFPS));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Сервер будет думать, что у Вас низкий FPS. Эффект может не сразу проявится.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB1\x91 Подменивать версию SA-MP\'a \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeMPVer));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC %s", &std::move(std::get<1>(pGui->tFakeMPVerMode))[0]);
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##50");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##50", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Версия", &std::move(std::get<1>(pGui->tFakeMPVerMode))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											std::all_of(pGui->vecFakeMPVersModes.cbegin(), pGui->vecFakeMPVersModes.cend(), [&pGui](const std::tuple<const cGui::eFakeMPVerMode, const std::string> tFakeMPVerMode) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tFakeMPVerMode))[0])) {
													pGui->tFakeMPVerMode = std::move(tFakeMPVerMode);
													return false;
												} ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xA5\x8A Издавать звук при подключении к серверу", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eConnectBeep));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Удобно использовать, когда есть очередь на сервер и не хочешь пропустить заход. Необходимо включить функцию \"Работа в свёрнутом режиме\" для работы функции в свёрнутом режиме.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									if (ImGui::Checkbox("\xEE\xA5\x83 Радужная машина \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::NoVehColorReset))) {
										pMPPatch->NoVehColorReset(pGui->getUInteger(cGui::eSyncUIntegers::NoVehColorReset));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Красит транспорт в рандомный цвет. Не визуально.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##20");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##20", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eRainBowCarTime), 30, 3000, "\xEE\xA9\x90 %d");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xA6\x81 Телепорт по маркеру при телепорте от сервера", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eMarkerTPWhenSetPos));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет совершить телепорт на маркер путём подмены координат телепорта сервера.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xA6\xAC Обход обнаружения FP, CLEO, SF, Moon", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBypassClientCheck));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет Вам использовать эти библиотеки и сам проект когда сервер это блокирует.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB1\xA7 Рандомный GPCI", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRandomGPCI));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Подменивает GPCI игры. Может помочь обойти бан.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB6\xB4 Повтор исходящего урона \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eGiveDamageRepeater));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправляет исходящий урон ещё раз после Вашего выстрела указанное количество раз.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##61");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##61", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Количество", pGui->getIntegerPtr(cGui::eSyncIntegers::eGiveDamageRepeater), 1, 50);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									if (ImGui::Checkbox("\xEE\xB6\xB4 Свой исходящий урон \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCustomGiveDamage))) {
										pMPPatch->CustomGiveDamage(pGui->getUInteger(cGui::eSyncUIntegers::eCustomGiveDamage), pGui->getFloatPtr(cGui::eSyncFloats::eCustomGiveDamage));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Умножает исходящий урон на указанное значение.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##62");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##62", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderFloat("Множитель", pGui->getFloatPtr(cGui::eSyncFloats::eCustomGiveDamage), 0, 100.00F, "%.2f");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xAB\x83 Повтор входящего урона \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTakeDamageRepeater));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Принимает входящий урон после попадания игрока в Вас ещё указанное количество раз.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##64");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##64", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Количество", pGui->getIntegerPtr(cGui::eSyncIntegers::eTakeDamageRepeater), 1, 50);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									if (ImGui::Checkbox("\xEE\xAB\x83 Свой входящий урон \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCustomTakeDamage))) {
										pMPPatch->CustomTakeDamage(pGui->getUInteger(cGui::eSyncUIntegers::eCustomTakeDamage), pGui->getFloatPtr(cGui::eSyncFloats::eCustomTakeDamage));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Умножает входящий урон на указанное значение.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##63");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##63", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderFloat("Множитель", pGui->getFloatPtr(cGui::eSyncFloats::eCustomTakeDamage), 0, 100.00F, "%.2f");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xA5\xBB Рандомный ник", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRandNick));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC Меняет местами буквы Вашего ника при заходе на сервер. Сами Вы видите свой настоящий ник. Текущий ник: %s", &pGui->sRandNick[0]);
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB0\xA9 Отправлять выход из транспорта за рулём \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSendExitVehicleOnDrive));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Будет слать на сервер RPC о выходе из транспорта в котором Вы находитесь за рулём.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##67");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##67", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eSendExitVehicleOnDrive), 5, 3000, "\xEE\xA9\x90 %d");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xBC\xA5 Показывать NPC в Tab\'e", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eShowNPC));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет видеть ботов в списке при нажатии Tab\'a. Должно быть включено до подключения к серверу.");
										ImGui::EndTooltip();
									}

									/*
									Переход.
									*/

									ImGui::InputTextMultiline("##ВходВыход", &pGui->sJoinQuit, std::move(ImVec2{-0.1F, 150.0F}), ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly);
									if (ImGui::Button("\xEE\xA9\xAA Очистить лог подключений", std::move(ImVec2{-0.1F, 25.0F}))) {
										pGui->sJoinQuit.clear();
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC Всего %d строк.", std::count(pGui->sJoinQuit.cbegin(), pGui->sJoinQuit.cend(), '\n'));
										ImGui::EndTooltip();
									}

									ImGui::InputTextMultiline("##ТекстМатериалов", &pGui->sLastMaterialText, std::move(ImVec2{-0.1F, 150.0F}), ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly);
									if (ImGui::Button("\xEE\xA9\xAA Очистить лог текстов материалов", std::move(ImVec2{-0.1F, 25.0F}))) {
										pGui->sLastMaterialText.clear();
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC Всего %d строк.", std::count(pGui->sLastMaterialText.cbegin(), pGui->sLastMaterialText.cend(), '\n'));
										ImGui::EndTooltip();
									}

									if (ImGui::Button("\xEE\xA9\x84 Спавн", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
										pMP->getRakClientManager()->sendSpawn();
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить запрос на спавн.");
										ImGui::EndTooltip();
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xA9\x84 Ручной спавн", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
										switch (cMP::SAMPVer) {
											case cMP::eVer::e037R1: {
												struct stLocalPlayer037R1 *pLocalPlayer{pMP->getMainStructR1()->pPools->pPlayer->pLocalPlayer};
												if (pLocalPlayer != nullptr) {
													pLocalPlayer->spawn();
												} break;
											}
											case cMP::eVer::e037R3: {
												struct stLocalPlayer037R3 *pLocalPlayer{pMP->getMainStructR3()->pPools->pPlayer->pLocalPlayer};
												if (pLocalPlayer != nullptr) {
													pLocalPlayer->spawn();
												} break;
											} default: break;
										}
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить спавн вручную.");
										ImGui::EndTooltip();
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xA9\x84 Запросить спавн", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
										pMP->getRakClientManager()->sendRequestSpawn();
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить запрос спавна.");
										ImGui::EndTooltip();
									}

									if (ImGui::Button("\xEE\xA8\xB6 Ошибочные координаты метки на карте", std::move(ImVec2{-0.1F, 25.0F}))) {
										const std::numeric_limits<const float> nlFloatLimits{std::numeric_limits<const float>{}};
										class cVector3D vecPos { nlFloatLimits.denorm_min(), nlFloatLimits.infinity(), nlFloatLimits.quiet_NaN() };
										pMP->getRakClientManager()->sendMapMarker(std::move(vecPos));
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправляет серверу невалидные значения установленной метки на карте.");
										ImGui::EndTooltip();
									}

									if (ImGui::Button("\xEE\xAA\xA5 Выйти из панели", std::move(ImVec2{-0.1F, 25.0F}))) {
										pMP->getRakClientManager()->sendMenuQuit();
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправляет RPC о выходе из меню \"панелей\" игры.");
										ImGui::EndTooltip();
									}

									if (ImGui::Button("\xEE\xAB\xAE Выбрать пункт в панели \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
										pMP->getRakClientManager()->sendMenuSelect(static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eMenuSelectID)));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправляет RPC о выборе пункта в меню \"панелей\" игры.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##73");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##73", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eMenuSelectID), 0, 255);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB5\xBA Вход в ТС \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
										pMP->getRakClientManager()->sendEnterVehicle(static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eEnterVehicleID)), *pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eEnterVehiclePass));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о посадке в транспорт.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##22");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##22", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::Checkbox("Пассажир", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eEnterVehiclePass));

										ImGui::Separator();
										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eEnterVehicleID), 1, 1999);
										ImGui::PopItemWidth();

										ImGui::Separator();
										if (ImGui::Button("Текущий ID", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
											if (pAuto != nullptr) {
												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														pGui->setInteger(cGui::eSyncIntegers::eEnterVehicleID, pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID());
														break;
													}
													case cMP::eVer::e037R3: {
														pGui->setInteger(cGui::eSyncIntegers::eEnterVehicleID, pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID());
														break;
													} default: break;
												}
											}
										}

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xB5\xBB Выход из ТС \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
										pMP->getRakClientManager()->sendExitVehicle(static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eExitVehicleID)));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о выходе из транспорта.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##23");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##23", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eExitVehicleID), 1, 1999);
										ImGui::PopItemWidth();

										ImGui::Separator();
										if (ImGui::Button("Текущий ID", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
											if (pAuto != nullptr) {
												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														pGui->setInteger(cGui::eSyncIntegers::eExitVehicleID, pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID());
														break;
													}
													case cMP::eVer::e037R3: {
														pGui->setInteger(cGui::eSyncIntegers::eExitVehicleID, pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID());
														break;
													} default: break;
												}
											}
										}

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB5\xAC Заспавнить ТС \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
										pMP->getRakClientManager()->sendVehicleDestroyed(static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eDestroyVehicleID)));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о взрыве транспорта.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##24");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##24", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eDestroyVehicleID), 1, 1999);
										ImGui::PopItemWidth();

										ImGui::Separator();
										if (ImGui::Button("Текущий ID", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
											if (pAuto != nullptr) {
												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														pGui->setInteger(cGui::eSyncIntegers::eDestroyVehicleID, pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID());
														break;
													}
													case cMP::eVer::e037R3: {
														pGui->setInteger(cGui::eSyncIntegers::eDestroyVehicleID, pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID());
														break;
													} default: break;
												}
											}
										}

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB7\xA5 Смена интерьера \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
										pMP->getRakClientManager()->sendInteriorChange(static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eInteriorChangeID)));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о смене интерьера.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##25");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##25", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eInteriorChangeID), 0, 255);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB9\xA8 Поднять пикап \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
										pMP->getRakClientManager()->sendPickedUpPickup(pGui->getInteger(cGui::eSyncIntegers::ePickedUpPickupID));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о том, что Вы взяли пикап.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##26");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##26", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::ePickedUpPickupID), 0, 4096);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xB9\xA8 Перебрать пикапы \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
										for (__int32 I32{pGui->getInteger(cGui::eSyncIntegers::eGoOverPickup1ID)}; I32 < pGui->getInteger(cGui::eSyncIntegers::eGoOverPickup2ID); ++I32) {
											pMP->getRakClientManager()->sendPickedUpPickup(I32);
										}
									}
									if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
										ImGui::OpenPopup("Настройки##76");
									}
									if (ImGui::BeginPopupModal("Настройки##76", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("От", pGui->getIntegerPtr(cGui::eSyncIntegers::eGoOverPickup1ID), 0, 4096);
										ImGui::SameLine();
										ImGui::SliderInt("До", pGui->getIntegerPtr(cGui::eSyncIntegers::eGoOverPickup2ID), 0, 4096);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB4\xA5 Смерть \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
										pMP->getRakClientManager()->sendDeath(std::get<0>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eMPReasonID)]), static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eKillerID)));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о смерти.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##27");
										}
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xB4\xA5 Смерть и запрос спавна \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
										const class cRakClientManager *pRakClientManager{pMP->getRakClientManager()};
										pRakClientManager->sendDeath(std::get<0>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eMPReasonID)]), static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eKillerID)));
										pRakClientManager->sendRequestSpawn();
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о смерти и сразу за ним отправить RPC запрос спавна.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##27");
										}
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xB4\xA5 Смерть и RPC спавна \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
										const class cRakClientManager *pRakClientManager{pMP->getRakClientManager()};
										pRakClientManager->sendDeath(std::get<0>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eMPReasonID)]), static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eKillerID)));
										pRakClientManager->sendSpawn();
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о смерти и сразу за ним отправить RPC спавн.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##27");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##27", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Причина", &std::move(std::get<1>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eMPReasonID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											unsigned __int8 ui8Iterator{0};
											std::all_of(pGui->vecMPReasons.cbegin(), pGui->vecMPReasons.cend(), [&pGui, &ui8Iterator](const std::tuple<const unsigned __int8, const std::string> tMPReason) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tMPReason))[0])) {
													pGui->setInteger(cGui::eSyncIntegers::eMPReasonID, ui8Iterator);
													return false;
												} ++ui8Iterator;
												ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::Separator();
										ImGui::SliderInt("Убийца", pGui->getIntegerPtr(cGui::eSyncIntegers::eKillerID), 0, 1003);
										ImGui::PopItemWidth();

										ImGui::Separator();
										if (ImGui::Button("Свой ID", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											switch (cMP::SAMPVer) {
												case cMP::eVer::e037R1: {
													pGui->setInteger(cGui::eSyncIntegers::eKillerID, pMP->getMainStructR1()->pPools->pPlayer->ui16LocalPlayerID);
													break;
												}
												case cMP::eVer::e037R3: {
													pGui->setInteger(cGui::eSyncIntegers::eKillerID, pMP->getMainStructR3()->pPools->pPlayer->ui16LocalPlayerID);
													break;
												} default: break;
											}
										}

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB6\xAE Запросить класс \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
										pMP->getRakClientManager()->sendRequestClass(pGui->getInteger(cGui::eSyncIntegers::eClassID));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о смене класса.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##28");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##28", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eClassID), 0, 311);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB4\xAD Нажать на TextDraw \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
										pMP->getRakClientManager()->sendClickTextDraw(static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eClickTextDrawID)));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о нажатии на TextDraw.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##43");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##43", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eClickTextDrawID), 0, 2303);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xB4\xAD Перебрать TextDraw \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
										for (__int32 I32{pGui->getInteger(cGui::eSyncIntegers::eGoOverTextDraw1ID)}; I32 < pGui->getInteger(cGui::eSyncIntegers::eGoOverTextDraw2ID); ++I32) {
											pMP->getRakClientManager()->sendClickTextDraw(static_cast<const unsigned __int16>(I32));
										}
									}
									if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
										ImGui::OpenPopup("Настройки##77");
									}
									if (ImGui::BeginPopupModal("Настройки##77", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("От", pGui->getIntegerPtr(cGui::eSyncIntegers::eGoOverTextDraw1ID), 0, 2304);
										ImGui::SameLine();
										ImGui::SliderInt("До", pGui->getIntegerPtr(cGui::eSyncIntegers::eGoOverTextDraw2ID), 0, 2304);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xAD\xAA Дать урон \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
										pMP->getRakClientManager()->sendGiveTakeDamage(true, static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eGiveTakeDamagePlayerID)), pGui->getFloat(cGui::eSyncFloats::eGiveTakeDamage), std::get<0>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eGiveTakeDmgWeaponID)]), 6);
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о нанесении урона.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##29");
										}
									}
									ImGui::SameLine();
									if (ImGui::Button("\xEE\xAD\xAF Получить урон \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
										pMP->getRakClientManager()->sendGiveTakeDamage(false, static_cast<const unsigned __int16>(pGui->getInteger(cGui::eSyncIntegers::eGiveTakeDamagePlayerID)), pGui->getFloat(cGui::eSyncFloats::eGiveTakeDamage), std::get<0>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eGiveTakeDmgWeaponID)]), 6);
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправить RPC о получении урона.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##29");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##29", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ID", pGui->getIntegerPtr(cGui::eSyncIntegers::eGiveTakeDamagePlayerID), 0, 1003);
										ImGui::Separator();
										ImGui::SliderFloat("Урон", pGui->getFloatPtr(cGui::eSyncFloats::eGiveTakeDamage), 0.05F, 160.00F, "%.2f");
										ImGui::Separator();
										if (ImGui::BeginCombo("Оружие", &std::move(std::get<1>(pGui->vecMPReasons[pGui->getInteger(cGui::eSyncIntegers::eGiveTakeDmgWeaponID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											unsigned __int8 ui8Iterator{0};
											std::all_of(pGui->vecMPReasons.cbegin(), pGui->vecMPReasons.cend(), [&pGui, &ui8Iterator](const std::tuple<const unsigned __int8, const std::string> tMPReason) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tMPReason))[0])) {
													pGui->setInteger(cGui::eSyncIntegers::eGiveTakeDmgWeaponID, ui8Iterator);
													return false;
												} ++ui8Iterator;
												ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xB0\xA0 КомпонентКрашер", std::move(ImVec2{-0.1F, 25.0F}))) {
										const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
										if (pAuto != nullptr) {

											unsigned __int16 ui16VehicleID{0};
											switch (cMP::SAMPVer) {
												case cMP::eVer::e037R1: {
													ui16VehicleID = pMP->getMainStructR1()->pPools->pPlayer->getLocalVehicleID();
													break;
												}
												case cMP::eVer::e037R3: {
													ui16VehicleID = pMP->getMainStructR3()->pPools->pPlayer->getLocalVehicleID();
													break;
												} default: break;
											}

											const unsigned __int32 ui32CrashComponents[194] {
												1087, 1009, 1008, 1010, 1086, 1111, 1112, 1000, 1001, 1002, 1003, 1014, 1015, 1016, 1023, 1049, 1050, 1058, 1060, 1138, 1139, 1147, 1146,
													1162, 1158, 1164, 1163, 1004, 1005, 1011, 1012, 1142, 1143, 1144, 1145, 1006, 1032, 1033, 1038, 1035, 1054, 1053, 1055, 1061, 1067, 1068,
													1088, 1091, 1103, 1128, 1130, 1131, 1169, 1170, 1141, 1140, 1171, 1172, 1149, 1148, 1153, 1152, 1150, 1151, 1155, 1157, 1154, 1156, 1160,
													1173, 1159, 1161, 1166, 1165, 1168, 1167, 1174, 1175, 1176, 1177, 1179, 1185, 1180, 1178, 1182, 1181, 1184, 1183, 1189, 1188, 1187, 1186,
													1191, 1190, 1192, 1193, 1017, 1007, 1027, 1026, 1030, 1031, 1040, 1036, 1039, 1041, 1042, 1099, 1051, 1047, 1052, 1048, 1062, 1056, 1063,
													1057, 1071, 1069, 1072, 1070, 1094, 1090, 1093, 1095, 1101, 1122, 1124, 1106, 1102, 1133, 1107, 1108, 1120, 1118, 1121, 1119, 1137, 1134,
													1018, 1019, 1020, 1021, 1022, 1028, 1029, 1034, 1037, 1043, 1044, 1045, 1046, 1059, 1064, 1065, 1066, 1089, 1092, 1104, 1105, 1113, 1114,
													1126, 1127, 1129, 1132, 1135, 1136, 1100, 1109, 1110, 1115, 1116, 1117, 1123, 1125, 1013, 1024, 1025, 1073, 1074, 1075, 1076, 1077, 1078,
													1079, 1080, 1081, 1082, 1083, 1084, 1085, 1096, 1097, 1098
											};

											std::mt19937 randEngine{std::random_device{}()};
											const unsigned __int32 ui32CompID{ui32CrashComponents[std::uniform_int_distribution<unsigned __int32>{0, 193}(randEngine)]};
											pMP->getRakClientManager()->sendSCMEvent(ui16VehicleID, ui32CompID, ui32CompID, 2);
										}
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Крашит созданием неподходящего тюнинга. Использовать в транспорте.");
										ImGui::EndTooltip();
									}

									ImGui::PopStyleVar();
									ImGui::EndChild();
								}
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem(LANG_RUS ? "\t Пакеты" : "\t Packets", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
								if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
									pGui->bResetScroll = true;
								}
								if (ImGui::BeginChild("SLIDER", std::move(ImVec2{}), false, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
									if (pGui->bResetScroll) {
										ImGui::SetScrollY(ImGui::GetScrollY() == 0 ? ImGui::GetScrollMaxY() : 0);
									}

									ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

									ImGui::Checkbox("\xEE\xB6\xB4 Повтор пули \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBulletRepeater));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Выстреливает ещё раз после Вашего выстрела указанное количество раз.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##30");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##30", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Количество", pGui->getIntegerPtr(cGui::eSyncIntegers::eBulletRepeater), 1, 50);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									if (ImGui::Checkbox("\xEE\xB4\xBA Подмена текущего оружия \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeWeapon))) {
										pMPPatch->FakeWeapon(pGui->getUInteger(cGui::eSyncUIntegers::eFakeWeapon));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC %s", &std::move(std::get<1>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponID)]))[0]);
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##31");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##31", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Оружие", &std::move(std::get<1>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											unsigned __int8 ui8Iterator{0};
											std::all_of(pGui->vecWeaponNames.cbegin(), pGui->vecWeaponNames.cend(), [&pGui, &ui8Iterator](const std::tuple<const unsigned __int8, const std::string> tWeaponName) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tWeaponName))[0])) {
													pGui->setInteger(cGui::eSyncIntegers::eFakeWeaponID, ui8Iterator);
													return false;
												} ++ui8Iterator;
												ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xAF\x9E Ограничение скорости движения \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLimitMoveSpeed));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Не даст серверу увидеть Вашу настоящую скорость.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##32");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##32", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::Checkbox("\xEE\xAD\xBA Ограничивать статично", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLimitMoveSpeedStatic));
										if (ImGui::IsItemHovered()) {
											ImGui::BeginTooltip();
											ImGui::TextUnformatted("\xEE\xB9\xAC Ограничивает вашу скорость точно в указанное значение. Эффект схож с пиздарванкой, но не затрагивает высоту.");
											ImGui::EndTooltip();
										}

										ImGui::Separator();
										ImGui::PushItemWidth(420.0F);
										ImGui::SliderFloat("Лимит", pGui->getFloatPtr(cGui::eSyncFloats::eLimitMoveSpeed), 0, 10.00F, "%.2f");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xA7\xBB Фейк анимация \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeAnim));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Подменивает Вашу анимацию для всех игроков.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##33");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##33", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Анимация", &std::move(std::get<1>(pGui->tFakeAnimMode))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											std::all_of(pGui->vecFakeAnimsModes.cbegin(), pGui->vecFakeAnimsModes.cend(), [&pGui](const std::tuple<const cGui::eFakeAnimMode, const std::string> tFakeAnimMode) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tFakeAnimMode))[0])) {
													pGui->tFakeAnimMode = std::move(tFakeAnimMode);
													return false;
												} ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xAC\x8F Пиздарванка \xEE\xA9\xAF \xEE\xA9\xB1", &pGui->bPizdaRvanka);
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Разбрасывает всех в сторону. Начинает своё действие на игроке или транспорте который находится ближе всех.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##34");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##34", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 3.0F);
										ImGui::RadioButton("X", reinterpret_cast<__int32 *>(&pGui->pizdaVectorMode), 0);
										ImGui::SameLine();
										ImGui::RadioButton("Y", reinterpret_cast<__int32 *>(&pGui->pizdaVectorMode), 1);
										ImGui::SameLine();
										ImGui::RadioButton("Z", reinterpret_cast<__int32 *>(&pGui->pizdaVectorMode), 2);
										ImGui::SameLine();
										ImGui::RadioButton("XY", reinterpret_cast<__int32 *>(&pGui->pizdaVectorMode), 3);
										ImGui::SameLine();
										ImGui::RadioButton("XYZ", reinterpret_cast<__int32 *>(&pGui->pizdaVectorMode), 4);
										ImGui::Separator();

										ImGui::Checkbox("\xEE\xB4\x99 Рванить кватернионы", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePizdaQuaternion));
										ImGui::Separator();
										ImGui::Checkbox("\xEE\xB1\xA0 Полный рандом", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePizdaFullRand));
										ImGui::Separator();

										ImGui::PushItemWidth(420.0F);
										ImGui::DragFloat("Сила", pGui->getFloatPtr(cGui::eSyncFloats::ePizdaRvanka), 0.05F, -10.00F, 10.00F, "%.2f");
										ImGui::Separator();
										ImGui::DragFloat("Процент деления", pGui->getFloatPtr(cGui::eSyncFloats::ePizdaHalf), 0.05F, -10.00F, 10.00F, "%.2f");
										ImGui::Separator();
										ImGui::DragFloat("Дистанция срабатывания", pGui->getFloatPtr(cGui::eSyncFloats::ePizdaDistance), 1.0F, 3.0F, 100.0F, "%.1f");
										ImGui::Separator();
										ImGui::SliderFloat("Высота старта", pGui->getFloatPtr(cGui::eSyncFloats::ePizdaZ), -1.5F, 1.5F, "%.1f");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB0\xA9 Фейк специальное действие \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeSpecialAction));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC %s", &std::move(std::get<1>(pGui->vecFakeSpecialActions[pGui->getInteger(cGui::eSyncIntegers::eFakeSpecialActionID)]))[0]);
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##35");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##35", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Специальное действие", &std::move(std::get<1>(pGui->vecFakeSpecialActions[pGui->getInteger(cGui::eSyncIntegers::eFakeSpecialActionID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											unsigned __int8 ui8Iterator{0};
											std::all_of(pGui->vecFakeSpecialActions.cbegin(), pGui->vecFakeSpecialActions.cend(), [&pGui, &ui8Iterator](const std::tuple<const unsigned __int8, const std::string> tFakeSpecialAction) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tFakeSpecialAction))[0])) {
													pGui->setInteger(cGui::eSyncIntegers::eFakeSpecialActionID, ui8Iterator);
													return false;
												} ++ui8Iterator;
												ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB2\xB5 Невидимка \xEE\xA9\xAF \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eInvisible));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC %s", &std::move(std::get<1>(pGui->tInvisibleMode))[0]);
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##36");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##36", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Режим", &std::move(std::get<1>(pGui->tInvisibleMode))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											std::all_of(pGui->vecInvisibleModes.cbegin(), pGui->vecInvisibleModes.cend(), [&pGui](const std::tuple<const cGui::eInvisibleMode, const std::string> tInvisibleMode) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tInvisibleMode))[0])) {
													pGui->tInvisibleMode = std::move(tInvisibleMode);
													return false;
												} ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xAD\xAF Фейк здоровье \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeHP));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC ХП: %d", pGui->getInteger(cGui::eSyncIntegers::eFakeHP));
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##37");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##37", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("ХП", pGui->getIntegerPtr(cGui::eSyncIntegers::eFakeHP), 0, 255);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB0\xB6 Фейк броня \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeAP));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC АП: %d", pGui->getInteger(cGui::eSyncIntegers::eFakeAP));
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##38");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##38", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("АП", pGui->getIntegerPtr(cGui::eSyncIntegers::eFakeAP), 0, 255);
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xA9\xAD Невалидное прицеливание", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eInvalidAIMPro));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Игроки будут видеть только Ваши ноги. Работает только если в руках есть оружие.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB0\xAA Не падать при прыжке", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoAntiHop));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Не отправляет серверу информацию о Вашем прыжке и соотвественно не даёт таким образом Вас сбить. Игроки не будут видеть, что Вы скользите.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB4\x8E Не позволять себя троллить", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAntiTroll));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отключает полностью работу читов на Вас, основанных на троллинге транспорта.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB8\xBB Не отправлять информацию, что Вы на крыше транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoSurfInfo));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет ехать на крыше транспорта на серверах где это запрещено модом.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xAD\xB5 Вечный гудок", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysHorn));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Все будут слышать Вашу бибику, кроме Вас.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xA5\xA7 Трясти камеру у игроков при выстреле", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eShakingCamera));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Когда Вы стреляете, то у игроков в зоне стрима будет тряска камеры.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB0\xA5 Мигать ночным видением", &pGui->bNightGogglesFlooder);
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Флудит тем, что надевает очки ночного виденья и эффект происходит у всех в зоне прорисовки.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xAD\xA1 Фильтрация синхронизации", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFilterSync));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Фильтрует синхронизацию SA-MP\'a и отсекает из нее опасные значения.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xBC\xBC Рандомные кватернионы", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRandQuaternion));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Вращает Вас по всем осям для игроков сервера.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xA6\x88 Фейк пинг \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakePing));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет не визуально изменять Ваш пинг. Используйте ползунок аккуратно. Резкие изменения пинга могут не синхронизироваться.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##57");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##57", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eFakePingTime), -500, 5000, "\xEE\xA9\x90 %d");
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB0\xAD Пуля дура \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBulletFool));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Отправляет пулю обратно в игрока который попал по Вам.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##65");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##65", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::Checkbox("\xEE\xAD\xA8 Использовать своё оружие", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBulletFoolMyWeapon));

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xA4\xB8 РоллКрашер \xEE\xA9\xAF", &pGui->bRollCrasher);
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC РоллКрашер с расстояния. В стриме должно быть хотя бы одно ТС. Находит и крашит ближайшее ТС.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##21");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##21", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(300.0F);
										if (ImGui::BeginCombo("Режим", &std::move(std::get<1>(pGui->tRollCrasher))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											std::all_of(pGui->vecRollCrasherModes.cbegin(), pGui->vecRollCrasherModes.cend(), [&pGui](const std::tuple<const cGui::eRollCrasherMode, const std::string> tRollCrasherMode) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tRollCrasherMode))[0])) {
													pGui->tRollCrasher = std::move(tRollCrasherMode);
													return false;
												} ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xAF\xA7 ДетонаторКрашер", &pGui->bDetonatorCrasher);
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Не использует опасные значения, но использует телепорт на нулевые координаты.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									if (ImGui::Checkbox("\xEE\xA6\x84 Обязательно отправлять все изменения в синхронизации", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysSync))) {
										pMPPatch->AlwaysSync(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysSync));
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Будет отправлять синхронизацию каждый раз при её изменении, что позволит ей отправляться на сервер и не быть перезаписанной.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									if (ImGui::Checkbox("\xEE\xAC\xAE Режим спектатора \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSpectatorMode))) {
										pMPPatch->SpectatorMode(pGui->getUInteger(cGui::eSyncUIntegers::eSpectatorMode));
									}
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Переносит Вас в режим наблюдения.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##68");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##68", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										if (ImGui::Checkbox("\xEE\xAC\xA2 Синхронизировать себя с сервером", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSyncSpec))) {
											pMPPatch->SyncSpec(pGui->getUInteger(cGui::eSyncUIntegers::eSyncSpec));
										}
										if (ImGui::IsItemHovered()) {
											ImGui::BeginTooltip();
											ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет Вам отправлять синхронизацию даже находясь в режиме спектатора. Позволяет игрокам Вас увидеть.");
											ImGui::EndTooltip();
										}

										ImGui::Separator();

										if (ImGui::Checkbox("\xEE\xA4\xBD Не блокировать в режиме спектатора", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoLockOnSpec))) {
											pMPPatch->NoLockOnSpec(pGui->getUInteger(cGui::eSyncUIntegers::eNoLockOnSpec));
										}
										if (ImGui::IsItemHovered()) {
											ImGui::BeginTooltip();
											ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет Вам находясь в режиме спектатора двигаться по карте, а не лететь вверх.");
											ImGui::EndTooltip();
										}

										ImGui::Separator();

										if (ImGui::Checkbox("\xEE\xA6\x88 Получать информацию от сервера в режиме спектатора", &pGui->bNoLockInfoOnSpec)) {
											pMPPatch->NoLockInfoOnSpec(pGui->bNoLockInfoOnSpec);
										}
										if (ImGui::IsItemHovered()) {
											ImGui::BeginTooltip();
											ImGui::TextColored(std::move(ImVec4{1.0F, 0, 0, 1.0F}), "\xEE\xB9\xAC Позволяет Вам находясь в режиме спектатора получать данные со стрима. ВНИМАНИЕ! Может не давать подключиться к серверу! Эффект можно получить включив уже после подключения. Эксплойт!");
											ImGui::EndTooltip();
										}

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB0\xAB Скрывать клавишу удара или выстрела", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHideAttackKey));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Будет скрывать нажатие клавиши удара или выстрела. Может позволить Вам стрелять в зелёной зоне.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB2\xB3 Скрывать прицеливание", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHideAim));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Будет скрывать для сервера, что Вы целитесь.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xB5\x9E Подменивать пулю \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeWeaponBullet));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::Text("\xEE\xB9\xAC %s", &std::get<1>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponBulletID)])[0]);
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##71");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##71", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::PushItemWidth(420.0F);
										if (ImGui::BeginCombo("Оружие", &std::move(std::get<1>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eFakeWeaponBulletID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
											unsigned __int8 ui8Iterator{0};
											std::all_of(pGui->vecWeaponNames.cbegin(), pGui->vecWeaponNames.cend(), [&pGui, &ui8Iterator](const std::tuple<const unsigned __int8, const std::string> tWeaponName) -> const bool {
												if (ImGui::Selectable(&std::move(std::get<1>(tWeaponName))[0])) {
													pGui->setInteger(cGui::eSyncIntegers::eFakeWeaponBulletID, ui8Iterator);
													return false;
												} ++ui8Iterator;
												ImGui::Separator();
												return true;
											});
											ImGui::EndCombo();
										}
										ImGui::PopItemWidth();

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									if (ImGui::Checkbox("\xEE\xA8\xA7 Отключить статистику", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoStatistic))) {
										pMPPatch->NoStatistic(pGui->getUInteger(cGui::eSyncUIntegers::eNoStatistic));
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Не позволяет серверу получать вашу статистику.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									if (ImGui::Checkbox("\xEE\xA8\xA6 Всегда активное входящее соединение", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysActiveConnection))) {
										pMPPatch->AlwaysActiveConnection(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysActiveConnection));
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Будет поддерживать прием данных даже когда сетевой движок это останавливает.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xA4\xAC Фейк стейт \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFakeState));
									if (ImGui::IsItemHovered()) {

										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет изменять текущее состояние игрока. Например можно говорить серверу, что Вы за рулём находясь на ногах.");
										ImGui::EndTooltip();

										if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											ImGui::OpenPopup("Настройки##74");
										}
									}
									if (ImGui::BeginPopupModal("Настройки##74", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

										ImGui::RadioButton("Неизвестный", reinterpret_cast<__int32 *>(&pGui->fakeState), 0);
										ImGui::SameLine();
										ImGui::RadioButton("Пешком 1", reinterpret_cast<__int32 *>(&pGui->fakeState), 1);
										ImGui::SameLine();
										ImGui::RadioButton("Пешком 2", reinterpret_cast<__int32 *>(&pGui->fakeState), 12);
										ImGui::SameLine();
										ImGui::RadioButton("Водитель/Пассажир", reinterpret_cast<__int32 *>(&pGui->fakeState), 50);
										ImGui::SameLine();
										ImGui::RadioButton("Спавн 1", reinterpret_cast<__int32 *>(&pGui->fakeState), 54);
										ImGui::SameLine();
										ImGui::RadioButton("Спавн 2", reinterpret_cast<__int32 *>(&pGui->fakeState), 55);

										if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xAD\xB8 Перемещаться случайно по сиденьям на пассажирке", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRandPassSeat));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Будет Вас сажать на разные сиденья когда Вы сидите на пассажирском месте.");
										ImGui::EndTooltip();
									}

									/*
									Переход
									*/

									ImGui::PopStyleVar();
									ImGui::EndChild();
								}

								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem("\tNOP\'s \xEE\xA9\xAF", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
								ImVec2 vecClild{std::move(ImGui::GetContentRegionAvail())}; vecClild.x /= 2.0F; vecClild.y = vecClild.y / 2.0F - 4.0F;

								ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

								if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
									ImGui::OpenPopup("Отключить все NOP\'s?");
								}
								if (ImGui::BeginPopupModal("Отключить все NOP\'s?", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
									if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{250.0F, 137.0F}))) {
										unsigned __int32 ui32Iterator{0};

										std::for_each(pGui->vecIncomeRPCs.cbegin(), pGui->vecIncomeRPCs.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
											pGui->vecIncomeRPCs[ui32Iterator++]._Myfirst = 0;
											return;
										});
										ui32Iterator = 0;

										std::for_each(pGui->vecOutcomeRPCs.cbegin(), pGui->vecOutcomeRPCs.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
											pGui->vecOutcomeRPCs[ui32Iterator++]._Myfirst = 0;
											return;
										});
										ui32Iterator = 0;

										std::for_each(pGui->vecIncomePackets.cbegin(), pGui->vecIncomePackets.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
											pGui->vecIncomePackets[ui32Iterator++]._Myfirst = 0;
											return;
										});
										ui32Iterator = 0;

										std::for_each(pGui->vecOutcomePackets.cbegin(), pGui->vecOutcomePackets.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
											pGui->vecOutcomePackets[ui32Iterator++]._Myfirst = 0;
											return;
										});
										ImGui::CloseCurrentPopup();
									}
									if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{250.0F, 137.0F}))) {
										ImGui::CloseCurrentPopup();
									}

									ImGui::EndPopup();
								}

								if (ImGui::BeginChild("iRPCs", vecClild, true, ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar)) {
									ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.0F - 40.0F);
									ImGui::TextUnformatted("\xEE\xA7\xA3 Входящие RPC");

									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 19.0F);
									ImGui::InputText("\xEE\xAC\xB7##1", &pGui->sNOPSearch[0], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter, [](ImGuiInputTextCallbackData *) -> __int32 {
										return pMain->getGui()->sNOPSearch[0].length() > 16;
									});
									ImGui::PopItemWidth();

									unsigned __int32 ui32Iterator{0};
									std::for_each(pGui->vecIncomeRPCs.cbegin(), pGui->vecIncomeRPCs.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> void {
										std::string sNOPName{std::move(std::get<2>(tIncomeRPC))};
										if (pGui->sNOPSearch[0].empty() ||
											std::search(sNOPName.cbegin(), sNOPName.cend(), pGui->sNOPSearch[0].cbegin(), pGui->sNOPSearch[0].cend(), [](const char cA, const char cB) -> bool {
											return std::towlower(cA) == std::towlower(cB);
										}) != sNOPName.cend()) {
											ImGui::Separator();
											unsigned __int32 ui32Status{std::get<0>(tIncomeRPC)};
											if (ImGui::Selectable(&('[' + std::move(std::to_string(std::get<1>(tIncomeRPC))) + "] " + std::move(sNOPName))[0], reinterpret_cast<bool *>(&ui32Status), ImGuiSelectableFlags_::ImGuiSelectableFlags_None)) {
												pGui->vecIncomeRPCs[ui32Iterator]._Myfirst = ui32Status;
											}
										} ++ui32Iterator;
										return;
									});
									ImGui::Separator();

									ImGui::EndChild();
								}
								ImGui::SameLine();
								if (ImGui::BeginChild("oRPCs", vecClild, true, ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar)) {
									ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.0F - 30.0F);
									ImGui::TextUnformatted("\xEE\xA7\xA4 Исходящие RPC");

									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 19.0F);
									ImGui::InputText("\xEE\xAC\xB7##2", &pGui->sNOPSearch[1], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter, [](ImGuiInputTextCallbackData *) -> __int32 {
										return pMain->getGui()->sNOPSearch[1].length() > 16;
									});
									ImGui::PopItemWidth();

									unsigned __int32 ui32Iterator{0};
									std::for_each(pGui->vecOutcomeRPCs.cbegin(), pGui->vecOutcomeRPCs.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> void {
										std::string sNOPName{std::move(std::get<2>(tIncomeRPC))};
										if (pGui->sNOPSearch[1].empty() ||
											std::search(sNOPName.cbegin(), sNOPName.cend(), pGui->sNOPSearch[1].cbegin(), pGui->sNOPSearch[1].cend(), [](const char cA, const char cB) -> bool {
											return std::towlower(cA) == std::towlower(cB);
										}) != sNOPName.cend()) {
											ImGui::Separator();
											unsigned __int32 ui32Status{std::get<0>(tIncomeRPC)};
											if (ImGui::Selectable(&('[' + std::move(std::to_string(std::get<1>(tIncomeRPC))) + "] " + std::move(sNOPName))[0], reinterpret_cast<bool *>(&ui32Status), ImGuiSelectableFlags_::ImGuiSelectableFlags_None)) {
												pGui->vecOutcomeRPCs[ui32Iterator]._Myfirst = ui32Status;
											}
										} ++ui32Iterator;
										return;
									});
									ImGui::Separator();

									ImGui::EndChild();
								}

								if (ImGui::BeginChild("iPackets", vecClild, true, ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar)) {
									ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.0F - 50.0F);
									ImGui::TextUnformatted("\xEE\xA7\x92 Входящие пакеты");

									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 19.0F);
									ImGui::InputText("\xEE\xAC\xB7##3", &pGui->sNOPSearch[2], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter, [](ImGuiInputTextCallbackData *) -> __int32 {
										return pMain->getGui()->sNOPSearch[2].length() > 16;
									});
									ImGui::PopItemWidth();

									unsigned __int32 ui32Iterator{0};
									std::for_each(pGui->vecIncomePackets.cbegin(), pGui->vecIncomePackets.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> void {
										std::string sNOPName{std::move(std::get<2>(tIncomeRPC))};
										if (pGui->sNOPSearch[2].empty() ||
											std::search(sNOPName.cbegin(), sNOPName.cend(), pGui->sNOPSearch[2].cbegin(), pGui->sNOPSearch[2].cend(), [](const char cA, const char cB) -> bool {
											return std::towlower(cA) == std::towlower(cB);
										}) != sNOPName.cend()) {
											ImGui::Separator();
											unsigned __int32 ui32Status{std::get<0>(tIncomeRPC)};
											if (ImGui::Selectable(&('[' + std::move(std::to_string(std::get<1>(tIncomeRPC))) + "] " + std::move(sNOPName))[0], reinterpret_cast<bool *>(&ui32Status), ImGuiSelectableFlags_::ImGuiSelectableFlags_None)) {
												pGui->vecIncomePackets[ui32Iterator]._Myfirst = ui32Status;
											}
										} ++ui32Iterator;
										return;
									});
									ImGui::Separator();

									ImGui::EndChild();
								}
								ImGui::SameLine();
								if (ImGui::BeginChild("oPackets", vecClild, true, ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysVerticalScrollbar)) {
									ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.0F - 50.0F);
									ImGui::TextUnformatted("\xEE\xA7\x93 Исходящие пакеты");

									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 19.0F);
									ImGui::InputText("\xEE\xAC\xB7##4", &pGui->sNOPSearch[3], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter, [](ImGuiInputTextCallbackData *) -> __int32 {
										return pMain->getGui()->sNOPSearch[3].length() > 16;
									});
									ImGui::PopItemWidth();

									unsigned __int32 ui32Iterator{0};
									std::for_each(pGui->vecOutcomePackets.cbegin(), pGui->vecOutcomePackets.cend(), [&pGui, &ui32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string> tIncomeRPC) -> void {
										std::string sNOPName{std::move(std::get<2>(tIncomeRPC))};
										if (pGui->sNOPSearch[3].empty() ||
											std::search(sNOPName.cbegin(), sNOPName.cend(), pGui->sNOPSearch[3].cbegin(), pGui->sNOPSearch[3].cend(), [](const char cA, const char cB) -> bool {
											return std::towlower(cA) == std::towlower(cB);
										}) != sNOPName.cend()) {
											ImGui::Separator();
											unsigned __int32 ui32Status{std::get<0>(tIncomeRPC)};
											if (ImGui::Selectable(&('[' + std::move(std::to_string(std::get<1>(tIncomeRPC))) + "] " + std::move(sNOPName))[0], reinterpret_cast<bool *>(&ui32Status), ImGuiSelectableFlags_::ImGuiSelectableFlags_None)) {
												pGui->vecOutcomePackets[ui32Iterator]._Myfirst = ui32Status;
											}
										} ++ui32Iterator;
										return;
									});
									ImGui::Separator();

									ImGui::EndChild();
								}

								ImGui::PopStyleVar();
								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem(LANG_RUS ? "\t Прочее" : "\t  Other", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {

								if (ImGui::BeginTabBar("TABS2", ImGuiTabBarFlags_::ImGuiTabBarFlags_NoTooltip)) {

									/* PED */
									ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{ImGui::GetContentRegionAvail().x, 10.0F}));
									if (ImGui::BeginTabItem("\t\t\t\t\t\t \xEE\xB3\xBB", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
										if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											pGui->bResetScroll = true;
										}
										if (ImGui::BeginChild("SLIDER", std::move(ImVec2{}), false, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
											if (pGui->bResetScroll) {
												ImGui::SetScrollY(ImGui::GetScrollY() == 0 ? ImGui::GetScrollMaxY() : 0);
											}

											ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

											if (ImGui::Checkbox("\xEE\xB3\x93 Бесконечный кислород", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eInfiniteOxygen))) {
												pSAPatch->InfiniteOxygen(pGui->getUInteger(cGui::eSyncUIntegers::eInfiniteOxygen));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не задохнешься.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBB\xA1 Быстрый спавн", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFastSpawn))) {
												pSAPatch->FastSpawn(pGui->getUInteger(cGui::eSyncUIntegers::eFastSpawn));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Даёт возможность быстрого появления после смерти. Не отправляет никакие RPC и пакеты.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAB\xB4 Быстрый вход в интерьер", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuickInterior))) {
												pSAPatch->QuickInterior(pGui->getUInteger(cGui::eSyncUIntegers::eQuickInterior));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Даёт возможность моментально заходить в игровые интерьеры.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAE\xB7 Никогда не пьянеть", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNeverDrunk))) {
												pSAPatch->NeverDrunk(pGui->getUInteger(cGui::eSyncUIntegers::eNeverDrunk));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключить функцию пьянства в коде игры.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xA4\xB7 Отключить эффект падения от струи воды", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoWaterCannon));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не позволяет падать от напора воды спецназа, пожарной машины и т.д..");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAB\xA2 Персонаж чаще разговаривает", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSpeechMore))) {
												pSAPatch->SpeechMore(pGui->getUInteger(cGui::eSyncUIntegers::eSpeechMore));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Можно чаще слышать выкрикивания.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xB9\xBB Отключить коллизию игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoPedCollision));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет проходить сквозь персонажей.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB6\x80 Моментально останавливаться после спринта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoPedStopAnim))) {
												pSAPatch->NoPedStopAnim(pGui->getUInteger(cGui::eSyncUIntegers::eNoPedStopAnim));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает анимацию остановки после спринта.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAD\xAD Моментальная посадка пассажиром", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFastPassenger))) {
												pSAPatch->FastPassenger(pGui->getUInteger(cGui::eSyncUIntegers::eFastPassenger));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет моментально сесть на пассажирское место как при баге длинной посадки на G.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAF\x99 Бесконечный бег", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eInfiniteRun))) {
												pSAPatch->InfiniteRun(pGui->getUInteger(cGui::eSyncUIntegers::eInfiniteRun));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не выдохнешься.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAC\x99 Скорость движения \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSprintSpeed))) {
												pSAPatch->SprintSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eSprintSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eSprintSpeed));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::Text("\xEE\xB9\xAC Скорость: %.2f", pGui->getFloat(cGui::eSyncFloats::eSprintSpeed));
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##17");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##17", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Скорость", pGui->getFloatPtr(cGui::eSyncFloats::eSprintSpeed), 1.05F, 3.50F, "%.2f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBC\xAF Дальность прыжка \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBunnyHopSpeed))) {
												pSAPatch->BunnyHopSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eBunnyHopSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eBunnyHopSpeed));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::Text("\xEE\xB9\xAC Дальность: %.2f", pGui->getFloat(cGui::eSyncFloats::eBunnyHopSpeed));
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##18");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##18", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Скорость", pGui->getFloatPtr(cGui::eSyncFloats::eBunnyHopSpeed), 0.30F, 2.00F, "%.2f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB2\x86 Высота прыжка \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBunnyHopHeight))) {
												pSAPatch->BunnyHopHeight(pGui->getUInteger(cGui::eSyncUIntegers::eBunnyHopHeight), pGui->getFloatPtr(cGui::eSyncFloats::eBunnyHopHeight));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::Text("\xEE\xB9\xAC Высота: %.2f", pGui->getFloat(cGui::eSyncFloats::eBunnyHopHeight));
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##19");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##19", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Высота", pGui->getFloatPtr(cGui::eSyncFloats::eBunnyHopHeight), 1.20F, 500.00F, "%.2f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\xAE Бесконечные патроны", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eInfiniteAmmo))) {
												pSAPatch->InfiniteAmmo(pGui->getUInteger(cGui::eSyncUIntegers::eInfiniteAmmo));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Работает по рекурсии: патроны тратятся, но возвращаются обратно.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB6\xA9 Отключить перезарядку оружия", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoReload))) {
												pSAPatch->NoReload(pGui->getUInteger(cGui::eSyncUIntegers::eNoReload));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA5\x9D Стрелять с +C \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePlusC))) {
												pSAPatch->PlusC(pGui->getUInteger(cGui::eSyncUIntegers::ePlusC));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##51");
											}
											if (ImGui::BeginPopupModal("Настройки##51", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xAC\xA2 Синхронизировать", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSyncPlusC));

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB0\xAB Отключить разброс пуль", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoSpreadPro))) {
												pSAPatch->NoSpreadPro(pGui->getUInteger(cGui::eSyncUIntegers::eNoSpreadPro));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Прицел будет расширяться.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAF\xAF Бег с любым оружием", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eGunRun))) {
												pSAPatch->GunRun(pGui->getUInteger(cGui::eSyncUIntegers::eGunRun));
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB4\xAC Прыжок с любым оружием", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eGunJump))) {
												pSAPatch->GunJump(pGui->getUInteger(cGui::eSyncUIntegers::eGunJump));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB4\xAE Приседать с любым оружием", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysDuck))) {
												pSAPatch->AlwaysDuck(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysDuck));
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA4\xAF Автоматическое скольжение", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysGlide))) {
												pSAPatch->AlwaysGlide(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysGlide));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Помещает Вас в баг скольжения сразу после прицеливания.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB3\x94 Скорострельность", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRapidFire))) {
												pSAPatch->RapidFire(pGui->getUInteger(cGui::eSyncUIntegers::eRapidFire));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Скорострельность на максимум! Рекомендую ракеты.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB4\xB1 Разрешить всегда менять оружие", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysWeaponSwitch))) {
												pSAPatch->AlwaysWeaponSwitch(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysWeaponSwitch));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет прокручивать оружие в любой ситуации. Например когда на Вас JetPack.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA5\xB6 Все скиллы", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAllSkills))) {
												pSAPatch->AllSkills(pGui->getUInteger(cGui::eSyncUIntegers::eAllSkills));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Вы стреляете как PRO с любого оружия.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB1\x8F Никогда не падать", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoFall))) {
												pSAPatch->NoFall(pGui->getUInteger(cGui::eSyncUIntegers::eNoFall));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает анимацию падения с высоты.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB6\xB1 Отключить задержку угла обзора", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoAngleDelay))) {
												pSAPatch->NoAngleDelay(pGui->getUInteger(cGui::eSyncUIntegers::eNoAngleDelay));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет быстро поворачиваться Вашему персонажу.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA8\xB6 Не крепить игрока к крыше транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoPedToVehAttach))) {
												pMPPatch->NoPedToVehAttach(pGui->getUInteger(cGui::eSyncUIntegers::eNoPedToVehAttach));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет защититься от нежелательных действий этой возможности в SA-MP\'e.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA4\xB9 Триггербот \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTriggerBot))) {
												if (!pGui->getUInteger(cGui::eSyncUIntegers::eTriggerBot)) {
													pSAPatch->LockAimAngle(0);
												}
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Автоматическая стрельба за Вас когда прицел оружия находится на персонаже.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##48");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##48", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::Checkbox("\xEE\xBB\xAE Останавливать прицел", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTriggerBotCrossStop))) {
													if (!pGui->getUInteger(cGui::eSyncUIntegers::eTriggerBotCrossStop)) {
														pSAPatch->LockAimAngle(0);
													}
												}
												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB0\x8A Реагировать на транспорт", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTriggerBotVehs));

												ImGui::Separator();
												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Дистанция срабатывания", pGui->getFloatPtr(cGui::eSyncFloats::eTriggerBot), 3.0F, 100.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBA\xB5 Прыжок без отмены", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoCancelJump))) {
												pSAPatch->NoCancelJump(pGui->getUInteger(cGui::eSyncUIntegers::eNoCancelJump));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет персонажу совершать прыжок даже тогда, когда ему что то мешает или закрывает путь.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBD\x89 Прицел без отмены", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoCancelAim))) {
												pSAPatch->NoCancelAim(pGui->getUInteger(cGui::eSyncUIntegers::eNoCancelAim));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет персонажу целиться рядом со стенами.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xAD\x81 Липнуть к транспорту", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eStickToVehicle));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет крепить персонажа к транспорту который находится под ногами и в котором есть водитель.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB6\xAA Продолжать стрелять при смене оружия", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWeaponSwitchFire))) {
												pSAPatch->WeaponSwitchFire(pGui->getUInteger(cGui::eSyncUIntegers::eWeaponSwitchFire));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC При стрельбе позволяет менять оружие и сразу же продолжать стрельбу без задержки.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xAD\xBB Антистан", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAntiStun));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет не получать анимацию боли при попадании пули в Вас.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xB6\x8E Садиться в транспорт без выталкивания водителя", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSkipEnterVehJack));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет сесть в транспорт по обычному даже когда в нём уже кто-то сидит.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAE\xA2 Погруженное плавание \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSubmergedSwimming))) {
												pSAPatch->SubmergedSwimming(pGui->getUInteger(cGui::eSyncUIntegers::eSubmergedSwimming), pGui->getFloatPtr(cGui::eSyncFloats::eSubmergedSwimming));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет при обычном плавании погружаться под воду и плыть как будто Вы находитесь над водой.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##52");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##52", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Уровень погружения", pGui->getFloatPtr(cGui::eSyncFloats::eSubmergedSwimming), 0.1F, 100.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAF\xAE Сила тяжести под водой \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWaterForceOfGravity))) {
												pSAPatch->WaterForceOfGravity(pGui->getUInteger(cGui::eSyncUIntegers::eWaterForceOfGravity), pGui->getFloatPtr(cGui::eSyncFloats::eWaterForceOfGravity));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Изменяет притяжение под водой.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##53");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##53", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Тяжесть", pGui->getFloatPtr(cGui::eSyncFloats::eWaterForceOfGravity), -1.000F, 1.000F, "%.3f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB1\xB4 Оставаться на воде при падении", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFallOnWater))) {
												pSAPatch->FallOnWater(pGui->getUInteger(cGui::eSyncUIntegers::eFallOnWater));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не будет уносить Вас под воду когда Вы в неё прыгаете.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB4\xB6 Ускоренный отвод \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAcceleratedRetraction))) {
												pSAPatch->AcceleratedRetraction(pGui->getUInteger(cGui::eSyncUIntegers::eAcceleratedRetraction), pGui->getFloatPtr(cGui::eSyncFloats::eAcceleratedRetraction));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC При отводе увеличивает вашу скорость.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##56");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##56", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Скорость", pGui->getFloatPtr(cGui::eSyncFloats::eAcceleratedRetraction), 0.10F, 1.00F, "%.2f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA5\xAE Гидроцефалия \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBigHead))) {
												pSAPatch->BigHead(pGui->getUInteger(cGui::eSyncUIntegers::eBigHead), pGui->getFloat(cGui::eSyncFloats::eBigHead));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет изменить размер головы скинам.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##60");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##60", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												if (ImGui::SliderFloat("Размер", pGui->getFloatPtr(cGui::eSyncFloats::eBigHead), 0.1F, 15.0F, "%.1f")) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eBigHead)) {
														pSAPatch->BigHead(1, pGui->getFloat(cGui::eSyncFloats::eBigHead));
													}
												}
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAC\x97 Спринт в интерьерах", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eInteriorRunningFix))) {
												pSAPatch->InteriorRunningFix(pGui->getUInteger(cGui::eSyncUIntegers::eInteriorRunningFix));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет бегать в интерьерах как на улице.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAC\x95 Ускорять паркур", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuickParkour))) {
												pSAPatch->QuickParkour(pGui->getUInteger(cGui::eSyncUIntegers::eQuickParkour));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет быстрее карабкаться.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\xBD Парное оружие по всему диапазону", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWeaponAllAxis))) {
												pSAPatch->WeaponAllAxis(pGui->getUInteger(cGui::eSyncUIntegers::eWeaponAllAxis));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет стрелять с парного оружия за спину, а не стрелять в воздух.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xB4\xA3 Сайлент Аим \xEE\xA9\xAF \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSilentAim));
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет при промахе всё равно попадать в цель.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##66");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##66", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xA4\xAA Не стрелять по своему цвету", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSilentAimIgnoreColor));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA5\xB5 Не стрелять по своему скину", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSilentAimIgnoreMySkin));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB9\x8F Производить попадание в цель случайно", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSilentAimRandShot));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB2\xB4 Не учитывать стены", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSilentAimIgnoreWalls));

												ImGui::Separator();
												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Дистанция срабатывания от прицела", pGui->getFloatPtr(cGui::eSyncFloats::eSilentAimDistance), 10.0F, 500.0F, "%.1f");
												ImGui::Separator();
												ImGui::SliderFloat("Максимальная дистанция срабатывания", pGui->getFloatPtr(cGui::eSyncFloats::eSilentAimMaxDistance), 5.0F, 300.0F, "%.1f");
												ImGui::Separator();
												ImGui::SliderFloat("Сила случайных значений", pGui->getFloatPtr(cGui::eSyncFloats::eSilentAimRand), 0, 1.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\xA7 Двигать голову без задержки", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoHeadMoveDelay))) {
												pMPPatch->NoHeadMoveDelay(pGui->getUInteger(cGui::eSyncUIntegers::eNoHeadMoveDelay));
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xAC\x92 Двойное оружие", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDoubleWeapon));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет выстреливать дважды держа в руках два ствола.");
												ImGui::EndTooltip();
											}

											/*
											Переход.
											*/

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
											if (ImGui::SliderInt("##Скин", pGui->getIntegerPtr(cGui::eSyncIntegers::eSkinID), 0, 311, "%d \xEE\xAC\x81", ImGuiSliderFlags_::ImGuiSliderFlags_NoInput)) {
												class cPed *pPed{pSA->getPlayerPed()};
												if (pPed != nullptr) {
													const __int32 i32SkinID{pGui->getInteger(cGui::eSyncIntegers::eSkinID)};
													if (i32SkinID != 74) {
														if (pSA->getStreamingInfo(i32SkinID)->ui8LoadState == 0) {
															cStreaming::requestModel(i32SkinID, 2);
															cStreaming::loadAllRequestedModels(false);
														} pPed->setModelIndex(i32SkinID);
													}
												}
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Меняет скин игрока.");
												ImGui::EndTooltip();
											}
											ImGui::PopItemWidth();

											if (ImGui::Button("\xEE\xB0\xAF Получить оружие \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
												const unsigned __int8 ui8SpawnWeaponID{std::get<0>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eSpawnWeaponID)])};
												if (ui8SpawnWeaponID) {
													class cPed *pPed{pSA->getPlayerPed()};
													if (pPed != nullptr) {
														pPed->giveDelayedWeapon(ui8SpawnWeaponID, pGui->getInteger(cGui::eSyncIntegers::eWeaponSpawnerAmmo));
														if (!pGui->getUInteger(cGui::eSyncUIntegers::eHidenGiveWeapon)) {
															pPed->setCurrentWeapon(ui8SpawnWeaponID);
														}
													}
												}
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();

												ImGui::Text("%s | %d", &std::move(std::get<1>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eSpawnWeaponID)]))[0], pGui->getInteger(cGui::eSyncIntegers::eWeaponSpawnerAmmo));
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##3");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##3", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("Получать оружие скрыто", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHidenGiveWeapon));

												ImGui::Separator();
												ImGui::PushItemWidth(420.0F);
												if (ImGui::BeginCombo("Оружие", &std::move(std::get<1>(pGui->vecWeaponNames[pGui->getInteger(cGui::eSyncIntegers::eSpawnWeaponID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
													unsigned __int8 ui8Iterator{0};
													std::all_of(pGui->vecWeaponNames.cbegin(), pGui->vecWeaponNames.cend(), [&pGui, &ui8Iterator](const std::tuple<const unsigned __int8, const std::string> tWeaponName) -> const bool {
														if (ImGui::Selectable(&std::move(std::get<1>(tWeaponName))[0])) {
															pGui->setInteger(cGui::eSyncIntegers::eSpawnWeaponID, ui8Iterator);
															return false;
														} ++ui8Iterator;
														ImGui::Separator();
														return true;
													});
													ImGui::EndCombo();
												}
												ImGui::Separator();
												ImGui::SliderInt("Патроны", pGui->getIntegerPtr(cGui::eSyncIntegers::eWeaponSpawnerAmmo), 1, 5000, "%d \xEE\xB0\xAE");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (ImGui::Button("\xEE\xB0\x80 Удалить текущее оружие", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												class cPed *pPed{pSA->getPlayerPed()};
												if (pPed != nullptr) {
													pPed->clearWeapon(pPed->getCurrentWeaponModel());
													pPed->getWeapon(pPed->getCurrentWeaponSlot())->shutdown();
												}
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xAF\xBE Удалить всё оружие", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												class cPed *pPed{pSA->getPlayerPed()};
												if (pPed != nullptr) {
													pPed->clearWeapons();
												}
											}

											if (ImGui::Button("\xEE\xAD\xB2 Полное здоровье игрока", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												class cPed *pPed{pSA->getPlayerPed()};
												if (pPed != nullptr) {
													pPed->setHealth(100.0F);
												}
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC 100 ХП.");
												ImGui::EndTooltip();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xB0\xB4 Полная броня игрока", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												class cPed *pPed{pSA->getPlayerPed()};
												if (pPed != nullptr) {
													pPed->setArmor(100.0F);
												}
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC 100 АП.");
												ImGui::EndTooltip();
											}

											if (ImGui::Button("\xEE\xAF\xB1 Снять здоровье", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												ImGui::OpenPopup("Вы уверены?##0");
												ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
											}
											if (ImGui::BeginPopupModal("Вы уверены?##0", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
												if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
													cCheat::suicide();
													ImGui::CloseCurrentPopup();
												}
												if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xB0\xB3 Снять броню", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												ImGui::OpenPopup("Вы уверены?##1");
												ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
											}
											if (ImGui::BeginPopupModal("Вы уверены?##1", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
												if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
													class cPed *pPed{pSA->getPlayerPed()};
													if (pPed != nullptr) {
														pPed->setArmor(0);
													} ImGui::CloseCurrentPopup();
												}
												if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (ImGui::Button("\xEE\xAF\x9D Получить JetPack \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
												cCheat::giveJetPack();
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##4");
											}
											if (ImGui::BeginPopupModal("Настройки##4", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::Checkbox("\xEE\xAE\xB0 Стрельба с любого оружия на JetPack\'e", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eJetPackAnyWeapon))) {
													pSAPatch->JetPackAnyWeapon(pGui->getUInteger(cGui::eSyncUIntegers::eJetPackAnyWeapon));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xBA\xAD Не создавать пикап JetPack\'a", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoJetPackDropPickup))) {
													pSAPatch->NoJetPackDropPickup(pGui->getUInteger(cGui::eSyncUIntegers::eNoJetPackDropPickup));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Не даёт JetPack\'y появляться после снятия.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB6\xA7 Отключить звук JetPack\'a", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoJetPackSounds))) {
													pSAPatch->NoJetPackSounds(pGui->getUInteger(cGui::eSyncUIntegers::eNoJetPackSounds));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Выключает звук жужжания JetPack\'a.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xBA\xA3 Разрешить всегда снимать JetPack", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAllowDropJetPack))) {
													pSAPatch->AllowDropJetPack(pGui->getUInteger(cGui::eSyncUIntegers::eAllowDropJetPack));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC JetPack например можно будет снять в воздухе.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xBA\xA5 Скорость JetPack\'a", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eJetPackSpeed))) {
													pSAPatch->JetPackSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eJetPackSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eJetPackSpeed));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC При включении будет так же отключён лимит высоты для JetPack\'a.");
													ImGui::EndTooltip();
												}
												ImGui::SameLine();
												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("##Скорость3", pGui->getFloatPtr(cGui::eSyncFloats::eJetPackSpeed), 0.010F, 1.000F, "%.3f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (ImGui::Button("\xEE\xB0\x8B Выбраться из транспорта | \xEE\xB3\xBA Сбросить анимацию \xEE\xA9\xB1", std::move(ImVec2{-0.1F, 25.0F}))) {
												cSA::disembarkPed(pSA->getPlayerPed());
											}

											ImGui::PopStyleVar();
											ImGui::EndChild();
										}

										ImGui::EndTabItem();
									}
									ImGui::PopStyleVar();

									/* ETC */
									if (ImGui::BeginTabItem("\t\t\t\t\t\t \xEE\xB2\x94", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
										if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											pGui->bResetScroll = true;
										}
										if (ImGui::BeginChild("SLIDER", std::move(ImVec2{}), false, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
											if (pGui->bResetScroll) {
												ImGui::SetScrollY(ImGui::GetScrollY() == 0 ? ImGui::GetScrollMaxY() : 0);
											}

											ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

											if (ImGui::Checkbox("\xEE\xB0\xA7 Защита \xEE\xA9\xAF \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProt))) {
												__AutoLoadPROTS(pGui->getUInteger(cGui::eSyncUIntegers::eProt));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Если данный пункт активирован, то его настройки будут функционировать.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##1");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##1", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xB0\x96 Защита от лопастей вертолета", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtHeliBlades));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAD\xB6 Защита от падения", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtFall));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB0\xB2 Защита от взрывов", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtBlowUp));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB1\x88 Защита от огня", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtFire));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB3\xA6 Защита от урона оружия", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtWeapons));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAC\x8D Защита от сбития транспортом", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtDB));

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAF\xB0 Защита от смерти в автомобиле", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtDieInVeh))) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eProt)) {
														pSAPatch->ProtDieInVeh(pGui->getUInteger(cGui::eSyncUIntegers::eProtDieInVeh));
													}
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB9\x82 Защита от смерти при входе в горящий транспорт", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtDieEnterVehOnFire))) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eProt)) {
														pSAPatch->ProtDieEnterVehOnFire(pGui->getUInteger(cGui::eSyncUIntegers::eProtDieEnterVehOnFire));
													}
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB0\x8E Защита для ХП транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtHPVeh))) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eProt)) {
														pSAPatch->ProtHPVeh(pGui->getUInteger(cGui::eSyncUIntegers::eProtHPVeh));
													}
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAC\xAA Защита от пробития колёс", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtCarTire));

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xA5\xB4 Защита от ударной волны", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtTriggerExplosion))) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eProt)) {
														pSAPatch->ProtTriggerExplosion(pGui->getUInteger(cGui::eSyncUIntegers::eProtTriggerExplosion));
													}
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAF\xAA Защита от удушья", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtChoking));
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет не реагировать на эффект огнетушителя и баллончика с краской.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAF\xA9 Обход проверки через создание взрыва", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProtCreateExplosionFix));

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\xA4 ВаллХак \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHack))) {
												pMPPatch->WallHack(pGui->getUInteger(cGui::eSyncUIntegers::eWallHack));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает лимиты на SA-MP ники и показатели здоровья. Не нарушает серверные!");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##2");
												}
											}
											ImGui::SetNextWindowSize(std::move(ImVec2{500.0F, 550.0F}), ImGuiCond_::ImGuiCond_Appearing);
											if (ImGui::BeginPopupModal("Настройки##2", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::Checkbox("\xEE\xB0\xBA ВаллХак для оружия", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackWeapon))) {
													pSAPatch->WeaponWallHack(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackWeapon));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет видеть само оружие и эффект от его выстрела через стены.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAF\xB5 Подсвечивать игроков и транспорт", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLightPedsVehs))) {
													pSAPatch->LightPedsVehs(pGui->getUInteger(cGui::eSyncUIntegers::eLightPedsVehs));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Светит фонарём на всех игроков и на весь транспорт. Полезно в ночное время.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xA6\x9C Рисовать свои ники и бары игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackNames))) {
													pMPPatch->DisableNameTagsAndBars(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNames));
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAF\x81 Кости игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackBones));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAE\xA9 Ромбы игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackRhombus));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB7\x9D Направление игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackAngle));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB9\xB7 Круг под игроком", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackCircles));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xBD\x86 Линии и дистанция", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackLinesDist));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA8\xBB Линии и дистанция по маркерам", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackLongLinesDist));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAD\x96 Показывать открытый транспорт", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackVehDoors));

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xA4\x8A Показывать иконки с радара на экране", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackRadarTraces))) {
													pSAPatch->WallHackRadarTraces(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackRadarTraces));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xBA\x94 Всегда показывать 3D текст", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHack3DText))) {
													pMPPatch->No3DTextDrawDist(pGui->getUInteger(cGui::eSyncUIntegers::eWallHack3DText));
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA6\x80 Рисовать ID пикапов", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackPickupIDs));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB0\xA3 Показывать транспорт", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackVehicle));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA5\xA9 Показывать объект радара", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackRadar));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA4\xAD Рисовать ID TextDraw", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackTextDrawIDs));

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAD\xA7 Показывать взрывные устройства", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackBombs))) {
													if (!pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBombs)) {
														pGui->vecGrenadeWays.clear();
													}
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB2\xBD Показывать объекты на радаре", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackRenderObjIcons));
												ImGui::SameLine();
												ImGui::Checkbox("\xEE\xB1\xAB Только SA-MP объекты", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackRenderMPObjIcons));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xBD\x83 ID игроков на радаре", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackRenderRadarPlayerIDs));

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB5\x9A Рисовать трейсера пуль", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackBulletTrace))) {
													if (!pGui->getUInteger(cGui::eSyncUIntegers::eWallHackBulletTrace)) {
														pGui->vecTracerInfos.clear();
													}
												}
												ImGui::SameLine();
												ImGui::PushItemWidth(240.0F);
												ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eWallHackBulletTraceTime), 100, 1500, "\xEE\xA9\x90 %d");
												ImGui::PopItemWidth();

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA4\xBD Показывать текстуры транспорта и игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackTextures));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA7\xB6 Каркасные текстуры транспорта и игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackWireFrame));

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xAC\xBC Обводить поверхность", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackWireFrameThings));
												ImGui::SameLine(ImGui::GetContentRegionAvail().x - 20.0F);
												ImGui::ColorEdit3("Цвет##1", pGui->getFloatPtr(cGui::eSyncFloats::eWireFrameThingsR), ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8);

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA4\xA6 Чамсы", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackChams));
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Окрашивает игроков, а так же некоторый транспорт в указанный цвет.");
													ImGui::EndTooltip();
												}
												ImGui::SameLine(ImGui::GetContentRegionAvail().x - 20.0F);
												ImGui::ColorEdit3("Цвет##2", pGui->getFloatPtr(cGui::eSyncFloats::eChamsR), ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8);

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xB0\xAF Чамсы для оружия", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackWeaponChams));
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Окрашивает оружие в указанный цвет.");
													ImGui::EndTooltip();
												}
												ImGui::SameLine(ImGui::GetContentRegionAvail().x - 20.0F);
												ImGui::ColorEdit3("Цвет##3", pGui->getFloatPtr(cGui::eSyncFloats::eWeaponChamsR), ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8);

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAA\xB8 Отключить лимит команды /DL", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallHackNoDLLimit))) {
													pMPPatch->NoDLLimit(pGui->getUInteger(cGui::eSyncUIntegers::eWallHackNoDLLimit));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAF\xB2 Светлая карта игры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLightMap))) {
													pSAPatch->LightMap(pGui->getUInteger(cGui::eSyncUIntegers::eLightMap));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Осветит карту и будет хорошо видно даже ночью.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xBB\xA1 Скины игроков в матрице", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eMatrixSkins))) {
													pSAPatch->MatrixSkins(pGui->getUInteger(cGui::eSyncUIntegers::eMatrixSkins));
												}

												ImGui::Separator();
												ImGui::Checkbox("\xEE\xA4\xB2 Окрашивать визуалы в цвета игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePlayersColors));

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB4\xAD ВаллШот", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWallShot))) {
												pSAPatch->WallShot(pGui->getUInteger(cGui::eSyncUIntegers::eWallShot));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Пробитие будет на серверах с системой обхода бессмертия.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\xAD Вечный прицел", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysCrossHair))) {
												pSAPatch->AlwaysCrossHair(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysCrossHair));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Для полноценной работы желательно включить \"Быстрый прицел\".");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAC\xA6 Быстрый прицел", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuickCrossHair))) {
												pSAPatch->QuickCrossHair(pGui->getUInteger(cGui::eSyncUIntegers::eQuickCrossHair));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Снимает задержку появления прицела после нажатия соответствующей кнопке.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB6\xAB FPS Unlock", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFPSUnlock))) {
												pMPPatch->FPSUnlock(pGui->getUInteger(cGui::eSyncUIntegers::eFPSUnlock));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Снимает ограничение на FPS. Может вызывать \"framedelta\" баг.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xBB\x8A Закрывать игру при краше", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTurnOffWhenCrash));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Определяет намертво зависла ли игра и если это так, то завершит процесс.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBA\x8A Прозрачная вода", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWaterAlpha))) {
												pSAPatch->WaterAlpha(pGui->getUInteger(cGui::eSyncUIntegers::eWaterAlpha));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Делает воду более прозрачной, позволяет видеть под водой.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\x95 Быстрое подключение к серверу", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoConnectionDelay))) {
												pMPPatch->NoConnectionDelay(pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectionDelay));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Снимает задержку переподключения к серверу если на нём нет свободных слотов.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB9\xBD Проценты на HUD\'e \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHudPercentage))) {
												pSAPatch->HudPercentage(pGui->getUInteger(cGui::eSyncUIntegers::eHudPercentage), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageB2)));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##39");
											}
											if (ImGui::BeginPopupModal("Настройки##39", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::ColorEdit3("Цвет", pGui->getFloatPtr(cGui::eSyncFloats::eHudPercentageR1), ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8)) {
													pGui->setFloat(cGui::eSyncFloats::eHudPercentageR2, pGui->getFloat(cGui::eSyncFloats::eHudPercentageR1) * 255.0F);
													pGui->setFloat(cGui::eSyncFloats::eHudPercentageG2, pGui->getFloat(cGui::eSyncFloats::eHudPercentageG1) * 255.0F);
													pGui->setFloat(cGui::eSyncFloats::eHudPercentageB2, pGui->getFloat(cGui::eSyncFloats::eHudPercentageB1) * 255.0F);

													if (pGui->getUInteger(cGui::eSyncUIntegers::eHudPercentage)) {
														pSAPatch->HudPercentage(1, static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eHudPercentageB2)));
													}
												}

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAD\x86 Отключить рамки на HUD\'е", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoHudBorder))) {
												pSAPatch->NoHudBorder(pGui->getUInteger(cGui::eSyncUIntegers::eNoHudBorder));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB5\x82 Работа в свёрнутом режиме", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eForegroundWork))) {
												pSAPatch->ForegroundWork(pGui->getUInteger(cGui::eSyncUIntegers::eForegroundWork));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не замораживает игру когда Вы её свернули.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAB\x8A Не отключать управление в диалогах", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoDialogLock))) {
												pMPPatch->NoDialogLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoDialogLock));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не замораживает управление когда Вы открыли DXUT диалог.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAD\xAE Отключить все эффекты \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDisableEffects))) {
												pSAPatch->DisableEffects(pGui->getUInteger(cGui::eSyncUIntegers::eDisableEffects));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает выполнение главной функции эффектов.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##42");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##42", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::Checkbox("\xEE\xBC\xA2 Отключить облака", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoClouds))) {
													pSAPatch->NoClouds(pGui->getUInteger(cGui::eSyncUIntegers::eNoClouds));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB2\xBF Отключить эффект жары", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoHeatHaze))) {
													pSAPatch->NoHeatHaze(pGui->getUInteger(cGui::eSyncUIntegers::eNoHeatHaze));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xA9\xB4 Не затемнять экран под водой", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoDarkUnderWater))) {
													pSAPatch->NoDarkUnderWater(pGui->getUInteger(cGui::eSyncUIntegers::eNoDarkUnderWater));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAE\xBF Долгий эффект крови", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLongTimeBlood))) {
													pSAPatch->LongTimeBlood(pGui->getUInteger(cGui::eSyncUIntegers::eLongTimeBlood));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAF\x98 Долгий эффект пыли под ногами", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLongTimeFootSmoke))) {
													pSAPatch->LongTimeFootSmoke(pGui->getUInteger(cGui::eSyncUIntegers::eLongTimeFootSmoke));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет так же оставлять следы на любой поверхности.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB2\xA2 Новый эффект выстрела", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNewGunFlash))) {
													pSAPatch->NewGunFlash(pGui->getUInteger(cGui::eSyncUIntegers::eNewGunFlash));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB1\xAB Долгие трейсеры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLongBulletTrack))) {
													pSAPatch->LongBulletTrack(pGui->getUInteger(cGui::eSyncUIntegers::eLongBulletTrack));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAF\x94 Рисовать траву и кустарники", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRenderGrass))) {
													pSAPatch->RenderGrass(pGui->getUInteger(cGui::eSyncUIntegers::eRenderGrass));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Возвращает в SA-MP траву и кустарники.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB3\x91 Рисовать луну и солнце", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSunMoon))) {
													pSAPatch->SunMoon(pGui->getUInteger(cGui::eSyncUIntegers::eSunMoon));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Возвращает в SA-MP луну и солнце.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAA\xB5 Отключить тени", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoShadows))) {
													pSAPatch->NoShadows(pGui->getUInteger(cGui::eSyncUIntegers::eNoShadows));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xAE\x8F Тёмные тени", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDarkShadows))) {
													pSAPatch->DarkShadows(pGui->getUInteger(cGui::eSyncUIntegers::eDarkShadows));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextUnformatted("\xEE\xB9\xAC Делает игровые тени более тёмными.");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB2\xB3 Отключить эффект ночного и дневного видения", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoDayAndNightVision))) {
													pSAPatch->NoDayAndNightVision(pGui->getUInteger(cGui::eSyncUIntegers::eNoDayAndNightVision));
												}

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB2\x93 Дистанция прорисовки \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDrawDistance))) {
												pSAPatch->DrawDistance(pGui->getUInteger(cGui::eSyncUIntegers::eDrawDistance), pGui->getFloatPtr(cGui::eSyncFloats::eDrawDistance));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::Text("Дистанция: %.1f", pGui->getFloat(cGui::eSyncFloats::eDrawDistance));
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##7");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##7", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::Checkbox("\xEE\xB2\x92 Отключить туман", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoFog))) {
													pSAPatch->NoFog(pGui->getUInteger(cGui::eSyncUIntegers::eNoFog));
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xB2\x98 Отключить LOD\'s", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoLODs))) {
													pSAPatch->NoLODs(pGui->getUInteger(cGui::eSyncUIntegers::eNoLODs));
												}
												if (ImGui::IsItemHovered()) {
													ImGui::BeginTooltip();
													ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Используя \"Дистанция прорисовки\" лимит дистанции 700.0. Иначе может произойти быть вылет игры!");
													ImGui::EndTooltip();
												}

												ImGui::Separator();
												if (ImGui::Checkbox("\xEE\xBC\xA3 Отключить прозрачность текстур", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoTexturesAlpha))) {
													pSAPatch->NoTexturesAlpha(pGui->getUInteger(cGui::eSyncUIntegers::eNoTexturesAlpha));
												}

												ImGui::Separator();
												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Дистанция", pGui->getFloatPtr(cGui::eSyncFloats::eDrawDistance), 105.0F, 1500.0F, "%.1f", ImGuiSliderFlags_::ImGuiSliderFlags_NoInput);
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA7\xAD Убрать нули в деньгах", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoZerosInMoney))) {
												pSAPatch->NoZerosInMoney(pGui->getUInteger(cGui::eSyncUIntegers::eNoZerosInMoney));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Показывает точно число денег на HUD\'e.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\x91 Рисовать часы на HUD\'e", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHudClock))) {
												pSAPatch->HudClock(pGui->getUInteger(cGui::eSyncUIntegers::eHudClock));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Показывает серверное время.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAC\x9F Лагать для игроков \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLags))) {
												pMPPatch->SendRate(pGui->getUInteger(cGui::eSyncUIntegers::eLags), pGui->getIntegerPtr(cGui::eSyncIntegers::eLagsTime));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC После отключения никаким образом не нарушает стандартные значения.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##8");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##8", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderInt("Степень лагов", pGui->getIntegerPtr(cGui::eSyncIntegers::eLagsTime), 20, 3000, "\xEE\xA9\x90 %d");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xBB\x8E Очищать память игры при переполнении", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCleanMemory));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Полностью очищает память игры когда её заполненность будет равна половине. Умеет так же очищать и память SA-MP\'a. Может сильно помочь исправить ошибки долгой игры.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAD\x9E Не отключать HUD", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysHUD))) {
												pSAPatch->AlwaysHUD(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysHUD));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Запрещает SA-MP\'y выключить HUD игры.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA4\xA9 Цветной дым \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eColorfulSmoke))) {
												pSAPatch->ColorfulSmoke(pGui->getUInteger(cGui::eSyncUIntegers::eColorfulSmoke), pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeR2), pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeG2), pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeB2));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##40");
											}
											if (ImGui::BeginPopupModal("Настройки##40", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::ColorEdit3("Цвет", pGui->getFloatPtr(cGui::eSyncFloats::eColorfulSmokeR1), ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8)) {
													pGui->setFloat(cGui::eSyncFloats::eColorfulSmokeR2, pGui->getFloat(cGui::eSyncFloats::eColorfulSmokeR1) * 255.0F);
													pGui->setFloat(cGui::eSyncFloats::eColorfulSmokeG2, pGui->getFloat(cGui::eSyncFloats::eColorfulSmokeG1) * 255.0F);
													pGui->setFloat(cGui::eSyncFloats::eColorfulSmokeB2, pGui->getFloat(cGui::eSyncFloats::eColorfulSmokeB1) * 255.0F);
												}

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB5\x8D Отключить инерцию", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoInertia))) {
												pSAPatch->NoInertia(pGui->getUInteger(cGui::eSyncUIntegers::eNoInertia));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не даёт транспорту врезаться. Функция экспериментальная.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB9\xBB Отключить коллизию камеры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoCamCollision))) {
												pSAPatch->NoCamCollision(pGui->getUInteger(cGui::eSyncUIntegers::eNoCamCollision));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Можно будет заходить камерой в текстуры.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xB9\xBB Отключить коллизию объектов", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoObjCollision));

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xB9\xBB Отключить коллизию зданий", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoDumCollision));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Стоит иметь ввиду, что многие здания в игре не имеют \"пола\".");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB9\xBB Отключить коллизию воды", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoWaterCollision))) {
												pSAPatch->NoWaterCollision(pGui->getUInteger(cGui::eSyncUIntegers::eNoWaterCollision));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Даёт возможность бродить под водой.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB2\x8D Не удалять модели на большом расстоянии", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoModelLimit))) {
												pSAPatch->NoModelLimit(pGui->getUInteger(cGui::eSyncUIntegers::eNoModelLimit));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Запрещает игре удалять транспорт и игроков включая их оружие на длинной дистанции. Полезно для снайперов.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB9\xB9 Карта радара в ширину стрима", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRadarStreamSize))) {
												pSAPatch->RadarStreamSize(pGui->getUInteger(cGui::eSyncUIntegers::eRadarStreamSize));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Уменьшает зум радара до значения ширины стрима (300 метров). Не имеет бага в транспорте.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBB\xA1 Рисовать размытие при ускорении \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDrawBlurOnSpeed))) {
												pSAPatch->DrawBlurOnSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eDrawBlurOnSpeed), static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlurIntensity)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurB2)));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##41");
											}
											if (ImGui::BeginPopupModal("Настройки##41", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
												if (ImGui::ColorEdit3("Цвет", pGui->getFloatPtr(cGui::eSyncFloats::eColorfulBlurR1), ImGuiColorEditFlags_::ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_::ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_::ImGuiColorEditFlags_Uint8)) {
													pGui->setFloat(cGui::eSyncFloats::eColorfulBlurR2, pGui->getFloat(cGui::eSyncFloats::eColorfulBlurR1) * 255.0F);
													pGui->setFloat(cGui::eSyncFloats::eColorfulBlurG2, pGui->getFloat(cGui::eSyncFloats::eColorfulBlurG1) * 255.0F);
													pGui->setFloat(cGui::eSyncFloats::eColorfulBlurB2, pGui->getFloat(cGui::eSyncFloats::eColorfulBlurB1) * 255.0F);

													if (pGui->getUInteger(cGui::eSyncUIntegers::eDrawBlurOnSpeed)) {
														pSAPatch->DrawBlurOnSpeed(1, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlurIntensity)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurB2)));
													}
												}
												ImGui::SameLine();
												ImGui::PushItemWidth(420.0F);
												if (ImGui::SliderInt("Сила", pGui->getIntegerPtr(cGui::eSyncIntegers::eBlurIntensity), 10, 255)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eDrawBlurOnSpeed)) {
														pSAPatch->DrawBlurOnSpeed(1, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlurIntensity)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurR2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurG2)), static_cast<const unsigned __int8>(pGui->getFloat(cGui::eSyncFloats::eColorfulBlurB2)));
													}
												}
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBB\x92 Разрешить использовать игровые чит-коды", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eUseGameCheats))) {
												pSAPatch->UseGameCheats(pGui->getUInteger(cGui::eSyncUIntegers::eUseGameCheats));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Возвращает в SA-MP поддержку чит-кодов.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAB\x8E Рисовать название транспорта при посадке", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDrawVehNames))) {
												pSAPatch->DrawVehNames(pGui->getUInteger(cGui::eSyncUIntegers::eDrawVehNames));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Возвращает в SA-MP отображение название транспорта.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA4\xBE Быстрый и компактный скриншот на F8", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuickScreen))) {
												pMPPatch->QuickScreen(pGui->getUInteger(cGui::eSyncUIntegers::eQuickScreen));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Уменьшает вес файла скрина и ускоряет сам процесс.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xA9\x99 Звук при попадании в игрока", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBell));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Воспроизводит звук когда Ваши пули попали в игрока.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBB\x97\xEE\xBB\x9C\xEE\xBB\x96 Шкала здоровья 160 единиц", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::e160HP))) {
												pSAPatch->HPBar160(pGui->getUInteger(cGui::eSyncUIntegers::e160HP));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC ХП бар на 160 для серверов с этой системой.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\x87 Высота иконок на радаре без погрешности", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoBlipInfelicity))) {
												pSAPatch->NoBlipInfelicity(pGui->getUInteger(cGui::eSyncUIntegers::eNoBlipInfelicity));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC По умолчанию иконки на радаре показывающие ниже или выше Вас игрок имеют погрешность.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xA4\x88 Полупрозрачная иконка красного домика на радаре", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRedHouseAlpha));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Иконка на карте станет полупрозрачной и будет меньше мешать видимости других иконок.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\x82 Убрать иконку севера с радара", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoNorthBlip))) {
												pSAPatch->NoNorthBlip(pGui->getUInteger(cGui::eSyncUIntegers::eNoNorthBlip));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xA9\xB5 Чистый скриншот на F8", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCleanScreen));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не позволит скринить интерфейс плагина. Так же автоматически скроет визуальные моды.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA4\x81 Не отдалять камеру при входе в гараж", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoGaragesCamera))) {
												pSAPatch->NoGaragesCamera(pGui->getUInteger(cGui::eSyncUIntegers::eNoGaragesCamera));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Оставляет камеру как есть если Вы находитесь в гараже.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xA6\x9C Сообщения из ChatBubble в чат", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eChatBubbleToChat));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Большое ухо. Можно будет видеть в чате, что пишут люди путём перехвата текста над их головами.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA5\xA7 Не сбрасывать камеру после прицеливания", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoCameraResetAfterAim))) {
												pSAPatch->NoCameraResetAfterAim(pGui->getUInteger(cGui::eSyncUIntegers::eNoCameraResetAfterAim));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(ImVec4{1.0F, 0, 0, 1.0F}), "\xEE\xB9\xAC Может не давать выполняться функции \"Сбросить позицию камеры\".");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBA\x86 Обрезать анимацию камеры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCutCameraAnim))) {
												pSAPatch->CutCameraAnim(pGui->getUInteger(cGui::eSyncUIntegers::eCutCameraAnim));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Все движения камеры станут моментальными.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\xBD Отключить радио", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoRadio))) {
												pSAPatch->NoRadio(pGui->getUInteger(cGui::eSyncUIntegers::eNoRadio));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Полностью отключает игровое радио.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA7\xBA Всегда показывать точное количество патронов", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFixedAmmoDraw))) {
												pSAPatch->FixedAmmoDraw(pGui->getUInteger(cGui::eSyncUIntegers::eFixedAmmoDraw));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Снимает лимит отображения больше чем 9999 патронов.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB3\x86 Отключить звук ветра", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoWindSound))) {
												pSAPatch->NoWindSound(pGui->getUInteger(cGui::eSyncUIntegers::eNoWindSound));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAF\x80 Рыбий глаз", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFishEye))) {
												pSAPatch->FishEye(pGui->getUInteger(cGui::eSyncUIntegers::eFishEye));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Данная функция блокирует приближение у снайперской винтовки и фотокамеры.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB0\x97 Аэродинамический тормоз \xEE\xA9\xAF \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAirBrake))) {
												if (pGui->bAirBrake) {
													pSAPatch->AirBreak((pGui->bAirBrake = false));
												}
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC АирБрейк. Позволяет перемещаться по карте по направлению Вашей камеры.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##9");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##9", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Скорость", pGui->getFloatPtr(cGui::eSyncFloats::eAirBrake), 0.1F, 5.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA9\x85 Размер иконок игроков \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBlipScaler))) {
												pSAPatch->BlipScaler(pGui->getUInteger(cGui::eSyncUIntegers::eBlipScaler), static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlipScale)));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Изменения будут произведены после обновления иконок на радаре!");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##10");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##10", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												if (ImGui::SliderInt("Размер", pGui->getIntegerPtr(cGui::eSyncIntegers::eBlipScale), 1, 5)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eBlipScaler)) {
														pSAPatch->BlipScaler(1, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBlipScale)));
													}
												}
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\x80 Размер иконки игрока \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePlayerBlipScale))) {
												pSAPatch->PlayerBlipScale(pGui->getUInteger(cGui::eSyncUIntegers::ePlayerBlipScale), pGui->getFloatPtr(cGui::eSyncFloats::ePlayerBlipScale));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Размер Вашей метки на радаре по центру.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##11");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##11", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Размер", pGui->getFloatPtr(cGui::eSyncFloats::ePlayerBlipScale), 1.0F, 20.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xA9\xA5 Своё время \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCustomTime));
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет визуально менять время игры и при этом выключаться на серверное.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##12");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##12", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderInt(":", pGui->getIntegerPtr(cGui::eSyncIntegers::eCustomTime1), 0, 23, "%d", ImGuiSliderFlags_::ImGuiSliderFlags_NoInput);
												ImGui::SameLine();
												ImGui::SliderInt("##Минуты", pGui->getIntegerPtr(cGui::eSyncIntegers::eCustomTime2), 0, 59, "%d", ImGuiSliderFlags_::ImGuiSliderFlags_NoInput);
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBA\xB0 Нет парашюта при выходе из воздушного транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoParaAfterLeaveFlyVeh))) {
												pSAPatch->NoParaAfterLeaveFlyVeh(pGui->getUInteger(cGui::eSyncUIntegers::eNoParaAfterLeaveFlyVeh));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB4\xAA Ускорить работу карты в меню", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSpeedHackMenuMap))) {
												pSAPatch->SpeedHackMenuMap(pGui->getUInteger(cGui::eSyncUIntegers::eSpeedHackMenuMap), pGui->getFloatPtr(cGui::eSyncFloats::eMenuZoomSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eMenuMoveSpeed));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Ускоряет зум и скорость движения в пункте игрового меню \"Карта\".");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAA\xA8 Отключить телепорт после провала в текстуры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoFallenTeleport))) {
												pSAPatch->NoFallenTeleport(pGui->getUInteger(cGui::eSyncUIntegers::eNoFallenTeleport));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Если провалиться в текстуры, то Вы так и будете лететь вниз.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB4\xB2 Разрушать объекты одним ударом", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eObjectPunchPower))) {
												pSAPatch->ObjectPunchPower(pGui->getUInteger(cGui::eSyncUIntegers::eObjectPunchPower));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Все динамические объекты будут разрушаться с первого косания от игрока или транспорта.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBC\xAC Скрывать диалоги", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDialogHider))) {
												pMPPatch->DialogHider(pGui->getUInteger(cGui::eSyncUIntegers::eDialogHider));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Можно скрывать диалоги и возвращать их обратно в любое время.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB9\x8B Сразу отключать чат на F7", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFastChatOff))) {
												pMPPatch->FastChatOff(pGui->getUInteger(cGui::eSyncUIntegers::eFastChatOff));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Выпиливает прозрачный чат на клавишу F7.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAB\xA0 Скрывать TextDraw", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eTextDrawHider))) {
												pMPPatch->TextDrawHider(pGui->getUInteger(cGui::eSyncUIntegers::eTextDrawHider));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB3\x87 Отключить волны", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoWaterWaves))) {
												pSAPatch->NoWaterWaves(pGui->getUInteger(cGui::eSyncUIntegers::eNoWaterWaves));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Полностью отключает работу волн на воде в игре.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA9\xB2 Скрывать GangZone", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eGangZoneHider))) {
												pMPPatch->GangZoneHider(pGui->getUInteger(cGui::eSyncUIntegers::eGangZoneHider));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Можно использовать как разблокировку радара на серверах где радар скрыт с помощью зон.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xBA\xA9 Отправлять команду после сообщения в чат \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSendCMDOnChat));
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Перехватывает указанное сообщение и как только оно окажется в Вашем чате - отправляет указанную команду или сообщение.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##58");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##58", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xBA\x91 Искать только в префиксах", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSendCMDOnChatPrefix));

												ImGui::Separator();

												ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 64.0F);
												ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eSendCMDOnChatTime), 0, 15000, "\xEE\xA9\x90 %d");
												ImGui::PopItemWidth();

												ImGui::Separator();

												ImGui::PushItemWidth(500.0F);
												ImGui::InputText("Сообщение##1", &pGui->sMessages[0], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
												ImGui::SameLine();
												ImGui::InputText("Команда##1", &pGui->sCMDs[0], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
												ImGui::Separator();
												ImGui::InputText("Сообщение##2", &pGui->sMessages[1], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
												ImGui::SameLine();
												ImGui::InputText("Команда##2", &pGui->sCMDs[1], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
												ImGui::Separator();
												ImGui::InputText("Сообщение##3", &pGui->sMessages[2], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
												ImGui::SameLine();
												ImGui::InputText("Команда##3", &pGui->sCMDs[2], ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
												ImGui::PopItemWidth();

												ImGui::Separator();

												if (ImGui::Button("Очистить всё", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
													for (unsigned __int32 UI32{0}; UI32 < 3; ++UI32) {
														pGui->sMessages[UI32].clear();
														pGui->sCMDs[UI32].clear();
													}
												}

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB9\xA4 3D маркеры всегда высокие", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHeightSphere))) {
												pSAPatch->HeightSphere(pGui->getUInteger(cGui::eSyncUIntegers::eHeightSphere));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Вытягивает вверх красные сферы (3D маркеры).");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAD\x8E Не блокировать при подключении", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoConnectLock))) {
												pMPPatch->NoConnectLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectLock));
												pSAPatch->NoCameraLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoConnectLock));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет бегать по карте пока Вы подключаетесь к серверу.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA4\xA6 Не закрывать чат при показе диалога", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoCloseChatOnDialog))) {
												pMPPatch->NoCloseChatOnDialog(pGui->getUInteger(cGui::eSyncUIntegers::eNoCloseChatOnDialog));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет Вам дописать Ваше сообщение даже если сервер начал показывать диалог.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA7\xB1 Подбор пикапов в транспорте", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePickUpInVeh))) {
												pSAPatch->PickUpInVeh(pGui->getUInteger(cGui::eSyncUIntegers::ePickUpInVeh));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет Вам не выходя с транспорта подбирать пикап. Будет работать где это не проверяется.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB1\x84 Выход через /q без задержки", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuitMPNoDelay))) {
												pMPPatch->QuitMPNoDelay(pGui->getUInteger(cGui::eSyncUIntegers::eQuitMPNoDelay));
											}

											/*
											Переход.
											*/

											if (ImGui::Button("\xEE\xA6\x9C Вывести сообщение в чат")) {
												if (!pGui->sFakeMsg.empty()) {
													pMP->getChatInfo()->addColorMessage(0xFFFFFFFF, &std::move(pMain->wideToMultiByte(1251, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->sFakeMsg[0]))))[0]);
												}
											}
											ImGui::SameLine();
											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
											ImGui::InputText("##Сообщение", &pGui->sFakeMsg, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
											ImGui::PopItemWidth();

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
											if (ImGui::SliderInt("##Погода", pGui->getIntegerPtr(cGui::eSyncIntegers::eWeatherID), 0, 22, "%d \xEE\xB3\x88")) {
												cWeather::forceWeatherNow(static_cast<const __int16>(pGui->getInteger(cGui::eSyncIntegers::eWeatherID)));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Меняет погоду.");
												ImGui::EndTooltip();
											}
											if (ImGui::SliderFloat("##ИгроваяСкорость", pGui->getFloatPtr(cGui::eSyncFloats::eGameSpeed), 0.5F, 5.0F, "%.1f \xEE\xBA\xA6")) {
												const float fGameSpeed{pGui->getFloat(cGui::eSyncFloats::eGameSpeed)};
												pSAPatch->NoGameSpeedReset(fGameSpeed != 1.0F);
												*reinterpret_cast<float *>(0xB7CB64) = fGameSpeed;
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Меняет скорость игры (1.0 - обычная).");
												ImGui::EndTooltip();
											}
											ImGui::PopItemWidth();

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 142.0F);
											if (ImGui::BeginCombo("\xEE\xAA\xB2 Телепорт к игрокам", &pGui->sTPToPlayer[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {

												static bool bNone{true}; bNone = true;

												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
															class cVector3D vecPos {};

															const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
															if (pRemotePlayerData != nullptr) {
																const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
																if (pMPPed != nullptr) {
																	if (bNone) {
																		bNone = false;
																	}

																	vecPos = *pMPPed->MPEntity.pGTAEntity->Physical.Entity.Placeable.getPosition();
																} else if (pRemotePlayerData->i32GlobalMarkerLoaded) {
																	if (bNone) {
																		bNone = false;
																	}

																	const __int32 *pMarkPos{pRemotePlayerData->i32GlobalMarkerLocation};
																	vecPos.fX = static_cast<const float>(pMarkPos[0]);
																	vecPos.fY = static_cast<const float>(pMarkPos[1]);
																	vecPos.fZ = static_cast<const float>(pMarkPos[2]);
																}

																if (!bNone && !vecPos.isXYEmpty()) {
																	std::string sLabel{'[' + std::move(std::to_string(ui16PlayerID)) + "] " + pRemotePlayer->sPlayerName};
																	if (ImGui::Selectable(&sLabel[0])) {
																		cSA::teleport(pMain->getSA(), &vecPos, true, false, 1.0F);
																		pMain->getGui()->sTPToPlayer = std::move(sLabel);
																		return false;
																	} ImGui::Separator();
																}
															} return true;
														});
														break;
													}
													case cMP::eVer::e037R3: {
														pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
															class cVector3D vecPos {};

															const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
															if (pRemotePlayerData != nullptr) {
																const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
																if (pMPPed != nullptr) {
																	if (bNone) {
																		bNone = false;
																	}

																	vecPos = *pMPPed->MPEntity.pGTAEntity->Physical.Entity.Placeable.getPosition();
																} else if (pRemotePlayerData->i32GlobalMarkerLoaded) {
																	if (bNone) {
																		bNone = false;
																	}

																	const __int32 *pMarkPos{pRemotePlayerData->i32GlobalMarkerLocation};
																	vecPos.fX = static_cast<const float>(pMarkPos[0]);
																	vecPos.fY = static_cast<const float>(pMarkPos[1]);
																	vecPos.fZ = static_cast<const float>(pMarkPos[2]);
																}

																if (!bNone && !vecPos.isXYEmpty()) {
																	std::string sLabel{'[' + std::move(std::to_string(ui16PlayerID)) + "] " + pRemotePlayer->sPlayerName};
																	if (ImGui::Selectable(&sLabel[0])) {
																		cSA::teleport(pMain->getSA(), &vecPos, true, false, 1.0F);
																		pMain->getGui()->sTPToPlayer = std::move(sLabel);
																		return false;
																	} ImGui::Separator();
																}
															} return true;
														});
														break;
													} default: break;
												}

												if (bNone) {
													if (!pGui->sTPToPlayer.empty()) {
														pGui->sTPToPlayer.clear();
													} ImGui::TextUnformatted("\xEE\xAC\xB0 Поиск игроков...");
												}

												ImGui::EndCombo();
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Если телепорт не удался, то значит игрока нет на карте или в зоне прорисовки.");
												ImGui::EndTooltip();
											}
											ImGui::PopItemWidth();

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 142.0F);
											if (ImGui::BeginCombo("\xEE\xB3\xBD Следить за игроком", &pGui->sSpecPlayer[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {

												static bool bNone{true}; bNone = true;

												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														pMP->getMainStructR1()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
															const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
															if (pRemotePlayerData != nullptr) {
																const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
																if (pMPPed != nullptr) {

																	if (bNone) {
																		bNone = false;
																	}

																	std::string sLabel{'[' + std::move(std::to_string(ui16PlayerID)) + "] " + pRemotePlayer->sPlayerName};
																	if (ImGui::Selectable(&sLabel[0])) {
																		class cGui *pGui{pMain->getGui()};
																		const class cSA *pSA{pMain->getSA()};
																		class cCamera *pCamera{pSA->getCamera()};

																		pCamera->restoreWithJumpCut();
																		pSA->getPatch()->LockCameraTargetEntity((pGui->bSpectator = true));

																		class cPed *pPed{pMPPed->MPEntity.pGTAEntity};
																		class cVehicle *pVeh{pPed->getVehicle()};
																		pCamera->pTargetEntity = pVeh != nullptr && pPed->PedFlags.bInVehicle ? &pVeh->Physical.Entity : &pPed->Physical.Entity;

																		pGui->sSpecPlayer = std::move(sLabel);
																		return false;
																	} ImGui::Separator();
																}
															} return true;
														});
														break;
													}
													case cMP::eVer::e037R3: {
														pMP->getMainStructR3()->pPools->pPlayer->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
															const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
															if (pRemotePlayerData != nullptr) {
																const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
																if (pMPPed != nullptr) {

																	if (bNone) {
																		bNone = false;
																	}

																	std::string sLabel{'[' + std::move(std::to_string(ui16PlayerID)) + "] " + pRemotePlayer->sPlayerName};
																	if (ImGui::Selectable(&sLabel[0])) {
																		class cGui *pGui{pMain->getGui()};
																		const class cSA *pSA{pMain->getSA()};
																		class cCamera *pCamera{pSA->getCamera()};

																		pCamera->restoreWithJumpCut();
																		pSA->getPatch()->LockCameraTargetEntity((pGui->bSpectator = true));

																		class cPed *pPed{pMPPed->MPEntity.pGTAEntity};
																		class cVehicle *pVeh{pPed->getVehicle()};
																		pCamera->pTargetEntity = pVeh != nullptr && pPed->PedFlags.bInVehicle ? &pVeh->Physical.Entity : &pPed->Physical.Entity;

																		pGui->sSpecPlayer = std::move(sLabel);
																		return false;
																	} ImGui::Separator();
																}
															} return true;
														});
														break;
													} default: break;
												}

												if (bNone) {
													if (!pGui->sSpecPlayer.empty()) {
														pGui->sSpecPlayer.clear();
													} ImGui::TextUnformatted("\xEE\xAC\xB0 Поиск игроков...");
												}

												ImGui::EndCombo();
											}
											ImGui::PopItemWidth();
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F})), "\xEE\xB9\xAC Чтобы отключить данную функцию используйте: \"Сбросить позицию камеры\".");
												ImGui::EndTooltip();
											}

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 203.0F);
											if (ImGui::BeginCombo("\xEE\xA6\xB8 Копирование сообщений чата", &pGui->sMPChatCopy[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {

												static bool bNone{true}; bNone = true;

												const struct stChatInfo *pChatInfo{pMP->getChatInfo()};
												for (unsigned __int32 UI32{0}; UI32 < 100; ++UI32) {
													const struct stChatEntry *pChatEntry{&pChatInfo->chatEntry[UI32]};
													std::string sChatStr{pChatEntry->cText};
													if (!sChatStr.empty()) {

														if (bNone) {
															bNone = false;
														}

														std::stringstream ssHexMsgColor{};
														ssHexMsgColor <<
															std::uppercase << std::hex << pChatEntry->ulTextColor;
														std::string sMsgColor{std::move(ssHexMsgColor.str())};
														sMsgColor.erase(0, 2);

														sChatStr.insert(0, std::move('{' + std::move(sMsgColor) + '}'));

														std::string sPrefix{pChatEntry->cPrefix};
														if (!sPrefix.empty()) {
															std::stringstream ssHexPrefixColor{};
															ssHexPrefixColor <<
																std::uppercase << std::hex << pChatEntry->ulPrefixColor;
															std::string sPrefixColor{std::move(ssHexPrefixColor.str())};
															sPrefixColor.erase(0, 2);

															sChatStr.insert(0, std::move('{' + std::move(sPrefixColor) + '}' + std::move(sPrefix) + ' '));
														} sChatStr.insert(0, std::move('[' + std::move(std::to_string(UI32)) + "] "));

														sChatStr = std::move(pMain->wideToMultiByte(CP_UTF8, std::move(pMain->multiByteToWide(1251, std::move(sChatStr)))));
														if (ImGui::Selectable(&sChatStr[0])) {
															pGui->sMPChatCopy = std::move(sChatStr);
															ImGui::SetClipboardText(&pGui->sMPChatCopy[0]);
															break;
														}
													}
												}

												if (bNone) {
													if (!pGui->sMPChatCopy.empty()) {
														pGui->sMPChatCopy.clear();
													} ImGui::TextUnformatted("\xEE\xAC\xB0 Поиск сообщений...");
												}

												ImGui::EndCombo();
											}
											ImGui::PopItemWidth();

											if (ImGui::Button("\xEE\xB1\xB6 Отключиться от сервера с причиной вылета", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												ImGui::OpenPopup("Вы уверены?##0");
												ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
											}
											if (ImGui::BeginPopupModal("Вы уверены?##0", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
												if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {

													switch (cMP::SAMPVer) {
														case cMP::eVer::e037R1: {
															pMP->getMainStructR1()->pRakClientInterface->Disconnect(0);
															break;
														}
														case cMP::eVer::e037R3: {
															pMP->getMainStructR3()->pRakClientInterface->Disconnect(0);
															break;
														} default: break;
													}

													ImGui::CloseCurrentPopup();
												}
												if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xAC\xAB Переподключиться к серверу \xEE\xA9\xAF \xEE\xA9\xB1", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												ImGui::OpenPopup("Вы уверены?##1");
												ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F})), "\xEE\xB9\xAC Включите NOP входящего RPC [43] RemoveBuildingForPlayer, что бы Вас не крашило от удаления карты.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##69");
												}
											}
											if (ImGui::BeginPopupModal("Вы уверены?##1", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
												if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
													cMP::reconnect(pMP);
													ImGui::CloseCurrentPopup();
												}
												if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}
											if (ImGui::BeginPopupModal("Настройки##69", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xAC\xAB Переподключаться при кике", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eReconnectOnKick));

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (ImGui::Button("\xEE\xA5\x85 Сбросить позицию камеры", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
												if (pGui->bSpectator) {
													pSAPatch->LockCameraTargetEntity((pGui->bSpectator = false));
												} pSA->getCamera()->restoreWithJumpCut();
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Может помочь исправить расположение камеры если она у Вас забагалась.");
												ImGui::EndTooltip();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xB5\xBA Сбросить текущий интерьер", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												class cPed *pPed{pSA->getPlayerPed()};
												if (pPed != nullptr) {
													pPed->setInterior(0);
													pPed->resetEnexPtr();
												}

												class cAutomobile *pAuto{pSA->getPlayerVehicle()};
												if (pAuto != nullptr) {
													pAuto->Vehicle.setInterior(0);
												}

												cWorld::setCurrentInterior(pMain, 0);

												pSAPatch->patchEntryExitStackPosn();
												pSAPatch->patchExtraColour();
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Возвращает игру в нулевой мир (основной).");
												ImGui::EndTooltip();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xAA\xB3 Сбросить гравитацию", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												pMain->patchAddress(reinterpret_cast<void *>(0x863984), "\x6F\x12\x03\x3C", 0x4);
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Восстанавливает стандартную гравитацию игры.");
												ImGui::EndTooltip();
											}

											if (ImGui::Button("\xEE\xB8\xB3 Поджопник", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
												cSA::teleport(pSA, cSA::getPosition(pSA), false, false, 1.5F);
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xB2\x96 На Землю", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												cSA::teleport(pSA, cSA::getPosition(pSA), false, true);
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xA9\x8A Телепорт на дорогу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												class cNodeAddress nodeAddress {};
												class cPathFind *pPathFind{pSA->getPathFind()};
												class cVector3D vecPos { *pSA->getCamera()->Placeable.getPosition() };
												pPathFind->findNodeClosestToCoors(&nodeAddress, &vecPos, 0, 20000.0F, false);
												pPathFind->findNodeCoorsForScript(&vecPos, &nodeAddress);
												cSA::teleport(pSA, &vecPos, true, true, 1.0F);
											}

											if (ImGui::Button("\xEE\xA8\xBD Телепорт на маркер", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
												class cVector3D vecWayPos {};
												if (cSA::getWaypointPos(pSA, std::move(vecWayPos))) {
													cSA::teleport(pSA, &vecWayPos, true, true, 1.0F);
												}
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xB9\x9C Телепорт на гоночный маркер", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														const struct stMiscInfo037R1 *pMiscInfo{pMP->getMiscInfoR1()};
														if (pMiscInfo->ui32RacingCheckpointEnabled) {
															cSA::teleport(pSA, &pMiscInfo->vecRacingCheckpointCurrentPosition, true, true);
														} break;
													}
													case cMP::eVer::e037R3: {
														const struct stMiscInfo037R3 *pMiscInfo{pMP->getMiscInfoR3()};
														if (pMiscInfo->ui32RacingCheckpointEnabled) {
															cSA::teleport(pSA, &pMiscInfo->vecRacingCheckpointCurrentPosition, true, true);
														} break;
													} default: break;
												}
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xA8\xB9 Телепорт на чекпоинт", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												switch (cMP::SAMPVer) {
													case cMP::eVer::e037R1: {
														const struct stMiscInfo037R1 *pMiscInfo{pMP->getMiscInfoR1()};
														if (pMiscInfo->ui32CheckpointEnabled) {
															cSA::teleport(pSA, &pMiscInfo->vecCheckpointPosition, true, true);
														} break;
													}
													case cMP::eVer::e037R3: {
														const struct stMiscInfo037R3 *pMiscInfo{pMP->getMiscInfoR3()};
														if (pMiscInfo->ui32CheckpointEnabled) {
															cSA::teleport(pSA, &pMiscInfo->vecCheckpointPosition, true, true);
														} break;
													} default: break;
												}
											}

											if (ImGui::Button(pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionA) ? "\xEE\xA7\x98 Загрузить позицию 1 \xEE\xA9\xAF \xEE\xB5\xAA  \xEE\xA9\xB1" : "\xEE\xA7\x95 Сохранить позицию 1 \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionA)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh)) {
														const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
														if (pAuto != nullptr) {
															cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX1)), true);
														}
													} else {
														cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX1)), true);
													}
												} else {
													const class cVector3D *pMyPos{cSA::getPosition(pSA)};
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionA, 1);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosX1, pMyPos->fX);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosY1, pMyPos->fY);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosZ1, pMyPos->fZ);
												}
											}
											if (ImGui::IsItemHovered()) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionA) && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionA, 0);
												}

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##72");
												}
											}
											ImGui::SameLine();
											if (ImGui::Button(pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionB) ? "\xEE\xA7\x98 Загрузить позицию 2 \xEE\xA9\xAF \xEE\xB5\xAA  \xEE\xA9\xB1" : "\xEE\xA7\x95 Сохранить позицию 2 \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionB)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh)) {
														const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
														if (pAuto != nullptr) {
															cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX2)), true);
														}
													} else {
														cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX2)), true);
													}
												} else {
													const class cVector3D *pMyPos{cSA::getPosition(pSA)};
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionB, 1);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosX2, pMyPos->fX);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosY2, pMyPos->fY);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosZ2, pMyPos->fZ);
												}
											}
											if (ImGui::IsItemHovered()) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionB) && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionB, 0);
												}

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##72");
												}
											}
											ImGui::SameLine();
											if (ImGui::Button(pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionC) ? "\xEE\xA7\x98 Загрузить позицию 3 \xEE\xA9\xAF \xEE\xB5\xAA  \xEE\xA9\xB1" : "\xEE\xA7\x95 Сохранить позицию 3 \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionC)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh)) {
														const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
														if (pAuto != nullptr) {
															cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX3)), true);
														}
													} else {
														cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX3)), true);
													}
												} else {
													const class cVector3D *pMyPos{cSA::getPosition(pSA)};
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionC, 1);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosX3, pMyPos->fX);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosY3, pMyPos->fY);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosZ3, pMyPos->fZ);
												}
											}
											if (ImGui::IsItemHovered()) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionC) && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionC, 0);
												}

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##72");
												}
											}
											if (ImGui::Button(pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionD) ? "\xEE\xA7\x98 Загрузить позицию 4 \xEE\xA9\xAF \xEE\xB5\xAA  \xEE\xA9\xB1" : "\xEE\xA7\x95 Сохранить позицию 4 \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionD)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh)) {
														const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
														if (pAuto != nullptr) {
															cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX4)), true);
														}
													} else {
														cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX4)), true);
													}
												} else {
													const class cVector3D *pMyPos{cSA::getPosition(pSA)};
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionD, 1);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosX4, pMyPos->fX);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosY4, pMyPos->fY);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosZ4, pMyPos->fZ);
												}
											}
											if (ImGui::IsItemHovered()) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionD) && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionD, 0);
												}

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##72");
												}
											}
											ImGui::SameLine();
											if (ImGui::Button(pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionE) ? "\xEE\xA7\x98 Загрузить позицию 5 \xEE\xA9\xAF \xEE\xB5\xAA  \xEE\xA9\xB1" : "\xEE\xA7\x95 Сохранить позицию 5 \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionE)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh)) {
														const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
														if (pAuto != nullptr) {
															cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX5)), true);
														}
													} else {
														cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX5)), true);
													}
												} else {
													const class cVector3D *pMyPos{cSA::getPosition(pSA)};
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionE, 1);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosX5, pMyPos->fX);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosY5, pMyPos->fY);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosZ5, pMyPos->fZ);
												}
											}
											if (ImGui::IsItemHovered()) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionE) && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionE, 0);
												}

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##72");
												}
											}
											ImGui::SameLine();
											if (ImGui::Button(pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionF) ? "\xEE\xA7\x98 Загрузить позицию 6 \xEE\xA9\xAF \xEE\xB5\xAA  \xEE\xA9\xB1" : "\xEE\xA7\x95 Сохранить позицию 6 \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionF)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh)) {
														const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
														if (pAuto != nullptr) {
															cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX6)), true);
														}
													} else {
														cSA::teleport(pSA, reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX6)), true);
													}
												} else {
													const class cVector3D *pMyPos{cSA::getPosition(pSA)};
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionF, 1);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosX6, pMyPos->fX);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosY6, pMyPos->fY);
													pGui->setFloat(cGui::eSyncFloats::eSavedPosZ6, pMyPos->fZ);
												}
											}
											if (ImGui::IsItemHovered()) {
												if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionF) && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Middle)) {
													pGui->setUInteger(cGui::eSyncUIntegers::eSavedPositionF, 0);
												}

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##72");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##72", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xB0\x8A Загружать только в транспорте", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSavedPosOnlyVeh));

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (ImGui::Button("\xEE\xAD\x94 Разморозка \xEE\xA9\xB1", std::move(ImVec2{-0.1F, 25.0F}))) {
												cSA::unfreeze(pMain);
											}

											if (ImGui::Button("\xEE\xA9\xAA Очистить чат", std::move(ImVec2{-0.1F, 25.0F}))) {
												struct stChatInfo *pChatInfo{pMP->getChatInfo()};
												std::memset(&pChatInfo->chatEntry, 0x0, sizeof(struct stChatEntry) * 100);
												pChatInfo->i32Redraw = 0;
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Визуально очищает все 100 слотов чата.");
												ImGui::EndTooltip();
											}

											ImGui::PopStyleVar();
											ImGui::EndChild();
										}

										ImGui::EndTabItem();
									}

									/* VEH */
									if (ImGui::BeginTabItem("\t\t\t\t\t\t \xEE\xB0\x8A", nullptr, ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
										if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
											pGui->bResetScroll = true;
										}
										if (ImGui::BeginChild("SLIDER", std::move(ImVec2{}), false, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
											if (pGui->bResetScroll) {
												ImGui::SetScrollY(ImGui::GetScrollY() == 0 ? ImGui::GetScrollMaxY() : 0);
											}

											ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

											if (ImGui::Checkbox("\xEE\xB0\x94 Езда по воде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDriveOnWater))) {
												pSAPatch->DriveOnWater(pGui->getUInteger(cGui::eSyncUIntegers::eDriveOnWater));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xB0\x90 Не падать с байка \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoBikeFall));
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##6");
											}
											if (ImGui::BeginPopupModal("Настройки##6", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::Checkbox("\xEE\xA4\xB7 Падать в воде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBikeFallWater));

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB6\xB2 Дрифт мод для Elegy", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eElegyDriftMode))) {
												pSA->getHandlingDataMgr()->makeElegyDriftMode(pGui->getUInteger(cGui::eSyncUIntegers::eElegyDriftMode));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Изменяет параметры управления машины Elegy под длинный дрифт.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB3\x8A Всегда дым из под колёс при дрифте", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysDriftSmoke))) {
												pSAPatch->AlwaysDriftSmoke(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysDriftSmoke));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Возвращает дым из под колёс при средний скорости.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xBB\x87 Антиугон", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eStayInCarOnJack));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не даёт никому забрать Ваш транспорт. Человек который его попытается взять, будет видеть как Вы зависли после выхода с транспорта - ДО того как Вы или игрок выйдут с него.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB5\xB8 Все двери открыты", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoClosedDoors))) {
												pSAPatch->NoClosedDoors(pGui->getUInteger(cGui::eSyncUIntegers::eNoClosedDoors));
												pMPPatch->NoClosedDoors(pGui->getUInteger(cGui::eSyncUIntegers::eNoClosedDoors));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Открывает все двери транспорта.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB0\x87 Отключить лимит высоты для воздушного транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoPlaneHeightLimit))) {
												pSAPatch->NoPlaneHeightLimit(pGui->getUInteger(cGui::eSyncUIntegers::eNoPlaneHeightLimit));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Можно будет летать на любой высоте.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAD\xAC Разрешить всегда входить/выходить в/из транспорт\'а", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysVehEnterExit))) {
												pSAPatch->AlwaysVehEnterExit(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysVehEnterExit));
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xAD\x8C Отключить анимацию открытия дверей", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoOpenDoorAnim));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет быстрее садиться/выходить в/из транспорта.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xB9\xBB Отключить коллизию транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoVehCollision));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет проходить сквозь транспорт.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB1\x8C Не отключать двигатель в воде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eWaterProofEngine))) {
												pSAPatch->WaterProofEngine(pGui->getUInteger(cGui::eSyncUIntegers::eWaterProofEngine));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\x85 Летать на машинах (RIPAZHA)", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eRipazha))) {
												pSAPatch->Ripazha(pGui->getUInteger(cGui::eSyncUIntegers::eRipazha));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Полностью возвращает и активирует чит-код RIPAZHA в SA-MP.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBA\xB6 Не закручивать несущий винт вертолёта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoBladeRotating))) {
												pSAPatch->NoBladeRotating(pGui->getUInteger(cGui::eSyncUIntegers::eNoBladeRotating));
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xAF\xA2 СпидХак \xEE\xA9\xAF \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSpeedHack));
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Ускоряет транспорт в котором Вы находитесь при нажатии указанной клавиши.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##13");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##13", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Ускорение", pGui->getFloatPtr(cGui::eSyncFloats::eSpeedHack), 1.00F, 2.00F, "\xEE\xAF\x9E %.2f");
												ImGui::Separator();
												ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eSpeedHackTime), 30, 500, "\xEE\xA9\x90 %d");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAF\xB6 Дневные ходовые огни", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDayVehLights))) {
												pSAPatch->DayVehLights(pGui->getUInteger(cGui::eSyncUIntegers::eDayVehLights));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Можно будет видеть фары днём как свои так и игроков. Другие игроки этого видеть не будут.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xAF\xB9 Стробоскопы \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eStrobeLights));
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Мигает фарами. Видят все игроки.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##14");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##14", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderInt("Задержка", pGui->getIntegerPtr(cGui::eSyncIntegers::eStrobeLightsTime), 30, 3000, "\xEE\xA9\x90 %d");
												ImGui::Separator();
												if (ImGui::BeginCombo("\xEE\xAD\x9E Режим", &std::move(std::get<1>(pGui->tStrobeLightsMode))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
													std::all_of(pGui->vecStrobeLightsModes.cbegin(), pGui->vecStrobeLightsModes.cend(), [&pGui](const std::tuple<const cGui::eStrobeMode, const std::string> tStrobeLightsMode) -> const bool {
														if (ImGui::Selectable(&std::move(std::get<1>(tStrobeLightsMode))[0])) {
															pGui->tStrobeLightsMode = std::move(tStrobeLightsMode);
															return false;
														} ImGui::Separator();
														return true;
													});
													ImGui::EndCombo();
												}
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB2\xBB Длинный свет фар \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eLongLights))) {
												pSAPatch->LongLights(pGui->getUInteger(cGui::eSyncUIntegers::eLongLights), pGui->getFloatPtr(cGui::eSyncFloats::eLongLights));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Так же отключает проверку дистанции прорисовки фар. Можно будет видеть фары на огромном расстоянии.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##15");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##15", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Длина", pGui->getFloatPtr(cGui::eSyncFloats::eLongLights), 5.0F, 10.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB3\x98 Яркость фар \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBrightnessLights))) {
												pSAPatch->BrightnessLights(pGui->getUInteger(cGui::eSyncUIntegers::eBrightnessLights), static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBrightnessLights)));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##16");
											}
											if (ImGui::BeginPopupModal("Настройки##16", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												if (ImGui::SliderInt("Яркость", pGui->getIntegerPtr(cGui::eSyncIntegers::eBrightnessLights), 10, 255)) {
													if (pGui->getUInteger(cGui::eSyncUIntegers::eBrightnessLights)) {
														pSAPatch->BrightnessLights(1, static_cast<const unsigned __int8>(pGui->getInteger(cGui::eSyncIntegers::eBrightnessLights)));
													}
												}
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB1\xAC Разрешить стрелять с водительского места", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFullAiming))) {
												pSAPatch->FullAiming(pGui->getUInteger(cGui::eSyncUIntegers::eFullAiming));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет стрелять и убивать игроков с водительского места.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB2\x90 Не выбрасывать из транспорта после провала в текстуры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoLeaveVehUnderWorld))) {
												pSAPatch->NoLeaveVehUnderWorld(pGui->getUInteger(cGui::eSyncUIntegers::eNoLeaveVehUnderWorld), pGui->getFloatPtr(cGui::eSyncFloats::eVehUnderWorldDistance));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC В игре если провалиться в транспорте ниже 100 метров под Землю, то игра может вернуть Вас обратно, но иногда может телепортировать Вас без транспорта. Теперь всегда с транспортом.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB3\x82 Рисовать эффект дождя на транспорте на любой скорости", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysRainOnVeh))) {
												pSAPatch->AlwaysRainOnVeh(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysRainOnVeh));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Капли от дождя будут видны даже если Вы едете.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB3\x95 Не изменять управление транспорта при дожде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoWetRoads))) {
												pSAPatch->NoWetRoads(pGui->getUInteger(cGui::eSyncUIntegers::eNoWetRoads));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Когда будет идти дождь Ваш транспорт не будет этого замечать.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB9\x89 Выходить из перевернутого транспорта как из обычного", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoUpsideDownAnim))) {
												pSAPatch->NoUpsideDownAnim(pGui->getUInteger(cGui::eSyncUIntegers::eNoUpsideDownAnim));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Вместо анимации вылезать с перевернутого транспорта, анимация обычного выхода. Ускоряет сам процесс.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB3\xA8 Не давать машине взлетать от сильного удара", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDisableCarMoveZ))) {
												pSAPatch->DisableCarMoveZ(pGui->getUInteger(cGui::eSyncUIntegers::eDisableCarMoveZ));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Если попасть в ДТП на большой скорости, то транспорт не откинет от удара.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xB0\x8F Не расцеплять прицеп на фуре", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoTrailerBreak));

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xBB\xB8 Круиз-контроль", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eCruiseControl));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает понижение скорости от понижения передачи КПП.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xB7\xA7 Гидравлика от Монстра", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eMonsterHyd));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC При использовании гидравлики Ваш транспорт будет куда выше подниматься.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAA\x98 Широкие колёса \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFatWheels))) {
												pSAPatch->FatWheels(pGui->getUInteger(cGui::eSyncUIntegers::eFatWheels), pGui->getFloatPtr(cGui::eSyncFloats::eFatWheels));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##46");
											}
											if (ImGui::BeginPopupModal("Настройки##46", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Ширина", pGui->getFloatPtr(cGui::eSyncFloats::eFatWheels), 0.5F, 5.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAA\xAF Стенс стиль \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eStanceStyle))) {
												pSAPatch->StanceStyle(pGui->getUInteger(cGui::eSyncUIntegers::eStanceStyle), pGui->getFloatPtr(cGui::eSyncFloats::eStanceStyle));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Изменяет Ваши колёса транспорта под стиль \"Stance\".");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##45");
												}

											}
											if (ImGui::BeginPopupModal("Настройки##45", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Стенс", pGui->getFloatPtr(cGui::eSyncFloats::eStanceStyle), -0.5F, 0.4F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xA4\xA1 Двойное ускорение", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDoubleBoost));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Позволяет быстро ехать не ускоряя скорость машины для сервера. Данная функция не даёт работать \"Езда по воде\".");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBA\x81 Прижимать автомобиль к Земле \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePressAuto))) {
												pSAPatch->PressAuto(pGui->getUInteger(cGui::eSyncUIntegers::ePressAuto), pGui->getFloatPtr(cGui::eSyncFloats::ePressAuto));
											}
											if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
												ImGui::OpenPopup("Настройки##47");
											}
											if (ImGui::BeginPopupModal("Настройки##47", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Прижим", pGui->getFloatPtr(cGui::eSyncFloats::ePressAuto), 0, 1.00F, "%.2f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB0\x8B Усиленная рулевая тяга", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::ePowerSteering))) {
												pSAPatch->PowerSteering(pGui->getUInteger(cGui::eSyncUIntegers::ePowerSteering));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Делает поворот на машинах и байках острым, что позволяет заходить в повороты на высокой скорости.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xA4\x97 Поверхность всегда асфальт", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eAlwaysAsphalt))) {
												pSAPatch->AlwaysAsphalt(pGui->getUInteger(cGui::eSyncUIntegers::eAlwaysAsphalt));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не изменяет управление машины вне дороги.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xAE\xA8 Прыжок \xEE\xA9\xAF \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eVehJump));
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет прыгать в транспорте при нажатии указанной клавиши.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##49");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##49", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Высота", pGui->getFloatPtr(cGui::eSyncFloats::eVehJump), 0.1F, 1.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xAD\x99 Отключить опасный тюнинг", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoTuning));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает опасный тюнинг в игре который приводит к вылетам.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAC\xA8 Скорость поворота руля \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eSteeringWheelSpeed))) {
												pSAPatch->SteeringWheelSpeed(pGui->getUInteger(cGui::eSyncUIntegers::eSteeringWheelSpeed), pGui->getFloatPtr(cGui::eSyncFloats::eSteeringWheelSpeed));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет изменить скоростью с которой Ваш персонаж будет вращать руль.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##54");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##54", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Скорость", pGui->getFloatPtr(cGui::eSyncFloats::eSteeringWheelSpeed), 0.1F, 1.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB2\x9A Выворот колёс \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eEversionOfWheels))) {
												pSAPatch->EversionOfWheels(pGui->getUInteger(cGui::eSyncUIntegers::eEversionOfWheels), pGui->getFloatPtr(cGui::eSyncFloats::eEversionOfWheels));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет изменить выворот колёс, что отразится на управление.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##55");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##55", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Выворот", pGui->getFloatPtr(cGui::eSyncFloats::eEversionOfWheels), 0.005F, 0.030F, "%.3f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB7\xBC Всегда выворачивать руль", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoSteerBlock))) {
												pSAPatch->NoSteerBlock(pGui->getUInteger(cGui::eSyncUIntegers::eNoSteerBlock));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает блокировку руля на скорости.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB6\xAD Ускорение при пробуксовке \xEE\xA9\xAF", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBoostOnDrift))) {
												pSAPatch->BoostOnDrift(pGui->getUInteger(cGui::eSyncUIntegers::eBoostOnDrift), pGui->getFloatPtr(cGui::eSyncFloats::eBoostOnDrift));
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Ускоряет Вашу машину при пробуксовке или дрифте на указанное значение.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##59");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##59", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::SliderFloat("Ускорение", pGui->getFloatPtr(cGui::eSyncFloats::eBoostOnDrift), 1.5F, 50.0F, "%.1f");
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB5\x81 Быстрый вход в прыжок на велосипеде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuickBikeHop))) {
												pSAPatch->QuickBikeHop(pGui->getUInteger(cGui::eSyncUIntegers::eQuickBikeHop));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет ускорить вход в анимацию прыжка при прыжке на велосипеде.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											ImGui::Checkbox("\xEE\xAE\x93 Тормоз \xEE\xA9\xB1", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eQuickStop));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Моментально останавливает Ваше транспортное средство при нажатии указанной клавиши.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xBA\x96 Спиннер в воздухе при повороте на велосипеде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eBikeSpinner))) {
												pSAPatch->BikeSpinner(pGui->getUInteger(cGui::eSyncUIntegers::eBikeSpinner));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет совершать вращение когда велосипед находится в воздухе и руль повернут в сторону.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB4\xB9 Вытаскивать руку из окна транспорта", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eArmOnWindow))) {
												pSAPatch->ArmOnWindow(pGui->getUInteger(cGui::eSyncUIntegers::eArmOnWindow));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет класть руку на окно когда Вы не управляете транспортом.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xAA\xB7 Не тормозить транспорт при невалидном выходе игроков", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoVehStopOnPedLeave))) {
												pSAPatch->NoVehStopOnPedLeave(pGui->getUInteger(cGui::eSyncUIntegers::eNoVehStopOnPedLeave));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Исправляет баг когда игрок сбивал анимацию или вышел с игры на пассажирском сидении, то машина останавливалась.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xBA\xBC Статичное движение камеры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eStaticVehCamera))) {
												pSAPatch->StaticVehCamera(pGui->getUInteger(cGui::eSyncUIntegers::eStaticVehCamera));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Не разворачивает камеру когда транспорт начал движение.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB5\xA2 Оставлять автомобиль с вывернутыми колесами", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoVehWheelReset))) {
												pSAPatch->NoVehWheelReset(pGui->getUInteger(cGui::eSyncUIntegers::eNoVehWheelReset));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет после выхода из автомобиля оставить колёса так, как они стоят.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xB4\xA8 Не наклонять автомобиль в воздухе", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoVehInAirRotate))) {
												pSAPatch->NoVehInAirRotate(pGui->getUInteger(cGui::eSyncUIntegers::eNoVehInAirRotate));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает имитацию наклона автомобиля при нахождении в воздухе.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB9\x85 Наклонять автомобиль при повороте", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eVehRLRotate))) {
												pSAPatch->VehRLRotate(pGui->getUInteger(cGui::eSyncUIntegers::eVehRLRotate));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Имитирует наклон автомобиля при повороте.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAD\xB9 Неограниченные прыжки на велосипеде", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoBikeJumpLimit))) {
												pSAPatch->NoBikeJumpLimit(pGui->getUInteger(cGui::eSyncUIntegers::eNoBikeJumpLimit));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет совершать прыжки в воздухе, а так же прыгать на заднем и переднем колесе.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xB9\xB0 Усиленные отражения", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eMoreVehReflection))) {
												pSAPatch->MoreVehReflection(pGui->getUInteger(cGui::eSyncUIntegers::eMoreVehReflection));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Лучше работает на нестандартном транспорте.");
												ImGui::EndTooltip();
											}

											ImGui::Separator();
											if (ImGui::Checkbox("\xEE\xAF\x9F Не блокировать скорость в особых местах", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoSpeedLock))) {
												pSAPatch->NoSpeedLock(pGui->getUInteger(cGui::eSyncUIntegers::eNoSpeedLock));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Отключает снижение скорости транспорта в особых местах на карте игры.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											if (ImGui::Checkbox("\xEE\xA4\xAE Покраска Pay \'N\' Spray когда кошелёк пуст", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eFreePayNSpray))) {
												pSAPatch->FreePayNSpray(pGui->getUInteger(cGui::eSyncUIntegers::eFreePayNSpray));
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Сеть Pay \'N\' Spray больше не будет требовать оплачивать свои услуги когда у Вас нет денег.");
												ImGui::EndTooltip();
											}

											/*
											Переход.
											*/

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 137.0F);
											if (ImGui::BeginCombo("\xEE\xAA\xB2 Телепорт ТС к себе", &pGui->sVehTeleporter[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {

												static bool bNone{true}; bNone = true;

												cPools::getVehiclePool()->forAllVehs([](class cAutomobile *pAuto) -> bool {
													if (pAuto->Vehicle.getDriver() == nullptr) {
														if (bNone) {
															bNone = false;
														}

														std::string sLabel{std::move('[' + std::move(std::to_string(reinterpret_cast<const unsigned __int32>(pAuto))) + " | " + std::move(std::to_string(pAuto->Vehicle.getSubClass())) + ']')};
														if (ImGui::Selectable(&sLabel[0])) {
															const class cSA *pSA{pMain->getSA()};
															class cCamera *pCamera{pSA->getCamera()};

															class cVector3D vecResult {};
															const class cVector3D vecPosMult { 0, 5.0F + cWorld::getDistanceBetweenTwoPoints(cSA::getPosition(pSA), &pCamera->vecGameCamPos), 20.0F };
															cVector3D::multiply3x3(&vecResult, &pCamera->Placeable.getMatrix()->Matrix, &vecPosMult);
															vecResult += pCamera->vecGameCamPos;
															vecResult.fZ = cWorld::findGroundZFor3DCoord(&vecResult) + 0.5F;
															pAuto->Vehicle.Physical.Entity.Placeable.setPosition(&vecResult);

															pMain->getGui()->sVehTeleporter = std::move(sLabel);
															return false;
														} ImGui::Separator();
													} return true;
												});

												if (bNone) {
													if (!pGui->sVehTeleporter.empty()) {
														pGui->sVehTeleporter.clear();
													} ImGui::TextUnformatted("\xEE\xAC\xB0 Поиск транспорта...");
												}

												ImGui::EndCombo();
											}
											ImGui::PopItemWidth();

											if (ImGui::Button("\xEE\xAD\xB4 Полное здоровье транспорта", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
												class cAutomobile *pAuto{pSA->getPlayerVehicle()};
												if (pAuto != nullptr) {
													pAuto->Vehicle.setHealth(1000.0F);
												}
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Устанавливает 1000 ХП транспорту и не ремонтирует компоненты.");
												ImGui::EndTooltip();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xAD\xA9 Отремонтировать", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
												cSA::fixAnyVeh(pSA->getPlayerVehicle());
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Ремонтирует компоненты, но не восстанавливает ХП.");
												ImGui::EndTooltip();
											}
											ImGui::SameLine();
											if (ImGui::Button("\xEE\xAE\x85 Пробить задние колёса", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
												if (pAuto != nullptr) {
													class cDamageManager *pDamageManager{pAuto->getDamageManager()};
													if (pDamageManager != nullptr) {
														pDamageManager->ui8LeftFrontWheelsStatus = 1;
														pDamageManager->ui8RightFrontWheelsStatus = 1;
													}
												}
											}

											if (ImGui::Button("\xEE\xAD\x8B Завести двигатель \xEE\xA9\xAF", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												class cAutomobile *pAuto{pSA->getPlayerVehicle()};
												if (pAuto != nullptr) {
													pAuto->Vehicle.setEngineState(true);
												}
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Если двигатель не удалось завести, то стоит попробовать включить патч и повторить.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##5");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##5", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												if (ImGui::Checkbox("\xEE\xAD\xA0 Патч включения/отключения двигателя", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoSetEngineState))) {
													pMPPatch->NoSetEngineState(pGui->getUInteger(cGui::eSyncUIntegers::eNoSetEngineState));
												}

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (ImGui::Button("\xEE\xAA\xB4 Флип \xEE\xA9\xB1", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
												cSA::flipVeh(&pSA->getPlayerVehicle()->Vehicle);
											}
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Переворачивает Ваше транспортное средство.");
												ImGui::EndTooltip();
											}

											ImGui::PopStyleVar();
											ImGui::EndChild();
										}

										ImGui::EndTabItem();

									}

									ImGui::EndTabBar();
								}

								ImGui::EndTabItem();
							}

							if (ImGui::BeginTabItem(LANG_RUS ? "   Настройки" : "    Settings", nullptr, !pGui->bForceTabSelected ? ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing | ImGuiTabItemFlags_::ImGuiTabItemFlags_SetSelected : ImGuiTabItemFlags_::ImGuiTabItemFlags_Trailing)) {
								if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
									pGui->bResetScroll = true;
								}
								if (ImGui::BeginChild("SLIDER", std::move(ImVec2{}), false, ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar)) {
									if (pGui->bResetScroll) {
										ImGui::SetScrollY(ImGui::GetScrollY() == 0 ? ImGui::GetScrollMaxY() : 0);
									}

									ImGui::PushStyleVar(ImGuiStyleVar_::ImGuiStyleVar_FramePadding, std::move(ImVec2{4.0F, 4.0F}));

									if (ImGui::Checkbox("\xEE\xAD\xA5 Скрывать плагин в папке с игрой", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHideFPFile))) {
										pMain->hideModuleFile(*pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHideFPFile), cMain::hModule);
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Устанавливает скрытые атрибуты для файла плагина. Отключите показ скрытых файлов в Windows, чтобы полностью скрыть плагин в папке с игрой.");
										ImGui::EndTooltip();
									}

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xBA\xAB Рисовать финальный худ", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDrawFinalHud));
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextUnformatted("\xEE\xB9\xAC Рисовать HUD проекта. Так же можно будет видеть FPS и окно ImGui с информацией.");
										ImGui::EndTooltip();
									}

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xA9\xB0 Не использовать горячие клавиши", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDisableHotKeys));

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xB9\x8B Не проверять блокировку ввода в горячих клавишах", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoCheckInputLock));

									ImGui::Separator();
									ImGui::Checkbox("\xEE\xBA\x96 Не ограничивать размеры окна", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eDisableWndConstSize));

									ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
									ImGui::Checkbox("\xEE\xA4\xBD Не рисовать фон в меню", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eNoBackGroundImage));

									if (!pGui->bPanic) {
										if (!pGui->bPromoCode) {
											ImGui::Separator();
											ImGui::Checkbox("\xEE\xB9\x8E Разрешить переключать профили по цифрам на клавиатуре", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eProfileOnNumbers));
											if (ImGui::IsItemHovered()) {
												ImGui::BeginTooltip();
												ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Только для первых 5 профилей в списке.");
												ImGui::EndTooltip();
											}

											ImGui::SameLine(ImGui::GetContentRegionAvail().x / 2.0F);
											ImGui::Checkbox("\xEE\xAA\xA2 Перезаписывать выбранный профиль при выходе из игры", pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eOnExitSaveProfile));

											ImGui::Separator();

											if (ImGui::BeginListBox("##Профили", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 150.0F}))) {
												unsigned __int32 ui32Iterator{1};
												std::for_each(pGui->vecProfiles.cbegin(), pGui->vecProfiles.cend(), [&pGui, &ui32Iterator](const std::string sProfile) -> void {
													if (ImGui::Selectable(&((ui32Iterator < 6 && pGui->getUInteger(cGui::eSyncUIntegers::eProfileOnNumbers) ? "\xEE\xB9\x8E " : "") + std::move(sProfile))[0], ui32Iterator == pGui->ui32SelectedProfile)) {
														pGui->ui32SelectedProfile = ui32Iterator;
													} ++ui32Iterator;
													return;
												});

												ImGui::EndListBox();
											}

											ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 178.0F);
											if (ImGui::InputText("\xEE\xA6\xAA Добавить новый профиль", &pGui->sNewProfileSlot, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter | ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsNoBlank, [](ImGuiInputTextCallbackData *) -> __int32 {
												return pMain->getGui()->sNewProfileSlot.length() > 32;
											})) {
												if (!pGui->sNewProfileSlot.empty()) {
													pGui->addProfile();
													pGui->sNewProfileSlot.clear();
												}
											}
											ImGui::PopItemWidth();

											if (pGui->ui32SelectedProfile) {
												if (ImGui::Button("\xEE\xAA\x9D Перезаписать профиль", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
													ImGui::OpenPopup("Вы уверены?##0");
													ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
												}
												if (ImGui::BeginPopupModal("Вы уверены?##0", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
													if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
														pGui->syncProfile();
														ImGui::CloseCurrentPopup();
													}
													if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
														ImGui::CloseCurrentPopup();
													}

													ImGui::EndPopup();
												}
												ImGui::SameLine();
												if (ImGui::Button("\xEE\xAB\xBE Загрузить профиль", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
													ImGui::OpenPopup("Вы уверены?##1");
													ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
												}
												if (ImGui::BeginPopupModal("Вы уверены?##1", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
													if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
														pGui->bCustomProfile = false;
														pGui->updateProfile(pGui->wsProjectUserName, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->vecProfiles[pGui->ui32SelectedProfile - 1][0])));
														ImGui::CloseCurrentPopup();
													}
													if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
														ImGui::CloseCurrentPopup();
													}

													ImGui::EndPopup();
												}
												ImGui::SameLine();
												if (ImGui::Button("\xEE\xAA\x99 Удалить профиль", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
													ImGui::OpenPopup("Вы уверены?##2");
													ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
												}
												if (ImGui::BeginPopupModal("Вы уверены?##2", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
													if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
														pGui->popProfile();
														ImGui::CloseCurrentPopup();
													}
													if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
														ImGui::CloseCurrentPopup();
													}

													ImGui::EndPopup();
												}
											}

											if (ImGui::Button("\xEE\xBC\x95 Загрузить профиль по нику \xEE\xA9\xAF", std::move(ImVec2{-0.1F, 25.0F}))) {
												if (!pGui->sCustomProfileName.empty() && !pGui->sCustomProfileSlot.empty()) {
													pGui->bCustomProfile = true;
													pGui->updateProfile(std::move(pMain->multiByteToWide(CP_UTF8, &pGui->sCustomProfileName[0])), std::move(pMain->multiByteToWide(CP_UTF8, &pGui->sCustomProfileSlot[0])));

												}
											}
											if (ImGui::IsItemHovered()) {

												ImGui::BeginTooltip();
												ImGui::TextUnformatted("\xEE\xB9\xAC Позволяет загрузить Вам профиль пользователя проекта по его нику в базе данных.");
												ImGui::EndTooltip();

												if (ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Right)) {
													ImGui::OpenPopup("Настройки##78");
												}
											}
											if (ImGui::BeginPopupModal("Настройки##78", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {

												ImGui::PushItemWidth(420.0F);
												ImGui::InputText("Ник", &pGui->sCustomProfileName, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter | ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsNoBlank, [](ImGuiInputTextCallbackData *) -> __int32 {
													return pMain->getGui()->sCustomProfileName.length() > 64;
												});
												ImGui::InputText("Профиль", &pGui->sCustomProfileSlot, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter | ImGuiInputTextFlags_::ImGuiInputTextFlags_CharsNoBlank, [](ImGuiInputTextCallbackData *) -> __int32 {
													return pMain->getGui()->sCustomProfileSlot.length() > 32;
												});
												ImGui::PopItemWidth();

												if (!ImGui::IsWindowHovered(ImGuiHoveredFlags_::ImGuiHoveredFlags_AllowWhenBlockedByPopup) && !ImGui::IsAnyItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_::ImGuiMouseButton_Left)) {
													ImGui::CloseCurrentPopup();
												}

												ImGui::EndPopup();
											}

											if (pGui->bCustomProfile) {
												ImGui::Separator();
												ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.60F);
												ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Загружен профиль по нику!");
											}
										} else {
											ImGui::Separator();
											ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.75F);
											ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Профили недоступны используя промокод!");
										}
									} else {
										ImGui::Separator();
										ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.75F);
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC В режиме паники профили недоступны!");
									}

									ImGui::Separator();

									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 55.0F);
									if (ImGui::BeginCombo("\xEE\xA4\xB2 Темы", &std::move(std::get<1>(pGui->tThemeMode))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
										std::all_of(pGui->vecThemesModes.cbegin(), pGui->vecThemesModes.cend(), [&pGui](const std::tuple<const cGui::eThemeMode, const std::string> tThemeMode) -> const bool {
											if (ImGui::Selectable(&std::move(std::get<1>(tThemeMode))[0])) {
												pGui->tThemeMode = std::move(tThemeMode);
												pGui->setTheme(std::get<0>(tThemeMode));
												return false;
											} ImGui::Separator();
											return true;
										});
										ImGui::EndCombo();
									}
									ImGui::PopItemWidth();

									ImGui::Separator();

									ImGui::InputTextMultiline("##Новости", &pGui->sNews, std::move(ImVec2{-0.1F, 150.0F}), ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly);
									if (ImGui::Button("\xEE\xA5\xBB Обновить новости", std::move(ImVec2{-0.1F, 25.0F}))) {
										pGui->updateNews();
									}

									if (!pGui->bPromoCode) {
										ImGui::Separator();

										ImGui::InputTextMultiline("##Чат", &pGui->sChat, std::move(ImVec2{-0.1F, 150.0F}), ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly);
										if (pGui->bChatJustUpdated) {
											pGui->bChatJustUpdated = false;

											ImGui::BeginChild("##Чат");
											ImGui::SetScrollY(ImGui::GetScrollMaxY());
											ImGui::EndChild();
										}
										ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 92.0F);
										if (ImGui::InputText("\xEE\xBB\xB4 Сообщение", &pGui->sChatInput, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_EnterReturnsTrue | ImGuiInputTextFlags_::ImGuiInputTextFlags_CallbackCharFilter, [](ImGuiInputTextCallbackData *) -> __int32 {
											return pMain->getGui()->sChatInput.length() > 128;
										})) {
											if (!pGui->sChatInput.empty()) {
												pGui->addChat();
												pGui->sChatInput.clear();
											} ImGui::SetKeyboardFocusHere(-1);
										}
										ImGui::PopItemWidth();
										if (ImGui::Button("\xEE\xA9\xAA Очистить чат", std::move(ImVec2{-0.1F, 25.0F}))) {
											pGui->sChat.clear();
										}
										if (ImGui::IsItemHovered()) {
											ImGui::BeginTooltip();
											ImGui::Text("\xEE\xB9\xAC Всего %d строк.", std::count(pGui->sChat.cbegin(), pGui->sChat.cend(), '\n'));
											ImGui::EndTooltip();
										}
									} else {
										ImGui::Separator();
										ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.75F);
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Чат недоступен используя промокод!");
									}

									ImGui::Separator();

									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 59.0F);
									if (ImGui::BeginCombo("\xEE\xA5\x91 Радио", &std::move(std::get<0>(pGui->vecRadios[pGui->getInteger(cGui::eSyncIntegers::eRadioID)]))[0], ImGuiComboFlags_::ImGuiComboFlags_HeightLargest)) {
										unsigned __int8 ui8Iterator{0};
										std::all_of(pGui->vecRadios.cbegin(), pGui->vecRadios.cend() - 1, [&pGui, &pWinAPIFuncs, &ui8Iterator](const std::tuple<const std::string, const std::string> tRadio) -> const bool {
											std::string sRadio{std::move(std::get<0>(tRadio))};
											if (ImGui::Selectable(ui8Iterator == pGui->getInteger(cGui::eSyncIntegers::eRadioID) ? &("\xEE\xA5\x95 " + sRadio)[0] : &sRadio[0])) {
												pGui->releaseRadio();
												pWinAPIFuncs->bassSetConfig(11 /* BASS_CONFIG_NET_TIMEOUT */, 3000);
												pGui->hCurrentRadioStream = pWinAPIFuncs->bassStreamCreateURL(&std::move(std::get<1>(tRadio))[0], 0, 0, nullptr, nullptr);
												if (pGui->hCurrentRadioStream != nullptr) {
													pGui->setInteger(cGui::eSyncIntegers::eRadioID, ui8Iterator);
													pWinAPIFuncs->bassChannelPlay(pGui->hCurrentRadioStream, 0);
												} return false;
											} ++ui8Iterator;
											ImGui::Separator();
											return true;
										});
										ImGui::EndCombo();
									}
									ImGui::PopItemWidth();
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Если станция не включилась, то возможно стоит попробовать ещё раз. Стоит проверить звук радио в настройках игры. Иначе станция может быть отключена.");
										ImGui::EndTooltip();
									}

									if (ImGui::Button("\xEE\xB6\x85 Запустить станцию")) {
										if (!pGui->sRadioCustomURL.empty()) {
											pGui->releaseRadio();
											pWinAPIFuncs->bassSetConfig(11 /* BASS_CONFIG_NET_TIMEOUT */, 3000);
											pGui->hCurrentRadioStream = pWinAPIFuncs->bassStreamCreateURL(&pGui->sRadioCustomURL[0], 0, 0, nullptr, nullptr);
											if (pGui->hCurrentRadioStream != nullptr) {
												pGui->setInteger(cGui::eSyncIntegers::eRadioID, pGui->vecRadios.size() - 1);
												pWinAPIFuncs->bassChannelPlay(pGui->hCurrentRadioStream, 1);
											}
										}
									}
									ImGui::SameLine();
									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 41.0F);
									ImGui::InputText("Адрес", &pGui->sRadioCustomURL, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll);
									ImGui::PopItemWidth();

									if (ImGui::Button("\xEE\xA5\x94 Узнать название трека")) {
										if (pGui->hCurrentRadioStream != nullptr) {
											const char *pTagMeta{pWinAPIFuncs->bassChannelGetTags(pGui->hCurrentRadioStream, 5 /* BASS_TAG_META */)};
											if (pTagMeta != nullptr) {
												pGui->sRadioMusicName = pTagMeta + 13;
												pGui->sRadioMusicName.erase(pGui->sRadioMusicName.find_first_of("\';"));
											} else {
												pGui->sRadioMusicName.clear();
											}
										}
									}
									ImGui::SameLine();
									ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x - 61.0F);
									ImGui::InputText("Название", &pGui->sRadioMusicName, ImGuiInputTextFlags_::ImGuiInputTextFlags_AutoSelectAll | ImGuiInputTextFlags_::ImGuiInputTextFlags_ReadOnly);
									ImGui::PopItemWidth();

									if (ImGui::Button("\xEE\xA6\x8A Остановить радио \xEE\xA9\xB1", std::move(ImVec2{-0.1F, 25.0F}))) {
										pGui->releaseRadio();
									}

									ImGui::Separator();

									if (!pGui->getUInteger(cGui::eSyncUIntegers::eDisableHotKeys)) {
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA6\x97 Клавиша меню" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 4.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eMenu;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyMenu2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xBB\xB9 Клавиша паники" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::ePanic;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyPanic2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xB0\x97 Клавиша АирБрейк" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eAirBrake;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyAirBrake2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAE\xA8 Клавиша Прыжок" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eVehJump;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyVehJump2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}

										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAF\xA2 Клавиша СпидХак" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 4.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSpeedHack;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySpeedHack2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAE\x93 Клавиша Тормоз" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eQuickStop;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyQuickStop2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAA\xB4 Клавиша Флип" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eFlip;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyFlip2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xB0\x8B \xEE\xB3\xBA Клавиша Сбр. анимацию" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eResetPed;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyResetPed2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}

										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xB0\xA7 Клавиша Защита" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 4.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eProt;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyProt2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xB4\xA3 Клавиша Сайлент Аим" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSilentAim;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySilentAim2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAC\xAB Клавиша Переподкл. к серверу" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eReconnect;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyReconnect2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAD\x94 Клавиша Разморозка" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eUnfreeze;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyUnfreeze2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}

										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA6\x8A Клавиша Остановить радио" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eStopRadio;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyStopRadio2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xAC\x8F Клавиша Пиздарванка" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::ePizdaRvanka;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xB2\xB5 Клавиша Невидимка" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eInvisible;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeyInvisible2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}

										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA7\x98 Клавиша Загр. позицию 1" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSavedPosition1;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionA2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA7\x98 Клавиша Загр. позицию 2" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSavedPosition2;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionB2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA7\x98 Клавиша Загр. позицию 3" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSavedPosition3;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionC2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}

										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA7\x98 Клавиша Загр. позицию 4" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 3.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSavedPosition4;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionD2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA7\x98 Клавиша Загр. позицию 5" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSavedPosition5;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionE2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
										ImGui::SameLine();
										if (ImGui::Button(pGui->waitingKey == cGui::eWaitingKeys::eNoWaiting ? "\xEE\xA7\x98 Клавиша Загр. позицию 6" : "\xEE\xB9\xAC Нажмите клавишу", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											pGui->waitingKey = cGui::eWaitingKeys::eSavedPosition6;
										}
										if (ImGui::IsItemHovered()) {

											ImGui::BeginTooltip();
											char cKeyName[32 + 1]{};
											if (pWinAPIFuncs->getKeyNameTextA(pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionF2), &cKeyName[0], sizeof(cKeyName) - 1)) {
												ImGui::Text("\xEE\xB9\xAC %s", &cKeyName[0]);
											} else {
												ImGui::TextUnformatted("\xEE\xB9\xAC Особая клавиша.");
											} ImGui::EndTooltip();

										}
									} else {
										ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.65F);
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Горячие клавиши отключены.");
									}

									ImGui::Separator();

									if (ImGui::Button("\xEE\xA9\xB1 Сбросить все клавиши", std::move(ImVec2{-0.1F, 25.0F}))) {
										ImGui::OpenPopup("Вы уверены?##3");
										ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
									}
									if (ImGui::BeginPopupModal("Вы уверены?##3", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
										if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
											pGui->resetKeys();
											ImGui::CloseCurrentPopup();
										}
										if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xA6\xA4 Переместить плагин в \"Decision\"", std::move(ImVec2{-0.1F, 25.0F}))) {
										ImGui::OpenPopup("Вы уверены?##4");
										ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Перемещает плагин в папку: \"\\data\\Decision\\chris\\pixel.ped\". Если не перенести его обратно после выхода с игры, то Вы не сможете пользоваться проектом. Помните, что данная функция обновляет дату изменения папки с игрой.");
										ImGui::EndTooltip();
									}
									if (ImGui::BeginPopupModal("Вы уверены?##4", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
										if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
											pMain->moveModuleFileW(cMain::hModule, L"\\data\\Decision\\chris\\pixel.ped");
											ImGui::CloseCurrentPopup();
										}
										if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									if (ImGui::Button("\xEE\xBB\x91 Выгрузить неиспользуемые модули", std::move(ImVec2{-0.1F, 25.0F}))) {
										ImGui::OpenPopup("Вы уверены?##5");
										ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
									}
									if (ImGui::IsItemHovered()) {
										ImGui::BeginTooltip();
										ImGui::TextColored(std::move(ImVec4{1.0F, 0.5F, 0, 1.0F}), "\xEE\xB9\xAC Выгрузит из игры все неиспользуемые модули (DLL и другие).");
										ImGui::EndTooltip();
									}
									if (ImGui::BeginPopupModal("Вы уверены?##5", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
										if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
											pWinAPIFuncs->coFreeUnusedLibrariesEx(0, 0);
											ImGui::CloseCurrentPopup();
										}
										if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
											ImGui::CloseCurrentPopup();
										}

										ImGui::EndPopup();
									}

									ImGui::Separator();
									ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 4.5F);
									ImGui::Text("Приветствуем тебя, %s | Лицензия действительна еще: %d дня/дней.", &std::move(std::string{pGui->wsProjectUserName.cbegin(), pGui->wsProjectUserName.cend()})[0], pGui->ui32ProjectLicenseDays);
									ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 2.6F);
									ImGui::Text("Всего подключенных пользователей: %d", pGui->ui32TotalConnected);

									if (pGui->bDeveloper) {
										ImGui::Separator();

										if (ImGui::Button("\xEE\xB5\xAB Кикнуть всех подключённых", std::move(ImVec2{ImGui::GetContentRegionAvail().x / 2.0F, 25.0F}))) {
											ImGui::OpenPopup("Вы уверены?##6");
											ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
										}
										if (ImGui::BeginPopupModal("Вы уверены?##6", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
											if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
												pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eKickAll))) + L' ' + pGui->wsProjectUserName)[0]);
												ImGui::CloseCurrentPopup();
											}
											if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
												ImGui::CloseCurrentPopup();
											}

											ImGui::EndPopup();
										}
										ImGui::SameLine();
										if (ImGui::Button("\xEE\xA5\xB9 Уведомление всем", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 25.0F}))) {
											ImGui::OpenPopup("Вы уверены?##7");
											ImGui::SetNextWindowSize(std::move(ImVec2{270.0F, 300.0F}), ImGuiCond_::ImGuiCond_Appearing);
										}
										if (ImGui::BeginPopupModal("Вы уверены?##7", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav)) {
											if (ImGui::Button("\xEE\xB9\xB6 Да", std::move(ImVec2{264.0F, 134.0F}))) {
												pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eBeepAll))) + L' ' + pGui->wsProjectUserName)[0]);
												ImGui::CloseCurrentPopup();
											}
											if (ImGui::Button("\xEE\xB5\xA6 Нет", std::move(ImVec2{264.0F, 134.0F}))) {
												ImGui::CloseCurrentPopup();
											}

											ImGui::EndPopup();
										}
									}

									ImGui::PopStyleVar();
									ImGui::EndChild();
								}

								ImGui::EndTabItem();
							}

							ImGui::EndTabBar();
						}

					}

					if (!pGui->bForceTabSelected) {
						pGui->bForceTabSelected = true;
					}

					if (pGui->bResetGUIPos) {
						pGui->bResetGUIPos = false;
					}

					if (pGui->bResetScroll) {
						pGui->bResetScroll = false;
					}

					if (!pGui->bOpen) {
						pGui->bOpen = true;
						pSAPatch->DisableMouseUpdateETC((pGui->bGUIStatus = false));
						pMPPatch->DisableChatTKey(0);
					}

				} else {
					ImGui::SetNextWindowPos(std::move(ImVec2{static_cast<const float>(ui32BackBufferWidth / 2 - 355), static_cast<const float>(ui32BackBufferHeight / 2 - 50)}), pGui->bResetGUIPos ? ImGuiCond_::ImGuiCond_Always : ImGuiCond_::ImGuiCond_Appearing);
					if (ImGui::Begin(LANG_RUS ? "\xEE\xB2\x8F Доступно обновление \xEE\xB2\x8F" : "\xEE\xB2\x8F Update available \xEE\xB2\x8F", nullptr, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_::ImGuiWindowFlags_NoNav | ImGuiWindowFlags_::ImGuiWindowFlags_NoScrollWithMouse)) {
						ImGui::Image(pGui->pLogoTexture, std::move(ImVec2{525.0F, 218.0F}));

						ImGui::TextUnformatted(LANG_RUS ? "\t\t\t\t\t\t\xEE\xB9\xAC Более новая версия уже доступна для скачивания! \xEE\xB9\xAC" : "\t\t\t\t\t\t\xEE\xB9\xAC New version is already available to download! \xEE\xB9\xAC");
						ImGui::TextUnformatted(LANG_RUS ? "\t\t\t\t\t\xEE\xB9\xAC Рекомендуется использовать последнюю версию софта. \xEE\xB9\xAC" : "\t\t\t\t\t\xEE\xB9\xAC It\'s recommended to use latest version. \xEE\xB9\xAC");
						ImGui::TextUnformatted(LANG_RUS ? "\t\t\t\t\t \xEE\xB9\xAC Перейдите в группу проекта и установите обновление. \xEE\xB9\xAC" : "\t\t\t\t\t \xEE\xB9\xAC Check out project group and install update. \xEE\xB9\xAC");

						if (ImGui::Button("\xEE\xB3\xB4", std::move(ImVec2{ImGui::GetContentRegionAvail().x, 35.0F}))) {
							pGui->bNeedUpdate = false;
						}

						ImGui::End();
					}
				}

				ImGui::EndFrame(); ImGui::Render(); ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
			} else if (!pGui->bPanic && !pGui->getUInteger(cGui::eSyncUIntegers::eDisableHotKeys) && (pGui->getUInteger(cGui::eSyncUIntegers::eNoCheckInputLock) ? true : !pSA->isInputBlocked())) {

				if (pGui->bAirBrake && pWinAPIFuncs->getAsyncKeyState('W')) {
					class cCamera *pCamera{pSA->getCamera()};

					class cVector3D vecResult {};
					const class cVector3D vecPosMult { 0, pGui->getFloat(cGui::eSyncFloats::eAirBrake) + cWorld::getDistanceBetweenTwoPoints(cSA::getPosition(pSA), &pCamera->vecGameCamPos), -0.5F };
					cVector3D::multiply3x3(&vecResult, &pCamera->Placeable.getMatrix()->Matrix, &vecPosMult);
					cSA::teleport(pSA, (vecResult += pCamera->vecGameCamPos));
				}

			}

		}

	} return pPresent_t(pDeviceInterface, pSourceRect, pDestRect, hDestWindowOverride, pDirtyRegion);
}


static void *pDrawIndexedPrimitive_JMP{nullptr};
using IDirect3DDevice9_DrawIndexedPrimitive_t = HRESULT(__stdcall *)(IDirect3DDevice9 *pDeviceInterface, D3DPRIMITIVETYPE PrimitiveType, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount);
static IDirect3DDevice9_DrawIndexedPrimitive_t pDrawIndexedPrimitive_t{nullptr};
static auto __stdcall IDirect3DDevice9_DrawIndexedPrimitive_HOOK(IDirect3DDevice9 *pDeviceInterface, D3DPRIMITIVETYPE PrimitiveType, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount) -> HRESULT {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && !pGui->bCleanScreen) {
		IDirect3DVertexBuffer9 *pStreamData{nullptr};
		unsigned __int32 ui32OffsetInBytes{0}, ui32Stride{0};
		pDeviceInterface->GetStreamSource(0, &pStreamData, &ui32OffsetInBytes, &ui32Stride);
		if (pStreamData != nullptr) {
			pStreamData->Release();

			unsigned long ulStates[8]{};
			unsigned __int32 ui32StateIter{0};

			switch (ui32Stride) {
				case 36:
				case 40:
				case 44: {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackTextures)) {
						pDeviceInterface->GetRenderState(D3DRENDERSTATETYPE::D3DRS_ZENABLE, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetRenderState(D3DRENDERSTATETYPE::D3DRS_ZFUNC, &ulStates[ui32StateIter++]);

						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_ZENABLE, _D3DZBUFFERTYPE::D3DZB_FALSE);
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_ZFUNC, _D3DCMPFUNC::D3DCMP_NEVER);
					}
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackWireFrame)) {
						pDeviceInterface->GetRenderState(D3DRENDERSTATETYPE::D3DRS_FILLMODE, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetRenderState(D3DRENDERSTATETYPE::D3DRS_CULLMODE, &ulStates[ui32StateIter++]);

						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_FILLMODE, D3DFILLMODE::D3DFILL_WIREFRAME);
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_CULLMODE, D3DCULL::D3DCULL_NONE);
					}
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackChams)) {
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, &ulStates[ui32StateIter++]);

						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, D3DCOLOR_COLORVALUE(pGui->getFloat(cGui::eSyncFloats::eChamsR), pGui->getFloat(cGui::eSyncFloats::eChamsG), pGui->getFloat(cGui::eSyncFloats::eChamsB), 1.0F));
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, D3DTA_CONSTANT);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, D3DTA_CONSTANT);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, D3DTA_CONSTANT);
					}

					ui32StateIter = 0;
					const HRESULT hResult{pDrawIndexedPrimitive_t(pDeviceInterface, PrimitiveType, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount)};

					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackTextures)) {
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_ZENABLE, ulStates[ui32StateIter++]);
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_ZFUNC, ulStates[ui32StateIter++]);
						pDrawIndexedPrimitive_t(pDeviceInterface, PrimitiveType, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
					}
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackWireFrame)) {
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_FILLMODE, ulStates[ui32StateIter++]);
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_CULLMODE, ulStates[ui32StateIter++]);
					}
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackChams)) {
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, ulStates[ui32StateIter++]);
					} return hResult;
				}

				case 4: {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackWireFrameThings)) {
						pDeviceInterface->GetRenderState(D3DRENDERSTATETYPE::D3DRS_FILLMODE, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetRenderState(D3DRENDERSTATETYPE::D3DRS_CULLMODE, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, &ulStates[ui32StateIter++]);

						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_FILLMODE, D3DFILLMODE::D3DFILL_WIREFRAME);
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_CULLMODE, D3DCULL::D3DCULL_CCW);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, D3DCOLOR_COLORVALUE(pGui->getFloat(cGui::eSyncFloats::eWireFrameThingsR), pGui->getFloat(cGui::eSyncFloats::eWireFrameThingsG), pGui->getFloat(cGui::eSyncFloats::eWireFrameThingsB), 1.0F));
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, D3DTA_CONSTANT);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, D3DTA_CONSTANT);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, D3DTA_CONSTANT);

						ui32StateIter = 0;
						pDrawIndexedPrimitive_t(pDeviceInterface, PrimitiveType, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);

						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_FILLMODE, ulStates[ui32StateIter++]);
						pDeviceInterface->SetRenderState(D3DRENDERSTATETYPE::D3DRS_CULLMODE, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, ulStates[ui32StateIter++]);
					} break;
				}

				case 32: {
					if (pGui->getUInteger(cGui::eSyncUIntegers::eWallHackWeaponChams)) {
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, &ulStates[ui32StateIter++]);
						pDeviceInterface->GetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, &ulStates[ui32StateIter++]);

						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, D3DCOLOR_COLORVALUE(pGui->getFloat(cGui::eSyncFloats::eWeaponChamsR), pGui->getFloat(cGui::eSyncFloats::eWeaponChamsG), pGui->getFloat(cGui::eSyncFloats::eWeaponChamsB), 1.0F));
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, D3DTA_CONSTANT);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, D3DTA_CONSTANT);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, D3DTA_CONSTANT);

						ui32StateIter = 0;
						const HRESULT hResult{pDrawIndexedPrimitive_t(pDeviceInterface, PrimitiveType, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount)};

						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_CONSTANT, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG0, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG1, ulStates[ui32StateIter++]);
						pDeviceInterface->SetTextureStageState(0, D3DTEXTURESTAGESTATETYPE::D3DTSS_COLORARG2, ulStates[ui32StateIter++]);
						return hResult;
					} break;
				} default: break;
			}

		}
	} return pDrawIndexedPrimitive_t(pDeviceInterface, PrimitiveType, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
}
#pragma endregion DX


#pragma region SA
static unsigned __int32 ui32ProcessCollisionSectorList[2]{};
static class cPhysical *pCollisionPhysical{nullptr};
static auto __cdecl ProcessCollisionSectorList_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32ProcessCollisionSectorList[0] = !pGui->bPanic && !pGui->bCleanScreen &&
		((pCollisionPhysical->Entity.ui8Type == 3 && pGui->getUInteger(cGui::eSyncUIntegers::eNoPedCollision)) ||
		(pCollisionPhysical->Entity.ui8Type == 2 && pGui->getUInteger(cGui::eSyncUIntegers::eNoVehCollision)) ||
		(pCollisionPhysical->Entity.ui8Type == 4 && pGui->getUInteger(cGui::eSyncUIntegers::eNoObjCollision)));
	ui32ProcessCollisionSectorList[1] = !pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eNoDumCollision);
	return;
}
static auto __declspec(noinline) __declspec(naked) ProcessCollisionSectorList_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x54BCF4}, ui32NoProcessA{0x54CF8D}, ui32NoProcessB{0x54CEFC};

	__asm {
		je checkProcessA;
		jmp ui32NoProcessB;
	}

checkProcessA:
	__asm {
		mov pCollisionPhysical, edi;

		pushfd;
		pushad;
		call ProcessCollisionSectorList_CALL_1;
		mov eax, ui32ProcessCollisionSectorList;
		test eax, eax;
		je checkProcessB;
		jmp noProcessA;
	}

checkProcessB:
	__asm {
		mov eax, ui32ProcessCollisionSectorList + 4;
		test eax, eax;
		je process;
		jmp noProcessB;
	}

noProcessA:
	__asm {
		popad;
		popfd;

		jmp ui32NoProcessA;
	}

noProcessB:
	__asm {
		popad;
		popfd;

		jmp ui32NoProcessB;
	}

process:
	__asm {
		popad;
		popfd;

		jmp ui32Process;
	}
}


static unsigned __int32 ui32CruiseControl{0};
static class cAutomobile *pCruiseControlAuto{nullptr};
static auto __cdecl CruiseControl_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	const class cSA *pSA{pMain->getSA()};
	const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
	ui32CruiseControl = !pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eCruiseControl) && (pSA->getPlayerPed() == pCruiseControlAuto->Vehicle.getDriver() || (pAuto != nullptr && pCruiseControlAuto == &pAuto->Vehicle.getTrailer()->Automobile));
	return;
}
static auto __declspec(noinline) __declspec(naked) CruiseControl_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x6D6E9F}, ui32NoProcess{0x6D6ECE};
	static const float fZero{0};

	__asm {
		mov pCruiseControlAuto, ebx;

		pushfd;
		pushad;
		call CruiseControl_CALL_1;
		mov eax, ui32CruiseControl;
		test eax, eax;
		je checkProcess;
		popad;
		popfd;

		fld fZero;
		jmp ui32NoProcess;
	}

checkProcess:
	__asm {
		popad;
		popfd;

		mov ecx, [ebx + 0x384];
		jmp ui32Process;
	}
}


static unsigned __int32 ui32DoubleBoost{0};
static class cAutomobile *pDoubleBoostAuto{nullptr};
static auto __cdecl DoubleBoost_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	const class cSA *pSA{pMain->getSA()};
	const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
	ui32DoubleBoost = !pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eDoubleBoost) && (pSA->getPlayerPed() == pDoubleBoostAuto->Vehicle.getDriver() || (pAuto != nullptr && pDoubleBoostAuto == &pAuto->Vehicle.getTrailer()->Automobile));
	return;
}
static auto __declspec(noinline) __declspec(naked) DoubleBoost_HOOK(void) -> void {
	static const unsigned __int32 ui32ProcessA{0x6B2128}, ui32ProcessB{0x6B2126};

	__asm {
		mov pDoubleBoostAuto, esi;

		pushfd;
		pushad;
		call DoubleBoost_CALL_1;
		mov eax, ui32DoubleBoost;
		test eax, eax;
		je checkProcess;
		popad;
		popfd;

		test[esi + 0x42B], 1;
		jmp ui32ProcessA;
	}

checkProcess:
	__asm {
		popad;
		popfd;

		test[esi + 0x42B], 1;
		jmp ui32ProcessB;
	}
}


static unsigned __int32 ui32MonsterHydESP{0};
static class cAutomobile *pMonsterHydAuto{nullptr};
static auto __cdecl MonsterHyd_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eMonsterHyd) && pMain->getSA()->getPlayerPed() == pMonsterHydAuto->Vehicle.getDriver()) {
		*reinterpret_cast<float *>(ui32MonsterHydESP + 0x38) = -1.5F;
	} return;
}
static auto __declspec(noinline) __declspec(naked) MonsterHyd_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x6A0AE1};

	__asm {
		mov[esp + 0x1C], edx;
		mov[esp + 0x38], eax;
		mov pMonsterHydAuto, ebp;
		mov ui32MonsterHydESP, esp;

		pushfd;
		pushad;
		call MonsterHyd_CALL_1;
		popad;
		popfd;

		jmp ui32Process;
	}
}


static unsigned __int32 ui32WaterCannonMyPed{0};
static class cPed *pWaterCannonPed{nullptr};
static auto __cdecl WaterCannonPushPeds_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32WaterCannonMyPed = !pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eNoWaterCannon) && pWaterCannonPed == pMain->getSA()->getPlayerPed();
	return;
}
static auto __declspec(noinline) __declspec(naked) WaterCannonPushPeds_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x729741}, ui32NoProcess{0x729B01};

	__asm {
		jne noProcess;

		mov pWaterCannonPed, esi;

		pushfd;
		pushad;
		call WaterCannonPushPeds_CALL_1;
		mov eax, ui32WaterCannonMyPed;
		test eax, eax;
		je checkProcess;
		popad;
		popfd;

		jmp ui32NoProcess;
	}

checkProcess:
	__asm {
		popad;
		popfd;

		jmp ui32Process;
	}

noProcess:
	__asm {
		jmp ui32NoProcess;
	}
}


static unsigned __int32 ui32DoubleWeapon[4]{};
static class cPed *pDoubleWeaponPed[4]{};
static auto __cdecl DoubleWeapon1_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32DoubleWeapon[0] = !pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eDoubleWeapon) && pDoubleWeaponPed[0] == pMain->getSA()->getPlayerPed();
	return;
}
static auto __cdecl DoubleWeapon2_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32DoubleWeapon[1] = !pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eDoubleWeapon) && pDoubleWeaponPed[1] == pMain->getSA()->getPlayerPed();
	return;
}
static auto __cdecl DoubleWeapon3_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32DoubleWeapon[2] = !pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eDoubleWeapon) && pDoubleWeaponPed[2] == pMain->getSA()->getPlayerPed();
	return;
}
static auto __cdecl DoubleWeapon4_CALL_1(void) -> void {
	const class cGui *pGui{pMain->getGui()};
	ui32DoubleWeapon[3] = !pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eDoubleWeapon) && pDoubleWeaponPed[3] == pMain->getSA()->getPlayerPed();
	return;
}
static auto __declspec(noinline) __declspec(naked) DoubleWeapon1_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x62A9EF}, ui32NoProcess{0x62AA48};

	__asm {
		mov pDoubleWeaponPed, edi;

		pushfd;
		pushad;
		call DoubleWeapon1_CALL_1;
		mov eax, ui32DoubleWeapon;
		test eax, eax;
		je checkProcess;
		popad;
		popfd;

		shr eax, 0xB;
		test al, 1;
		jmp ui32Process;
	}

checkProcess:
	__asm {
		popad;
		popfd;

		shr eax, 0xB;
		test al, 1;
		je noProcess;
		jmp ui32Process;
	}

noProcess:
	__asm {
		jmp ui32NoProcess;
	}
}
static auto __declspec(noinline) __declspec(naked) DoubleWeapon2_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x7330BB}, ui32NoProcess{0x733121};

	__asm {
		mov pDoubleWeaponPed + 4, ebx;

		pushfd;
		pushad;
		call DoubleWeapon2_CALL_1;
		mov eax, ui32DoubleWeapon + 4;
		test eax, eax;
		je checkProcess;
		popad;
		popfd;

		add esp, 8;
		test al, 1;
		jmp ui32Process;
	}

checkProcess:
	__asm {
		popad;
		popfd;

		add esp, 8;
		test al, 1;
		je noProcess;
		jmp ui32Process;
	}

noProcess:
	__asm {
		jmp ui32NoProcess;
	}
}
static auto __declspec(noinline) __declspec(naked) DoubleWeapon3_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x61EFB4}, ui32NoProcess{0x61F2D1};

	__asm {
		mov pDoubleWeaponPed + 8, esi;
		je checkProcess;
		jmp ui32Process;
	}

checkProcess:
	__asm {
		pushfd;
		pushad;
		call DoubleWeapon3_CALL_1;
		mov eax, ui32DoubleWeapon + 8;
		test eax, eax;
		je noProcess;
		popad;
		popfd;
		jmp ui32Process;
	}

noProcess:
	__asm {
		popad;
		popfd;

		jmp ui32NoProcess;
	}
}
static auto __declspec(noinline) __declspec(naked) DoubleWeapon4_HOOK(void) -> void {
	static const unsigned __int32 ui32Process{0x61F0EB}, ui32NoProcess{0x61F119};

	__asm {
		mov pDoubleWeaponPed + 12, esi;
		test dl, 1;
		je checkProcess;
		jmp ui32Process;
	}

checkProcess:
	__asm {
		pushfd;
		pushad;
		call DoubleWeapon4_CALL_1;
		mov eax, ui32DoubleWeapon + 12;
		test eax, eax;
		je noProcess;
		popad;
		popfd;
		jmp ui32Process;
	}

noProcess:
	__asm {
		popad;
		popfd;

		jmp ui32NoProcess;
	}
}


static void *pFlushImmediately_JMP{nullptr};
using FlushImmediately_t = void(__thiscall *)(class cPed **ppThis, bool bUnk);
static FlushImmediately_t pFlushImmediately_t{nullptr};
static auto __fastcall FlushImmediately_HOOK(class cPed **ppThis, void *, bool bUnk) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eStayInCarOnJack)) {
		const class cPed *pPed{pMain->getSA()->getPlayerPed()};
		if (*ppThis == pPed && pPed->getVehicle() != nullptr) {
			switch (reinterpret_cast<const unsigned __int32>(_ReturnAddress())) {
				case 0x482F09:
				case 0x5E4147: {
					return;
				} default: break;
			}
		}
	} pFlushImmediately_t(ppThis, bUnk);
	return;
}


static void *pCarOpenDoorFromOutside_JMP{nullptr};
using CarOpenDoorFromOutside_t = bool(__thiscall *)(void *pThis, class cPed *pPed);
static CarOpenDoorFromOutside_t pCarOpenDoorFromOutside_t{nullptr};
static auto __fastcall CarOpenDoorFromOutside_HOOK(void *pThis, void *, class cPed *pPed) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eNoOpenDoorAnim) && pPed == pMain->getSA()->getPlayerPed()) {
		return true;
	} return pCarOpenDoorFromOutside_t(pThis, pPed);
}


static void *pCarSlowDragPedOut_JMP{nullptr};
using CarSlowDragPedOut_t = bool(__thiscall *)(void *pThis, class cPed *pPed);
static CarSlowDragPedOut_t pCarSlowDragPedOut_t{nullptr};
static auto __fastcall CarSlowDragPedOut_HOOK(void *pThis, void *, class cPed *pPed) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eSkipEnterVehJack) && pPed == pMain->getSA()->getPlayerPed()) {
		return true;
	} return pCarSlowDragPedOut_t(pThis, pPed);
}


static void *pBurstTyre_JMP{nullptr};
using cAutomobile_BurstTyre_t = bool(__thiscall *)(class cAutomobile *pThis, unsigned __int8 ui8ComponentID, bool bEffect);
static cAutomobile_BurstTyre_t pBurstTyre_t{nullptr};
static auto __fastcall BurstTyre_HOOK(class cAutomobile *pThis, void *, unsigned __int8 ui8ComponentID, bool bEffect) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eProt) && pGui->getUInteger(cGui::eSyncUIntegers::eProtCarTire)) {
		const class cSA *pSA{pMain->getSA()};
		const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
		if (pSA->getPlayerPed() == pThis->Vehicle.getDriver() || (pAuto != nullptr && pThis == &pAuto->Vehicle.getTrailer()->Automobile)) {
			return false;
		}
	} return pBurstTyre_t(pThis, ui8ComponentID, bEffect);
}


static void *pSetPedSafePosition_JMP{nullptr};
using cKnockOffBike_SetPedSafePosition_t = bool(__thiscall *)(void *pEvent, class cPed *pPed);
static cKnockOffBike_SetPedSafePosition_t pSetPedSafePosition_t{nullptr};
static auto __fastcall SetPedSafePosition_HOOK(void *pEvent, void *, class cPed *pPed) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eNoBikeFall)) {
		const class cSA *pSA{pMain->getSA()};
		if (pPed == pSA->getPlayerPed()) {
			if (pGui->getUInteger(cGui::eSyncUIntegers::eBikeFallWater)) {
				const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
				if (pAuto != nullptr && pAuto->Vehicle.VehFlags.bIsDrowning) {
					return pSetPedSafePosition_t(pEvent, pPed);
				}
			} return false;
		}
	} return pSetPedSafePosition_t(pEvent, pPed);
}


static void *pDrawRadarSprite_JMP{nullptr};
using cRadar_DrawRadarSprite_t = void(__cdecl *)(unsigned __int16 ui16IconID, class cVector2D vec2DPos, unsigned __int8 ui8Alpha);
static cRadar_DrawRadarSprite_t pDrawRadarSprite_t{nullptr};
static auto __cdecl DrawRadarSprite_HOOK(unsigned __int16 ui16IconID, class cVector2D vec2DPos, unsigned __int8 ui8Alpha) -> void {
	const class cGui *pGui{pMain->getGui()};
	pDrawRadarSprite_t(ui16IconID, vec2DPos, (!pGui->bPanic && !pGui->bCleanScreen && pGui->getUInteger(cGui::eSyncUIntegers::eRedHouseAlpha) && ui16IconID == 32) ? 100 : ui8Alpha);
	return;
}


static void *pComputeDamageResponse_JMP{nullptr};
using cPedDamageResponseCalculator_ComputeDamageResponse_t = void(__thiscall *)(void *pCPedDamageResponseCalculator, class cPed *pPed, class cDamageResponseInfo *pDamageResponseInfo, bool bSayReaction);
static cPedDamageResponseCalculator_ComputeDamageResponse_t pComputeDamageResponse_t{nullptr};
static auto __fastcall ComputeDamageResponse_HOOK(void *pCPedDamageResponseCalculator, void *, class cPed *pPed, class cDamageResponseInfo *pDamageResponseInfo, bool bSayReaction) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eProt)) {
		const class cPed *pLocalPed{pMain->getSA()->getPlayerPed()};
		switch (reinterpret_cast<const unsigned __int32>(_ReturnAddress())) {
			case 0x568291: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtBlowUp) && pPed == pLocalPed) {
					return;
				} break;
			}

			case 0x5E2F94: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtFall) && pPed == pLocalPed) {
					return;
				} break;
			}

			case 0x63344F: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtFire) && pPed == pLocalPed) {
					return;
				} break;
			}

			case 0x6DB32B: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtHeliBlades) && pPed == pLocalPed) {
					return;
				} break;
			}

			case 0x5F0F49:
			case 0x67C916: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtDB) && pPed == pLocalPed) {
					return;
				} break;
			}

			case 0x629815:
			case 0x73A6EE: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtWeapons) && pPed == pLocalPed) {
					return;
				} break;
			} default: break;
		}
	} pComputeDamageResponse_t(pCPedDamageResponseCalculator, pPed, pDamageResponseInfo, bSayReaction);
	return;
}


static void *pGenerateDamageEvent_JMP{nullptr};
using cWeapon_GenerateDamageEvent_t = void(__cdecl *)(class cPed *pDamaged, class cPed *pDamager, unsigned __int32 ui32WeaponID, float fFactor, unsigned __int32 ui32PedPiece, bool bLocalDir);
static cWeapon_GenerateDamageEvent_t pGenerateDamageEvent_t{nullptr};
static auto __cdecl GenerateDamageEvent_HOOK(class cPed *pDamaged, class cPed *pDamager, unsigned __int32 ui32WeaponID, float fFactor, unsigned __int32 ui32PedPiece, bool bLocalDir) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eProt)) {
		switch (reinterpret_cast<const unsigned __int32>(_ReturnAddress())) {
			case 0x73BA55: {
				if (pGui->getUInteger(cGui::eSyncUIntegers::eProtWeapons) && pDamaged == pMain->getSA()->getPlayerPed()) {
					return;
				} break;
			} default: break;
		}
	} pGenerateDamageEvent_t(pDamaged, pDamager, ui32WeaponID, fFactor, ui32PedPiece, bLocalDir);
	return;
}


static void *pWindowProc_JMP{nullptr};
using WindowProc_t = LRESULT(__stdcall *)(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
static WindowProc_t pWindowProc_t{nullptr};
static auto __stdcall WindowProc_HOOK(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) -> LRESULT {
	class cGui *pGui{pMain->getGui()};
	if (!pGui->bDeveloper && pMain->getPEB()->BeingDebugged) {
		std::abort();
	}

	const class cSA *pSA{pMain->getSA()};
	if (!pSA->isGamePaused()) {

		if (pGui->bGUIStatus) {
			if (uMsg == WM_CHAR) {
				(&ImGui::GetIO())->AddInputCharacter(std::move(pMain->multiByteToWide(CP_ACP, std::move(std::string{static_cast<const char>(wParam)})))[0]);
			} else {
				ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam);
			}
		}

		const class cMP *pMP{pMain->getMP()};

		switch (uMsg) {
			case WM_ACTIVATE:
			case WM_SIZE: {
				pGui->bResetGUIPos = true;
				break;
			}

			case WM_MOUSEWHEEL: {
				if (pGui->bAirBrake) {
					const bool bWheelUp{GET_WHEEL_DELTA_WPARAM(wParam) == 120};
					const float fAirBrake{pGui->getFloat(cGui::eSyncFloats::eAirBrake)};
					if (bWheelUp) {
						if (fAirBrake < 5.0F) {
							pGui->setFloat(cGui::eSyncFloats::eAirBrake, fAirBrake + 0.1F);
						}
					} else {
						if (fAirBrake >= 0.2F) {
							pGui->setFloat(cGui::eSyncFloats::eAirBrake, fAirBrake - 0.1F);
						}
					}
				} break;
			}

			case WM_XBUTTONDOWN:
			case WM_SYSKEYDOWN:
			case WM_KEYDOWN: {
				if (!pGui->bPanic) {

					if (wParam == VK_F8) {
						if (pGui->getUInteger(cGui::eSyncUIntegers::eCleanScreen)) {
							__AutoLoad(0);
							pGui->bCleanScreen = true;
						}
					}

				}

				if (pGui->bGUIStatus && (&ImGui::GetIO())->WantTextInput) {
					return 0;
				} break;
			}

			case WM_XBUTTONUP:
			case WM_SYSKEYUP:
			case WM_KEYUP: {
				const unsigned __int32 ui32LParam{static_cast<const unsigned __int32>(lParam)};

				if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyMenu1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyMenu2) : true)) {
					pGui->bGUIStatus ^= true;
					pSA->getPatch()->DisableMouseUpdateETC(pGui->bGUIStatus);
					pMP->getPatch()->DisableChatTKey(pGui->bGUIStatus);
				}

				if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyPanic1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyPanic2) : true)) {
					pGui->bPanic ^= true;
					__AutoLoad(!pGui->bPanic);
				}

				if (!pGui->bPanic) {

					if (wParam == VK_F8) {
						if (pGui->getUInteger(cGui::eSyncUIntegers::eCleanScreen)) {
							__AutoLoad(1);
							pGui->bCleanScreen = false;
						}
					}

					if (!pGui->getUInteger(cGui::eSyncUIntegers::eDisableHotKeys) && (pGui->getUInteger(cGui::eSyncUIntegers::eNoCheckInputLock) ? true : !pSA->isInputBlocked())) {

						if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyReconnect1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyReconnect2) : true)) {
							cMP::reconnect(pMP);
						}

						if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyAirBrake1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyAirBrake2) : true)) {
							if (pGui->getUInteger(cGui::eSyncUIntegers::eAirBrake)) {
								pSA->getPatch()->AirBreak((pGui->bAirBrake ^= true));
							}
						}

						if (!pGui->bGUIStatus) {
							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyFlip1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyFlip2) : true)) {
								cSA::flipVeh(&pSA->getPlayerVehicle()->Vehicle);
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyResetPed1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyResetPed2) : true)) {
								cSA::disembarkPed(pSA->getPlayerPed());
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyUnfreeze1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyUnfreeze2) : true)) {
								cSA::unfreeze(pMain);
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyStopRadio1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyStopRadio2) : true)) {
								pGui->releaseRadio();
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyProt1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyProt2) : true)) {
								const unsigned __int32 ui32Status{pGui->getUInteger(cGui::eSyncUIntegers::eProt) ^ 1};
								pGui->setUInteger(cGui::eSyncUIntegers::eProt, ui32Status);
								__AutoLoadPROTS(ui32Status);
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySilentAim1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySilentAim2) : true)) {
								pGui->setUInteger(cGui::eSyncUIntegers::eSilentAim, pGui->getUInteger(cGui::eSyncUIntegers::eSilentAim) ^ 1);
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyVehJump1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyVehJump2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eVehJump)) {
									class cAutomobile *pAuto{pSA->getPlayerVehicle()};
									if (pAuto != nullptr && pSA->getPlayerPed() == pAuto->Vehicle.getDriver()) {

										class cVector3D vecMove { 0, 0, pGui->getFloat(cGui::eSyncFloats::eVehJump) };
										cVector3D::scaleVector2(&vecMove, pAuto->Vehicle.Physical.fMass, &vecMove);

										class cTrailer *pTrailer{pAuto->Vehicle.getTrailer()};
										if (pTrailer != nullptr) {
											pTrailer->Automobile.Vehicle.Physical.applyMoveForce(&vecMove);
										} pAuto->Vehicle.Physical.applyMoveForce(&vecMove);
									}
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyQuickStop1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyQuickStop2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eQuickStop)) {
									class cAutomobile *pAuto{pSA->getPlayerVehicle()};
									if (pAuto != nullptr && pSA->getPlayerPed() == pAuto->Vehicle.getDriver()) {
										class cTrailer *pTrailer{pAuto->Vehicle.getTrailer()};
										if (pTrailer != nullptr) {
											pAuto->Vehicle.Physical.vecMoveSpeed.clear();
										} pAuto->Vehicle.Physical.vecMoveSpeed.clear();
									}
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySpeedHack1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySpeedHack2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSpeedHack)) {
									static unsigned long ulOldTick{0};
									const unsigned long ulNewTick{pMain->getWinAPIFuncs()->getTickCount()};

									if (ulNewTick > ulOldTick) {
										class cAutomobile *pAuto{pSA->getPlayerVehicle()};
										if (pAuto != nullptr && pSA->getPlayerPed() == pAuto->Vehicle.getDriver()) {
											const float fSpeedHack{pGui->getFloat(cGui::eSyncFloats::eSpeedHack)};

											class cVector3D *pAutoSpeed{&pAuto->Vehicle.Physical.vecMoveSpeed};
											pAutoSpeed->fX *= fSpeedHack;
											pAutoSpeed->fY *= fSpeedHack;
											pAutoSpeed->fZ *= fSpeedHack;

											class cTrailer *pTrailer{pAuto->Vehicle.getTrailer()};
											if (pTrailer != nullptr) {
												class cVector3D *pTrailerSpeed{&pTrailer->Automobile.Vehicle.Physical.vecMoveSpeed};
												pTrailerSpeed->fX *= fSpeedHack;
												pTrailerSpeed->fY *= fSpeedHack;
												pTrailerSpeed->fZ *= fSpeedHack;
											}
										} ulOldTick = ulNewTick + pGui->getInteger(cGui::eSyncIntegers::eSpeedHackTime);
									}
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionA1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionA2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionA)) {
									const class cVector3D *pSavedPos{reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX1))};
									!pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh) ? cSA::teleport(pSA, pSavedPos, true) : (pSA->getPlayerVehicle() != nullptr ? cSA::teleport(pSA, pSavedPos, true) : true);
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionB1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionB2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionB)) {
									const class cVector3D *pSavedPos{reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX2))};
									!pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh) ? cSA::teleport(pSA, pSavedPos, true) : (pSA->getPlayerVehicle() != nullptr ? cSA::teleport(pSA, pSavedPos, true) : true);
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionC1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionC2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionC)) {
									const class cVector3D *pSavedPos{reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX3))};
									!pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh) ? cSA::teleport(pSA, pSavedPos, true) : (pSA->getPlayerVehicle() != nullptr ? cSA::teleport(pSA, pSavedPos, true) : true);
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionD1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionD2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionD)) {
									const class cVector3D *pSavedPos{reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX4))};
									!pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh) ? cSA::teleport(pSA, pSavedPos, true) : (pSA->getPlayerVehicle() != nullptr ? cSA::teleport(pSA, pSavedPos, true) : true);
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionE1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionE2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionE)) {
									const class cVector3D *pSavedPos{reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX5))};
									!pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh) ? cSA::teleport(pSA, pSavedPos, true) : (pSA->getPlayerVehicle() != nullptr ? cSA::teleport(pSA, pSavedPos, true) : true);
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionF1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeySavedPositionF2) : true)) {
								if (pGui->getUInteger(cGui::eSyncUIntegers::eSavedPositionF)) {
									const class cVector3D *pSavedPos{reinterpret_cast<const class cVector3D *>(pGui->getFloatPtr(cGui::eSyncFloats::eSavedPosX6))};
									!pGui->getUInteger(cGui::eSyncUIntegers::eSavedPosOnlyVeh) ? cSA::teleport(pSA, pSavedPos, true) : (pSA->getPlayerVehicle() != nullptr ? cSA::teleport(pSA, pSavedPos, true) : true);
								}
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka2) : true)) {
								pGui->bPizdaRvanka ^= true;
							}

							if (wParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyInvisible1) && (uMsg != WM_XBUTTONUP ? ui32LParam == pGui->getUInteger(cGui::eSyncUIntegers::eKeyInvisible2) : true)) {
								pGui->setUInteger(cGui::eSyncUIntegers::eInvisible, pGui->getUInteger(cGui::eSyncUIntegers::eInvisible) ^ 1);
							}
						}

						if (!pGui->bPromoCode && (!pGui->ui32SelectedProfile || pGui->getUInteger(cGui::eSyncUIntegers::eProfileOnNumbers))) {
							switch (wParam) {
								case 0x31: {
									if (pGui->vecProfiles.size() > 0) {
										pGui->bCustomProfile = false;
										pGui->ui32SelectedProfile = 1;
										pGui->updateProfile(pGui->wsProjectUserName, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->vecProfiles[0][0])));
									} break;
								}
								case 0x32: {
									if (pGui->vecProfiles.size() > 1) {
										pGui->bCustomProfile = false;
										pGui->ui32SelectedProfile = 2;
										pGui->updateProfile(pGui->wsProjectUserName, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->vecProfiles[1][0])));
									} break;
								}
								case 0x33: {
									if (pGui->vecProfiles.size() > 2) {
										pGui->bCustomProfile = false;
										pGui->ui32SelectedProfile = 3;
										pGui->updateProfile(pGui->wsProjectUserName, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->vecProfiles[2][0])));
									} break;
								}
								case 0x34: {
									if (pGui->vecProfiles.size() > 3) {
										pGui->bCustomProfile = false;
										pGui->ui32SelectedProfile = 4;
										pGui->updateProfile(pGui->wsProjectUserName, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->vecProfiles[3][0])));
									} break;
								}
								case 0x35: {
									if (pGui->vecProfiles.size() > 4) {
										pGui->bCustomProfile = false;
										pGui->ui32SelectedProfile = 5;
										pGui->updateProfile(pGui->wsProjectUserName, std::move(pMain->multiByteToWide(CP_UTF8, &pGui->vecProfiles[4][0])));
									} break;
								} default: break;
							}
						}
					}

				}

				if (pGui->waitingKey != cGui::eWaitingKeys::eNoWaiting) {
					switch (pGui->waitingKey) {
						case cGui::eWaitingKeys::eMenu: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyMenu1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyMenu2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::ePanic: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyPanic1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyPanic2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eAirBrake: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyAirBrake1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyAirBrake2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eVehJump: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyVehJump1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyVehJump2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSpeedHack: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySpeedHack1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySpeedHack2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eQuickStop: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyQuickStop1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyQuickStop2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eFlip: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyFlip1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyFlip2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eResetPed: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyResetPed1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyResetPed2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eProt: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyProt1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyProt2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSilentAim: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySilentAim1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySilentAim2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eReconnect: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyReconnect1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyReconnect2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eUnfreeze: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyUnfreeze1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyUnfreeze2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eStopRadio: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyStopRadio1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyStopRadio2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSavedPosition1: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionA1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionA2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSavedPosition2: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionB1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionB2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSavedPosition3: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionC1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionC2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSavedPosition4: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionD1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionD2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSavedPosition5: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionE1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionE2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eSavedPosition6: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionF1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeySavedPositionF2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::ePizdaRvanka: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyPizdaRvanka2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						}
						case cGui::eWaitingKeys::eInvisible: {
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyInvisible1, wParam);
							pGui->setUInteger(cGui::eSyncUIntegers::eKeyInvisible2, uMsg == WM_XBUTTONUP ? 0x0 : lParam);
							break;
						} default: break;
					} pGui->waitingKey = cGui::eWaitingKeys::eNoWaiting;
				} break;

			} default: break;
		}

	} return pWindowProc_t(hwnd, uMsg, wParam, lParam);
}


static void *pClearKeyBoardHistory_JMP{nullptr};
using cPad_ClearKeyBoardHistory_t = void(__cdecl *)(void);
static cPad_ClearKeyBoardHistory_t pClearKeyBoardHistory_t{nullptr};
static auto __cdecl ClearKeyBoardHistory_HOOK(void) -> void {
	if (pMain->getGui()->bGUIStatus) {
		const class cSAPatch *pSAPatch{pMain->getSA()->getPatch()};
		const class cMPPatch *pMPPatch{pMain->getMP()->getPatch()};

		switch (reinterpret_cast<const unsigned __int32>(_ReturnAddress())) {
			case 0x576E9C: { /* Старт паузы */
				pSAPatch->DisableMouseUpdateETC(0);
				pMPPatch->DisableChatTKey(0);
				break;
			}
			case 0x576CAE: { /* Конец паузы */
				pSAPatch->DisableMouseUpdateETC(1);
				pMPPatch->DisableChatTKey(1);
				break;
			} default: break;
		}
	} pClearKeyBoardHistory_t();
	return;
}


static void *pEnterCarAsDriverTimed_JMP{nullptr};
using EnterCarAsDriverTimed_t = void *(__thiscall *)(void *pThis, class cPed *pPed);
static EnterCarAsDriverTimed_t pEnterCarAsDriverTimed_t{nullptr};
static auto __fastcall EnterCarAsDriverTimed_HOOK(void *pThis, void *, class cPed *pPed) -> void * {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eStayInCarOnJack)) {
		const class cAutomobile *pJackAuto{*reinterpret_cast<const class cAutomobile **>(reinterpret_cast<const unsigned __int32>(pThis)+0xC)};
		if (pJackAuto != nullptr && pJackAuto == pMain->getSA()->getPlayerVehicle()) {
			return nullptr;
		}
	} return pEnterCarAsDriverTimed_t(pThis, pPed);
}


static void *pAddBigMessage_JMP{nullptr};
using AddBigMessage_t = void(__cdecl *)(char *pText, __int32 i32Time, unsigned __int16 ui16Style);
static AddBigMessage_t pAddBigMessage_t{nullptr};
static auto __cdecl AddBigMessage_HOOK(char *pText, __int32 i32Time, unsigned __int16 ui16Style) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eStayInCarOnJack)) {
		const std::string sText{pText};
		if (sText.find("~r~Car Jacked~w~!") != sText.npos) {
			return;
		}
	} pAddBigMessage_t(pText, i32Time, ui16Style);
	return;
}


static void *pSetVehicleUpgradeFlags_JMP{nullptr};
using cVehicle_SetVehicleUpgradeFlags_t = bool(__thiscall *)(class cVehicle *pThis, unsigned __int32 ui32ModelID, unsigned __int32 ui32ComponentID, unsigned __int32 *pModelResult);
static cVehicle_SetVehicleUpgradeFlags_t pSetVehicleUpgradeFlags_t{nullptr};
static auto __fastcall SetVehicleUpgradeFlags_HOOK(class cVehicle *pThis, void *, unsigned __int32 ui32ModelID, unsigned __int32 ui32ComponentID, unsigned __int32 *pModelResult) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eNoTuning)) {
		if ((ui32ModelID >= 1008 && ui32ModelID <= 1010) ||
			(ui32ModelID >= 1073 && ui32ModelID <= 1087) ||
			(ui32ModelID >= 1096 && ui32ModelID <= 1098)) {
			return pSetVehicleUpgradeFlags_t(pThis, ui32ModelID, ui32ComponentID, pModelResult);
		} return true;
	} return pSetVehicleUpgradeFlags_t(pThis, ui32ModelID, ui32ComponentID, pModelResult);
}


static void *pClearVehicleUpgradeFlags_JMP{nullptr};
using cVehicle_ClearVehicleUpgradeFlags_t = bool(__thiscall *)(class cVehicle *pThis, unsigned __int32 ui32ModelID, unsigned __int32 ui32MdlFlags);
static cVehicle_ClearVehicleUpgradeFlags_t pClearVehicleUpgradeFlags_t{nullptr};
static auto __fastcall ClearVehicleUpgradeFlags_HOOK(class cVehicle *pThis, void *, unsigned __int32 ui32ModelID, unsigned __int32 ui32MdlFlags) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eNoTuning)) {
		if ((ui32ModelID >= 1008 && ui32ModelID <= 1010) ||
			(ui32ModelID >= 1073 && ui32ModelID <= 1087) ||
			(ui32ModelID >= 1096 && ui32ModelID <= 1098)) {
			return pClearVehicleUpgradeFlags_t(pThis, ui32ModelID, ui32MdlFlags);
		} return true;
	} return pClearVehicleUpgradeFlags_t(pThis, ui32ModelID, ui32MdlFlags);
}


static void *pBreakTowLink_JMP{nullptr};
using cTrailer_BreakTowLink_t = bool(__thiscall *)(class cTrailer *pThis);
static cTrailer_BreakTowLink_t pBreakTowLink_t{nullptr};
static auto __fastcall BreakTowLink_HOOK(class cTrailer *pThis, void *) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eNoTrailerBreak)) {
		class cAutomobile *pAuto{pMain->getSA()->getPlayerVehicle()};
		if (pAuto != nullptr && pThis == pAuto->Vehicle.getTrailer()) {
			if (!pGui->bAirBrake) {
				cSA::flipVeh(&pAuto->Vehicle);
				pThis->setTowLink(&pAuto->Vehicle, true);
			} return false;
		}
	} return pBreakTowLink_t(pThis);
}


static void *pProcessControl_JMP{nullptr};
using cPhysical_ProcessControl_t = void(__thiscall *)(class cPhysical *pThis);
static cPhysical_ProcessControl_t pProcessControl_t{nullptr};
static auto __fastcall ProcessControl_HOOK(class cPhysical *pThis, void *) -> void {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->bAirBrake) {
		const class cSA *pSA{pMain->getSA()};

		const class cAutomobile *pAuto{pSA->getPlayerVehicle()};
		if (pAuto != nullptr) {
			if (pThis == &pAuto->Vehicle.Physical) {
				return;
			}

			if (pThis == &pAuto->Vehicle.getTrailer()->Automobile.Vehicle.Physical) {
				return;
			}
		}

		if (pThis == &pSA->getPlayerPed()->Physical) {
			return;
		}

	} pProcessControl_t(pThis);
	return;
}


static void *pTaskSimpleBeHit_JMP{nullptr};
using cTaskSimpleBeHit_ProcessPed_t = bool(__thiscall *)(void *pThis, class cPed *pPed);
static cTaskSimpleBeHit_ProcessPed_t pSimpleBeHitProcessPed_t{nullptr};
static auto __fastcall SimpleBeHitProcessPed_HOOK(void *pThis, void *, class cPed *pPed) -> bool {
	const class cGui *pGui{pMain->getGui()};
	return (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eAntiStun) && pPed == pMain->getSA()->getPlayerPed()) ? true : pSimpleBeHitProcessPed_t(pThis, pPed);
}


static void *pTaskSimpleChoking_JMP{nullptr};
using cTaskSimpleChoking_ProcessPed_t = bool(__thiscall *)(void *pThis, class cPed *pPed);
static cTaskSimpleChoking_ProcessPed_t pSimpleChokingProcessPed_t{nullptr};
static auto __fastcall SimpleChokingProcessPed_HOOK(void *pThis, void *, class cPed *pPed) -> bool {
	const class cGui *pGui{pMain->getGui()};
	return (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eProt) && pGui->getUInteger(cGui::eSyncUIntegers::eProtChoking) && pPed == pMain->getSA()->getPlayerPed()) ? true : pSimpleChokingProcessPed_t(pThis, pPed);
}


static void *pFireInstantHit_JMP{nullptr};
using cWeapon_FireInstantHit_t = bool(__thiscall *)(class cWeapon *pThis, class cEntity *pFiringEntity, class cVector3D *pOrigin, class cVector3D *pMuzzlePosn, class cEntity *pTargetEntity, class cVector3D *pTarget, class cVector3D *pOriginForDriveBy, bool bUnk, bool bMuzzle);
static cWeapon_FireInstantHit_t pFireInstantHit_t{nullptr};
static auto __fastcall FireInstantHit_HOOK(class cWeapon *pThis, void *, class cEntity *pFiringEntity, class cVector3D *pOrigin, class cVector3D *pMuzzlePosn, class cEntity *pTargetEntity, class cVector3D *pTarget, class cVector3D *pOriginForDriveBy, bool bUnk, bool bMuzzle) -> bool {
	const class cGui *pGui{pMain->getGui()};
	if (!pGui->bPanic && pGui->getUInteger(cGui::eSyncUIntegers::eSilentAim)) {
		std::mt19937 randEngine{std::random_device{}()};
		const std::uniform_int_distribution<unsigned __int32> randBool{0, 1};
		if (pGui->getUInteger(cGui::eSyncUIntegers::eSilentAimRandShot) ? randBool(randEngine) : true) {
			if (pMain->getSA()->getPlayerPed() == reinterpret_cast<const class cPed *>(pFiringEntity)) {
				static class cPed *pNearestPed{nullptr};		pNearestPed = nullptr;
				static float f2DCurrentDistance{0};				f2DCurrentDistance = pGui->getFloat(cGui::eSyncFloats::eSilentAimDistance);
				static class cVector3D vecPos {};				vecPos.clear();

				cPools::getPlayerPool()->forAllPeds([](class cPed *pPed) -> bool {
					class cPed *pLocalPed{pMain->getSA()->getPlayerPed()};
					if (pPed != pLocalPed && pPed->getAlive() && pPed->Physical.Entity.isVisible()) {
						const class cGui *pGui{pMain->getGui()};
						if (pGui->getUInteger(cGui::eSyncUIntegers::eSilentAimIgnoreMySkin) ? pPed->Physical.Entity.ui16ModelIndex != pLocalPed->Physical.Entity.ui16ModelIndex : true) {

							class cVector3D vecLocalPedPos {}, vecPedPos[2]{};

							pLocalPed->getBonePosition(&vecLocalPedPos, pLocalPed->getVehicle() == nullptr ? 2 : 6);
							pPed->getBonePosition(&vecPedPos[0], pPed->getVehicle() == nullptr ? 2 : 6);

							const unsigned __int32 ui32SilentAimIgnoreWalls{pGui->getUInteger(cGui::eSyncUIntegers::eSilentAimIgnoreWalls)};
							if (cWorld::getDistanceBetweenTwoPoints(&vecLocalPedPos, &vecPedPos[0]) <= pGui->getFloat(cGui::eSyncFloats::eSilentAimMaxDistance) &&
								cWorld::getIsLineOfSightClear(&vecLocalPedPos, &vecPedPos[0], !ui32SilentAimIgnoreWalls, false, false, !ui32SilentAimIgnoreWalls, !ui32SilentAimIgnoreWalls, false, false) &&
								cWorld::transform3DTo2DPoint(&vecPedPos[0], &vecPedPos[1])) {
								const class cVector2D vecCrossHair { static_cast<const float>(cDirectX::pPresentationParameters->BackBufferWidth) * *reinterpret_cast<const float *>(0xB6EC14), static_cast<const float>(cDirectX::pPresentationParameters->BackBufferHeight) * *reinterpret_cast<const float *>(0xB6EC10) };
								const float f2DNewDistance{cWorld::getDistanceBetweenTwoPoints(&vecCrossHair, &vecPedPos[1])};
								if (f2DNewDistance < f2DCurrentDistance) {
									pNearestPed = pPed;
									f2DCurrentDistance = f2DNewDistance;
									vecPos = std::move(vecPedPos[0]);
								}
							}
						}
					} return true;
				});

				if (!vecPos.isXYEmpty() && pNearestPed != nullptr) {
					const class cMP *pMP{pMain->getMP()};

					bool bIsAFK{true}, bSameColor{true};
					switch (cMP::SAMPVer) {
						case cMP::eVer::e037R1: {
							const struct stPlayerPool037R1 *pPlayerPool{pMP->getMainStructR1()->pPools->pPlayer};
							const unsigned __int16 ui16PlayerID{pPlayerPool->getPlayerIDByHandle(pNearestPed)};
							bIsAFK = pPlayerPool->getPlayerAFK(ui16PlayerID);
							bSameColor = pMP->getPlayerColor(ui16PlayerID) == pMP->getPlayerColor(pPlayerPool->ui16LocalPlayerID);
							break;
						}
						case cMP::eVer::e037R3: {
							const struct stPlayerPool037R3 *pPlayerPool{pMP->getMainStructR3()->pPools->pPlayer};
							const unsigned __int16 ui16PlayerID{pPlayerPool->getPlayerIDByHandle(pNearestPed)};
							bIsAFK = pPlayerPool->getPlayerAFK(ui16PlayerID);
							bSameColor = pMP->getPlayerColor(ui16PlayerID) == pMP->getPlayerColor(pPlayerPool->ui16LocalPlayerID);
							break;
						} default: break;
					}

					if (!bIsAFK && (pGui->getUInteger(cGui::eSyncUIntegers::eSilentAimIgnoreColor) ? !bSameColor : true)) {
						const float fSilentAimRand{pGui->getFloat(cGui::eSyncFloats::eSilentAimRand)};
						const std::uniform_real_distribution<float> randFloat{-fSilentAimRand, fSilentAimRand};

						randBool(randEngine) ? vecPos.fX += randFloat(randEngine) : vecPos.fX -= randFloat(randEngine);
						randBool(randEngine) ? vecPos.fY += randFloat(randEngine) : vecPos.fY -= randFloat(randEngine);
						randBool(randEngine) ? vecPos.fZ += randFloat(randEngine) * 2.0F : vecPos.fZ -= randFloat(randEngine) * 2.0F;
						return pFireInstantHit_t(pThis, pFiringEntity, pOrigin, pMuzzlePosn, pTargetEntity, std::move(&vecPos), pOriginForDriveBy, bUnk, bMuzzle);
					}
				}
			}
		}
	} return pFireInstantHit_t(pThis, pFiringEntity, pOrigin, pMuzzlePosn, pTargetEntity, pTarget, pOriginForDriveBy, bUnk, bMuzzle);
}
#pragma endregion SA


#pragma region OTHER
using RtlExitUserProcess_t = void(__stdcall *)(NTSTATUS ntExitStatus);
static RtlExitUserProcess_t pRtlExitUserProcess_t{nullptr};
static auto __stdcall NTDLL_RtlExitUserProcess_HOOK(NTSTATUS ntExitStatus) -> void {
	class cGui *pGui{pMain->getGui()};

	if (!pGui->bPanic && !pGui->bPromoCode && !pGui->bCustomProfile && pGui->ui32SelectedProfile && pGui->getUInteger(cGui::eSyncUIntegers::eOnExitSaveProfile)) {
		pGui->syncProfile();
	} pMain->getInternet()->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eExit))) + L' ' + pGui->wsProjectUserName)[0]);

	delete pMain;
	pRtlExitUserProcess_t(ntExitStatus);
	return;
}
#pragma endregion OTHER


#pragma region LOADER
static void *pHookEnterFunc_JMP{nullptr};
static void *pHookEnterFunc{nullptr};
static auto __cdecl HookEnterFunc_CALL_1(void) -> void {
	const class cHook *pHook{pMain->getHook()};
	void *pEnumDisplayHookAddr{pHook->getHookAddress(pMain->getProcAddr(L"USER32.DLL", L"EnumDisplayDevicesW"))};
	if ((pEnumDisplayHookAddr == nullptr || std::move(pMain->getModuleNameW(pMain->getAddressModule(pEnumDisplayHookAddr), false)) == L"nvd3d9wrap.dll")) {

		const class cSA *pSA{pMain->getSA()};

		cDirectX::pIDirect3D9 = pSA->getDirect3D9();
		cDirectX::pIDirect3DDevice9 = pSA->getCurrentD3DDevice();
		cDirectX::pPresentationParameters = pSA->getD3DPresentParams();

		if (pHook->getHookAddress(pMain->getVMT(cDirectX::pIDirect3D9, static_cast<const unsigned __int32>(cDirectX::eIDirect3D9_VTBL::eGetAdapterIdentifier))) == nullptr) {

			class cGui *pGui{pMain->getGui()};
			const class cWinAPIFuncs *pWinAPIFuncs{pMain->getWinAPIFuncs()};
			const class cInternet *pInternet{pMain->getInternet()};

			if (!pGui->bPromoCode) {
				DISPLAY_DEVICEW displayDeviceA{};
				displayDeviceA.cb = sizeof(DISPLAY_DEVICEW);
				pWinAPIFuncs->enumDisplayDevicesW(nullptr, 0, &displayDeviceA, 0);

				DISPLAY_DEVICEW displayDeviceB{};
				displayDeviceB.cb = sizeof(DISPLAY_DEVICEW);
				pWinAPIFuncs->enumDisplayDevicesW(&displayDeviceA.DeviceName[0], 0, &displayDeviceB, EDD_GET_DEVICE_INTERFACE_NAME);

				D3DADAPTER_IDENTIFIER9 adapterInfo{};
				cDirectX::pIDirect3D9->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &adapterInfo);

				std::wstringstream wssAdapterID{};
				wssAdapterID <<
					std::uppercase << std::hex << std::hash<std::wstring>{}(&displayDeviceA.DeviceID[0]) << L'-' <<
					std::uppercase << std::hex << std::hash<std::wstring>{}(&displayDeviceA.DeviceKey[0]) << L'-' <<
					std::uppercase << std::hex << std::hash<std::wstring>{}(&displayDeviceA.DeviceString[0]) << L'-' <<
					std::uppercase << std::hex << std::hash<std::wstring>{}(&displayDeviceB.DeviceID[0]) << L'-' <<
					std::uppercase << std::hex << std::hash<std::wstring>{}(&displayDeviceB.DeviceKey[0]) << L'-' <<
					std::uppercase << std::hex << std::hash<std::wstring>{}(&displayDeviceB.DeviceString[0]) << L'-' <<
					std::uppercase << std::hex << adapterInfo.SubSysId << L'-' <<
					std::uppercase << std::hex << adapterInfo.DeviceId << L'-' <<
					std::uppercase << std::hex << adapterInfo.Revision << L'-' <<
					std::uppercase << std::hex << adapterInfo.VendorId << L'-' <<
					std::uppercase << std::hex << adapterInfo.DeviceIdentifier.Data1 << L'-' <<
					std::uppercase << std::hex << adapterInfo.DeviceIdentifier.Data2 << L'-' <<
					std::uppercase << std::hex << adapterInfo.DeviceIdentifier.Data3;

				pGui->wsLIDOrPromo = std::move(wssAdapterID.str());
			}

			__int32 i32TotalCMDArgvs{0};
			wchar_t **ppCMDArgvs{pMain->getCMDArgvNoCleanW(&i32TotalCMDArgvs)};
			if (ppCMDArgvs != nullptr) {
				switch (cMP::LauncherType) {
					case cMP::eLauncherType::eOriginal:
					case cMP::eLauncherType::eGTARP:
					case cMP::eLauncherType::ePremier:
					case cMP::eLauncherType::eAmazing:
					case cMP::eLauncherType::eDiamond: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L' ' + ppCMDArgvs[3] + L' ' + ppCMDArgvs[5] + L' ' + ppCMDArgvs[7] + L' ' + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					}
					case cMP::eLauncherType::eRadmir:
					case cMP::eLauncherType::eSRauncher: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L' ' + ppCMDArgvs[2] + L' ' + ppCMDArgvs[4] + L' ' + ppCMDArgvs[6] + L' ' + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					}
					case cMP::eLauncherType::eArizona: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L' ' + ppCMDArgvs[9] + L' ' + ppCMDArgvs[3] + L' ' + ppCMDArgvs[5] + L' ' + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					}
					case cMP::eLauncherType::eMalimovka: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L' ' + ppCMDArgvs[7] + L' ' + ppCMDArgvs[3] + L' ' + ppCMDArgvs[5] + L' ' + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					}
					case cMP::eLauncherType::eStrix:
					case cMP::eLauncherType::eGreenTech:
					case cMP::eLauncherType::eNamalsk: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L' ' + ppCMDArgvs[4] + L' ' + ppCMDArgvs[6] + L' ' + ppCMDArgvs[8] + L' ' + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					}
					case cMP::eLauncherType::eUGMP:
					case cMP::eLauncherType::eSAMP_NET: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L' ' + ppCMDArgvs[6] + L' ' + ppCMDArgvs[2] + L' ' + ppCMDArgvs[4] + L' ' + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					} default: {
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eLIDChecker))) + L' ' + pGui->wsLIDOrPromo + L" UNK UNK UNK " + std::move(std::to_wstring(static_cast<const unsigned __int32>(cMP::LauncherType))) + L' ' + PROJECT_VERSION_W)[0]);
						break;
					}
				} pWinAPIFuncs->localFree(ppCMDArgvs);

				std::thread{[](class cGui *pGui, const class cWinAPIFuncs *pWinAPIFuncs, const class cInternet *pInternet, const class cHook *pHook) -> void {
					while (!pMain->isInternetHooked()) {
						__int32 i32TotalReceived{0};
						const std::wstring wsClientReceived{std::move(pInternet->recvFromW(pGui->socServerSocket, &pGui->sockServerAddrIn, 8192, &i32TotalReceived))};
						if (i32TotalReceived) {
							__int32 i32TotalRequestArgvs{0};
							wchar_t **ppRequestArgvs{pWinAPIFuncs->commandLineToArgvW(&wsClientReceived[0], &i32TotalRequestArgvs)};
							if (ppRequestArgvs != nullptr) {
								switch (static_cast<const cGui::eSendMode>(_wtoi(ppRequestArgvs[0]))) {
									case cGui::eSendMode::eLIDChecker: {
										pGui->ui32ProjectLicenseDays = _wtoi(ppRequestArgvs[1]);
										if (pGui->ui32ProjectLicenseDays > 0 && pGui->wsLIDOrPromo == ppRequestArgvs[3]) {
											pGui->wsProjectUserName.append(ppRequestArgvs[2]);
											pGui->bNeedUpdate = std::move(std::wstring{ppRequestArgvs[4]}) == L"True";
											pGui->bDeveloper = std::move(std::wstring{ppRequestArgvs[5]}) == L"True";
											pGui->bSpecial = std::move(std::wstring{ppRequestArgvs[6]}) == L"True";
											for (__int32 I32{7}; I32 < i32TotalRequestArgvs; ++I32) {
												const std::wstring wsProfile{ppRequestArgvs[I32]};
												pGui->vecProfiles.emplace_back(std::move(std::string{wsProfile.cbegin(), wsProfile.cend()}));
											}

											pWinAPIFuncs->disableThreadLibraryCalls(cMain::hModule);
											pWinAPIFuncs->setUnhandledExceptionFilter(&__UnhandledExceptionFilter);

											const class cDirectX *pDirectX{pMain->getDirectX()};

											// Init DX_Fonts
											class cDXFont *pFont{pDirectX->getFont()};

											D3DXFONT_DESCW fontNormal{};
											fontNormal.Height = 13;
											fontNormal.CharSet = DEFAULT_CHARSET;
											fontNormal.Quality = NONANTIALIASED_QUALITY;
											fontNormal.PitchAndFamily = DEFAULT_PITCH | FF_DONTCARE;
											fontNormal.MipLevels = 1;
											std::memcpy(&fontNormal.FaceName[0], L"VERDANA", 14);
											pFont->createFont(cDirectX::pIDirect3DDevice9, cDXFont::eFontType::eNormal, &fontNormal);

											D3DXFONT_DESCW fontFinalHud{};
											fontFinalHud = fontNormal;
											fontFinalHud.Height = 15;
											pFont->createFont(cDirectX::pIDirect3DDevice9, cDXFont::eFontType::eFinalHud, &fontFinalHud);

											D3DXFONT_DESCW fontNameTags{};
											fontNameTags = fontNormal;
											fontNameTags.Height = 17;
											fontNameTags.Weight = 1000;
											std::memcpy(&fontNameTags.FaceName[0], L"ARIBLK", 12);
											pFont->createFont(cDirectX::pIDirect3DDevice9, cDXFont::eFontType::eNameTags, &fontNameTags);

											// Init DX_Lines
											class cDXLine *pLine{pDirectX->getLine()};

											ID3DXLine *pNormalLine{pLine->createLine(cDirectX::pIDirect3DDevice9, cDXLine::eLineType::eNormal)};
											pNormalLine->SetAntialias(0);
											pNormalLine->SetGLLines(0);
											pNormalLine->SetWidth(1.0F);

											ID3DXLine *pFinalHudLine{pLine->createLine(cDirectX::pIDirect3DDevice9, cDXLine::eLineType::eFinalHud)};
											pFinalHudLine->SetAntialias(0);
											pFinalHudLine->SetGLLines(0);
											pFinalHudLine->SetWidth(30.0F);

											ID3DXLine *pNameTagsLine{pLine->createLine(cDirectX::pIDirect3DDevice9, cDXLine::eLineType::eNameTags)};
											pNameTagsLine->SetAntialias(0);
											pNameTagsLine->SetGLLines(0);
											pNameTagsLine->SetWidth(9.0F);

											// Init ImGui
											pGui->init(cDirectX::pPresentationParameters->hDeviceWindow, cDirectX::pIDirect3DDevice9);

											ImGuiIO *pImIO{&ImGui::GetIO()};
											pImIO->IniFilename = nullptr;
											pImIO->LogFilename = nullptr;
											pImIO->MouseDrawCursor = true;
											pImIO->ConfigWindowsMoveFromTitleBarOnly = true;

											ImGuiStyle *pImStyle{&ImGui::GetStyle()};
											pImStyle->WindowPadding = std::move(ImVec2{3.0F, 3.0F});
											pImStyle->FramePadding = std::move(ImVec2{27.0F, 10.0F});
											pImStyle->ItemSpacing = std::move(ImVec2{4.0F, 4.0F});
											pImStyle->ItemInnerSpacing = std::move(ImVec2{4.0F, 4.0F});
											pImStyle->WindowTitleAlign = std::move(ImVec2{0.50F, 0.50F});
											pImStyle->ScrollbarSize = 10.0F;
											pImStyle->FrameRounding = 10.0F;
											pImStyle->WindowRounding = 10.0F;
											pImStyle->TabRounding = 10.0F;
											pImStyle->ChildRounding = 10.0F;
											pImStyle->ScrollbarRounding = 10.0F;
											pImStyle->GrabRounding = 10.0F;
											pImStyle->PopupRounding = 10.0F;
											pImStyle->PopupBorderSize = 1.0F;
											pImStyle->TabBorderSize = 1.0F;

											pGui->setTheme(cGui::eThemeMode::eDarkGreen);

											// Init ImGui Fonts
											ImFontAtlas *pFonts{pImIO->Fonts};

											char cWndFont[512 + 1]{};
											pWinAPIFuncs->getSystemWindowsDirectoryA(&cWndFont[0], sizeof(cWndFont) - 1);
											pFonts->AddFontFromFileTTF(&std::move(std::move(std::string{cWndFont}) + "\\Fonts\\VERDANA.TTF")[0], 14.0F, nullptr, pFonts->GetGlyphRangesCyrillic());

											ImFontConfig IcoMoonFontConfig{};
											IcoMoonFontConfig.MergeMode = true;
											pFonts->AddFontFromMemoryTTF(pMain->getResource(cMain::hModule, 1, reinterpret_cast<const wchar_t *>(RT_FONT)), 14, 14.0F, &IcoMoonFontConfig, &pGui->ui32GlyphRangeIcoMoon[0]);

											// Init Textures
											unsigned __int32 ui32TexSize{0};
											const void *pLogoTex{pMain->getResource(cMain::hModule, 2, reinterpret_cast<const wchar_t *>(RT_FONT), &ui32TexSize)};
											pWinAPIFuncs->d3dxCreateTextureInMemory(cDirectX::pIDirect3DDevice9, pLogoTex, ui32TexSize, &pGui->pLogoTexture);

											const void *pBackGroundTex{pMain->getResource(cMain::hModule, 3, reinterpret_cast<const wchar_t *>(RT_FONT), &ui32TexSize)};
											pWinAPIFuncs->d3dxCreateTextureInMemory(cDirectX::pIDirect3DDevice9, pBackGroundTex, ui32TexSize, &pGui->pBackGroundTexture);

											/* SA Hooks */
											pHook->installJMPHook(reinterpret_cast<void *>(0x54BCEE), &ProcessCollisionSectorList_HOOK, 0x6);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6D6E99), &CruiseControl_HOOK, 0x6);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6B211F), &DoubleBoost_HOOK, 0x7);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6A0AD9), &MonsterHyd_HOOK, 0x8);
											pHook->installJMPHook(reinterpret_cast<void *>(0x72973B), &WaterCannonPushPeds_HOOK, 0x6);
											pHook->installJMPHook(reinterpret_cast<void *>(0x62A9E8), &DoubleWeapon1_HOOK, 0x7);
											pHook->installJMPHook(reinterpret_cast<void *>(0x7330B4), &DoubleWeapon2_HOOK, 0x7);
											pHook->installJMPHook(reinterpret_cast<void *>(0x61EFAE), &DoubleWeapon3_HOOK, 0x6);
											pHook->installJMPHook(reinterpret_cast<void *>(0x61F0E6), &DoubleWeapon4_HOOK, 0x5);
											pHook->installJMPHook(reinterpret_cast<void *>(0x601640), &FlushImmediately_HOOK, 0x7, reinterpret_cast<void **>(&pFlushImmediately_t), &pFlushImmediately_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x64D710), &CarOpenDoorFromOutside_HOOK, 0x6, reinterpret_cast<void **>(&pCarOpenDoorFromOutside_t), &pCarOpenDoorFromOutside_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x64E060), &CarSlowDragPedOut_HOOK, 0x7, reinterpret_cast<void **>(&pCarSlowDragPedOut_t), &pCarSlowDragPedOut_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6A32B0), &BurstTyre_HOOK, 0x5, reinterpret_cast<void **>(&pBurstTyre_t), &pBurstTyre_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x4B4AC0), &SetPedSafePosition_HOOK, 0x5, reinterpret_cast<void **>(&pSetPedSafePosition_t), &pSetPedSafePosition_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x585FF0), &DrawRadarSprite_HOOK, 0x5, reinterpret_cast<void **>(&pDrawRadarSprite_t), &pDrawRadarSprite_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x4B5AC0), &ComputeDamageResponse_HOOK, 0x6, reinterpret_cast<void **>(&pComputeDamageResponse_t), &pComputeDamageResponse_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x73A530), &GenerateDamageEvent_HOOK, 0x7, reinterpret_cast<void **>(&pGenerateDamageEvent_t), &pGenerateDamageEvent_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6D30E0), &SetVehicleUpgradeFlags_HOOK, 0x7, reinterpret_cast<void **>(&pSetVehicleUpgradeFlags_t), &pSetVehicleUpgradeFlags_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6D3210), &ClearVehicleUpgradeFlags_HOOK, 0x7, reinterpret_cast<void **>(&pClearVehicleUpgradeFlags_t), &pClearVehicleUpgradeFlags_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x6CEFB0), &BreakTowLink_HOOK, 0xA, reinterpret_cast<void **>(&pBreakTowLink_t), &pBreakTowLink_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x5485E0), &ProcessControl_HOOK, 0x6, reinterpret_cast<void **>(&pProcessControl_t), &pProcessControl_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x620A20), &SimpleBeHitProcessPed_HOOK, 0x6, reinterpret_cast<void **>(&pSimpleBeHitProcessPed_t), &pTaskSimpleBeHit_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x620490), &SimpleChokingProcessPed_HOOK, 0x6, reinterpret_cast<void **>(&pSimpleChokingProcessPed_t), &pTaskSimpleChoking_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x73FB10), &FireInstantHit_HOOK, 0x7, reinterpret_cast<void **>(&pFireInstantHit_t), &pFireInstantHit_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x747EB0), &WindowProc_HOOK, 0x5, reinterpret_cast<void **>(&pWindowProc_t), &pWindowProc_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x53F1E0), &ClearKeyBoardHistory_HOOK, 0x5, reinterpret_cast<void **>(&pClearKeyBoardHistory_t), &pClearKeyBoardHistory_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x63AEE0), &EnterCarAsDriverTimed_HOOK, 0x6, reinterpret_cast<void **>(&pEnterCarAsDriverTimed_t), &pEnterCarAsDriverTimed_JMP);
											pHook->installJMPHook(reinterpret_cast<void *>(0x69F2B0), &AddBigMessage_HOOK, 0x6, reinterpret_cast<void **>(&pAddBigMessage_t), &pAddBigMessage_JMP);
											/* MP Hooks */
											switch (cMP::SAMPVer) {
												case cMP::eVer::e037R1: {
													/* D3D9 Hooks */
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6FFEF), &IDirect3DDevice9_Reset_HOOK, 0x7, nullptr, &(pIDirect3DDevice9_Reset_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6FFF6)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x71130), &IDirect3DDevice9_Present_HOOK, 0x6, reinterpret_cast<void **>(&pPresent_t), &pPresent_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x708A0), &IDirect3DDevice9_DrawIndexedPrimitive_HOOK, 0x5, reinterpret_cast<void **>(&pDrawIndexedPrimitive_t), &pDrawIndexedPrimitive_JMP);
													/* RakNet Hooks */
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x37436), &iRPC_WithParams_HOOK, 0x7, nullptr, &(piRPC_WithParams_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x37443)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x373C2), &iRPC_Clear_HOOK, 0x7, nullptr, &(piRPC_Clear_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x37454)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x38E60), &RakPeerSendImmediate_HOOK, 0x5, reinterpret_cast<void **>(&pSendImmediate_t), &pSendImmediate_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3D4E0), &RakPeerReceive_HOOK, 0x5, reinterpret_cast<void **>(&pReceive_t), &pReceive_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3A560), &RakPeerRPC2_HOOK, 0x5, reinterpret_cast<void **>(&pRPC2_t), &pRPC2_JMP);
													/* MP Hacks Hooks */
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9C0A0), &SetTime_HOOK, 0x8, nullptr, &(pSetTime_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9C0A8)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA3050), &SetMaterialText_HOOK, 0x5, reinterpret_cast<void **>(&pSetMaterialText_t), &pSetMaterialText_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x64010), &ChatInfoAddMessage_HOOK, 0x5, reinterpret_cast<void **>(&pAddMessage_t), &pAddMessage_JMP);
													cMP::LauncherType != cMP::eLauncherType::eArizona ? pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x99120), &SetCameraPos_HOOK, 0x6, reinterpret_cast<void **>(&pSetCameraPos_t), &pSetCameraPos_JMP) : true;
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x99180), &SetCameraPointAt_HOOK, 0x6, reinterpret_cast<void **>(&pSetCameraPointAt_t), &pSetCameraPointAt_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA6700), &GetState_HOOK, 0x6, reinterpret_cast<void **>(&pGetState_t), &pGetState_JMP);
													break;
												}
												case cMP::eVer::e037R3: {
													/* D3D9 Hooks */
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x73EDF), &IDirect3DDevice9_Reset_HOOK, 0x7, nullptr, &(pIDirect3DDevice9_Reset_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x73EE6)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x75020), &IDirect3DDevice9_Present_HOOK, 0x6, reinterpret_cast<void **>(&pPresent_t), &pPresent_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x74790), &IDirect3DDevice9_DrawIndexedPrimitive_HOOK, 0x5, reinterpret_cast<void **>(&pDrawIndexedPrimitive_t), &pDrawIndexedPrimitive_JMP);
													/* RakNet Hooks */
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3A7E6), &iRPC_WithParams_HOOK, 0x7, nullptr, &(piRPC_WithParams_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3A7F3)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3A772), &iRPC_Clear_HOOK, 0x7, nullptr, &(piRPC_Clear_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3A804)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3C210), &RakPeerSendImmediate_HOOK, 0x5, reinterpret_cast<void **>(&pSendImmediate_t), &pSendImmediate_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x40890), &RakPeerReceive_HOOK, 0x5, reinterpret_cast<void **>(&pReceive_t), &pReceive_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3D910), &RakPeerRPC2_HOOK, 0x5, reinterpret_cast<void **>(&pRPC2_t), &pRPC2_JMP);
													/* MP Hacks Hooks */
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA03A0), &SetTime_HOOK, 0x8, nullptr, &(pSetTime_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA03A8)));
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA7E20), &SetMaterialText_HOOK, 0x5, reinterpret_cast<void **>(&pSetMaterialText_t), &pSetMaterialText_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x67460), &ChatInfoAddMessage_HOOK, 0x5, reinterpret_cast<void **>(&pAddMessage_t), &pAddMessage_JMP);
													cMP::LauncherType != cMP::eLauncherType::eArizona ? pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9D070), &SetCameraPos_HOOK, 0x6, reinterpret_cast<void **>(&pSetCameraPos_t), &pSetCameraPos_JMP) : true;
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9D0D0), &SetCameraPointAt_HOOK, 0x6, reinterpret_cast<void **>(&pSetCameraPointAt_t), &pSetCameraPointAt_JMP);
													pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xAB5B0), &GetState_HOOK, 0x6, reinterpret_cast<void **>(&pGetState_t), &pGetState_JMP);
													break;
												} default: break;
											}
											/* Other Hooks */
											pHook->installJMPHook(pMain->getProcAddr(L"NTDLL.DLL", L"RtlExitUserProcess"), &NTDLL_RtlExitUserProcess_HOOK, 0x5, reinterpret_cast<void **>(&pRtlExitUserProcess_t));

											if (pMain->getWinMinorVersion() != 1) {
												pMain->hideModule(cMain::hModule);
											}
										} else {
											pWinAPIFuncs->beep(750, 500);
										} break;
									}
									case cGui::eSendMode::eNews: {
										pGui->sNews = std::move(std::string{wsClientReceived.cbegin() + 2, wsClientReceived.cend() + i32TotalReceived});
										break;
									}
									case cGui::eSendMode::eAddProfile: {
										pGui->vecProfiles.emplace_back(wsClientReceived.cbegin() + 2, wsClientReceived.cend() + i32TotalReceived);
										break;
									}
									case cGui::eSendMode::eLoadProfile_UINT: {
										if (i32TotalRequestArgvs > 2) {
											__int32 i32Iterator[2]{0, 2};

											std::for_each(pGui->vecUIntegers.cbegin(), pGui->vecUIntegers.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const unsigned __int32) -> void {
												pGui->vecUIntegers[i32Iterator[0]++] = static_cast<const unsigned __int32>(_wtoi64(ppRequestArgvs[i32Iterator[1]++]));
												return;
											});
											i32Iterator[0] = 0;

											std::for_each(pGui->vecIncomeRPCs.cbegin(), pGui->vecIncomeRPCs.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
												std::get<0>(pGui->vecIncomeRPCs[i32Iterator[0]++]) = _wtoi(ppRequestArgvs[i32Iterator[1]++]);
												return;
											});
											i32Iterator[0] = 0;

											std::for_each(pGui->vecOutcomeRPCs.cbegin(), pGui->vecOutcomeRPCs.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
												std::get<0>(pGui->vecOutcomeRPCs[i32Iterator[0]++]) = _wtoi(ppRequestArgvs[i32Iterator[1]++]);
												return;
											});
											i32Iterator[0] = 0;

											std::for_each(pGui->vecIncomePackets.cbegin(), pGui->vecIncomePackets.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
												std::get<0>(pGui->vecIncomePackets[i32Iterator[0]++]) = _wtoi(ppRequestArgvs[i32Iterator[1]++]);
												return;
											});
											i32Iterator[0] = 0;

											std::for_each(pGui->vecOutcomePackets.cbegin(), pGui->vecOutcomePackets.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const std::tuple<unsigned __int32, const unsigned __int8, const std::string>) -> void {
												std::get<0>(pGui->vecOutcomePackets[i32Iterator[0]++]) = _wtoi(ppRequestArgvs[i32Iterator[1]++]);
												return;
											});
											i32Iterator[0] = 0;

											std::get<0>(pGui->tRollCrasher) = static_cast<const cGui::eRollCrasherMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tTrollMode) = static_cast<const cGui::eTrollMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tTrollType) = static_cast<const cGui::eTrollType>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tInvisibleMode) = static_cast<const cGui::eInvisibleMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tStrobeLightsMode) = static_cast<const cGui::eStrobeMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tThemeMode) = static_cast<const cGui::eThemeMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tFakeAnimMode) = static_cast<const cGui::eFakeAnimMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											std::get<0>(pGui->tFakeMPVerMode) = static_cast<const cGui::eFakeMPVerMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
										} break;
									}
									case cGui::eSendMode::eLoadProfile_INT: {
										if (i32TotalRequestArgvs > 2) {
											__int32 i32Iterator[2]{0, 2};
											std::for_each(pGui->vecIntegers.cbegin(), pGui->vecIntegers.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const __int32) -> void {
												pGui->vecIntegers[i32Iterator[0]++] = _wtoi(ppRequestArgvs[i32Iterator[1]++]);
												return;
											});
											i32Iterator[0] = 0;

											pGui->pizdaVectorMode = static_cast<const cGui::ePizdaVector>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											pGui->trollSyncMode = static_cast<const cGui::eTrollSyncMode>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
											pGui->fakeState = static_cast<const cGui::eFakeState>(_wtoi(ppRequestArgvs[i32Iterator[1]++]));
										} break;
									}
									case cGui::eSendMode::eLoadProfile_FLOAT: {
										if (i32TotalRequestArgvs > 2) {
											__int32 i32Iterator[2]{0, 2};
											std::for_each(pGui->vecFloats.cbegin(), pGui->vecFloats.cend(), [&pGui, ppRequestArgvs, &i32Iterator](const float) -> void {
												pGui->vecFloats[i32Iterator[0]++] = std::wcstof(ppRequestArgvs[i32Iterator[1]++], L'\0');
												return;
											});
											i32Iterator[0] = 0;

											pGui->updateStrings();

											pGui->setTheme(std::get<0>(pGui->tThemeMode));
											pMain->hideModuleFile(*pGui->getUIntegerPtrBool(cGui::eSyncUIntegers::eHideFPFile), cMain::hModule);
											__AutoLoad(1);
										} break;
									}
									case cGui::eSendMode::ePopProfile: {
										pGui->vecProfiles.erase(std::remove(pGui->vecProfiles.begin(), pGui->vecProfiles.end(), pGui->vecProfiles[pGui->ui32SelectedProfile - 1]), pGui->vecProfiles.cend());
										pGui->ui32SelectedProfile = 0;
										break;
									}
									case cGui::eSendMode::eAlive: {
										pGui->ui32TotalConnected = _wtoi(ppRequestArgvs[1]);
										break;
									}
									case cGui::eSendMode::eAddChat: {
										pGui->bChatJustUpdated = true;
										pGui->sChat.append(wsClientReceived.cbegin() + 3, wsClientReceived.cbegin() + i32TotalReceived);
										pGui->sChat.push_back('\n');
										break;
									}
									case cGui::eSendMode::eKickAll: {
										if (!pGui->bDeveloper) {
											NTDLL_RtlExitUserProcess_HOOK(0);
										} break;
									}
									case cGui::eSendMode::eBeepAll: {
										pWinAPIFuncs->beep(750, 150);
										break;
									} default: break;
								} pWinAPIFuncs->localFree(ppRequestArgvs);
							}
						}
					} return;
				}, pGui, pWinAPIFuncs, pInternet, pHook}.detach();

				std::thread{[](class cGui *pGui, const class cInternet *pInternet) -> void {
					while (!pMain->isInternetHooked()) {
						std::this_thread::sleep_for(std::chrono::seconds{3});
						pInternet->sendToW(pGui->socServerSocket, &pGui->sockServerAddrIn, &(std::move(std::to_wstring(static_cast<const __int32>(cGui::eSendMode::eAlive))) + L" 0 " + pGui->wsProjectUserName)[0]);
					} return;
				}, pGui, pInternet}.detach();
			}

		}
	}

	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			pHook->removeJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5DB55), pHookEnterFunc, 0x5);
			break;
		}
		case cMP::eVer::e037R3: {
			pHook->removeJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x60EF5), pHookEnterFunc, 0x5);
			break;
		} default: break;
	} return;
}
static auto __declspec(noinline) __declspec(naked) HookEnterFunc_HOOK(void) -> void {

	__asm {
		push ebx;
		mov ebx, [esp + 0x1C];

		pushfd;
		pushad;
		call HookEnterFunc_CALL_1;
		popad;
		popfd;

		jmp pHookEnterFunc_JMP;
	}

}
#pragma endregion LOADER


auto __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID) -> __int32 {
	if (fdwReason == DLL_PROCESS_ATTACH) {
		pMain = new cMain{hinstDLL};

		const class cSA *pSA{pMain->getSA()};
		if (pSA->isVersionUS10() && (cMP::SAMPVer == cMP::eVer::e037R1 || cMP::SAMPVer == cMP::eVer::e037R3)) {
			const class cSAPatch *pSAPatch{pSA->getPatch()};
			pSAPatch->patchFlickr();
			pSAPatch->patchLeaveCarAndDie();

			const class cMPPatch *pMPPatch{pMain->getMP()->getPatch()};
			pMPPatch->patchAntiCheat();
			pMPPatch->patchTextDrawFreezer();
			pMPPatch->patchWarnCrash();

			const class cHook *pHook{pMain->getHook()};
			switch (cMP::SAMPVer) {
				case cMP::eVer::e037R1: {
					pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5DB55), &HookEnterFunc_HOOK, 0x5, &pHookEnterFunc, &(pHookEnterFunc_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5DB55 + 0x5)));
					break;
				}
				case cMP::eVer::e037R3: {
					pHook->installJMPHook(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x60EF5), &HookEnterFunc_HOOK, 0x5, &pHookEnterFunc, &(pHookEnterFunc_JMP = reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x60EF5 + 0x5)));
					break;
				} default: break;
			}
		}
	} return 1;
}


//#pragma warning(pop)