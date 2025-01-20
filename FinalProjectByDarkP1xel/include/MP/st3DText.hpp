//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef TEXTLABEL_HPP
#define TEXTLABEL_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

struct st3DText final {
	char *pText{nullptr};
	unsigned long ulColor{0};
	class cVector3D vecPosition {};
	float fMaxViewDistance{0};
	bool bShowBehindWalls{false};
	unsigned __int16 ui16AttachedToPlayerID{0};
	unsigned __int16 ui16AttachedToVehicleID{0};
};

#endif