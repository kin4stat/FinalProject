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
	explicit cPedIntelligence::cPedIntelligence(void) = delete;
	auto cPedIntelligence::flushImmediately(const bool bUnk) -> bool;
	auto cPedIntelligence::clearTasks(const bool bFirst, const bool bSecond) -> void;
	cPedIntelligence::~cPedIntelligence(void) = delete;

	private:
};

#endif