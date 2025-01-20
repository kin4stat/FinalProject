//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACOLSPHERE_HPP
#define SACOLSPHERE_HPP

#pragma once

#include "SA/cSphere.hpp"

class cColSphere final {
	public:
	class cSphere Sphere {};
	unsigned __int8 ui8Material{0};
	unsigned __int8 ui8Flags{0};
	unsigned __int8 ui8Lighting{0};
	unsigned __int8 ui8Light{0};

	explicit cColSphere::cColSphere(void) = default;
	cColSphere::~cColSphere(void) = default;

	private:
};

#endif