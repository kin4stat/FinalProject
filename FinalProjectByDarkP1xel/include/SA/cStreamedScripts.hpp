//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SASTREAMEDSCRIPTS_HPP
#define SASTREAMEDSCRIPTS_HPP

#pragma once

#include "SA/cStreamedScript.hpp"

class cStreamedScripts final {
	public:
	class cStreamedScript streamedScript[82]{};
	__int32 i32LargestExternalSize{0};
	__int16 i16CountOfScripts{0};
	__int16 i16Field_A46{0};

	explicit cStreamedScripts(void) = delete;
	~cStreamedScripts(void) = delete;

	static auto reInit(void) -> void;

	private:
};

#endif