//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef COMPRESSEDVECTOR3D_HPP
#define COMPRESSEDVECTOR3D_HPP

#pragma once

#include "Vector/cCompressedVector2D.hpp"

class cCompressedVector3D final: public cCompressedVector2D {
	public:
	__int16 i16Z{0};

	explicit cCompressedVector3D(void) = default;
	~cCompressedVector3D(void) = default;

	private:
};

#endif