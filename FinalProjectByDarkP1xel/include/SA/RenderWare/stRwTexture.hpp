//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RWTEXTURE_HPP
#define RWTEXTURE_HPP

#pragma once

#include "include\SA\RenderWare\stRwLLLink.hpp"

struct stRwTexture final {
	struct stRwRaster *pRwRaster{nullptr};
	struct stRwTexDictionary *pRwDict{nullptr};
	struct stRwLLLink rwLinkInDictionary {};
	char cName[32];
	char cMask[32];
	unsigned __int32 ui32FilterAddressing{0};
	__int32 i32RefCount{0};
};

#endif