//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef GUI_HPP
#define GUI_HPP

#pragma once

#include "include\cMain.hpp"

#include "include\ImGui\imgui.h"
#include "include\ImGui\imgui_stdlib.h"
#include "include\ImGui\imgui_impl_dx9.h"
#include "include\ImGui\imgui_impl_win32.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

class cGui final {
	public:

	enum class eSendMode : const __int32 {
		eLIDChecker = 1,
		eNews,
		eAddProfile,
		eSaveProfile_UINT,
		eSaveProfile_INT,
		eSaveProfile_FLOAT,
		eLoadProfile_UINT,
		eLoadProfile_INT,
		eLoadProfile_FLOAT,
		ePopProfile,
		eAlive,
		eExit,
		eAddChat,
		eKickAll,
		eBeepAll
	};

	enum class eThemeMode : const unsigned __int32 {
		eDarkGreen,
		eDarkBurgundy,
		eImGuiOriginalDark,
		eImGuiOriginalLight,
		eDarkPurple,
		eDarkGray,
		eCyberDark
	};

	enum class eRollCrasherMode : const unsigned __int32 {
		eSafe,
		eOriginal
	};

	enum class eTrollMode : const unsigned __int32 {
		eLoading1,
		eLoading2,
		eLoading3,
		eLoading4,
		eTrailerID,
		eToSky1,
		eToSky2,
		eToHell1,
		eToHell2,
		eToMe,
		eBlow,
		eMaxSpeed1,
		eMaxSpeed2,
		eMaxSpeed3,
		eFlip,
		eFakeMinigun,
		eFix,
		eCopySend,
		eWayPoint
	};

	enum class eTrollType : const unsigned __int32 {
		eDefault,
		eEnterExitVeh
	};

	enum class eInvisibleMode : const unsigned __int32 {
		eDown,
		eSky
	};

	enum class eStrobeMode : const unsigned __int32 {
		eDefault,
		eLeftThenRight,
		eDouble
	};

	enum class eFakeAnimMode : const unsigned __int32 {
		eRapParty,
		eCatchYou,
		eShaking,
		eFears,
		eFap,
		eWhoreDance,
		eEmpty,
		eWeedSmoker,
		eWayShow,
		eFakeDie,
		eViceDance,
		eParaFly,
		eGunFears,
		eHandsUp
	};

	enum class eWaitingKeys : const unsigned __int32 {
		eNoWaiting,
		eMenu,
		ePanic,
		eAirBrake,
		eVehJump,
		eSpeedHack,
		eQuickStop,
		eFlip,
		eResetPed,
		eProt,
		eSilentAim,
		eReconnect,
		eUnfreeze,
		eStopRadio,
		eSavedPosition1,
		eSavedPosition2,
		eSavedPosition3,
		eSavedPosition4,
		eSavedPosition5,
		eSavedPosition6,
		ePizdaRvanka,
		eInvisible
	};

	enum class eFakeMPVerMode : const unsigned __int32 {
		eR1,
		eR4,
		eDL,
		eAndroid
	};

	enum class eTrollSyncMode : const __int32 {
		eUnoccupied,
		eInCar
	};

	enum class ePizdaVector : const __int32 {
		eX,
		eY,
		eZ,
		eXY,
		eXYZ
	};

	enum class eFakeState : const __int32 {
		eUnk,
		eOnFoot1,
		eOnFoot2 = 12,
		eInCar = 50,
		eSpawn1 = 54,
		eSpawn2
	};

	enum class eSyncUIntegers : const unsigned __int32 {
		eKeyMenu1,
		eKeyMenu2,
		eKeyPanic1,
		eKeyPanic2,
		eKeyAirBrake1,
		eKeyAirBrake2,
		eKeyVehJump1,
		eKeyVehJump2,
		eKeySpeedHack1,
		eKeySpeedHack2,
		eKeyQuickStop1,
		eKeyQuickStop2,
		eKeyFlip1,
		eKeyFlip2,
		eKeyResetPed1,
		eKeyResetPed2,
		eKeyProt1,
		eKeyProt2,
		eKeySilentAim1,
		eKeySilentAim2,
		eKeyReconnect1,
		eKeyReconnect2,
		eKeyUnfreeze1,
		eKeyUnfreeze2,
		eKeyStopRadio1,
		eKeyStopRadio2,
		eKeySavedPositionA1,
		eKeySavedPositionA2,
		eKeySavedPositionB1,
		eKeySavedPositionB2,
		eKeySavedPositionC1,
		eKeySavedPositionC2,
		eKeySavedPositionD1,
		eKeySavedPositionD2,
		eKeySavedPositionE1,
		eKeySavedPositionE2,
		eKeySavedPositionF1,
		eKeySavedPositionF2,	
		eKeyPizdaRvanka1,
		eKeyPizdaRvanka2,
		eKeyInvisible1,
		eKeyInvisible2,
		eDisableHotKeys,
		eLimitMoveSpeed,
		eLimitMoveSpeedStatic,
		eFakeAnim,
		eFakeSpecialAction,
		eInvisible,
		eInvalidAIMPro,
		eFakeHP,
		eFakeAP,
		eEnterVehiclePass,
		eProt,
		eProtHeliBlades,
		eProtFall,
		eProtBlowUp,
		eProtFire,
		eProtWeapons,
		eProtDB,
		eProtDieInVeh,
		eProtDieEnterVehOnFire,
		eProtHPVeh,
		eProtCarTire,
		eProtCreateExplosionFix,
		eProtTriggerExplosion,
		eProtChoking,
		eWallHack,
		eWallHackWeapon,
		eWallHackLinesDist,
		eWallHackLongLinesDist,
		eWallHackVehDoors,
		eWallHackRadarTraces,
		eWallHackNames,
		eWallHackBones,
		eWallHackRhombus,
		eWallHackAngle,
		eWallHackCircles,
		eWallHack3DText,
		eWallHackVehicle,
		eWallHackRadar,
		eWallHackBulletTrace,
		eWallHackPickupIDs,
		eWallHackTextDrawIDs,
		eWallHackRenderRadarPlayerIDs,
		eWallHackNoDLLimit,
		eWallHackRenderObjIcons,
		eWallHackRenderMPObjIcons,
		eWallHackBombs,
		eWallHackWireFrameThings,
		eWallHackWeaponChams,
		eWallHackTextures,
		eWallHackWireFrame,
		eWallHackChams,
		eWallShot,
		eSilentAim,
		eSilentAimIgnoreColor,
		eSilentAimIgnoreMySkin,
		eSilentAimRandShot,
		eSilentAimIgnoreWalls,
		eTriggerBot,
		eTriggerBotCrossStop,
		eBunnyHopSpeed,
		eBunnyHopHeight,
		eNoBikeFall,
		eNoReload,
		eNoSetEngineState,
		eNoSpreadPro,
		eNoFall,
		eNoAngleDelay,
		eNoPedToVehAttach,
		eNoCancelJump,
		eNoCancelAim,
		eNoWaterWaves,
		eNoPedCollision,
		eNoPedStopAnim,
		eNoWaterCannon,
		eNoAntiHop,
		eNoSurfInfo,
		eNoConnectionDelay,
		eNoJetPackDropPickup,
		eNoJetPackSounds,
		eNoHudBorder,
		eNoClosedDoors,
		eNoPlaneHeightLimit,
		eNoOpenDoorAnim,
		eNoInertia,
		eNoVehCollision,
		eNoLeaveVehUnderWorld,
		eNoWetRoads,
		eNoUpsideDownAnim,
		eNoTrailerBreak,
		eNoBladeRotating,
		eNoDialogLock,
		eNoCamCollision,
		eNoClouds,
		eNoZerosInMoney,
		eNoObjCollision,
		eNoDumCollision,
		eNoWaterCollision,
		eNoModelLimit,
		eNoBlipInfelicity,
		eNoNorthBlip,
		eNoGaragesCamera,
		eNoDayAndNightVision,
		eNoCameraResetAfterAim,
		eNoRadio,
		eNoFallenTeleport,
		eNoWindSound,
		eNoFog,
		eNoLODs,
		eNoTexturesAlpha,
		eNoParaAfterLeaveFlyVeh,
		eNoDarkUnderWater,
		eNoHeatHaze,
		eNoTuning,
		eNoSteerBlock,
		eNoConnectLock,
		eNoCloseChatOnDialog,
		eNoVehStopOnPedLeave,
		eNoVehWheelReset,
		eNoVehInAirRotate,
		eNoBikeJumpLimit,
		eNoLockOnSpec,
		eNoHeadMoveDelay,
		eNoSpeedLock,
		eNoShadows,
		eNoStatistic,
		eNoCheckInputLock,
		eShakingCamera,
		eFakeFPS,
		NoVehColorReset,
		eFakeMPVer,
		eFilterSync,
		eRandQuaternion,
		eConnectBeep,
		eBulletRepeater,
		eFakeWeapon,
		eDriveOnWater,
		eBikeFallWater,
		eInfiniteOxygen,
		eInfiniteRun,
		eInfiniteAmmo,
		eAlwaysCrossHair,
		eQuickCrossHair,
		eFPSUnlock,
		eFastSpawn,
		ePlusC,
		eGunRun,
		eRapidFire,
		eAlwaysWeaponSwitch,
		eAllSkills,
		eMatrixSkins,
		eStickToVehicle,
		eObjectPunchPower,
		eFastChatOff,
		eQuickInterior,
		eNeverDrunk,
		eSpeechMore,
		eLightPedsVehs,
		eGunJump,
		eAlwaysDuck,
		eAlwaysGlide,
		eAntiTroll,
		eAlwaysHorn,
		eSprintSpeed,
		eTurnOffWhenCrash,
		eJetPackAnyWeapon,
		eAllowDropJetPack,
		eHudPercentage,
		eForegroundWork,
		eElegyDriftMode,
		eAlwaysDriftSmoke,
		eStayInCarOnJack,
		eAlwaysVehEnterExit,
		eSpeedHack,
		eDayVehLights,
		eStrobeLights,
		eLongLights,
		eBrightnessLights,
		eFullAiming,
		eAlwaysRainOnVeh,
		eDisableCarMoveZ,
		eWaterProofEngine,
		eRipazha,
		eCruiseControl,
		eMonsterHyd,
		eFatWheels,
		eStanceStyle,
		eDoubleBoost,
		ePressAuto,
		ePowerSteering,
		eAlwaysAsphalt,
		eVehJump,
		eFastPassenger,
		eDisableEffects,
		eDrawFinalHud,
		eDrawDistance,
		eHudClock,
		eLags,
		eCleanMemory,
		eAlwaysHUD,
		eColorfulSmoke,
		eLongBulletTrack,
		eRadarStreamSize,
		eRenderGrass,
		eSunMoon,
		eDrawBlurOnSpeed,
		eUseGameCheats,
		eDrawVehNames,
		eQuickScreen,
		eLightMap,
		eBell,
		e160HP,
		eRedHouseAlpha,
		eChatBubbleToChat,
		eCutCameraAnim,
		eFixedAmmoDraw,
		eFishEye,
		eBlipScaler,
		ePlayerBlipScale,
		eCustomTime,
		eSpeedHackMenuMap,
		eDarkShadows,
		eLongTimeBlood,
		eWaterAlpha,
		eJetPackSpeed,
		eHidenGiveWeapon,
		eHideFPFile,
		eSyncPlusC,
		eWeaponSwitchFire,
		eAntiStun,
		eSkipEnterVehJack,
		eSubmergedSwimming,
		eWaterForceOfGravity,
		eFallOnWater,
		eSteeringWheelSpeed,
		eEversionOfWheels,
		eAcceleratedRetraction,
		eFakePing,
		eSendCMDOnChat,
		eSendCMDOnChatPrefix,
		eMarkerTPWhenSetPos,
		eHeightSphere,
		eBoostOnDrift,
		eBypassClientCheck,
		eRandomGPCI,
		eDialogHider,
		eTextDrawHider,
		eGangZoneHider,
		ePlayersColors,
		eLongTimeFootSmoke,
		eNewGunFlash,
		eQuickBikeHop,
		eQuickStop,
		eBikeSpinner,
		eArmOnWindow,
		eBigHead,
		eGiveDamageRepeater,
		eTakeDamageRepeater,
		eCustomGiveDamage,
		eCustomTakeDamage,
		eRandNick,
		eInteriorRunningFix,
		eTriggerBotVehs,
		ePizdaQuaternion,
		ePizdaFullRand,
		eStaticVehCamera,
		eQuickParkour,
		eVehRLRotate,
		eWeaponAllAxis,
		eBulletFool,
		eOnExitSaveProfile,
		eBulletFoolMyWeapon,
		eAlwaysSync,
		eMoreVehReflection,
		eSendExitVehicleOnDrive,
		eSpectatorMode,
		eSyncSpec,
		eReconnectOnKick,
		eHideAim,
		eFakeWeaponBullet,
		eHideAttackKey,
		eSavedPosOnlyVeh,
		eAlwaysActiveConnection,
		eFakeState,
		eTrollOnlyDrivers,
		eShowNPC,
		eFreePayNSpray,
		ePickUpInVeh,
		eQuitMPNoDelay,
		eRandPassSeat,
		eProfileOnNumbers,
		eDisableWndConstSize,
		eDoubleWeapon,
		eCleanScreen,
		eAirBrake,
		eNoBackGroundImage,
		eSavedPositionA,
		eSavedPositionB,
		eSavedPositionC,
		eSavedPositionD,
		eSavedPositionE,
		eSavedPositionF,
		eEND
	};

	enum class eSyncIntegers : const unsigned __int32 {
		eSpawnWeaponID,
		eFakeWeaponID,
		eFakeWeaponBulletID,
		eGiveTakeDmgWeaponID,
		eFakeSpecialActionID,
		eMPReasonID,
		eRadioID,
		eEnterVehicleID,
		eExitVehicleID,
		eDestroyVehicleID,
		eInteriorChangeID,
		ePickedUpPickupID,
		eGiveTakeDamagePlayerID,
		eKillerID,
		eClassID,
		eWeatherID,
		eMenuSelectID,
		eClickTextDrawID,
		eSkinID,
		eGoOverTextDraw1ID,
		eGoOverTextDraw2ID,
		eGoOverPickup1ID,
		eGoOverPickup2ID,
		eRainBowCarTime,
		eWallHackBulletTraceTime,
		eLagsTime,
		eComponentLaggerTime,
		eSpeedHackTime,
		eStrobeLightsTime,
		eRepeatTrollingTime,
		eSendCMDOnChatTime,
		eFakePingTime,
		eTrollPacketsToSend,
		eBulletRepeater,
		eWeaponSpawnerAmmo,
		eBlurIntensity,
		eBlipScale,
		eFakeHP,
		eFakeAP,
		eGiveDamageRepeater,
		eTakeDamageRepeater,
		eBrightnessLights,
		eSendExitVehicleOnDrive,
		eCustomTime1,
		eCustomTime2,
		eEND
	};

	enum class eSyncFloats : const unsigned __int32 {
		eGameSpeed,
		eMenuZoomSpeed,
		eMenuMoveSpeed,
		eLimitMoveSpeed,
		eSprintSpeed,
		eJetPackSpeed,
		eBunnyHopSpeed,
		eTrollSyncSpeed,
		eSteeringWheelSpeed,
		ePizdaDistance,
		eTrollDistance,
		eDrawDistance,
		eSilentAimDistance,
		eSilentAimMaxDistance,
		eVehUnderWorldDistance,
		ePizdaRvanka,
		eGiveTakeDamage,
		eBunnyHopHeight,
		eSpeedHack,
		eLongLights,
		eAirBrake,
		eStanceStyle,
		eFatWheels,
		ePressAuto,
		ePlayerBlipScale,
		eTriggerBot,
		eVehJump,
		eSubmergedSwimming,
		eWaterForceOfGravity,
		eEversionOfWheels,
		eAcceleratedRetraction,
		eSilentAimRand,
		ePizdaHalf,
		ePizdaZ,
		eBoostOnDrift,
		eBigHead,
		eCustomGiveDamage,
		eCustomTakeDamage,
		eChamsR,
		eChamsG,
		eChamsB,
		eWeaponChamsR,
		eWeaponChamsG,
		eWeaponChamsB,
		eWireFrameThingsR,
		eWireFrameThingsG,
		eWireFrameThingsB,
		eHudPercentageR1,
		eHudPercentageG1,
		eHudPercentageB1,
		eHudPercentageR2,
		eHudPercentageG2,
		eHudPercentageB2,
		eColorfulSmokeR1,
		eColorfulSmokeG1,
		eColorfulSmokeB1,
		eColorfulSmokeR2,
		eColorfulSmokeG2,
		eColorfulSmokeB2,
		eColorfulBlurR1,
		eColorfulBlurG1,
		eColorfulBlurB1,
		eColorfulBlurR2,
		eColorfulBlurG2,
		eColorfulBlurB2,
		eSavedPosX1,
		eSavedPosY1,
		eSavedPosZ1,
		eSavedPosX2,
		eSavedPosY2,
		eSavedPosZ2,
		eSavedPosX3,
		eSavedPosY3,
		eSavedPosZ3,
		eSavedPosX4,
		eSavedPosY4,
		eSavedPosZ4,
		eSavedPosX5,
		eSavedPosY5,
		eSavedPosZ5,
		eSavedPosX6,
		eSavedPosY6,
		eSavedPosZ6,
		eEND
	};

	bool bOpen{true};
	bool bPanic{false};
	bool bCustomProfile{false};
	bool bNeedUpdate{false};
	bool bDeveloper{false};
	bool bSpecial{false};
	bool bPromoCode{false};
	bool bChatJustUpdated{false};
	bool bForceTabSelected{false};
	bool bResetGUIPos{false};
	bool bResetScroll{false};
	bool bGUIStatus{false};
	bool bSpectator{false};
	bool bRollCrasher{false};
	bool bDetonatorCrasher{false};
	bool bNightGogglesFlooder{false};
	bool bComponentLagger{false};
	bool bRepeatTrolling{false};
	bool bPizdaRvanka{false};
	bool bNoLockInfoOnSpec{false};
	bool bCleanScreen{false};
	bool bAirBrake{false};
	unsigned __int32 ui32GlyphRangeIcoMoon[3];
	unsigned __int32 ui32SelectedProfile{0};
	unsigned __int32 ui32TrollPlayerID{0};
	unsigned __int32 ui32ProjectLicenseDays{0};
	unsigned __int32 ui32TotalConnected{0};
	cGui::eWaitingKeys waitingKey{cGui::eWaitingKeys::eNoWaiting};
	HANDLE hCurrentRadioStream{nullptr};
	IDirect3DTexture9 *pLogoTexture{nullptr};
	IDirect3DTexture9 *pBackGroundTexture{nullptr};
	SOCKET socServerSocket{INVALID_SOCKET};
	sockaddr_in sockServerAddrIn{};
#pragma region SYNC_DATA
	cGui::ePizdaVector pizdaVectorMode{cGui::ePizdaVector::eZ};
	cGui::eTrollSyncMode trollSyncMode{cGui::eTrollSyncMode::eUnoccupied};
	cGui::eFakeState fakeState{cGui::eFakeState::eUnk};
	std::tuple<cGui::eRollCrasherMode, std::string> tRollCrasher{};
	std::tuple<cGui::eTrollMode, std::string> tTrollMode{};
	std::tuple<cGui::eTrollType, std::string> tTrollType{};
	std::tuple<cGui::eInvisibleMode, std::string> tInvisibleMode{};
	std::tuple<cGui::eStrobeMode, std::string> tStrobeLightsMode{};
	std::tuple<cGui::eThemeMode, std::string> tThemeMode{};
	std::tuple<cGui::eFakeAnimMode, std::string> tFakeAnimMode{};
	std::tuple<cGui::eFakeMPVerMode, std::string> tFakeMPVerMode{};
	std::vector<unsigned __int32> vecUIntegers{};
	std::vector<std::tuple<unsigned __int32, const unsigned __int8, const std::string>> vecIncomeRPCs{};
	std::vector<std::tuple<unsigned __int32, const unsigned __int8, const std::string>> vecOutcomeRPCs{};
	std::vector<std::tuple<unsigned __int32, const unsigned __int8, const std::string>> vecIncomePackets{};
	std::vector<std::tuple<unsigned __int32, const unsigned __int8, const std::string>> vecOutcomePackets{};
	std::vector<__int32> vecIntegers{};
	std::vector<float> vecFloats{};
#pragma endregion SYNC_DATA
	std::string sNOPSearch[4]{};
	std::string sTrollPlayer{};
	std::string sRadioCustomURL{};
	std::string sRadioMusicName{};
	std::string sTPToPlayer{};
	std::string sSpecPlayer{};
	std::string sMPChatCopy{};
	std::string sVehTeleporter{};
	std::string sNews{};
	std::string sMessages[3]{};
	std::string sCMDs[3]{};
	std::string sFakeMsg{};
	std::string sNewProfileSlot{};
	std::string sCustomProfileName{};
	std::string sCustomProfileSlot{};
	std::string sEasterEggKey{};
	std::string sRandNick{};
	std::string sJoinQuit{};
	std::string sGameFPS{};
	std::string sLastBubbleText{};
	std::string sLastMaterialText{};
	std::string sChat{};
	std::string sChatInput{};
	std::wstring wsLIDOrPromo{};
	std::wstring wsProjectFileName{};
	std::wstring wsProjectUserName{};
	std::wstring wsProjectIP{};
	std::vector<std::string> vecProfiles{};
	std::vector<class cVector3D> vecGrenadeWays{};
	std::vector<std::tuple<unsigned __int16, class cVector3D, class cVector3D>> vecTracerInfos{};
	std::vector<std::tuple<const unsigned __int32, const unsigned __int32>> vecPedBones{};
	std::vector<std::tuple<const unsigned __int32, const unsigned __int32>> vecPedBonesRhombus{};
	std::vector<std::tuple<const unsigned __int32, const unsigned __int32>> vecVehBones{};
	std::vector<std::tuple<const unsigned __int32, const unsigned __int32>> vecBikeBones{};
	std::vector<std::tuple<const std::string, const std::string>> vecRadios{};
	std::vector<std::tuple<const cGui::eRollCrasherMode, const std::string>> vecRollCrasherModes{};
	std::vector<std::tuple<const cGui::eTrollMode, const std::string>> vecTrollModes{};
	std::vector<std::tuple<const cGui::eTrollType, const std::string>> vecTrollTypes{};
	std::vector<std::tuple<const cGui::eInvisibleMode, const std::string>> vecInvisibleModes{};
	std::vector<std::tuple<const cGui::eStrobeMode, const std::string>> vecStrobeLightsModes{};
	std::vector<std::tuple<const cGui::eThemeMode, const std::string>> vecThemesModes{};
	std::vector<std::tuple<const cGui::eFakeAnimMode, const std::string>> vecFakeAnimsModes{};
	std::vector<std::tuple<const cGui::eFakeMPVerMode, const std::string>> vecFakeMPVersModes{};
	std::vector<std::tuple<const unsigned __int8, const std::string>> vecMPReasons{};
	std::vector<std::tuple<const unsigned __int8, const std::string>> vecFakeSpecialActions{};
	std::vector<std::tuple<const unsigned __int8, const std::string>> vecWeaponNames{};

	explicit cGui(class cMain *pMain, class cWinAPIFuncs *pWinAPIFuncs, class cInternet *pInternet);
	auto init(const HWND hDeviceWindow, IDirect3DDevice9 *pDirect3DDevice9) const -> bool;
	auto getUInteger(const cGui::eSyncUIntegers syncUI) const -> unsigned __int32;
	auto getUIntegerPtr(const cGui::eSyncUIntegers syncUI) -> unsigned __int32 *;
	auto getUIntegerPtrBool(const cGui::eSyncUIntegers syncUI) -> bool *;
	auto setUInteger(const cGui::eSyncUIntegers syncUI, const unsigned __int32 ui32Status) -> void;
	auto getInteger(const cGui::eSyncIntegers syncI) const -> __int32;
	auto getIntegerPtr(const cGui::eSyncIntegers syncI) -> __int32 *;
	auto setInteger(const cGui::eSyncIntegers syncI, const __int32 i32Status) -> void;
	auto getFloat(const cGui::eSyncFloats syncF) const -> float;
	auto getFloatPtr(const cGui::eSyncFloats syncF) -> float *;
	auto setFloat(const cGui::eSyncFloats syncF, const float fStatus) -> void;
	auto addChat(void) -> void;
	auto syncProfile(void) -> void;
	auto addProfile(void) -> void;
	auto updateProfile(const std::wstring &wsUserName, const std::wstring &wsProfile) -> void;
	auto popProfile(void) -> void;
	auto updateNews(void) -> void;
	auto resetNonSyncVars(void) -> void;
	auto resetKeys(void) -> void;
	auto updateStrings(void) -> void;
	auto setTheme(const cGui::eThemeMode ThemeMode) const -> void;
	auto releaseRadio(void) -> void;
	auto unInit(void) const -> void;
	~cGui(void);

	private:
	class cMain *pMain{nullptr};
	class cWinAPIFuncs *pWinAPIFuncs{nullptr};
	class cInternet *pInternet{nullptr};
};

#endif