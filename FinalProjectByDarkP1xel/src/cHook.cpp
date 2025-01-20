//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cHook.hpp"

cHook::cHook(class cWinAPIFuncs *pWinAPIFuncs) {
	this->pWinAPIFuncs = pWinAPIFuncs;
	return;
}


auto cHook::isJMP(const void *pJMPPos) const -> bool {
	if (pJMPPos != nullptr) {
		const unsigned __int8 *pOpcode{static_cast<const unsigned __int8 *>(pJMPPos)};
		return pOpcode[0] == 0xEB || pOpcode[0] == 0xE9 || pOpcode[0] == 0xEA;
	} return false;
}


auto cHook::isCALL(const void *pJMPPos) const -> bool {
	if (pJMPPos != nullptr) {
		const unsigned __int8 *pOpcode{static_cast<const unsigned __int8 *>(pJMPPos)};
		return pOpcode[0] == 0xE8 || pOpcode[0] == 0x9A;
	} return false;
}


auto cHook::getHookAddress(const void *pJMPPos) const -> void * {
	if (this->isJMP(pJMPPos) || this->isCALL(pJMPPos)) {
		const unsigned __int32 ui32JMPPos{reinterpret_cast<const unsigned __int32>(pJMPPos)};
		const unsigned __int32 ui32JMPOffset{*reinterpret_cast<const unsigned __int32 *>(ui32JMPPos + 0x1)};
		return reinterpret_cast<void *>((ui32JMPPos + ui32JMPOffset) + 0x5);
	} return nullptr;
}


auto cHook::installJMPHook(void *pJMPPos, const void *pJMPTo, const unsigned __int32 ui32Size, void **ppSavedBytes, void **ppSavedJMPTo) const -> bool {
	if (pJMPPos != nullptr && pJMPTo != nullptr && ui32Size >= 0x5) {

		void *pJMPSaved{nullptr};
		if (ppSavedJMPTo != nullptr) {
			pJMPSaved = this->getHookAddress(pJMPPos);
			if (pJMPSaved != nullptr) {
				*ppSavedJMPTo = pJMPSaved;
			}
		}

		const HANDLE hCurrentProcess{this->pWinAPIFuncs->getCurrentProcess()};
		const unsigned __int32 ui32JMPPos{reinterpret_cast<const unsigned __int32>(pJMPPos)};

		if (ppSavedBytes != nullptr) {
			*ppSavedBytes = this->pWinAPIFuncs->virtualAlloc(nullptr, ui32Size + 0x10, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
			if (*ppSavedBytes != nullptr) {
				const unsigned __int32 ui32SavedBytes{reinterpret_cast<const unsigned __int32>(*ppSavedBytes)};
				if (pJMPSaved != nullptr) {
					*reinterpret_cast<unsigned __int8 *>(ui32SavedBytes) = 0xE9;
					*reinterpret_cast<unsigned __int32 *>(ui32SavedBytes + 0x1) = (reinterpret_cast<const unsigned __int32>(pJMPSaved)-0x5) - ui32SavedBytes;
				} else {
					std::memcpy(reinterpret_cast<void *>(ui32SavedBytes), pJMPPos, ui32Size);
					*reinterpret_cast<unsigned __int8 *>(ui32SavedBytes + ui32Size) = 0xE9;
					*reinterpret_cast<unsigned __int32 *>(ui32SavedBytes + ui32Size + 0x1) = (ui32JMPPos - ui32Size) - ui32SavedBytes;
				} this->pWinAPIFuncs->zwFlushInstructionCache(hCurrentProcess, *ppSavedBytes, ui32Size + 0x10);
			} else return false;
		}

		unsigned long ulOldProt{0};
		this->pWinAPIFuncs->virtualProtect(pJMPPos, ui32Size, PAGE_EXECUTE_READWRITE, &ulOldProt);
		std::memset(pJMPPos, 0x90, ui32Size);
		*reinterpret_cast<unsigned __int8 *>(pJMPPos) = 0xE9;
		*reinterpret_cast<unsigned __int32 *>(ui32JMPPos + 0x1) = (reinterpret_cast<const unsigned __int32>(pJMPTo)-ui32JMPPos) - 0x5;
		this->pWinAPIFuncs->virtualProtect(pJMPPos, ui32Size, ulOldProt, &ulOldProt);
		this->pWinAPIFuncs->zwFlushInstructionCache(hCurrentProcess, pJMPPos, ui32Size);

		return true;
	} return false;
}


auto cHook::removeJMPHook(void *pJMPPos, void *pSavedBytes, const unsigned __int32 ui32Size) const -> bool {
	if (pJMPPos != nullptr && pSavedBytes != nullptr && ui32Size >= 0x5) {
		unsigned long ulOldProt{0};
		this->pWinAPIFuncs->virtualProtect(pJMPPos, ui32Size, PAGE_EXECUTE_READWRITE, &ulOldProt);
		std::memcpy(pJMPPos, pSavedBytes, ui32Size);
		this->pWinAPIFuncs->virtualProtect(pJMPPos, ui32Size, ulOldProt, &ulOldProt);
		this->pWinAPIFuncs->virtualFree(pSavedBytes, 0, MEM_RELEASE);
		this->pWinAPIFuncs->zwFlushInstructionCache(this->pWinAPIFuncs->getCurrentProcess(), pJMPPos, ui32Size);
		return true;
	} return false;
}


cHook::~cHook(void) {
	this->pWinAPIFuncs = nullptr;
	return;
}