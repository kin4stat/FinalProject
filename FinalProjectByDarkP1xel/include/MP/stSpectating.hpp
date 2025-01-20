//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPSPECTATING_HPP
#define MPSPECTATING_HPP

#pragma once

struct stSpectating final {
	unsigned __int8 ui8SpectateMode{0};
	unsigned __int8 ui8SpectateType{0};
	__int32 i32SpectateID{0};
	__int32 i32InitiatedSpectating{0};
};

#endif