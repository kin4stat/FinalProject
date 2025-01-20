//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPICKUP_HPP
#define MPPICKUP_HPP

#pragma once

#include "Vector/cVector3D.hpp"

struct stPickup final {
	unsigned __int32 ui32ModelID{0};
	unsigned __int32 ui32Type{0};
	class cVector3D vecPosition {};
};

#endif