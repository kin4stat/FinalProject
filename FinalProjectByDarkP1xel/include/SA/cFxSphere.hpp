//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXSPHERE_HPP
#define SAFXSPHERE_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cFxSphere final {
	public:
	class cVector3D vecCenter {};
	float fRadius{0};
	unsigned __int32 ui32NumPlanesPassed{0};

	explicit cFxSphere::cFxSphere(void) = default;
	cFxSphere::~cFxSphere(void) = default;

	private:
};

#endif