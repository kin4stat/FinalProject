//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SATRAILER_HPP
#define SATRAILER_HPP

#pragma once

#include "SA/cAutomobile.hpp"
#include "SA/cColPoint.hpp"

class cTrailer final {
	public:
	class cAutomobile Automobile {};
	class cColPoint colPoints[2]{};
	float fField_9E0{0};
	float fField_9E4{0};
	__int8 i8Field_9E8[4];
	float fField_9EC{0};
	float fField_9F0{0};

	explicit cTrailer(void) = delete;
	auto setTowLink(const class cVehicle *pVehicle, const bool bUnk) -> bool;
	~cTrailer(void) = delete;

	private:
};

#endif