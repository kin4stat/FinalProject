//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPINCARPACKET_HPP
#define MPINCARPACKET_HPP

#pragma once

struct stInCarPacket final {
	unsigned __int8 ui8PacketID{200};
	struct stInCarData inCarData {};
};

#endif