//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RXD3D9VERTEXSTREAM_HPP
#define RXD3D9VERTEXSTREAM_HPP

#pragma once

struct stRxD3D9VertexStream final {
	void *pVertexBuffer{nullptr};
	unsigned __int32 ui32Offset{0};
	unsigned __int32 ui32Stride{0};
	unsigned __int16 ui16GeometryFlags{0};
	unsigned __int8 ui8Managed{0};
	unsigned __int8 ui8DynamicLock{0};
};

#endif