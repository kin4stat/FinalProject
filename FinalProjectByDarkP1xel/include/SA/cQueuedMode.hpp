//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAQUEUEDMODE_HPP
#define SAQUEUEDMODE_HPP

#pragma once

class cQueuedMode final {
	public:
	unsigned __int16 ui16Mode{0};
	__int16 i16Pad0{0};
	float fDuration{0};
	unsigned __int16 ui16MinZoom{0};
	unsigned __int16 ui16MaxZoom{0};

	explicit cQueuedMode(void) = default;
	~cQueuedMode(void) = default;

	private:
};

#endif