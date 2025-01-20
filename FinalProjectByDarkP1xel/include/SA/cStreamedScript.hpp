//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SASTREAMEDSCRIPT_HPP
#define SASTREAMEDSCRIPT_HPP

#pragma once

class cStreamedScript final {
	public:
	void *pData{nullptr};
	bool bStatus{false};
	__int8 i8Field_5{0};
	__int16 i16SCMIndex{0};
	char cName[20];
	__int32 i32Size{0};

	explicit cStreamedScript(void) = default;
	~cStreamedScript(void) = default;

	private:
};

#endif