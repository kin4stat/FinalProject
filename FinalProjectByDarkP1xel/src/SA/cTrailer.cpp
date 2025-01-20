//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cTrailer.hpp"

auto cTrailer::setTowLink(const class cVehicle *pVehicle, const bool bUnk) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cTrailer *pThis, const class cVehicle *pVehicle, const bool bUnk)>(0x6CFDF0)(this, pVehicle, bUnk);
}