//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACAM_HPP
#define SACAM_HPP

#pragma once

#include "Vector/cVector3D.hpp"

class cCam final {
	public:
	bool bBelowMinDist{false};
	bool bBehindPlayerDesired{false};
	bool bCamLookingAtVector{false};
	bool bCollisionChecksOn{false};
	bool bFixingBeta{false};
	bool bTheHeightFixerVehicleIsATrain{false};
	bool bLookBehindCamWasInFront{false};
	bool bLookingBehind{false};
	bool bLookingLeft{false};
	bool bLookingRight{false};
	bool bResetStatics{false};
	bool bRotating{false};
	unsigned __int16 ui16Mode{0};
	__int8 i8Pad[2];
	unsigned __int32 ui32FinishTime{0};
	unsigned __int32 ui32DoCollisionChecksOnFrameNum{0};
	unsigned __int32 ui32DoCollisionCheckEveryNumOfFrames{0};
	unsigned __int32 ui32FrameNumWereAt{0};
	unsigned __int32 ui32RunningVectorArrayPos{0};
	unsigned __int32 ui32RunningVectorCounter{0};
	unsigned __int32 ui32DirectionWasLooking{0};
	float fMaxRoleAngle{0};
	float fRoll{0};
	float fRollSpeed{0};
	float fSyphonModeTargetZOffSet{0};
	float fAmountFractionObscured{0};
	float fAlphaSpeedOverOneFrame{0};
	float fBetaSpeedOverOneFrame{0};
	float fBufferedTargetBeta{0};
	float fBufferedTargetOrientation{0};
	float fBufferedTargetOrientationSpeed{0};
	float fCamBufferedHeight{0};
	float fCamBufferedHeightSpeed{0};
	float fCloseInPedHeightOffset{0};
	float fCloseInPedHeightOffsetSpeed{0};
	float fCloseInCarHeightOffset{0};
	float fCloseInCarHeightOffsetSpeed{0};
	float fDimensionOfHighestNearCar{0};
	float fDistanceBeforeChanges{0};
	float fFovSpeedOverOneFrame{0};
	float fMinDistAwayFromCamWhenInterPolating{0};
	float fPedBetweenCameraHeightOffset{0};
	float fPlayerInFrontSyphonAngleOffSet{0};
	float fRadiusForDead{0};
	float fRealGroundDist{0};
	float fTargetBeta{0};
	float fTimeElapsedFloat{0};
	float fTilt{0};
	float fTiltSpeed{0};
	float fTransitionBeta{0};
	float fTrueBeta{0};
	float fTrueAlpha{0};
	float fInitialPlayerOrientation{0};
	float fVerticalAngle{0};
	float fAlphaSpeed{0};
	float fFOV{0};
	float fFOVSpeed{0};
	float fHorizontalAngle{0};
	float fBetaSpeed{0};
	float fDistance{0};
	float fDistanceSpeed{0};
	float fCaMinDistance{0};
	float fCaMaxDistance{0};
	float fSpeedVar{0};
	float fCameraHeightMultiplier{0};
	float fTargetZoomGroundOne{0};
	float fTargetZoomGroundTwo{0};
	float fTargetZoomGroundThree{0};
	float fTargetZoomOneZExtra{0};
	float fTargetZoomTwoZExtra{0};
	float fTargetZoomTwoInteriorZExtra{0};
	float fTargetZoomThreeZExtra{0};
	float fTargetZoomZCloseIn{0};
	float fMinRealGroundDist{0};
	float fTargetCloseInDist{0};
	float fBeta_Targeting{0};
	float fX_Targetting{0};
	float fY_Targetting{0};
	class cVehicle *pCarWeAreFocussingOn{nullptr};
	class cVehicle *pCarWeAreFocussingOnI{nullptr};
	float fCamBumpedHorz{0};
	float fCamBumpedVert{0};
	unsigned __int32 ui32CamBumpedTime{0};
	class cVector3D vecSourceSpeedOverOneFrame {};
	class cVector3D vecTargetSpeedOverOneFrame {};
	class cVector3D vecUpOverOneFrame {};
	class cVector3D vecTargetCoorsForFudgeInter {};
	class cVector3D vecCamFixedModeVector {};
	class cVector3D vecCamFixedModeSource {};
	class cVector3D vecCamFixedModeUpOffSet {};
	class cVector3D vecLastAboveWaterCamPosition {};
	class cVector3D vecBufferedPlayerBodyOffset {};
	class cVector3D vecFront {};
	class cVector3D vecSource {};
	class cVector3D vecSourceBeforeLookBehind {};
	class cVector3D vecUp {};
	class cVector3D vecPreviousVectors[2]{};
	class cVector3D vecTargetHistoryPos[4]{};
	unsigned __int32 ui32TargetHistoryTime[4];
	unsigned __int32 ui32CurrentHistoryPoints{0};
	class cEntity *pCamTargetEntity{nullptr};
	float fCameraDistance{0};
	float fIdealAlpha{0};
	float fPlayerVelocity{0};
	class cVehicle *pLastCarEntered{nullptr};
	class cPed *pLastPedLookedAt{nullptr};
	bool bFirstPersonRunAboutActive{false};
	__int8 i8Pad238[3];

	explicit cCam::cCam(void) = default;
	cCam::~cCam(void) = default;

	private:
};

#endif