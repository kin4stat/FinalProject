//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SABOX_HPP
#define SABOX_HPP

#pragma once

#include "Vector/cVector3D.hpp"

class cBox final {
	public:
	class cVector3D vecMin {};
	class cVector3D vecMax {};

	explicit cBox::cBox(void) = default;
	cBox::~cBox(void) = default;

	private:
};

#endif