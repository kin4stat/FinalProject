//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\MP\RakNet\cBitStream.hpp"

cBitStream::cBitStream(void *pData, const unsigned __int32 ui32DataLenBytes) {
	this->pData = static_cast<unsigned __int8 *>(pData);
	this->i32NumberOfBitsUsed = ui32DataLenBytes * 8;
	this->i32NumberOfBitsAllocated = this->i32NumberOfBitsUsed;
	return;
}


cBitStream::~cBitStream(void) {
	return;
}