//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAMATRIX_HPP
#define SAMATRIX_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cMatrix final {
	public:
	class cVector3D vecRight {};
	unsigned __int32 ui32Flags{0};
	class cVector3D vecUp {};
	unsigned __int32 ui32Pad1{0};
	class cVector3D vecAt {};
	unsigned __int32 ui32Pad2{0};
	class cVector3D vecPos {};
	unsigned __int32 ui32Pad3{0};
	class cMatrix *pAttachMatrix{nullptr};
	__int32 i32AttachMatrixTemporary{0};

	explicit cMatrix::cMatrix(void) = default;
	auto cMatrix::rotateX(const float fX) -> void;
	auto cMatrix::setRotateXOnly(const float fX) -> void;
	auto cMatrix::rotateY(const float fY) -> void;
	auto cMatrix::setRotateYOnly(const float fY) -> void;
	auto cMatrix::rotateZ(const float fZ) -> void;
	auto cMatrix::setRotateZOnly(const float fZ) -> void;
	auto cMatrix::resetOrientation(void) -> void;
	auto cMatrix::reOrthogonale(void) -> void;
	auto cMatrix::forceUpVector(const class cVector3D *pVec) -> void;
	cMatrix::~cMatrix(void) = default;

	private:
};

#endif