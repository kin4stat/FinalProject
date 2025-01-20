//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cBoat.hpp"

auto cBoat::teleport(const class cVector3D *pPos, const bool bResetAngle) -> void {
	reinterpret_cast<void(__thiscall *)(class cBoat *pThis, const class cVector3D vecPos, const bool bResetAngle)>(0x6F20E0)(this, *pPos, bResetAngle);
	return;
}