//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RXD3D9RESENTRYHEADER_HPP
#define RXD3D9RESENTRYHEADER_HPP

#pragma once

#include "include\SA\RenderWare\stRxD3D9VertexStream.hpp"

struct stRxD3D9ResEntryHeader final {
	unsigned __int32 ui32SerialNumber{0};
	unsigned __int32 ui32NumMeshes{0};
	void *pIndexBuffer{nullptr};
	unsigned __int32 ui32PrimType{0};
	struct stRxD3D9VertexStream rxVertexStream[2]{};
	__int32 i32UseOffsets{0};
	void *pVertexDeclaration{nullptr};
	unsigned __int32 ui32TotalNumIndex{0};
	unsigned __int32 ui32TotalNumVertex{0};
};

#endif