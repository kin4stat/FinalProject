//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef HOOK_HPP
#define HOOK_HPP

#pragma once

#include "include\cWinAPIFuncs.hpp"

class cHook final {
	public:
	explicit cHook::cHook(class cWinAPIFuncs *pWinAPIFuncs);
	auto cHook::isJMP(const void *pJMPPos) const -> bool;
	auto cHook::isCALL(const void *pJMPPos) const -> bool;
	auto cHook::getHookAddress(const void *pJMPPos) const -> void *;
	auto cHook::installJMPHook(void *pJMPPos, const void *pJMPTo, const unsigned __int32 ui32Size = 5, void **ppSavedBytes = nullptr, void **ppSavedJMPTo = nullptr) const -> bool;
	auto cHook::removeJMPHook(void *pJMPPos, void *pSavedBytes, const unsigned __int32 ui32Size = 5) const -> bool;
	cHook::~cHook(void);

	private:
	class cWinAPIFuncs *pWinAPIFuncs{nullptr};
};

#endif