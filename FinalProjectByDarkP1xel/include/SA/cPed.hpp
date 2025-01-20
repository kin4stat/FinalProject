//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPED_HPP
#define SAPED_HPP

#pragma once

#include "Vector/cVector3D.hpp"
#include "SA/cPhysical.hpp"
#include "SA/cWeapon.hpp"
#include "SA/cPedIntelligence.hpp"
#include "SA/cVehicle.hpp"
#include "SA/cEntity.hpp"

class cPed final {
	public:
	class cPhysical Physical {};
	__int8 i8Pad[0x334];
	struct stPedFlags final {
		unsigned __int32 bIsStanding : 1;
		unsigned __int32 bWasStanding : 1;
		unsigned __int32 bIsLooking : 1;
		unsigned __int32 bIsRestoringLook : 1;
		unsigned __int32 bIsAimingGun : 1;
		unsigned __int32 bIsRestoringGun : 1;
		unsigned __int32 bCanPo__int32GunAtTarget : 1;
		unsigned __int32 bIsTalking : 1;
		unsigned __int32 bInVehicle : 1;
		unsigned __int32 bIs__int32heAir : 1;
		unsigned __int32 bIsLanding : 1;
		unsigned __int32 bHitSomethingLastFrame : 1;
		unsigned __int32 bIsNearCar : 1;
		unsigned __int32 bRenderPedInCar : 1;
		unsigned __int32 bUpdateAnimHeading : 1;
		unsigned __int32 bRemoveHead : 1;
		unsigned __int32 bFiringWeapon : 1;
		unsigned __int32 bHasACamera : 1;
		unsigned __int32 bPedIsBleeding : 1;
		unsigned __int32 bStopAndShoot : 1;
		unsigned __int32 bIsPedDieAnimPlaying : 1;
		unsigned __int32 bStayInSamePlace : 1;
		unsigned __int32 bKindaStayInSamePlace : 1;
		unsigned __int32 bBeingChasedByPolice : 1;
		unsigned __int32 bNotAllowedToDuck : 1;
		unsigned __int32 bCrouchWhenShooting : 1;
		unsigned __int32 bIsDucking : 1;
		unsigned __int32 bGetUpAnimStarted : 1;
		unsigned __int32 bDoBloodyFootpr__int32s : 1;
		unsigned __int32 bDontDragMeOutCar : 1;
		unsigned __int32 bStillOnValidPoly : 1;
		unsigned __int32 bAllowMedicsToReviveMe : 1;
		unsigned __int32 bResetWalkAnims : 1;
		unsigned __int32 bOnBoat : 1;
		unsigned __int32 bBusJacked : 1;
		unsigned __int32 bFadeOut : 1;
		unsigned __int32 bKnockedUp__int32oAir : 1;
		unsigned __int32 bHitSteepSlope : 1;
		unsigned __int32 bCullExtraFarAway : 1;
		unsigned __int32 bTryingToReachDryLand : 1;
		unsigned __int32 bCollidedWithMyVehicle : 1;
		unsigned __int32 bRichFromMugging : 1;
		unsigned __int32 bChrisCriminal : 1;
		unsigned __int32 bShakeFist : 1;
		unsigned __int32 bNoCriticalHits : 1;
		unsigned __int32 bHasAlreadyBeenRecorded : 1;
		unsigned __int32 bUpdateMatricesRequired : 1;
		unsigned __int32 bFleeWhenStanding : 1;
		unsigned __int32 bMiamiViceCop : 1;
		unsigned __int32 bMoneyHasBeenGivenByScript : 1;
		unsigned __int32 bHasBeenPhotographed : 1;
		unsigned __int32 bIsDrowning : 1;
		unsigned __int32 bDrownsInWater : 1;
		unsigned __int32 bHeadStuckInCollision : 1;
		unsigned __int32 bDeadPedInFrontOfCar : 1;
		unsigned __int32 bStayInCarOnJack : 1;
		unsigned __int32 bDontFight : 1;
		unsigned __int32 bDoomAim : 1;
		unsigned __int32 bCanBeShotInVehicle : 1;
		unsigned __int32 bPushedAlongByCar : 1;
		unsigned __int32 bNeverEverTargetThisPed : 1;
		unsigned __int32 bThisPedIsATargetPriority : 1;
		unsigned __int32 bCrouchWhenScared : 1;
		unsigned __int32 bKnockedOffBike : 1;
		unsigned __int32 bDonePositionOutOfCollision : 1;
		unsigned __int32 bDontRender : 1;
		unsigned __int32 bHasBeenAddedToPopulation : 1;
		unsigned __int32 bHasJustLeftCar : 1;
		unsigned __int32 bIsInDisguise : 1;
		unsigned __int32 bDoesntListenToPlayerGroupCommands : 1;
		unsigned __int32 bIsBeingArrested : 1;
		unsigned __int32 bHasJustSoughtCover : 1;
		unsigned __int32 bKilledByStealth : 1;
		unsigned __int32 bDoesntDropWeaponsWhenDead : 1;
		unsigned __int32 bCalledPreRender : 1;
		unsigned __int32 bBloodPuddleCreated : 1;
		unsigned __int32 bPartOfAttackWave : 1;
		unsigned __int32 bClearRadarBlipOnDeath : 1;
		unsigned __int32 bNeverLeavesGroup : 1;
		unsigned __int32 bTestForBlockedPositions : 1;
		unsigned __int32 bRightArmBlocked : 1;
		unsigned __int32 bLeftArmBlocked : 1;
		unsigned __int32 bDuckRightArmBlocked : 1;
		unsigned __int32 bMidriffBlockedForJump : 1;
		unsigned __int32 bFallenDown : 1;
		unsigned __int32 bUseAttractorInstantly : 1;
		unsigned __int32 bDontAcceptIKLookAts : 1;
		unsigned __int32 bHasAScriptBrain : 1;
		unsigned __int32 bWaitingForScriptBra__int32oLoad : 1;
		unsigned __int32 bHasGroupDriveTask : 1;
		unsigned __int32 bCanExitCar : 1;
		unsigned __int32 bCantBeKnockedOffBike : 2;
		unsigned __int32 bHasBeenRendered : 1;
		unsigned __int32 bIsCached : 1;
		unsigned __int32 bPushOtherPeds : 1;
		unsigned __int32 bHasBulletProofVest : 1;
		unsigned __int32 bUsingMobilePhone : 1;
		unsigned __int32 bUpperBodyDamageAnimsOnly : 1;
		unsigned __int32 bStuckUnderCar : 1;
		unsigned __int32 bKeepTasksAfterCleanUp : 1;
		unsigned __int32 bIsDyingStuck : 1;
		unsigned __int32 bIgnoreHeightCheckOnGotoPo__int32Task : 1;
		unsigned __int32 bForceDieInCar : 1;
		unsigned __int32 bCheckColAboveHead : 1;
		unsigned __int32 bIgnoreWeaponRange : 1;
		unsigned __int32 bDruggedUp : 1;
		unsigned __int32 bWantedByPolice : 1;
		unsigned __int32 bSignalAfterKill : 1;
		unsigned __int32 bCanClimbOntoBoat : 1;
		unsigned __int32 bPedHitWallLastFrame : 1;
		unsigned __int32 bIgnoreHeightDifferenceFollowingNodes : 1;
		unsigned __int32 bMoveAnimSpeedHasBeenSetByTask : 1;
		unsigned __int32 bGetOutUpsideDownCar : 1;
		unsigned __int32 bJustGotOffTrain : 1;
		unsigned __int32 bDeathPickupsPersist : 1;
		unsigned __int32 bTestForShotInVehicle : 1;
		unsigned __int32 bUsedForReplay : 1;
	} PedFlags{};

	explicit cPed(void) = default;
	auto getWeapon(const unsigned __int8 ui8WeaponSlot) const -> class cWeapon *;
	auto getPedIntelligence(void) const -> class cPedIntelligence *;
	auto getVehicle(void) const -> class cVehicle *;
	auto getLastVehicle(void) const -> class cVehicle *;
	auto getContactEntity(void) const -> class cEntity *;
	auto getAlive(void) -> bool;
	auto getHealth(void) const -> float;
	auto setHealth(const float fHealth) -> void;
	auto getArmor(void) const -> float;
	auto setArmor(const float fArmor) -> void;
	auto getInterior(void) const -> unsigned __int8;
	auto setInterior(const unsigned __int8 ui8Interior) -> void;
	auto resetEnexPtr(void) -> void;
	auto getPedState(void) const -> unsigned __int32;
	auto setPedState(const unsigned __int32 ui32State) -> void;
	auto getMoveState(void) const -> unsigned __int32;
	auto setMoveState(const unsigned __int32 ui32MoveState) -> void;
	auto getPlayerCheck(void) const -> unsigned __int8;
	auto setPlayerCheck(const unsigned __int8 ui8PlayerCheck) -> void;
	auto getBonePosition(class cVector3D *pResult, const unsigned __int32 ui32BoneID, const bool bDynamic = true) -> void;
	auto updatePosition(void) -> void;
	auto calculateNewVelocity(void) -> void;
	auto giveWeapon(const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32Ammo, const bool bLikeUnused = true) -> void;
	auto giveDelayedWeapon(const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32Ammo) -> void;
	auto getCurrentWeaponSlot(void) const -> unsigned __int8;
	auto getCurrentWeaponModel(void) const -> unsigned __int32;
	auto setCurrentWeapon(const unsigned __int32 ui32WeaponID) -> void;
	auto clearWeapon(const __int32 i32ModelID) -> void;
	auto clearWeapons(void) -> void;
	auto dettachPedFromEntity(void) -> void;
	auto positionAnyPedOutOfCollision(void) -> bool;
	auto setPedPositionInCar(void) -> void;
	auto stopNonPartialAnims(void) -> void;
	auto clearAll(void) -> void;
	auto teleport(const class cVector3D *pPos) -> void;
	auto say(const unsigned __int16 ui16AudioTable, const unsigned __int32 ui32Unk = 0, const float fUnkVolume = 1.0F, const bool bIgnoreMute = true, const bool bVocal = false, const bool bUnk = false) -> void;
	auto isPlayer(void) -> bool;
	auto setModelIndex(const unsigned __int32 ui32ModelID) -> bool;
	~cPed(void) = default;

	private:
};

#endif