//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cRenderer.hpp"

auto cRenderer::requestObjectsInDirection(const class cVector3D *pPos, const float fAngle) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pPos, const float fAngle)>(0x555CB0)(pPos, fAngle);
	return;
}