//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACHEAT_HPP
#define SACHEAT_HPP

#pragma once

class cCheat final {
	public:
	explicit cCheat::cCheat(void) = delete;
	cCheat::~cCheat(void) = delete;

	static auto cCheat::suicide(void) -> void;
	static auto cCheat::giveJetPack(void) -> void;

	private:
};

#endif