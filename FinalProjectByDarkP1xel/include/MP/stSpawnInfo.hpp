//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPSPAWNINFO_HPP
#define MPSPAWNINFO_HPP

#pragma once

struct stSpawnInfo final {
	unsigned __int8 ui8TeamID{0};
	__int32 i32SpawnSkin{0};
	class cVector3D vecSpawnPosition {};
	float fSpawnRot{0};
	__int32 i32SpawnWeapon[3];
	__int32 i32SpawnAmmo[3];
};

#endif