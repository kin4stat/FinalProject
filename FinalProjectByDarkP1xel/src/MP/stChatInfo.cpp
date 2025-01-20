//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "MP/stChatInfo.hpp"

auto stChatInfo::addColorMessage(const unsigned long ulColor, const char *pText) -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			reinterpret_cast<void(__thiscall *)(struct stChatInfo *pThis, const unsigned long ulColor, const char *pText)>(cMP::ui32SAMPBase + 0x645A0)(this, ulColor, pText);
			break;
		}
		case cMP::eVer::e037R3: {
			reinterpret_cast<void(__thiscall *)(struct stChatInfo *pThis, const unsigned long ulColor, const char *pText)>(cMP::ui32SAMPBase + 0x679F0)(this, ulColor, pText);
			break;
		} default: break;
	} return;
}