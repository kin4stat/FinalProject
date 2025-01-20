//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RXD3D9INSTANCEDATA_HPP
#define RXD3D9INSTANCEDATA_HPP

#pragma once

#include "SA/RenderWare\stRpMaterial.hpp"

struct stRxD3D9InstanceData final {
	unsigned __int32 ui32NumIndex{0};
	unsigned __int32 ui32MinVert{0};
	struct stRpMaterial *pRpMaterial{nullptr};
	__int32 i32VertexAlpha{0};
	void *pVertexShader{nullptr};
	unsigned __int32 ui32BaseIndex{0};
	unsigned __int32 ui32NumVertices{0};
	unsigned __int32 ui32StartIndex{0};
	unsigned __int32 ui32NumPrimitives{0};
};

#endif