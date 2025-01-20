//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SARADARTRACE_HPP
#define SARADARTRACE_HPP

#pragma once

#include "Vector/cVector3D.hpp"

#pragma pack(push, 4)
class cRadarTrace final {
	public:
	unsigned __int32 ui32Colour{0};
	unsigned __int32 ui32EntityHandle{0};
	class cVector3D vecPosition {};
	unsigned __int16 ui16Counter{0};
	float fSphereRadius{0};
	unsigned __int16 ui16BlipSize{0};
	class cEntryExit *pEntryExit{nullptr};
	unsigned __int8 ui8BlipSprite{0};
	unsigned __int8 bBright : 1;
	unsigned __int8 bTrackingBlip : 1;
	unsigned __int8 bShortRange : 1;
	unsigned __int8 bFriendly : 1;
	unsigned __int8 bBlipRemain : 1;
	unsigned __int8 bBlipFade : 1;
	unsigned __int8 ui8CoordBlipAppearance : 2;
	unsigned __int8 ui8BlipDisplayFlag : 2;
	unsigned __int8 ui8BlipType : 4;

	explicit cRadarTrace::cRadarTrace(void) = delete;
	cRadarTrace::~cRadarTrace(void) = delete;

	private:
};
#pragma pack(pop)

#endif