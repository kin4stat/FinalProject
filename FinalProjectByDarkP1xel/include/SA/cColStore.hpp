//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACOLSTORE_HPP
#define SACOLSTORE_HPP

#pragma once

class cColStore final {
	public:
	explicit cColStore::cColStore(void) = delete;
	cColStore::~cColStore(void) = delete;

	static auto cColStore::requestCollision(const class cVector3D *pPos, const unsigned __int32 ui32InteriorID) -> void;
	static auto cColStore::removeAllCollision(void) -> void;

	private:
};

#endif