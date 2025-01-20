//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SADIRECTIONARROW_HPP
#define SADIRECTIONARROW_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

class cDirectionArrow final {
	public:
	bool bIsUsed{false};
	__int8 i8Pad1[3];
	class cVector3D vecPosition {};
	float fSize{0};
	class cVector3D vecDirection {};
	unsigned __int32 ui32Red{0};
	unsigned __int32 ui32Green{0};
	unsigned __int32 ui32Blue{0};
	unsigned __int32 ui32Alpha{0};

	explicit cDirectionArrow::cDirectionArrow(void) = delete;
	cDirectionArrow::~cDirectionArrow(void) = delete;

	private:
};

#endif