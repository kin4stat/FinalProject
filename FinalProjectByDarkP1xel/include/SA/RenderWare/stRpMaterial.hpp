//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RPMATERIAL_HPP
#define RPMATERIAL_HPP

#pragma once

#include "include\SA\RenderWare\stRwTexture.hpp"
#include "include\SA\RenderWare\stRwRGBA.hpp"
#include "include\SA\RenderWare\stRwSurfaceProperties.hpp"

struct stRpMaterial final {
	struct stRwTexture *pRwTexture{nullptr};
	struct stRwRGBA rwColor {};
	struct stRxPipeline *pRxPipeline{nullptr};
	struct stRwSurfaceProperties rwSurfaceProps {};
	__int16 i16RefCount{0};
	__int16 i16Pad{0};
};

#endif