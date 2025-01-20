//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cPointLights.hpp"

auto cPointLights::addLight(const unsigned __int8 ui8Type, const class cVector3D *pPos, const class cVector3D *pVelocity, const float fRadius, const class cVector3D *pColor, const unsigned __int8 ui8FogType, const bool bGenerateExtraShadows, const class cEntity *pAttachedTo) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int8 ui8Type, const class cVector3D vecPos, const class cVector3D vecVelocity, const float fRadius, const class cVector3D vecColor, const unsigned __int8 ui8FogType, const bool bGenerateExtraShadows, const class cEntity *pAttachedTo)>(0x7000E0)(ui8Type, *pPos, *pVelocity, fRadius, *pColor, ui8FogType, bGenerateExtraShadows, pAttachedTo);
	return;
}