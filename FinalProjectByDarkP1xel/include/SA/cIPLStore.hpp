//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAIPLSTORE_HPP
#define SAIPLSTORE_HPP

#pragma once

class cIPLStore final {
	public:
	explicit cIPLStore(void) = delete;
	~cIPLStore(void) = delete;

	static auto removeAllIPLs(void) -> void;

	private:
};

#endif