//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFORBIDDENAREA_HPP
#define SAFORBIDDENAREA_HPP

#pragma once

#include "include\Vector\cVector2D.hpp"

class cForbiddenArea final {
	public:
	class cVector2D vecXY1 {};
	class cVector2D vecXY2 {};
	class cVector2D vecXY3 {};
	bool bEnable{false};
	unsigned __int8 ui8Type{0};
	__int8 i8Pad1A[2];

	explicit cForbiddenArea::cForbiddenArea(void) = default;
	cForbiddenArea::~cForbiddenArea(void) = default;

	private:
};

#endif