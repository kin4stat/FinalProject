//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPAIMDATA_HPP
#define MPAIMDATA_HPP

#pragma once

struct stAimData final {
	unsigned __int8	ui8CamMode{0};
	class cVector3D vecAimF1 {};
	class cVector3D vecPosition {};
	float fAimZ{0};
	unsigned __int8	ui8CamExtZoom : 6;
	unsigned __int8	ui8WeaponState : 2;
	__int8 i8AspectRatio{0};
};

#endif