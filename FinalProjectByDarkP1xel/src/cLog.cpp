//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cLog.hpp"

cLog::cLog(const std::wstring &wsLOGName) {
	if (!wsLOGName.empty()) {
		this->wofsLOGFile.open(wsLOGName);
	} return;
}


auto cLog::LOG(void) const -> std::wofstream & {
	return this->wofsLOGFile;
}


cLog::~cLog(void) {
	if (this->wofsLOGFile.is_open()) {
		this->wofsLOGFile.close();
	} return;
}