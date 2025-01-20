//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAENTITY_HPP
#define SAENTITY_HPP

#pragma once

#include "include\SA\cPlaceable.hpp"

class cEntity final {
	public:
	class cPlaceable Placeable {};
	union {
		struct stRwObject *pRwObject;
		struct stRpClump *pRwClump;
		struct stRpAtomic *pRwAtomic{nullptr};
	};
	unsigned __int32 ui32UsesCollision : 1;
	unsigned __int32 ui32CollisionProcessed : 1;
	unsigned __int32 ui32IsStatic : 1;
	unsigned __int32 ui32HasContacted : 1;
	unsigned __int32 ui32IsStuck : 1;
	unsigned __int32 ui32IsInSafePosition : 1;
	unsigned __int32 ui32WasPostponed : 1;
	unsigned __int32 ui32IsVisible : 1;
	unsigned __int32 ui32IsBIGBuilding : 1;
	unsigned __int32 ui32RenderDamaged : 1;
	unsigned __int32 ui32StreamingDontDelete : 1;
	unsigned __int32 ui32RemoveFromWorld : 1;
	unsigned __int32 ui32HasHitWall : 1;
	unsigned __int32 ui32ImBeingRendered : 1;
	unsigned __int32 ui32DrawLast : 1;
	unsigned __int32 ui32DistanceFade : 1;
	unsigned __int32 ui32DontCastShadowsOn : 1;
	unsigned __int32 ui32Offscreen : 1;
	unsigned __int32 ui32IsStaticWaitingForCollision : 1;
	unsigned __int32 ui32DontStream : 1;
	unsigned __int32 ui32Underwater : 1;
	unsigned __int32 ui32HasPreRenderEffects : 1;
	unsigned __int32 ui32IsTempBuilding : 1;
	unsigned __int32 ui32DontUpdateHierarchy : 1;
	unsigned __int32 ui32HasRoadsignText : 1;
	unsigned __int32 ui32DisplayedSuperLowLOD : 1;
	unsigned __int32 ui32IsProcObject : 1;
	unsigned __int32 ui32BackfaceCulled : 1;
	unsigned __int32 ui32LightObject : 1;
	unsigned __int32 ui32UnimportantStream : 1;
	unsigned __int32 ui32Tunnel : 1;
	unsigned __int32 ui32TunnelTransition : 1;
	unsigned __int16 ui16RandomSeed{0};
	unsigned __int16 ui16ModelIndex{0};
	class cReference *pReferences{nullptr};
	void *pStreamingLink{nullptr};
	__int16 i16ScanCode{0};
	__int8 i8IplIndex{0};
	unsigned __int8 ui8AreaCode{0};
	union {
		__int32 i32LodIndex;
		class cEntity *pLod{nullptr};
	};
	unsigned __int8 ui8NumLodChildren{0};
	unsigned __int8 ui8NumLodChildrenRendered{0};
	unsigned __int8 ui8Type : 3;
	unsigned __int8 ui8Status : 5;
	__int8 i8Pad{0};

	explicit cEntity::cEntity(void) = default;
	auto cEntity::updateRW(void) -> void;
	auto cEntity::updateRwFrame(void) -> void;
	auto cEntity::isVisible(void) -> bool;
	auto cEntity::isVeh(void) const -> bool;
	auto cEntity::isPed(void) const -> bool;
	auto cEntity::getBoundRect(class cVector4D *pRectOut) -> void;
	auto cEntity::getColModel(void) -> class cColModel *;
	auto cEntity::getHeading(void) -> float;
	auto cEntity::setModelIndex(const unsigned __int32 ui32ModelID) -> void;
	cEntity::~cEntity(void) = default;

	private:
};

#endif