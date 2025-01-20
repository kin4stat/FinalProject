//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAQUADBIKE_HPP
#define SAQUADBIKE_HPP

#pragma once

#include "SA/cAutomobile.hpp"

class cQuadBike final {
	public:
	class cAutomobile Automobile {};

	explicit cQuadBike(void) = delete;
	auto fix(void) -> void;
	~cQuadBike(void) = delete;

	private:
};

#endif