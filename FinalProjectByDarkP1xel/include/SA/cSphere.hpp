//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SASPHERE_HPP
#define SASPHERE_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cSphere final {
	public:
	class cVector3D vecCenter {};
	float fRadius{0};

	explicit cSphere::cSphere(void) = default;
	cSphere::~cSphere(void) = default;

	private:
};

#endif