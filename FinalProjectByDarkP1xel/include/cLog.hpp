//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef LOG_HPP
#define LOG_HPP

#pragma once

#include <fstream>

class cLog final {
	public:
	explicit cLog::cLog(const std::wstring &wsLOGName);
	auto cLog::LOG(void) const->std::wofstream &;
	cLog::~cLog(void);

	private:
	mutable std::wofstream wofsLOGFile{};
};

#endif