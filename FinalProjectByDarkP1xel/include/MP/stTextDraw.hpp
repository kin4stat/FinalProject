//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPTEXTDRAW_HPP
#define MPTEXTDRAW_HPP

#pragma once

#include "include\Vector\cVector3D.hpp"

struct stTextDraw final {
	char cText[801];
	char cString[1602];
	float fLetterWidth{0};
	float fLetterHeight{0};
	unsigned long ulLetterColor{0};
	unsigned __int8 ui8Unknown{0};
	bool bCenter{false};
	bool bBox{false};
	float fBoxSizeX{0};
	float fBoxSizeY{0};
	unsigned long ulBoxColor{0};
	bool bProportional{false};
	unsigned long ulBackgroundColor{0};
	unsigned __int8 ui8Shadow{0};
	unsigned __int8 ui8Outline{0};
	bool bLeft{false};
	bool bRight{false};
	__int32 i32Style{0};
	class cVector2D vecGamePosition {};
	unsigned __int8 ui8Pad[8];
	__int32 i32Field_99B{0};
	__int32 i32Field_99F{0};
	__int32 i32Index{0};
	unsigned __int8 ui8Field_9A7{0};
	unsigned __int16 ui16Model{0};
	class cVector3D vecRotation {};
	float fZoom{0};
	unsigned __int16 ui16Color[2];
	unsigned __int8 ui8Field_9BE{0};
	unsigned __int8 ui8Field_9BF{0};
	unsigned __int8 ui8Field_9C0{0};
	unsigned __int32 ui32ScreenPosX{0};
	unsigned __int32 ui32ScreenCenterPos[2];
	unsigned __int32 ui32ScreenPosY{0};
	unsigned __int8 ui8Field_9D1{0};
	unsigned long ulField_9D2{0};
};

#endif