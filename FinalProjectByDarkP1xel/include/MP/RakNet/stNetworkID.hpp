//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPNETWORKID_HPP
#define MPNETWORKID_HPP

#pragma once

struct stNetworkID final {
	bool bPeerToPeer{false};
	struct stPlayerID playerID {};
	unsigned __int16 ui16LocalSystemID{0};
};

#endif