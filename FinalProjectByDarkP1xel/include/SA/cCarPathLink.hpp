//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACARPATHLINK_HPP
#define SACARPATHLINK_HPP

#pragma once

#include "include\Vector\cCompressedVector2D.hpp"
#include "include\SA\cNodeAddress.hpp"

class cCarPathLink final {
	public:
	class cCompressedVector2D compVecPosn {};
	class cNodeAddress nodeAddress {};
	__int8 i8DirX{0};
	__int8 i8DirY{0};
	__int8 i8PathNodeWidth{0};
	unsigned __int8 ui8NumLeftLanes : 3;
	unsigned __int8 ui8NumRightLanes : 3;
	unsigned __int8 bTrafficLightDirection : 1;
	unsigned __int8 bUnk1 : 1;
	unsigned __int8 ui8TrafficLightState : 2;
	unsigned __int8 bTrainCrossing : 1;
	__int8 i8Field_D{0};

	explicit cCarPathLink::cCarPathLink(void) = delete;
	cCarPathLink::~cCarPathLink(void) = delete;

	private:
};

#endif