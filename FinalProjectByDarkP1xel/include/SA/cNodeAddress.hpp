//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SANODEADDRESS_HPP
#define SANODEADDRESS_HPP

#pragma once

class cNodeAddress final {
	public:
	__int16 i16AreaID{0};
	__int16 i16NodeID{0};

	explicit cNodeAddress(void) = default;
	~cNodeAddress(void) = default;

	private:
};

#endif