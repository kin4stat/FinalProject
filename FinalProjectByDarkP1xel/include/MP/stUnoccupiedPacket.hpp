//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPUNOCCUPIEDPACKET_HPP
#define MPUNOCCUPIEDPACKET_HPP

#pragma once

#include "cMP.hpp"

struct stUnoccupiedPacket final {
	unsigned __int8 ui8PacketID{209};
	struct stUnoccupiedData unoccupiedData {};
};

#endif