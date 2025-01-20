//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAFXMEMORYPOOL_HPP
#define SAFXMEMORYPOOL_HPP

#pragma once

class cFxMemoryPool final {
	public:
	char *pData{nullptr};
	unsigned __int32 ui32Size{0};
	unsigned __int32 ui32Position{0};

	explicit cFxMemoryPool(void) = default;
	~cFxMemoryPool(void) = default;

	private:
};

#endif