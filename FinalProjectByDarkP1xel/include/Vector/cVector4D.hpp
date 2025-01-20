//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef VECTOR4D_HPP
#define VECTOR4D_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cVector4D final : public cVector3D {
	public:
	float fU{0};

	explicit cVector4D::cVector4D(void);
	explicit cVector4D::cVector4D(const float fX, const float fY, const float fZ, const float fU);
	cVector4D::~cVector4D(void);

	private:
};

#endif