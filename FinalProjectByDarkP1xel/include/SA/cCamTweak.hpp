//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACAMTWEAK_HPP
#define SACAMTWEAK_HPP

#pragma once

class cCamTweak final {
	public:
	__int32 i32ModelIndex{0};
	float fDistance{0};
	float fAltitude{0};
	float fAngle{0};

	explicit cCamTweak::cCamTweak(void) = default;
	cCamTweak::~cCamTweak(void) = default;

	private:
};

#endif