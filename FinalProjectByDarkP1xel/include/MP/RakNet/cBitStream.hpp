//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPBITSTREAM_HPP
#define MPBITSTREAM_HPP

#pragma once

class cBitStream final {
	public:
	__int32 i32NumberOfBitsUsed{0};
	__int32 i32NumberOfBitsAllocated{2048};
	__int32 i32ReadOffset{0};
	unsigned __int8 *pData{this->ui8StackData};
	bool bCopyData{true};
	unsigned __int8 ui8StackData[256];

	explicit cBitStream::cBitStream(void *pData, const unsigned __int32 ui32DataLenBytes);
	cBitStream::~cBitStream(void);

	private:
};

#endif