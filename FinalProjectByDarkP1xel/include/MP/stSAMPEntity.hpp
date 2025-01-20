//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPENTITY_HPP
#define MPENTITY_HPP

#pragma once

template <class T> struct stSAMPEntity final {
	void *pVTBL{nullptr};
	unsigned __int8 ui8Unk1[60];
	T *pGTAEntity{nullptr};
	unsigned __int32 ui32GTAEntityHandle{0};
};

#endif