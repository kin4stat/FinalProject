//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPACKET_HPP
#define MPPACKET_HPP

#pragma once

struct stPacket final {
	unsigned __int16 ui16PlayerID{0};
	struct stPlayerID playerID {};
	unsigned __int32 ui32Length{0};
	unsigned __int32 ui32BitSize{0};
	unsigned __int8 *pData{nullptr};
	bool bDeleteData{false};
};

#endif