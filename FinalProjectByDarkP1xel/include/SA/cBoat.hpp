//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SABOAT_HPP
#define SABOAT_HPP

#pragma once

#include "include\SA\cVehicle.hpp"

class cBoat final {
	public:
	class cVehicle Vehicle {};

	explicit cBoat::cBoat(void) = default;
	auto cBoat::teleport(const class cVector3D *pPos, const bool bResetAngle) -> void;
	cBoat::~cBoat(void) = default;

	private:
};

#endif