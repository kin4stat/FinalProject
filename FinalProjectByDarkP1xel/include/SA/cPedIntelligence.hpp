//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPEDINTELLIGENCE_HPP
#define SAPEDINTELLIGENCE_HPP

#pragma once

class cPedIntelligence final {
	public:
	explicit cPedIntelligence(void) = delete;
	auto flushImmediately(const bool bUnk) -> bool;
	auto clearTasks(const bool bFirst, const bool bSecond) -> void;
	~cPedIntelligence(void) = delete;

	private:
};

#endif