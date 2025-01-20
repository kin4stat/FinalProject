//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAHELI_HPP
#define SAHELI_HPP

#pragma once

#include "SA/cAutomobile.hpp"

class cHeli final {
	public:
	class cAutomobile Automobile {};

	explicit cHeli::cHeli(void) = delete;
	auto cHeli::fix(void) -> void;
	cHeli::~cHeli(void) = delete;

	private:
};

#endif