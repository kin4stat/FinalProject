//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFX_HPP
#define SAFX_HPP

#pragma once

#include "include\SA\cList.hpp"

class cFx final {
	public:
	class cFxSystem *pPrtBlood{nullptr};
	class cFxSystem *pPrtBoatsplash{nullptr};
	class cFxSystem *pPrtBubble{nullptr};
	class cFxSystem *pPrtCardebris{nullptr};
	class cFxSystem *pPrtCollisionsmoke{nullptr};
	class cFxSystem *pPrtGunshell{nullptr};
	class cFxSystem *pPrtSand{nullptr};
	class cFxSystem *pPrtSand2{nullptr};
	class cFxSystem *pPrtSmoke_huge{nullptr};
	class cFxSystem *pPrtSmokeII3expand{nullptr};
	class cFxSystem *pPrtSpark{nullptr};
	class cFxSystem *pPrtSpark2{nullptr};
	class cFxSystem *pPrtSplash{nullptr};
	class cFxSystem *pPrtWake{nullptr};
	class cFxSystem *pPrtWatersplash{nullptr};
	class cFxSystem *pPrtWheeldirt{nullptr};
	class cFxSystem *pPrtGlass{nullptr};
	class cList entityFxList {};
	unsigned __int32 ui32BloodPoolsCount{0};
	unsigned __int32 ui32FxQuality{0};
	unsigned __int32 ui32VerticesCount2{0};
	unsigned __int32 ui32VerticesCount{0};
	unsigned __int32 ui32TransformRenderFlags{0};
	struct stRwRaster *pRasterToRender{nullptr};
	struct stRwMatrix *pTransformLTM{nullptr};
	void *pVerts{nullptr};

	explicit cFx::cFx(void) = delete;
	auto cFx::addBlood(const class cVector3D *pPos, const class cVector3D *pVelocity, const unsigned __int32 ui32Amount, const float fBrightness) -> void;
	cFx::~cFx(void) = delete;

	private:
};

#endif