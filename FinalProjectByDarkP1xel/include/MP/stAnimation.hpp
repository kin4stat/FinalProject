//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPANIMATION_HPP
#define MPANIMATION_HPP

#pragma once

struct stAnimation final {
	union {
		struct stAnimationFlags {
			unsigned __int16 ui16ID : 16;
			unsigned __int8 ui8Framedelta : 8;
			unsigned __int8 ui8LoopA : 1;
			unsigned __int8 ui8LockX : 1;
			unsigned __int8 ui8LockY : 1;
			unsigned __int8 ui8LockF : 1;
			unsigned __int8 ui8Time : 2;
		} AnimFlags;
		unsigned __int32 ui32Value{0};
	};
};

#endif