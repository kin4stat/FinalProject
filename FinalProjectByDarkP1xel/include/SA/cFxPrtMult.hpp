//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXPTRMULT_HPP
#define SAFXPTRMULT_HPP

#pragma once

#include "include\SA\RenderWare\stRwRGBAReal.hpp"

class cFxPrtMult final {
	public:
	struct stRwRGBAReal rwColor {};
	float fSize{0};
	float fUnk{0};
	float fLife{0};

	explicit cFxPrtMult::cFxPrtMult(void) = default;
	cFxPrtMult::~cFxPrtMult(void) = default;

	private:
};

#endif