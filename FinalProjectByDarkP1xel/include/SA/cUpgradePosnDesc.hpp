//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAUPGRADEPOSNDESC_HPP
#define SAUPGRADEPOSNDESC_HPP

#pragma once

#include "include\Vector\cVector4D.hpp"

class cUpgradePosnDesc final {
	public:
	class cVector3D vecPosition {};
	class cVector4D vecRotation {};
	__int32 i32ParentComponentID{0};

	explicit cUpgradePosnDesc::cUpgradePosnDesc(void) = default;
	cUpgradePosnDesc::~cUpgradePosnDesc(void) = default;

	private:
};

#endif