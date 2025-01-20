//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPLANE_HPP
#define SAPLANE_HPP

#pragma once

#include "SA/cAutomobile.hpp"

class cPlane final {
	public:
	class cAutomobile Automobile {};

	explicit cPlane::cPlane(void) = delete;
	auto cPlane::fix(void) -> void;
	cPlane::~cPlane(void) = delete;

	private:
};

#endif