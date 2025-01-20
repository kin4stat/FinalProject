//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACARPATHLINKADDRESS_HPP
#define SACARPATHLINKADDRESS_HPP

#pragma once

class cCarPathLinkAddress final {
	public:
	__int16 i16CarPathLinkID : 10;
	__int16 i16AreaID : 6;

	explicit cCarPathLinkAddress(void) = delete;
	~cCarPathLinkAddress(void) = delete;

	private:
};

#endif