//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXMANAGER_HPP
#define SAFXMANAGER_HPP

#pragma once

#include "SA/cList.hpp"
#include "SA/cFxSystem.hpp"
#include "SA/cFxFrustumInfo.hpp"
#include "SA/cFxMemoryPool.hpp"

class cFxManager final {
	public:
	class cList listFxSystemBP {};
	class cList listFxSystem {};
	class cFxEmitterPrt *pFxEmitters{nullptr};
	class cList listFxEmitterPrt {};
	__int32 i32FxTxdIndex{0};
	class cVector3D *pWindDir{nullptr};
	float *pWindSpeed{nullptr};
	class cFxFrustumInfo frustum {};
	unsigned __int32 ui32CurrentMatrix{0};
	struct stRwMatrix *pMatrices[8];
	class cFxMemoryPool fxMemoryPool {};
	__int8 i8Pad[4];

	explicit cFxManager::cFxManager(void) = delete;
	auto cFxManager::createFxSystem(const char *pName, class cVector3D *pPoint, const struct stRwMatrix *pRwMatrix, const bool bIgnoreBoundingChecks) -> class cFxSystem *;
	cFxManager::~cFxManager(void) = delete;

	private:
};

#endif