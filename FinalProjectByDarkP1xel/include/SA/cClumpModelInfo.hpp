//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACLUMPMODELINFO_HPP
#define SACLUMPMODELINFO_HPP

#pragma once

#include "include\SA\cBaseModelInfo.hpp"

class cClumpModelInfo final {
	public:
	class cBaseModelInfo baseModelInfo {};
	union {
		char *cAnimFileName;
		unsigned __int32 ui32AnimFileIndex{0};
	};

	explicit cClumpModelInfo::cClumpModelInfo(void) = default;
	cClumpModelInfo::~cClumpModelInfo(void) = default;

	private:
};

#endif