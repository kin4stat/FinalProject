//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPATHINTERSECTIONINFO_HPP
#define SAPATHINTERSECTIONINFO_HPP

#pragma once

class cPathIntersectionInfo final {
	public:
	unsigned __int8 bRoadCross : 1;
	unsigned __int8 bPedTrafficLight : 1;

	explicit cPathIntersectionInfo::cPathIntersectionInfo(void) = delete;
	cPathIntersectionInfo::~cPathIntersectionInfo(void) = delete;

	private:
};

#endif