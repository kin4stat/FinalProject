//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SALIST_C
#define SALIST_C

#pragma once

class cList final {
	public:
	class cListItem *pLast{nullptr};
	class cListItem *pFirst{nullptr};
	__int32 i32Count{0};

	explicit cList::cList(void) = default;
	cList::~cList(void) = default;

	private:
};

#endif