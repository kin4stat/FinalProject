//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "MP/stTextDrawPool.hpp"

auto stTextDrawPool::forAllTextDraws(bool(__cdecl *pFunc)(const unsigned __int16 ui16TextDrawID, struct stTextDraw *pTextDraw)) -> void {
	for (unsigned __int16 ui16TextDrawID{0}; ui16TextDrawID < 2304; ++ui16TextDrawID) {
		if (this->ui32NotEmpty[ui16TextDrawID]) {
			if (!pFunc(ui16TextDrawID, this->pTextDraw[ui16TextDrawID])) {
				break;
			}
		}
	} return;
}