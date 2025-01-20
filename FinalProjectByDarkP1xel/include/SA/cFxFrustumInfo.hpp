//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXFRUSTUMINFO_HPP
#define SAFXFRUSTUMINFO_HPP

#pragma once

#include "SA/cFxSphere.hpp"
#include "SA/cFxPlane.hpp"

class cFxFrustumInfo final {
	public:
	class cFxSphere fxSphere {};
	class cFxPlane fxPlanes[4]{};

	explicit cFxFrustumInfo(void) = default;
	~cFxFrustumInfo(void) = default;

	private:
};

#endif