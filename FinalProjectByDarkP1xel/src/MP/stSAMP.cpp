//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "MP/stSAMP.hpp"

// .....
/* R1 */
// .....
auto stSAMP037R1::restartGame(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stSAMP037R1 *pThis)>(cMP::ui32SAMPBase + 0xA060)(this);
	return;
}


auto stSAMP037R1::reAllocPools1(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stSAMP037R1 *pThis)>(cMP::ui32SAMPBase + 0x8160)(this);
	return;
}


auto stSAMP037R1::reAllocPools2(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stSAMP037R1 *pThis)>(cMP::ui32SAMPBase + 0xA010)(this);
	return;
}


// .....
/* R3 */
// .....
auto stSAMP037R3::restartGame(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stSAMP037R3 *pThis)>(cMP::ui32SAMPBase + 0xA1E0)(this);
	return;
}


auto stSAMP037R3::reAllocPools1(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stSAMP037R3 *pThis)>(cMP::ui32SAMPBase + 0x81D0)(this);
	return;
}


auto stSAMP037R3::reAllocPools2(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stSAMP037R3 *pThis)>(cMP::ui32SAMPBase + 0xA190)(this);
	return;
}