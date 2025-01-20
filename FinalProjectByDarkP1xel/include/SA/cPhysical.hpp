//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPHYSICAL_HPP
#define SAPHYSICAL_HPP

#pragma once

#include "include\SA\cEntity.hpp"

class cPhysical final {
	public:
	class cEntity Entity {};
	__int32 i32Field_38{0};
	unsigned __int32 ui32LastCollisionTime{0};
	union {
		struct stPhysicalFlags final {
			unsigned __int32 b01 : 1;
			unsigned __int32 bApplyGravity : 1;
			unsigned __int32 bDisableCollisionForce : 1;
			unsigned __int32 bCollidable : 1;
			unsigned __int32 bDisableTurnForce : 1;
			unsigned __int32 bDisableMoveForce : 1;
			unsigned __int32 bInfiniteMass : 1;
			unsigned __int32 bDisableZ : 1;
			unsigned __int32 bSubmergedInWater : 1;
			unsigned __int32 bOnSolidSurface : 1;
			unsigned __int32 bBroken : 1;
			unsigned __int32 b12 : 1;
			unsigned __int32 b13 : 1;
			unsigned __int32 bDontApplySpeed : 1;
			unsigned __int32 b15 : 1;
			unsigned __int32 b16 : 1;
			unsigned __int32 b17 : 1;
			unsigned __int32 b18 : 1;
			unsigned __int32 bBulletProof : 1;
			unsigned __int32 bFireProof : 1;
			unsigned __int32 bCollisionProof : 1;
			unsigned __int32 bMeeleProof : 1;
			unsigned __int32 bInvulnerable : 1;
			unsigned __int32 bExplosionProof : 1;
			unsigned __int32 b25 : 1;
			unsigned __int32 bAttachedToEntity : 1;
			unsigned __int32 b27 : 1;
			unsigned __int32 bTouchingWater : 1;
			unsigned __int32 bCanBeCollidedWith : 1;
			unsigned __int32 bDestroyed : 1;
			unsigned __int32 b31 : 1;
			unsigned __int32 b32 : 1;
		} PhysicalFlags;
		unsigned __int32 ui32PhysicalFlags{0};
	};
	class cVector3D vecMoveSpeed {};
	class cVector3D vecTurnSpeed {};
	class cVector3D vecFrictionMoveSpeed {};
	class cVector3D vecFrictionTurnSpeed {};
	class cVector3D vecForce {};
	class cVector3D vecTorque {};
	float fMass{0};
	float fTurnMass{0};
	float fVelocityFrequency{0};
	float fAirResistance{0};
	float fElasticity{0};
	float fBuoyancyConstant{0};
	class cVector3D vecCentreOfMass {};
	void *pCollisionList{nullptr};
	void *pMovingList{nullptr};
	bool bFakePhysics{false};
	unsigned __int8 ui8NumEntitiesCollided{0};
	unsigned __int8 ui8ContactSurface{0};
	__int8 i8Field_BB{0};
	class cEntity *pCollidedEntities[6];
	float fMovingSpeed{0};
	float fDamageIntensity{0};
	class cEntity *pDamageEntity{nullptr};
	class cVector3D vecLastCollisionImpactVelocity {};
	class cVector3D vecLastCollisionPosn {};
	unsigned __int16 ui16PieceType{0};
	__int16 i16Field_FA{0};
	class cPhysical *pAttachedTo{nullptr};
	class cVector3D vecAttachOffset {};
	class cVector3D vecAttachedEntityPosn {};
	class cVector4D qAttachedEntityRotation {};
	class cEntity *pEntityIgnoredCollision{nullptr};
	float fContactSurfaceBrightness{0};
	float fDynamicLighting{0};
	class cRealTimeShadow *pShadowData{nullptr};

	explicit cPhysical::cPhysical(void) = default;
	auto cPhysical::applySpeed(void) -> void;
	auto cPhysical::applyMoveSpeed(void) -> void;
	auto cPhysical::skipPhysics(void) -> void;
	auto cPhysical::unsetIsInSafePosition(void) -> void;
	auto cPhysical::addToMovingList(void) -> void;
	auto cPhysical::removeFromMovingList(void) -> void;
	auto cPhysical::removeAndAdd(void) -> void;
	auto cPhysical::applyMoveForce(const class cVector3D *pMove) -> void;
	auto cPhysical::applyTurnForce(class cVector3D *pDir, class cVector3D *pVelocity) -> void;
	cPhysical::~cPhysical(void) = default;

	private:
};

#endif