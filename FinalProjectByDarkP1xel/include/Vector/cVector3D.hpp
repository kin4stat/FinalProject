//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

#pragma once

#include <cmath>

#include "Vector/cVector2D.hpp"

class cVector3D : public cVector2D {
	public:
	float fZ{0};

	explicit cVector3D(void);
	explicit cVector3D(const float fX, const float fY, const float fZ);
	auto magnitude(void) const -> float;
	auto isAnyEmpty(void) const -> bool;
	auto isXYEmpty(void) const -> bool;
	auto clear(void) -> void;
	auto operator += (const class cVector3D &vecRight) -> class cVector3D *;
	~cVector3D(void);

	static auto multiply3x3(class cVector3D *pOut, const class cMatrix *pMat, const class cVector3D *pIn) -> void;
	static auto scaleVector2(class cVector3D *pOut, const float fTotal, const class cVector3D *pIn) -> void;

	private:
};

#endif