//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACAMERA_HPP
#define SACAMERA_HPP

#pragma once

#include "Vector/cVector3D.hpp"
#include "SA/cPlaceable.hpp"
#include "SA/cCam.hpp"
#include "SA/cCamTweak.hpp"
#include "SA/cMatrix.hpp"
#include "SA/cQueuedMode.hpp"

class cCamera final {
	public:
	class cPlaceable Placeable {};
	bool bAboveGroundTrainNodesLoaded{false};
	bool bBelowGroundTrainNodesLoaded{false};
	bool bCamDirectlyBehind{false};
	bool bCamDirectlyInFront{false};
	bool bCameraJustRestored{false};
	bool bCutsceneFinished{false};
	bool bCullZoneChecksOn{false};
	bool bFirstPersonBeingUsed{false};
	bool bJustJumpedOutOf1stPersonBecauseOfTarget{false};
	bool bIdleOn{false};
	bool bInATunnelAndABigVehicle{false};
	bool bInitialNodeFound{false};
	bool bInitialNoNodeStaticsSet{false};
	bool bIgnoreFadingStuffForMusic{false};
	bool bPlayerIsInGarage{false};
	bool bPlayerWasOnBike{false};
	bool bJustCameOutOfGarage{false};
	bool bJustInitalised{false};
	bool bJust_Switched{false};
	bool bLookingAtPlayer{false};
	bool bLookingAtVector{false};
	bool bMoveCamToAvoidGeom{false};
	bool bObbeCinematicPedCamOn{false};
	bool bObbeCinematicCarCamOn{false};
	bool bRestoreByJumpCut{false};
	bool bUseNearClipScript{false};
	bool bStartInterScript{false};
	bool bStartingSpline{false};
	bool bTargetJustBeenOnTrain{false};
	bool bTargetJustCameOffTrain{false};
	bool bUseSpecialFovTrain{false};
	bool bUseTransitionBeta{false};
	bool bUseScriptZoomValuePed{false};
	bool bUseScriptZoomValueCar{false};
	bool bWaitForInterpolToFinish{false};
	bool bItsOkToLookJustAtThePlayer{false};
	bool bWantsToSwitchWidescreenOff{false};
	bool bWideScreenOn{false};
	bool b1rstPersonRunCloseToAWall{false};
	bool bHeadBob{false};
	bool bVehicleSuspenHigh{false};
	bool bEnable1rstPersonCamCntrlsScript{false};
	bool bAllow1rstPersonWeaponsCamera{false};
	bool bCooperativeCamMode{false};
	bool bAllowShootingWith2PlayersInCar{false};
	bool bDisableFirstPersonInCar{false};
	unsigned __int16 ui16ModeForTwoPlayersSeparateCars{0};
	unsigned __int16 ui16ModeForTwoPlayersSameCarShootingAllowed{0};
	unsigned __int16 ui16ModeForTwoPlayersSameCarShootingNotAllowed{0};
	unsigned __int16 ui16ModeForTwoPlayersNotBothInCar{0};
	bool bGarageFixedCamPositionSet{false};
	bool bDoingSpecialInterPolation{false};
	bool bScriptParametersSetForInterPol{false};
	bool bFading{false};
	bool bMusicFading{false};
	bool bMusicFadedOut{false};
	bool bFailedCullZoneTestPreviously{false};
	bool bFadeTargetIsSplashScreen{false};
	bool bWorldViewerBeingUsed{false};
	bool bTransitionJUSTStarted{false};
	bool bTransitionState{false};
	unsigned __int8 ui8ActiveCam{0};
	__int8 i8Pad5A[2];
	unsigned __int32 ui32CamShakeStart{0};
	unsigned __int32 ui32FirstPersonCamLastInputTime{0};
	unsigned __int32 ui32LongestTimeInMill{0};
	unsigned __int32 ui32NumberOfTrainCamNodes{0};
	unsigned __int32 ui32TimeLastChange{0};
	unsigned __int32 ui32TimeWeLeftIdle_StillNoInput{0};
	unsigned __int32 ui32TimeWeEnteredIdle{0};
	unsigned __int32 ui32TimeTransitionStart{0};
	unsigned __int32 ui32TransitionDuration{0};
	unsigned __int32 ui32TransitionDurationTargetCoors{0};
	unsigned __int32 ui32BlurBlue{0};
	unsigned __int32 ui32BlurGreen{0};
	unsigned __int32 ui32BlurRed{0};
	unsigned __int32 ui32BlurType{0};
	unsigned __int32 ui32WorkOutSpeedThisNumFrames{0};
	unsigned __int32 ui32NumFramesSoFar{0};
	unsigned __int32 ui32CurrentTrainCamNode{0};
	unsigned __int32 ui32MotionBlur{0};
	unsigned __int32 ui32MotionBlurAddAlpha{0};
	unsigned __int32 ui32CheckCullZoneThisNumFrames{0};
	unsigned __int32 ui32ZoneCullFrameNumWereAt{0};
	unsigned __int32 ui32WhoIsInControlOfTheCamera{0};
	unsigned __int32 ui32CarZoom{0};
	float fCarZoomBase{0};
	float fCarZoomTotal{0};
	float fCarZoomSmoothed{0};
	float fCarZoomValueScript{0};
	unsigned __int32 ui32PedZoom{0};
	float fPedZoomBase{0};
	float fPedZoomTotal{0};
	float fPedZoomSmoothed{0};
	float fPedZoomValueScript{0};
	float fCamFrontXNorm{0};
	float fCamFrontYNorm{0};
	float fDistanceToWater{0};
	float fHeightOfNearestWater{0};
	float fFOVDuringInter{0};
	float fLODDistMultiplier{0};
	float fGenerationDistMultiplier{0};
	float fAlphaSpeedAtStartInter{0};
	float fAlphaWhenInterPol{0};
	float fAlphaDuringInterPol{0};
	float fBetaDuringInterPol{0};
	float fBetaSpeedAtStartInter{0};
	float fBetaWhenInterPol{0};
	float fFOVWhenInterPol{0};
	float fFOVSpeedAtStartInter{0};
	float fStartingBetaForInterPol{0};
	float fStartingAlphaForInterPol{0};
	float fPedOrientForBehindOrInFront{0};
	float fCameraAverageSpeed{0};
	float fCameraSpeedSoFar{0};
	float fCamShakeForce{0};
	float fFovForTrain{0};
	float fFOV_Wide_Screen{0};
	float fNearClipScript{0};
	float fOldBetaDiff{0};
	float fPositionAlongSpline{0};
	float fScreenReductionPercentage{0};
	float fScreenReductionSpeed{0};
	float fAlphaForPlayerAnim1rstPerson{0};
	float fOrientation{0};
	float fPlayerExhaustion{0};
	float fSoundDistUp{0};
	float fSoundDistUpAsRead{0};
	float fSoundDistUpAsReadOld{0};
	float fAvoidTheGeometryProbsTimer{0};
	unsigned __int16 ui16AvoidTheGeometryProbsDirn{0};
	__int8 i8Pad16A[2];
	float fWideScreenReductionAmount{0};
	float fStartingFOVForInterPol{0};
	class cCam camCams[3]{};
	class cGarage *pToGarageWeAreIn{nullptr};
	class cGarage *pToGarageWeAreInForHackAvoidFirstPerson{nullptr};
	class cQueuedMode quePlayerMode {};
	class cQueuedMode quePlayerWeaponMode {};
	class cVector3D vecPreviousCameraPosition {};
	class cVector3D vecRealPreviousCameraPosition {};
	class cVector3D vecAimingTargetCoors {};
	class cVector3D vecFixedModeVector {};
	class cVector3D vecFixedModeSource {};
	class cVector3D vecFixedModeUpOffSet {};
	class cVector3D vecCutSceneOffset {};
	class cVector3D vecStartingSourceForInterPol {};
	class cVector3D vecStartingTargetForInterPol {};
	class cVector3D vecStartingUpForInterPol {};
	class cVector3D vecSourceSpeedAtStartInter {};
	class cVector3D vecTargetSpeedAtStartInter {};
	class cVector3D vecUpSpeedAtStartInter {};
	class cVector3D vecSourceWhenInterPol {};
	class cVector3D vecTargetWhenInterPol {};
	class cVector3D vecUpWhenInterPol {};
	class cVector3D vecClearGeometryVec {};
	class cVector3D vecGameCamPos {};
	class cVector3D vecSourceDuringInter {};
	class cVector3D vecTargetDuringInter {};
	class cVector3D vecUpDuringInter {};
	class cVector3D vecAttachedCamOffset {};
	class cVector3D vecAttachedCamLookAt {};
	float fAttachedCamAngle{0};
	struct stRwCamera *pRwCamera{nullptr};
	class cEntity *pTargetEntity{nullptr};
	class cEntity *pAttachedEntity{nullptr};
	float *pArrPathData[4];
	bool bMirrorActive{false};
	bool bResetOldMatrix{false};
	__int8 i8Pad972[2];
	class cMatrix matCameraMatrix {};
	class cMatrix matCameraMatrixOld {};
	class cMatrix matViewMatrix {};
	class cMatrix matMatInverse {};
	class cMatrix matMatMirrorInverse {};
	class cMatrix matMatMirror {};
	class cVector3D vecFrustumNormals[4]{};
	class cVector3D vecFrustumWorldNormals[4]{};
	class cVector3D vecFrustumWorldNormals_Mirror[4]{};
	float fFrustumPlaneOffsets[4];
	float fFrustumPlaneOffsets_Mirror[4];
	class cVector3D vecRightFrustumNormal {};
	class cVector3D vecBottomFrustumNormal {};
	class cVector3D vecTopFrustumNormal {};
	float fField_BF8{0};
	float fFadeAlpha{0};
	float fEffectsFaderScalingFactor{0};
	float fFadeDuration{0};
	float fTimeToFadeMusic{0};
	float fTimeToWaitToFadeMusic{0};
	float fFractionInterToStopMoving{0};
	float fFractionInterToStopCatchUp{0};
	float fFractionInterToStopMovingTarget{0};
	float fFractionInterToStopCatchUpTarget{0};
	float fGaitSwayBuffer{0};
	float fScriptPercentageInterToStopMoving{0};
	float fScriptPercentageInterToCatchUp{0};
	unsigned __int32 ui32ScriptTimeForInterPolation{0};
	unsigned __int16 ui16FadeInOutFlag{0};
	__int8 i8PadC32[2];
	__int32 i32ModeObbeCamIsInForCar{0};
	__int16 i16ModeToGoTo{0};
	__int16 i16MusicFadingDirection{0};
	__int16 i16TypeOfSwitch{0};
	__int8 i8PadC3E[2];
	unsigned __int32 ui32FadeStartTime{0};
	unsigned __int32 ui32FadeTimeStartedMusic{0};
	__int32 i32ExtraEntitiesCount{0};
	class cEntity *pExtraEntity[2];
	float fDuckCamMotionFactor{0};
	float fDuckAimCamMotionFactor{0};
	float fTrackLinearStartTime{0};
	float fTrackLinearEndTime{0};
	class cVector3D vecTrackLinearEndPoint {};
	class cVector3D vecTrackLinearStartPoint {};
	bool bTrackLinearWithEase{false};
	__int8 i8Field_C7D{0};
	__int8 i8Field_C7E{0};
	__int8 i8Field_C7F{0};
	class cVector3D vecTrackLinear {};
	bool bVecTrackLinearProcessed{false};
	__int8 i8Field_C8D{0};
	__int8 i8Field_C8E{0};
	__int8 i8Field_C8F{0};
	float fShakeIntensity{0};
	float fStartShakeTime{0};
	float fEndShakeTime{0};
	__int32 i32Field_C9C{0};
	__int32 i32ShakeType{0};
	float fStartZoomTime{0};
	float fEndZoomTime{0};
	float fZoomInFactor{0};
	float fZoomOutFactor{0};
	unsigned __int8 ui8ZoomMode{0};
	bool bFOVLerpProcessed{false};
	__int8 i8Field_CB6{0};
	__int8 i8Field_CB7{0};
	float fFOVNew{0};
	float fMoveLinearStartTime{0};
	float fMoveLinearEndTime{0};
	class cVector3D vecMoveLinearPosnStart {};
	class cVector3D vecMoveLinearPosnEnd {};
	bool bMoveLinearWithEase{false};
	__int8 i8Field_CDD{0};
	__int8 i8Field_CDE{0};
	__int8 i8Field_CDF{0};
	class cVector3D vecMoveLinear {};
	bool bVecMoveLinearProcessed{false};
	bool bBlockZoom{false};
	bool bCameraPersistPosition{false};
	bool bCameraPersistTrack{false};
	bool bCinemaCamera{false};
	__int8 i8Field_CF1{0};
	__int8 i8Field_CF2{0};
	__int8 i8Field_CF3{0};
	class cCamTweak	camTweak[5]{};
	bool bCameraVehicleTweaksInitialized{false};
	__int8 i8PadD45[3];
	float fCurrentTweakDistance{0};
	float fCurrentTweakAltitude{0};
	float fCurrentTweakAngle{0};
	__int32 i32CurrentTweakModelIndex{0};
	__int32 i32Field_D58{0};
	__int32 i32Field_D5C{0};
	__int32 i32Field_D60{0};
	__int32 i32Field_D64{0};
	__int32 i32Field_D68{0};
	__int32 i32Field_D6C{0};
	__int32 i32Field_D70{0};
	__int32 i32Field_D74{0};

	explicit cCamera(void) = delete;
	auto restoreWithJumpCut(void) -> void;
	auto setFadeColour(const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) -> void;
	auto fade(const float fDuration, const unsigned __int16 ui16InOut) -> void;
	auto find3rdPersonCamTargetVector(const float fRange, const class cVector3D *pSource, class cVector3D *pCamera, class cVector3D *pPoint) -> void;
	~cCamera(void) = delete;

	private:
};

#endif