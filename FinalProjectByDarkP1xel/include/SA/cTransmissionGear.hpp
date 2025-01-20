//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SATRANSMISSIONGEAR_HPP
#define SATRANSMISSIONGEAR_HPP

#pragma once

class cTransmissionGear final {
	public:
	float fMaxVelocity{0};
	float fChangeUpVelocity{0};
	float fChangeDownVelocity{0};

	explicit cTransmissionGear(void) = default;
	~cTransmissionGear(void) = default;

	private:
};

#endif