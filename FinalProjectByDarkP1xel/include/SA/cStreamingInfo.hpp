//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SASTREAMINGINFO_HPP
#define SASTREAMINGINFO_HPP

#pragma once

class cStreamingInfo final {
	public:
	__int16 i16NextIndex{0};
	__int16 i16PrevIndex{0};
	__int16 i16NextIndexOnCd{0};
	unsigned __int8 ui8Flags{0};
	unsigned __int8 ui8ImgID{0};
	unsigned __int32 ui32CdPosn{0};
	unsigned __int32 ui32CdSize{0};
	unsigned __int8 ui8LoadState{0};
	__int8 i8Pad[3];

	explicit cStreamingInfo::cStreamingInfo(void) = delete;
	cStreamingInfo::~cStreamingInfo(void) = delete;

	private:
};

#endif