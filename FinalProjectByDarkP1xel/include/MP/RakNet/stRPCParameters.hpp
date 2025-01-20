//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPRPCPARAMETERS_HPP
#define MPRPCPARAMETERS_HPP

#pragma once

struct stRPCParameters final {
	unsigned __int8 *pData{nullptr};
	unsigned __int32 ui32NumberOfBitsOfData{0};
	struct stPlayerID senderID {};
	void *pRecipient{nullptr};
	void *pReplyToSender{nullptr};
};

#endif