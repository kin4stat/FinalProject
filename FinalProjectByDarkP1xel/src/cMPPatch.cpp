//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\cMPPatch.hpp"

cMPPatch::cMPPatch(class cMain *pMain) {
	this->pMain = pMain;
	return;
}


auto cMPPatch::patchWarnCrash(void) const -> void {
	/* Warnings */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5CF3C), nullptr, 0x2);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x602DC), nullptr, 0x2);
			break;
		} default: break;
	} return;
}


auto cMPPatch::patchAntiCheat(void) const -> void {
	/* ??? */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x1033F8), "\x46", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x27D4EC), "\xC3", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x2CBE0F), "\x8B\x44\x24\x04\xF7\xD0\xC3", 0x7);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xC4DC7), "\xEB", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9D1A0), "\xC3", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xC4F40), "\x8B\x44\x24\x04\xF7\xD0\xC3", 0x7);
			break;
		} default: break;
	} return;
}


auto cMPPatch::patchTextDrawFreezer(void) const -> void {
	/* WndProc */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5DE18), nullptr, 0x6);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x61215), nullptr, 0x6);
			break;
		} default: break;
	} return;
}


auto cMPPatch::WallHack(const unsigned __int32 ui32Status) const -> void {
	/* findAndDrawTagsHealthArmor | findAndDrawTagsNickName */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			/* Health/Armour */
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6FC53), ui32Status ? nullptr : "\x84\xD2\x0F\x84\x27\x02\x00\x00", 0x8);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6FD11), ui32Status ? nullptr : "\xF6\xC4\x41\x0F\x8A\x50\x01\x00\x00", 0x9);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6FDC7), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6FE22), ui32Status ? nullptr : "\x84\xC0\x74\x04\x85\xC9\x74\x40", 0x8);
			/* NickName */
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x70D63), ui32Status ? nullptr : "\x84\xC9\x0F\x84\x48\x02\x00\x00", 0x8);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x70E21), ui32Status ? nullptr : "\xF6\xC4\x41\x0F\x8A\x71\x01\x00\x00", 0x9);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x70ED7), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x70F32), ui32Status ? nullptr : "\x84\xC0\x74\x04\x85\xC9\x74\x61", 0x8);
			break;
		}
		case cMP::eVer::e037R3: {
			/* Health/Armour */
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x73B43), ui32Status ? nullptr : "\x84\xD2\x0F\x84\x2B\x02\x00\x00", 0x8);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x73BFC), ui32Status ? nullptr : "\xF6\xC4\x41\x0F\x8A\x59\x01\x00\x00", 0x9);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x73CB8), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x73D13), ui32Status ? nullptr : "\x84\xC0\x74\x04\x85\xC9\x74\x43", 0x8);
			/* NickName */
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x74C53), ui32Status ? nullptr : "\x84\xC9\x0F\x84\x4C\x02\x00\x00", 0x8);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x74D0C), ui32Status ? nullptr : "\xF6\xC4\x41\x0F\x8A\x7A\x01\x00\x00", 0x9);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x74DC8), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x74E23), ui32Status ? nullptr : "\x84\xC0\x74\x04\x85\xC9\x74\x64", 0x8);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoSetEngineState(const unsigned __int32 ui32Status) const -> void {
	/* stSAMPVehicle::setEngineState */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB2510), ui32Status ? "\xC2\x04\x00" : "\x55\x8B\xEC", 0x3);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB81D0), ui32Status ? "\xC2\x04\x00" : "\x55\x8B\xEC", 0x3);
			break;
		} default: break;
	} return;
}


auto cMPPatch::FPSUnlock(const unsigned __int32 ui32Status) const -> void {
	/* ??? */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9D170), ui32Status ? "\xC3" : "\x51", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA14E0), ui32Status ? "\xC3" : "\x51", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoConnectionDelay(const unsigned __int32 ui32Status) const -> void {
	/* stSAMP::Connect */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x2D3C5C), ui32Status ? nullptr : "\x0F\x86\x0E\xD5\xF7\xFF", 0x6);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x85E7), ui32Status ? nullptr : "\x76\x50", 0x2);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoDialogLock(const unsigned __int32 ui32Status) const -> void {
	/* stMiscInfo::ToggleCursor */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9BD55), ui32Status ? nullptr : "\x89\x01", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9BD5A), ui32Status ? nullptr : "\x88\x41\x04", 0x3);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA0005), ui32Status ? nullptr : "\x89\x01", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA000A), ui32Status ? nullptr : "\x88\x41\x04", 0x3);
			break;
		} default: break;
	} return;
}


auto cMPPatch::SendRate(const unsigned __int32 ui32Status, const __int32 *pSendRate) const -> void {
	if (ui32Status) {
		switch (cMP::SAMPVer) {
			case cMP::eVer::e037R1: {
				/* OnFoot */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x39D7), &pSendRate, 4); // R1 + R3
				/* InCar */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3997), &pSendRate, 4); // R1 + R3
				/* AIM */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7948), &pSendRate, 4);
				break;
			}
			case cMP::eVer::e037R3: {
				/* OnFoot */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x39D7), &pSendRate, 4); // R1 + R3
				/* InCar */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3997), &pSendRate, 4); // R1 + R3
				/* AIM */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x796E), &pSendRate, 4);
				break;
			} default: break;
		}
	} else {
		switch (cMP::SAMPVer) {
			case cMP::eVer::e037R1: {
				const unsigned __int32 *pRates[3]{
					reinterpret_cast<const unsigned __int32 *>(cMP::ui32SAMPBase + 0xEC0A8),
						reinterpret_cast<const unsigned __int32 *>(cMP::ui32SAMPBase + 0xEC0AC),
						reinterpret_cast<const unsigned __int32 *>(cMP::ui32SAMPBase + 0xEC0B0)};
				/* OnFoot */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x39D7), &pRates[0], 4); // R1 + R3
				/* InCar */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3997), &pRates[1], 4); // R1 + R3
				/* AIM */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7948), &pRates[2], 4);
				break;
			}
			case cMP::eVer::e037R3: {
				const unsigned __int32 *pRates[3]{
					reinterpret_cast<const unsigned __int32 *>(cMP::ui32SAMPBase + 0xFE0A8),
						reinterpret_cast<const unsigned __int32 *>(cMP::ui32SAMPBase + 0xFE0AC),
						reinterpret_cast<const unsigned __int32 *>(cMP::ui32SAMPBase + 0xFE0B0)};
				/* OnFoot */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x39D7), &pRates[0], 4); // R1 + R3
				/* InCar */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3997), &pRates[1], 4); // R1 + R3
				/* AIM */
				this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x796E), &pRates[2], 4);
				break;
			} default: break;
		}
	} return;
}


auto cMPPatch::QuickScreen(const unsigned __int32 ui32Status) const -> void {
	/* ??? */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x710C9 + 0x1), ui32Status ? "\x01" : "\x03", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x74FB9 + 0x1), ui32Status ? "\x01" : "\x03", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoVehColorReset(const unsigned __int32 ui32Status) const -> void {
	/* stSAMPVehicle::updateColor */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB0DFC), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB0DAA), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB6ABC), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB6A6A), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoDLLimit(const unsigned __int32 ui32Status) const -> void {
	/* IDirect3DDevice9::Present */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7121A), ui32Status ? nullptr : "\x0F\x8A\xDD\x00\x00\x00", 0x6);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7510A), ui32Status ? nullptr : "\x0F\x8A\xDD\x00\x00\x00", 0x6);
			break;
		} default: break;
	} return;
}


auto cMPPatch::No3DTextDrawDist(const unsigned __int32 ui32Status) const -> void {
	/* draw3DText */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1:
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x14CD), ui32Status ? nullptr : "\x0F\x8A\xB9\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x1556), ui32Status ? nullptr : "\x7A\x34", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x1575), ui32Status ? nullptr : "\x8A\x4E\xFF", 0x3);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoPedToVehAttach(const unsigned __int32 ui32Status) const -> void {
	/* stLocalPlayer::doVehSurfing */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1:
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3470), ui32Status ? "\xE9\x56\x01\x00\x00\x90" : "\x0F\x84\x55\x01\x00\x00", 0x6);
			break;
		} default: break;
	} return;
}


auto cMPPatch::DialogHider(const unsigned __int32 ui32Status) const -> void {
	/* sub_1006B240 | WndProc | eventPressKey */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6B24E), ui32Status ? "\xE9\x55\x01\x00\x00\x90" : "\x0F\x84\x54\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5DD32), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5D881), ui32Status ? "\xE9\x5A\x01\x00\x00\x90" : "\x0F\x84\x59\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5F03), ui32Status ? "\xEB" : "\x75", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6F14E), ui32Status ? "\xE9\x55\x01\x00\x00\x90" : "\x0F\x84\x54\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x610D2), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x60C21), ui32Status ? "\xE9\x5A\x01\x00\x00\x90" : "\x0F\x84\x59\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5F13), ui32Status ? "\xEB" : "\x75", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::FastChatOff(const unsigned __int32 ui32Status) const -> void {
	/* stInputInfo::SwitchChatMode */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5D7CC), ui32Status ? nullptr : "\x75\x08", 0x2);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x60B6C), ui32Status ? nullptr : "\x75\x08", 0x2);
			break;
		} default: break;
	} return;
}


auto cMPPatch::TextDrawHider(const unsigned __int32 ui32Status) const -> void {
	/* drawTextDraw | textDrawWNDProc */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9D927), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6CE36), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xC58D2), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x70D26), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::DisableNameTagsAndBars(const unsigned __int32 ui32Status) const -> void {
	/* IDirect3DDevice9::Present */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x71190), ui32Status ? nullptr : "\xE8\x9B\xEA\xFF\xFF\xE8\xA6\xFB\xFF\xFF", 0xA);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x75080), ui32Status ? nullptr : "\xE8\x9B\xEA\xFF\xFF\xE8\xA6\xFB\xFF\xFF", 0xA);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoClosedDoors(const unsigned __int32 ui32Status) const -> void {
	/* process_EnterVehicle */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9E9E5), ui32Status ? nullptr : "\x0F\x84\xAF\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9E9EF), ui32Status ? nullptr : "\x0F\x83\xA5\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9EA07), ui32Status ? nullptr : "\x0F\x84\x8D\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9EA1E), ui32Status ? nullptr : "\x75\x7A", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9EA29), ui32Status ? nullptr : "\x74\x6F", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9EA32), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9EA6C), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA2FE8), ui32Status ? nullptr : "\x0F\x84\xAF\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA2FF2), ui32Status ? nullptr : "\x0F\x83\xA5\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA300A), ui32Status ? nullptr : "\x0F\x84\x8D\x00\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA3021), ui32Status ? nullptr : "\x75\x7A", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA302C), ui32Status ? nullptr : "\x74\x6F", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA3035), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA306F), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::GangZoneHider(const unsigned __int32 ui32Status) const -> void {
	/* GangZone_Draw */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x9F1D8), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA37F8), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoConnectLock(const unsigned __int32 ui32Status) const -> void {
	/* UNK */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x286093), ui32Status ? nullptr : "\x0F\x85\xC0\xF7\x06\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA1D6), ui32Status ? nullptr : "\xE8\xC5\x06\x0A\x00", 0x5);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB2C2), ui32Status ? nullptr : "\x75\x41", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xA35F), ui32Status ? nullptr : "\xE8\xDC\x53\x0A\x00", 0x5);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoCloseChatOnDialog(const unsigned __int32 ui32Status) const -> void {
	/* DXUT::ShowDialog */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6B9F1), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6F8F1), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::DisableChatTKey(const unsigned __int32 ui32Status) const -> void {
	/* eventChar */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5DB23), ui32Status ? "\xEB" : "\x75", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x60EC3), ui32Status ? "\xEB" : "\x75", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::FakeWeapon(const unsigned __int32 ui32Status) const -> void {
	/* sendWeaponUpdate */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6223), ui32Status ? nullptr : "\x75\x0B", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x622E), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6233), ui32Status ? nullptr : "\x75\x0B", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x623E), ui32Status ? "\xEB" : "\x74", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoLockOnSpec(const unsigned __int32 ui32Status) const -> void {
	/* sendSpecSync */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3EF2), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6481), ui32Status ? nullptr : "\x51", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6485), ui32Status ? nullptr : "\x52", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6486), ui32Status ? nullptr : "\x50", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6487), ui32Status ? nullptr : "\xE8\xF4\x41\x09\x00", 0x5);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6522), ui32Status ? nullptr : "\x68\x00\x00\x20\x41", 0x5);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6527), ui32Status ? nullptr : "\x53", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6528), ui32Status ? nullptr : "\x53", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6529), ui32Status ? nullptr : "\xE8\x02\x09\x0A\x00", 0x5);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3F02), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x648E), ui32Status ? nullptr : "\x51", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6492), ui32Status ? nullptr : "\x52", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6493), ui32Status ? nullptr : "\x50", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6494), ui32Status ? nullptr : "\xE8\x97\x84\x09\x00", 0x5);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6535), ui32Status ? nullptr : "\x68\x00\x00\x20\x41", 0x5);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x653A), ui32Status ? nullptr : "\x53", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x653B), ui32Status ? nullptr : "\x53", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x653C), ui32Status ? nullptr : "\xE8\x9F\x57\x0A\x00", 0x5);
			break;
		} default: break;
	} return;
}


auto cMPPatch::AlwaysSync(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x52BF), ui32Status ? nullptr : "\x0F\x84\x91\x00\x00\x00", 0x6); // OnFoot
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5505), ui32Status ? nullptr : "\x74\x7D", 0x2); // OnPass
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5116), ui32Status ? nullptr : "\x74\x5E", 0x2); // OnAim
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x394D), ui32Status ? nullptr : "\x74\x12", 0x2); // OnInCar
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x4FA8), ui32Status ? nullptr : "\x74\x61", 0x2); // OnFoot
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5538), ui32Status ? nullptr : "\x74\x7D", 0x2); // OnPass
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x5163), ui32Status ? nullptr : "\x74\x58", 0x2); // OnAim
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x394D), ui32Status ? nullptr : "\x74\x12", 0x2); // OnInCar
			break;
		} default: break;
	} return;
}


auto cMPPatch::SpectatorMode(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x75F2), ui32Status ? nullptr : "\x74\x12", 0x2);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7603), ui32Status ? nullptr : "\x74\x12", 0x2);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoHeadMoveDelay(const unsigned __int32 ui32Status) const -> void {
	/* processHeadMove */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1:
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x2FED), ui32Status ? nullptr : "\x76\x59", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3058), ui32Status ? nullptr : "\x76\x5A", 0x2);
			break;
		} default: break;
	} return;
}


auto cMPPatch::SyncSpec(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7601), ui32Status ? nullptr : "\xE9\x3A\x01\x00\x00", 0x5);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7612), ui32Status ? nullptr : "\xE9\x40\x01\x00\x00", 0x5);
			break;
		}  default: break;
	} return;
}


auto cMPPatch::NoLockInfoOnSpec(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x728F), ui32Status ? nullptr : "\x0F\x84\xB1\x04\x00\x00", 0x6);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x7282), ui32Status ? nullptr : "\x0F\x84\xD8\x04\x00\x00", 0x6);
			break;
		}  default: break;
	} return;
}


auto cMPPatch::CustomGiveDamage(const unsigned __int32 ui32Status, const float *pDamage) const -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			const float *pDamageOrig{reinterpret_cast<const float *>(cMP::ui32SAMPBase + 0xD3900)};
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6798), ui32Status ? &pDamage : &pDamageOrig, 0x4);
			break;
		}
		case cMP::eVer::e037R3: {
			const float *pDamageOrig{reinterpret_cast<const float *>(cMP::ui32SAMPBase + 0xE5900)};
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x67A8), ui32Status ? &pDamage : &pDamageOrig, 0x4);
			break;
		} default: break;
	} return;
}


auto cMPPatch::CustomTakeDamage(const unsigned __int32 ui32Status, const float *pDamage) const -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			const float *pDamageOrig{reinterpret_cast<const float *>(cMP::ui32SAMPBase + 0xD3900)};
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6688), ui32Status ? &pDamage : &pDamageOrig, 0x4);
			break;
		}
		case cMP::eVer::e037R3: {
			const float *pDamageOrig{reinterpret_cast<const float *>(cMP::ui32SAMPBase + 0xE5900)};
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x6698), ui32Status ? &pDamage : &pDamageOrig, 0x4);
			break;
		} default: break;
	} return;
}


auto cMPPatch::NoStatistic(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3AB14), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3AB4F), ui32Status ? nullptr : "\x72\xAF", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3DD6A), ui32Status ? "\xEB" : "\x75", 0x1);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3DEC4), ui32Status ? "\xEB" : "\x74", 0x1);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3DEFF), ui32Status ? nullptr : "\x72\xAF", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x4111A), ui32Status ? "\xEB" : "\x75", 0x1);
			break;
		} default: break;
	} return;
}


auto cMPPatch::AlwaysActiveConnection(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x373B5), ui32Status ? nullptr : "\x74\x69", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3CDAE), ui32Status ? nullptr : "\x0F\x84\x4E\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3D51A), ui32Status ? nullptr : "\x74\x20", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3FD15), ui32Status ? nullptr : "\x0F\x84\x68\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3FD23), ui32Status ? nullptr : "\x0F\x84\x5A\x01\x00\x00", 0x6);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x3A765), ui32Status ? nullptr : "\x74\x69", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x4015E), ui32Status ? nullptr : "\x0F\x84\x4E\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x408CA), ui32Status ? nullptr : "\x74\x20", 0x2);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x430C5), ui32Status ? nullptr : "\x0F\x84\x68\x01\x00\x00", 0x6);
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0x430D3), ui32Status ? nullptr : "\x0F\x84\x5A\x01\x00\x00", 0x6);
			break;
		} default: break;
	} return;
}


auto cMPPatch::QuitMPNoDelay(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xB3A18), ui32Status ? nullptr : "\xC0\x2B\x05\x9C\xA0\x21\x10\x3D\xE8\x03\x00\x00\x76\x27", 0xE);
			break;
		}
		case cMP::eVer::e037R3: {
			this->pMain->patchAddress(reinterpret_cast<void *>(cMP::ui32SAMPBase + 0xC58F8), ui32Status ? nullptr : "\x76\x27", 0x2);
			break;
		}  default: break;
	} return;
}


cMPPatch::~cMPPatch(void) {
	this->pMain = nullptr;
	return;
}