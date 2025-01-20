//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPBULLETDATA_HPP
#define MPBULLETDATA_HPP

#pragma once

struct stBulletData final {
	unsigned __int8 ui8Type{0};
	unsigned __int16 ui16TargetID{0};
	class cVector3D vecOrigin {};
	class cVector3D vecTarget {};
	class cVector3D vecCenter {};
	unsigned __int8 ui8WeaponID{0};
};

#endif