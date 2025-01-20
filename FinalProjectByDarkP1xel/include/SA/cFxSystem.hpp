//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXSYSTEM_HPP
#define SAFXSYSTEM_HPP

#pragma once

#include "Vector/cVector3D.hpp"
#include "SA/cListItem.hpp"
#include "SA/RenderWare\stRwMatrix.hpp"

class cFxSystem final {
	public:
	class cListItem listItem {};
	void *pBlueprint{nullptr};
	struct stRwMatrix *pParentMatrix{nullptr};
	struct stRwMatrix localMatrix {};
	unsigned __int8 ui8PlayStatus{0};
	unsigned __int8 ui8KillStatus{0};
	bool bConstTimeSet{false};
	__int8 i8Field_53{0};
	__int32 i32Field_54{0};
	float fCameraDistance{0};
	unsigned __int16 ui16ConstTime{0};
	unsigned __int16 ui16RateMult{0};
	unsigned __int16 ui16TimeMult{0};
	struct cFxSystemFlags final {
		unsigned __int8 bOwnedParentMatrix : 1;
		unsigned __int8 bLocalParticles : 1;
		unsigned __int8 bZTestEnabled : 1;
		unsigned __int8 bUnknown4 : 1;
		unsigned __int8 bUnknown5 : 1;
		unsigned __int8 bMustCreatePtrs : 1;
	} fxFlags{};
	__int8 i8Field_63{0};
	float fUnkRandom{0};
	class cVector3D vecVelAdd {};
	class cFxSphere *pBounding{nullptr};
	void **ppPrimsPtrList{nullptr};
	__int8 i8FireAudio[0x88];

	explicit cFxSystem::cFxSystem(void) = delete;
	auto cFxSystem::addParticle(const class cVector3D *pPos, const class cVector3D *pVelocity, const float fUnk1, const class cFxPrtMult *pPrtMult, const float fUnk2 = 0, const float fBrightness = 1.0F, const float fBrightnessMin = 1.0F, const unsigned __int8 ui8Unk3 = 0) -> void;
	auto cFxSystem::play(void) -> void;
	auto cFxSystem::playAndKill(void) -> void;
	auto cFxSystem::stop(void) -> void;
	auto cFxSystem::getPlayStatus(void) -> __int8;
	auto cFxSystem::copyParentMatrix(void) -> bool;
	auto cFxSystem::setConstTime(const bool bUseTime, const float fTime) -> void;
	auto cFxSystem::setLocalParticles(const bool bLocal) -> void;
	auto cFxSystem::setOffsetPos(const class cVector3D *pOffset) -> void;
	auto cFxSystem::setMatrix(const struct stRwMatrix *pMatrix) -> void;
	cFxSystem::~cFxSystem(void) = delete;

	private:
};

#endif