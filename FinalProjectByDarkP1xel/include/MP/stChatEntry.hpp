//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPCHATENTRY_HPP
#define MPCHATENTRY_HPP

#pragma once

struct stChatEntry final {
	unsigned __int32 ui32SystemTime{0};
	char cPrefix[27 + 1];
	char cText[143 + 1];
	__int8 i8Unk[64];
	__int32 i32Type{0};
	unsigned long ulTextColor{0};
	unsigned long ulPrefixColor{0};
};

#endif