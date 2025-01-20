//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXPLANE_HPP
#define SAFXPLANE_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cFxPlane final {
	public:
	class cVector3D vecNormal {};
	float fDistance{0};

	explicit cFxPlane::cFxPlane(void) = default;
	cFxPlane::~cFxPlane(void) = default;

	private:
};

#endif