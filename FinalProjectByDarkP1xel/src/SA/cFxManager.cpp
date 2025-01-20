//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cFxManager.hpp"

auto cFxManager::createFxSystem(const char *pName, class cVector3D *pPoint, const struct stRwMatrix *pRwMatrix, const bool bIgnoreBoundingChecks) -> class cFxSystem * {
	return reinterpret_cast<class cFxSystem *(__thiscall *)(class cFxManager *pThis, const char *pName, const class cVector3D *pPoint, const struct stRwMatrix *pRwMatrix, const bool bIgnoreBoundingChecks)>(0x4A9BE0)(this, pName, pPoint, pRwMatrix, bIgnoreBoundingChecks);
}