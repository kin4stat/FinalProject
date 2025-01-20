//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "MP/st3DTextPool.hpp"

auto st3DTextPool::forAll3D(bool(__cdecl *pFunc)(const unsigned __int16 ui163DTextID, struct st3DText *p3DText)) -> void {
	for (unsigned __int16 ui163DTextID{0}; ui163DTextID < 2048; ++ui163DTextID) {
		if (this->i32IsListed[ui163DTextID]) {
			if (!pFunc(ui163DTextID, &this->text3D[ui163DTextID])) {
				break;
			}
		}
	} return;
}