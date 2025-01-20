//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPRPCNODE_HPP
#define MPRPCNODE_HPP

#pragma once

struct stRPCNode final {
	unsigned __int8 ui8UniqueID{0};
	void(__cdecl *staticFunctionPointer)(struct stRPCParameters *pRPCParams) { nullptr };
};

#endif