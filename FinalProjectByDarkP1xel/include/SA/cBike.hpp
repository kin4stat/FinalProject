//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SABIKE_HPP
#define SABIKE_HPP

#pragma once

#include "SA/cVehicle.hpp"

class cBike final {
	public:
	class cVehicle Vehicle {};

	explicit cBike(void) = default;
	auto fix(void) -> void;
	auto teleport(const class cVector3D *pPos, const bool bResetAngle) -> void;
	auto getComponentWorldPosition(const unsigned __int32 ui32ComponentID, class cVector3D *pResult) -> void;
	~cBike(void) = default;

	private:
};

#endif