//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPTEXTDRAWPOOL_HPP
#define MPTEXTDRAWPOOL_HPP

#pragma once

#include "MP/stTextDraw.hpp"

struct stTextDrawPool final {
	unsigned __int32 ui32NotEmpty[2048 + 256];
	struct stTextDraw *pTextDraw[2048 + 256];

	explicit stTextDrawPool(void) = delete;
	auto forAllTextDraws(bool(__cdecl *pFunc)(const unsigned __int16 ui16TextDrawID, struct stTextDraw *pTextDraw)) -> void;
	~stTextDrawPool(void) = delete;
};

#endif