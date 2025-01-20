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

	explicit cVector3D::cVector3D(void);
	explicit cVector3D::cVector3D(const float fX, const float fY, const float fZ);
	auto cVector3D::magnitude(void) const -> float;
	auto cVector3D::isAnyEmpty(void) const -> bool;
	auto cVector3D::isXYEmpty(void) const -> bool;
	auto cVector3D::clear(void) -> void;
	auto cVector3D::operator += (const class cVector3D &vecRight) -> class cVector3D *;
	cVector3D::~cVector3D(void);

	static auto cVector3D::multiply3x3(class cVector3D *pOut, const class cMatrix *pMat, const class cVector3D *pIn) -> void;
	static auto cVector3D::scaleVector2(class cVector3D *pOut, const float fTotal, const class cVector3D *pIn) -> void;

	private:
};

#endif