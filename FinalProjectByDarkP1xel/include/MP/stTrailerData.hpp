//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPTRAILERDATA_HPP
#define MPTRAILERDATA_HPP

#pragma once

struct stTrailerData final {
	unsigned __int16 ui16TrailerID{0};
	class cVector3D vecPosition {};
	class cVector4D vecQuaternion {};
	class cVector3D vecMoveSpeed {};
	class cVector3D vecSpin {};
};

#endif