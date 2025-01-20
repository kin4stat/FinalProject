//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cRadar.hpp"

auto cRadar::removeRadarSections(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x584BF0)();
	return;
}


auto cRadar::limitToMap(float *pX, float *pY) -> void {
	reinterpret_cast<void(__cdecl *)(float *pX, float *pY)>(0x583350)(pX, pY);
	return;
}


auto cRadar::limitRadarPoint(class cVector2D *pOut) -> long double {
	return reinterpret_cast<long double(__cdecl *)(class cVector2D *pOut)>(0x5832F0)(pOut);
}


auto cRadar::transformRadarPointToRealWorldSpace(class cVector2D *pOut, const class cVector2D *pIn) -> void {
	reinterpret_cast<void(__cdecl *)(class cVector2D *pOut, const class cVector2D *pIn)>(0x5835A0)(pOut, pIn);
	return;
}


auto cRadar::transformRadarPointToScreenSpace(class cVector2D *pOut, const class cVector2D *pIn) -> void {
	reinterpret_cast<void(__cdecl *)(class cVector2D *pOut, const class cVector2D *pIn)>(0x583480)(pOut, pIn);
	return;
}


auto cRadar::transformRealWorldPointToRadarSpace(class cVector2D *pOut, const class cVector2D *pIn) -> void {
	reinterpret_cast<void(__cdecl *)(class cVector2D *pOut, const class cVector2D *pIn)>(0x583530)(pOut, pIn);
	return;
}