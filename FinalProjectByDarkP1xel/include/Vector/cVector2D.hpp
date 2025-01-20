//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#pragma once

class cVector2D {
	public:
	float fX{0};
	float fY{0};

	explicit cVector2D::cVector2D(void);
	explicit cVector2D::cVector2D(const float fX, const float fY);
	cVector2D::~cVector2D(void);

	private:
};

#endif