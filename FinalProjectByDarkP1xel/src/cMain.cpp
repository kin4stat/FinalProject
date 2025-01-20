//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cMain.hpp"

HMODULE cMain::hModule{nullptr};
LDR_DATA_TABLE_ENTRY *cMain::pModuleLDRData{nullptr};

cMain::cMain(const HMODULE hModule) {
	cMain::hModule = hModule;
	cMain::pModuleLDRData = this->getLdrDataTableEntry(std::move(std::wstring{}), hModule);

	this->pWinAPIFuncs = new cWinAPIFuncs{this};
	this->pHook = new cHook{this->pWinAPIFuncs};
	this->pDirectX = new cDirectX{this->pWinAPIFuncs};
	this->pInternet = new cInternet{this->pWinAPIFuncs};
	this->pGui = new cGui{this, this->pWinAPIFuncs, this->pInternet};
	this->pSA = new cSA{this};
	this->pMP = new cMP{this};
	return;
}


auto cMain::getWinAPIFuncs(void) const -> class cWinAPIFuncs * {
	return this->pWinAPIFuncs;
}


auto cMain::getHook(void) const -> class cHook * {
	return this->pHook;
}


auto cMain::getDirectX(void) const -> class cDirectX * {
	return this->pDirectX;
}


auto cMain::getInternet(void) const -> class cInternet * {
	return this->pInternet;
}


auto cMain::getGui(void) const -> class cGui * {
	return this->pGui;
}


auto cMain::getSA(void) const -> class cSA * {
	return this->pSA;
}


auto cMain::getMP(void) const -> class cMP * {
	return this->pMP;
}


auto cMain::getVMT(void *pVTBL) const -> void ** {
	return pVTBL != nullptr ? *static_cast<void ***>(pVTBL) : nullptr;
}


auto cMain::getVMT(void *pVTBL, const unsigned __int32 ui32Offset) const -> void * {
	void **ppResult = this->getVMT(pVTBL);
	return ppResult != nullptr ? ppResult[ui32Offset] : nullptr;
}


auto cMain::getCurrentProcessID(void) const -> unsigned __int32 {
	return __readfsdword(0x20);
}


auto cMain::getTEB(void) const -> TEB * {
	return reinterpret_cast<TEB *>(__readfsdword(0x18));
}


auto cMain::getPEB(void) const -> PEB * {
	return reinterpret_cast<PEB *>(__readfsdword(0x30));
}


auto cMain::getLdrDataTableEntry(const std::wstring &wsModuleName, const HMODULE hModule) const -> LDR_DATA_TABLE_ENTRY * {
	const LIST_ENTRY *pModuleListTail{&this->getPEB()->Ldr->InMemoryOrderModuleList};
	for (LIST_ENTRY *pModuleList{pModuleListTail->Flink}; pModuleList != pModuleListTail; pModuleList = pModuleList->Flink) {
		LDR_DATA_TABLE_ENTRY *pLdrEntry{CONTAINING_RECORD(pModuleList, LDR_DATA_TABLE_ENTRY, LDR_DATA_TABLE_ENTRY::InMemoryOrderLinks)};
		if (hModule != nullptr) {
			if (hModule == pLdrEntry->DllBase) {
				return pLdrEntry;
			}
		} else {
			const std::wstring wsFullDLLName{pLdrEntry->FullDllName.Buffer};
			if (std::search(wsFullDLLName.cbegin(), wsFullDLLName.cend(), wsModuleName.cbegin(), wsModuleName.cend(), [](const wchar_t wcA, const wchar_t wcB) -> bool {
				return std::towlower(wcA) == std::towlower(wcB);
			}) != wsFullDLLName.cend()) {
				return pLdrEntry;
			}
		}
	} return nullptr;
}


auto cMain::getProcAddr(const std::wstring &wsModuleName, const std::wstring &wsProcName, const HMODULE hModule) const -> void * {
	const LDR_DATA_TABLE_ENTRY *pLdrEntry{cMain::pModuleLDRData != nullptr && cMain::pModuleLDRData->DllBase == hModule ? cMain::pModuleLDRData : this->getLdrDataTableEntry(std::move(wsModuleName), hModule)};
	if (pLdrEntry != nullptr) {
		const unsigned __int32 ui32DLLBase{reinterpret_cast<const unsigned __int32>(pLdrEntry->DllBase)};

		const IMAGE_DOS_HEADER *pDOSHeader{reinterpret_cast<const IMAGE_DOS_HEADER *>(ui32DLLBase)};
		const IMAGE_NT_HEADERS *pNTHeaders{reinterpret_cast<const IMAGE_NT_HEADERS *>(ui32DLLBase + pDOSHeader->e_lfanew)};
		const IMAGE_EXPORT_DIRECTORY *pExportDir{reinterpret_cast<const IMAGE_EXPORT_DIRECTORY *>(ui32DLLBase + pNTHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress)};

		const unsigned __int32 *pNameRVA{reinterpret_cast<const unsigned __int32 *>(ui32DLLBase + pExportDir->AddressOfNames)};
		const unsigned long ulNumberOfNames{pExportDir->NumberOfNames};

		for (unsigned __int32 UI32{0}; UI32 < ulNumberOfNames; ++UI32) {
			const char *pFuncName{reinterpret_cast<const char *>(ui32DLLBase + pNameRVA[UI32])};
			const std::string sFuncName{pFuncName};
			if (wsProcName == std::wstring{sFuncName.cbegin(), sFuncName.cend()}) {
				const unsigned __int16 ui16OrdinalNum{reinterpret_cast<const unsigned __int16 *>(ui32DLLBase + pExportDir->AddressOfNameOrdinals)[UI32]};
				const unsigned __int32 ui32Addr{reinterpret_cast<const unsigned __int32 *>(ui32DLLBase + pExportDir->AddressOfFunctions)[ui16OrdinalNum]};
				return reinterpret_cast<void *>(ui32DLLBase + ui32Addr);
			}
		}
	} return nullptr;
}


auto cMain::getModuleEntryPoint(const HMODULE hModule) const -> void * {
	const LDR_DATA_TABLE_ENTRY *pLdrEntry{cMain::pModuleLDRData != nullptr && cMain::pModuleLDRData->DllBase == hModule ? cMain::pModuleLDRData : this->getLdrDataTableEntry(std::move(std::wstring{}), hModule)};
	if (pLdrEntry != nullptr) {
		const unsigned __int32 ui32DLLBase{reinterpret_cast<const unsigned __int32>(pLdrEntry->DllBase)};

		const IMAGE_DOS_HEADER *pDOSHeader{reinterpret_cast<const IMAGE_DOS_HEADER *>(ui32DLLBase)};
		const IMAGE_NT_HEADERS *pNTHeaders{reinterpret_cast<const IMAGE_NT_HEADERS *>(ui32DLLBase + pDOSHeader->e_lfanew)};
		return reinterpret_cast<void *>(ui32DLLBase + pNTHeaders->OptionalHeader.AddressOfEntryPoint);
	} return nullptr;
}


auto cMain::getModuleNameW(const HMODULE hModule, const bool bNoExtension) const -> std::wstring {
	const LDR_DATA_TABLE_ENTRY *pLdrEntry{cMain::pModuleLDRData != nullptr && cMain::pModuleLDRData->DllBase == hModule ? cMain::pModuleLDRData : this->getLdrDataTableEntry(std::move(std::wstring{}), hModule)};
	if (pLdrEntry != nullptr) {
		std::wstring wsModuleName{pLdrEntry->FullDllName.Buffer};
		wsModuleName.assign(wsModuleName.cbegin() + wsModuleName.find_last_of(L'\\') + 1, wsModuleName.cend());
		if (bNoExtension) {
			wsModuleName.erase(wsModuleName.find(L'.'));
		} return std::move(wsModuleName);
	} return std::move(std::wstring{});
}


auto cMain::hideModuleFile(const bool bStatus, const HMODULE hModule) const -> bool {
	const LDR_DATA_TABLE_ENTRY *pLdrEntry{cMain::pModuleLDRData != nullptr && cMain::pModuleLDRData->DllBase == hModule ? cMain::pModuleLDRData : this->getLdrDataTableEntry(std::move(std::wstring{}), hModule)};
	if (pLdrEntry != nullptr) {
		this->getWinAPIFuncs()->setFileAttributesW(pLdrEntry->FullDllName.Buffer, bStatus ? FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM | FILE_ATTRIBUTE_NOT_CONTENT_INDEXED : FILE_ATTRIBUTE_NORMAL);
		return true;
	} return false;
}


auto cMain::moveModuleFileW(const HMODULE hModule, const wchar_t *pTo) const -> bool {
	const LDR_DATA_TABLE_ENTRY *pLdrEntry{cMain::pModuleLDRData != nullptr && cMain::pModuleLDRData->DllBase == hModule ? cMain::pModuleLDRData : this->getLdrDataTableEntry(std::move(std::wstring{}), hModule)};
	if (pLdrEntry != nullptr) {
		this->getWinAPIFuncs()->moveFileW(pLdrEntry->FullDllName.Buffer, &(std::move(this->getDirectoryW()) + pTo)[0]);
		return true;
	} return false;
}


auto cMain::getDirectoryW(void) const -> std::wstring {
	std::wstring wsExeDir{this->getPEB()->ProcessParameters->ImagePathName.Buffer};
	wsExeDir.erase(wsExeDir.find_last_of(L'\\'));
	return std::move(wsExeDir);
}


auto cMain::getCurrentProcessNameW(void) const -> std::wstring {
	std::wstring wsExeDir{this->getPEB()->ProcessParameters->ImagePathName.Buffer};
	wsExeDir.erase(wsExeDir.cbegin(), wsExeDir.cbegin() + wsExeDir.find_last_of(L'\\') + 1);
	return std::move(wsExeDir);
}


auto cMain::getParentProcessNameW(void) const -> std::wstring {
	std::wstring wsParentProcessName{};
	const HANDLE hSnapshot{this->getWinAPIFuncs()->createToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)};
	if (hSnapshot != nullptr) {
		PROCESSENTRY32W processEntry{};
		processEntry.dwSize = sizeof(PROCESSENTRY32W);
		if (this->getWinAPIFuncs()->process32FirstW(hSnapshot, &processEntry)) {
			const unsigned __int32 ui32CurrentProcessID{this->getCurrentProcessID()};
			do {
				if (processEntry.th32ProcessID == ui32CurrentProcessID) {
					HANDLE hParentProcess{nullptr};

					OBJECT_ATTRIBUTES objAttribs{};
					objAttribs.Length = sizeof(OBJECT_ATTRIBUTES);

					unsigned __int32 ui32ClientID[2]{processEntry.th32ParentProcessID, 0};
					if (!this->getWinAPIFuncs()->zwOpenProcess(&hParentProcess, PROCESS_QUERY_LIMITED_INFORMATION, &objAttribs, static_cast<void *>(&ui32ClientID[0]))) {
						wchar_t wcProcessImageFileName[128 + 2]{};
						if (!this->getWinAPIFuncs()->zwQueryInformationProcess(hParentProcess, PROCESSINFOCLASS::ProcessImageFileName, &wcProcessImageFileName[0], sizeof(wcProcessImageFileName) - 2, nullptr)) {
							wsParentProcessName.append(reinterpret_cast<const UNICODE_STRING *>(&wcProcessImageFileName[0])->Buffer);
							wsParentProcessName.erase(wsParentProcessName.cbegin(), wsParentProcessName.cbegin() + wsParentProcessName.find_last_of(L'\\') + 1);
						} this->getWinAPIFuncs()->zwClose(hParentProcess);
					} break;
				}
			} while (this->getWinAPIFuncs()->process32NextW(hSnapshot, &processEntry));
		} this->getWinAPIFuncs()->closeHandle(hSnapshot);
	} return std::move(wsParentProcessName);
}


auto cMain::getVolumeSerialW(void) const -> std::wstring {
	unsigned long ulVolumeID{0};
	this->getWinAPIFuncs()->getVolumeInformationW(nullptr, nullptr, 0, &ulVolumeID, nullptr, nullptr, nullptr, 0);
	return std::move(std::to_wstring(ulVolumeID));
}


auto cMain::getCMDArgvNoCleanW(__int32 *pTotalArgvs) const -> wchar_t ** {
	return this->getWinAPIFuncs()->commandLineToArgvW(this->getPEB()->ProcessParameters->CommandLine.Buffer, pTotalArgvs);
}


auto cMain::getResource(const HMODULE hModule, const unsigned __int32 ui32ID, const wchar_t *pType, unsigned __int32 *pOutSize) const -> void * {
	IMAGE_RESOURCE_DATA_ENTRY *pHResourceBlock{reinterpret_cast<IMAGE_RESOURCE_DATA_ENTRY *>(this->getWinAPIFuncs()->findResourceExW(hModule, pType, MAKEINTRESOURCEW(ui32ID), 0))};
	if (pHResourceBlock != nullptr) {
		HGLOBAL hResource{nullptr};
		this->getWinAPIFuncs()->ldrAccessResource(hModule, pHResourceBlock, &hResource, nullptr);
		if (hResource != nullptr) {
			if (pOutSize != nullptr) {
				*pOutSize = pHResourceBlock->Size;
			} return this->getWinAPIFuncs()->lockResource(hResource);
		}
	} return nullptr;
}


auto cMain::getTimeA(const bool b12) const -> std::string {
	std::tm tmNow{};
	const std::time_t timeCurrent{std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())};
	localtime_s(&tmNow, &timeCurrent);

	std::stringstream ssCurrentTime{};
	ssCurrentTime << std::setfill('0') << std::setw(2) << (b12 && tmNow.tm_hour > 12 ? tmNow.tm_hour - 12 : (b12 && tmNow.tm_hour == 0 ? tmNow.tm_hour = 12 : tmNow.tm_hour)) << ':' << std::setw(2) << tmNow.tm_min << ':' << std::setw(2) << tmNow.tm_sec;
	return std::move(ssCurrentTime.str());
}


auto cMain::getWinMinorVersion(void) const -> unsigned __int32 {
	RTL_OSVERSIONINFOW osInfo{};
	osInfo.dwOSVersionInfoSize = sizeof(RTL_OSVERSIONINFOW);
	this->getWinAPIFuncs()->rtlGetVersion(&osInfo);
	return osInfo.dwMinorVersion;
}


auto cMain::getFirstFileNameW(const std::wstring &wsNameOrWildCard) const -> std::wstring {
	std::wstring wsFileName{};
	WIN32_FIND_DATAW fileDataW{};
	const HANDLE hFirstFile{this->getWinAPIFuncs()->findFirstFileExW(&wsNameOrWildCard[0], FINDEX_INFO_LEVELS::FindExInfoBasic, &fileDataW, FINDEX_SEARCH_OPS::FindExSearchNameMatch, nullptr, 0)};
	if (hFirstFile != nullptr) {
		wsFileName.append(fileDataW.cFileName);
		this->getWinAPIFuncs()->findClose(hFirstFile);
	} return std::move(wsFileName);
}


auto cMain::hideModule(const HMODULE hModule) const -> void {
	PEB_LDR_DATA *pLDR{this->getPEB()->Ldr};
	for (unsigned __int32 UI32{0}; UI32 < 3; ++UI32) {
		LIST_ENTRY *pTail{nullptr};
		switch (UI32) {
			case 0: {
				pTail = reinterpret_cast<LIST_ENTRY *>(reinterpret_cast<const unsigned __int32>(pLDR)+0xC);		// InLoadOrderModuleList
				break;
			}
			case 1: {
				pTail = &pLDR->InMemoryOrderModuleList;															// InMemoryOrderModuleList
				break;
			}
			case 2: {
				pTail = reinterpret_cast<LIST_ENTRY *>(reinterpret_cast<const unsigned __int32>(pLDR)+0x1C);	// InInitializationOrderModuleList
				break;
			} default: break;
		}

		for (LIST_ENTRY *pModuleList{pTail->Flink}; pModuleList != pTail; pModuleList = pModuleList->Flink) {
			LDR_DATA_TABLE_ENTRY *pLdrEntry{nullptr};
			switch (UI32) {
				case 0: {
					pLdrEntry = CONTAINING_RECORD(pModuleList, LDR_DATA_TABLE_ENTRY, LDR_DATA_TABLE_ENTRY::Reserved1[0]);			// InLoadOrderModuleList
					break;
				}
				case 1: {
					pLdrEntry = CONTAINING_RECORD(pModuleList, LDR_DATA_TABLE_ENTRY, LDR_DATA_TABLE_ENTRY::InMemoryOrderLinks);		// InMemoryOrderModuleList
					break;
				}
				case 2: {
					pLdrEntry = CONTAINING_RECORD(pModuleList, LDR_DATA_TABLE_ENTRY, LDR_DATA_TABLE_ENTRY::Reserved2[0]);			// InInitializationOrderModuleList
					break;
				} default: break;
			}

			if (hModule == pLdrEntry->DllBase) {
				pModuleList->Flink->Blink = pModuleList->Blink;
				pModuleList->Blink->Flink = pModuleList->Flink;
				break;
			}
		}
	} return;
}


auto cMain::getAddressModule(void *pAddress) const -> HMODULE {
	MEMORY_BASIC_INFORMATION memoryInfo{};
	return pAddress != nullptr ? (this->getWinAPIFuncs()->zwQueryVirtualMemory(reinterpret_cast<void *>(-1), pAddress, 0, &memoryInfo, sizeof(MEMORY_BASIC_INFORMATION), nullptr) == 0 ? static_cast<const HMODULE>(memoryInfo.AllocationBase) : nullptr) : nullptr;
}


auto cMain::isInternetHooked(void) const -> bool {
	bool bResult[3]{};
	const LDR_DATA_TABLE_ENTRY *pWinInetLDR{this->getLdrDataTableEntry(L"WININET.DLL")};
	if (pWinInetLDR != nullptr) {
		const HMODULE hWinInet{static_cast<const HMODULE>(pWinInetLDR->DllBase)};
		bResult[0] = this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"InternetOpenW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"InternetOpenUrlW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"InternetReadFile", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"HttpQueryInfoW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"InternetConnectW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"HttpOpenRequestW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"HttpSendRequestW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"HttpAddRequestHeadersW", hWinInet)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"InternetCloseHandle", hWinInet)) != nullptr;
	}
	const LDR_DATA_TABLE_ENTRY *pWinHttpLDR{this->getLdrDataTableEntry(L"WINHTTP.DLL")};
	if (pWinHttpLDR != nullptr) {
		const HMODULE hWinHttp{static_cast<const HMODULE>(pWinHttpLDR->DllBase)};
		bResult[1] = this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpOpen", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpConnect", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpOpenRequest", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpSetOption", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpSendRequest", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpReceiveResponse", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpQueryDataAvailable", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpQueryHeaders", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpReadData", hWinHttp)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WinHttpCloseHandle", hWinHttp)) != nullptr;
	}
	const LDR_DATA_TABLE_ENTRY *pWS2LDR{this->getLdrDataTableEntry(L"WS2_32.DLL")};
	if (pWS2LDR != nullptr) {
		const HMODULE hWS2_32{static_cast<const HMODULE>(pWS2LDR->DllBase)};
		bResult[2] = this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"WSAStartup", hWS2_32)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"socket", hWS2_32)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"htons", hWS2_32)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"sendto", hWS2_32)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"recvfrom", hWS2_32)) != nullptr ||
			this->getHook()->getHookAddress(this->getProcAddr(std::move(std::wstring{}), L"closesocket", hWS2_32)) != nullptr;
	} return bResult[0] || bResult[1] || bResult[2];
}


auto cMain::isModuleAddressLocal(void *pAddress, const HMODULE hModule) const -> bool {
	MEMORY_BASIC_INFORMATION memoryInfo{};
	return pAddress != nullptr ? (this->getWinAPIFuncs()->zwQueryVirtualMemory(reinterpret_cast<void *>(-1), pAddress, 0, &memoryInfo, sizeof(MEMORY_BASIC_INFORMATION), nullptr) == 0 ? hModule == memoryInfo.AllocationBase : false) : false;
}


auto cMain::xorStrByNumberA(std::string &&sStrToCrypt, const unsigned __int16 ui16XORTotal) const -> void {
	const unsigned __int32 ui32Len{sStrToCrypt.length()};
	for (unsigned __int32 UI32{0}; UI32 < ui32Len; ++UI32) {
		sStrToCrypt[UI32] ^= ui16XORTotal;
	} return;
}


auto cMain::xorStrByNumberW(std::wstring &&wsStrToCrypt, const unsigned __int16 ui16XORTotal) const -> void {
	const unsigned __int32 ui32Len{wsStrToCrypt.length()};
	for (unsigned __int32 UI32{0}; UI32 < ui32Len; ++UI32) {
		wsStrToCrypt[UI32] ^= ui16XORTotal;
	} return;
}


auto cMain::xorStrByKeyA(std::string &&sStrToCrypt, const std::string &sKey) const -> void {
	const unsigned __int32 ui32CryptLen{sStrToCrypt.length()};
	const unsigned __int32 ui32KeyLen{sKey.length()};
	for (unsigned __int32 ui32Key{0}; ui32Key < ui32KeyLen; ++ui32Key) {
		for (unsigned __int32 ui32Crypt{0}; ui32Crypt < ui32CryptLen; ++ui32Crypt) {
			const __int32 i32XORResult{sStrToCrypt[ui32Crypt] ^ sKey[ui32Key]};
			if ((i32XORResult >= 0x30 && i32XORResult <= 0x5A) || (i32XORResult >= 0x61 && i32XORResult <= 0x7A)) {
				sStrToCrypt[ui32Crypt] = static_cast<const char>(i32XORResult);
			}
		}
	} return;
}


auto cMain::xorStrByKeyW(std::wstring &&wsStrToCrypt, const std::wstring &wsKey) const -> void {
	const unsigned __int32 ui32CryptLen{wsStrToCrypt.length()};
	const unsigned __int32 ui32KeyLen{wsKey.length()};
	for (unsigned __int32 ui32Key{0}; ui32Key < ui32KeyLen; ++ui32Key) {
		for (unsigned __int32 ui32Crypt{0}; ui32Crypt < ui32CryptLen; ++ui32Crypt) {
			const __int32 i32XORResult{wsStrToCrypt[ui32Crypt] ^ wsKey[ui32Key]};
			if ((i32XORResult >= 0x30 && i32XORResult <= 0x5A) || (i32XORResult >= 0x61 && i32XORResult <= 0x7A)) {
				wsStrToCrypt[ui32Crypt] = static_cast<const char>(i32XORResult);
			}
		}
	} return;
}


auto cMain::wideToMultiByte(const unsigned __int32 ui32CodePage, std::wstring &&wsStr) const -> std::string {
	const __int32 i32SizeReq{this->getWinAPIFuncs()->wideCharToMultiByte(ui32CodePage, 0, &wsStr[0], -1, nullptr, 0, nullptr, nullptr)};
	if (i32SizeReq) {
		std::string sFixed(i32SizeReq, '\0');
		if (this->getWinAPIFuncs()->wideCharToMultiByte(ui32CodePage, 0, &wsStr[0], -1, &sFixed[0], i32SizeReq, nullptr, nullptr)) {
			return std::move(sFixed);
		}
	} return std::move(std::string{});
}


auto cMain::multiByteToWide(const unsigned __int32 ui32CodePage, std::string &&sStr) const -> std::wstring {
	const __int32 i32SizeReq{this->getWinAPIFuncs()->multiByteToWideChar(ui32CodePage, 0, &sStr[0], -1, nullptr, 0)};
	if (i32SizeReq) {
		std::wstring wsFixed(i32SizeReq, '\0');
		if (this->getWinAPIFuncs()->multiByteToWideChar(ui32CodePage, 0, &sStr[0], -1, &wsFixed[0], i32SizeReq)) {
			return std::move(wsFixed);
		}
	} return std::move(std::wstring{});
}


auto cMain::patchAddress(void *pAddress, const void *pPatch, const unsigned __int32 ui32Size, const bool bZero, const bool bVP) const -> void {
	unsigned long ulOldProt{0};
	if (bVP) {
		this->getWinAPIFuncs()->virtualProtect(pAddress, ui32Size, PAGE_EXECUTE_READWRITE, &ulOldProt);
	}

	if (pPatch != nullptr) {
		std::memcpy(pAddress, pPatch, ui32Size);
	} else {
		std::memset(pAddress, bZero ? 0x0 : 0x90, ui32Size);
	}

	if (bVP) {
		this->getWinAPIFuncs()->virtualProtect(pAddress, ui32Size, ulOldProt, &ulOldProt);
	} this->getWinAPIFuncs()->zwFlushInstructionCache(this->getWinAPIFuncs()->getCurrentProcess(), pAddress, ui32Size);
	return;
}


auto cMain::shuffleStringA(std::string &&sStrToShuffle) const -> void {
	std::shuffle(sStrToShuffle.begin(), sStrToShuffle.end(), ::std::mt19937{std::random_device{}()});
	return;
}


auto cMain::shuffleStringW(std::wstring &&wsStrToShuffle) const -> void {
	std::shuffle(wsStrToShuffle.begin(), wsStrToShuffle.end(), ::std::mt19937{std::random_device{}()});
	return;
}


cMain::~cMain(void) {
	delete this->pMP;				this->pMP = nullptr;
	delete this->pSA;				this->pSA = nullptr;
	delete this->pGui;				this->pGui = nullptr;
	delete this->pInternet;			this->pInternet = nullptr;
	delete this->pDirectX;			this->pDirectX = nullptr;
	delete this->pHook;				this->pHook = nullptr;
	delete this->pWinAPIFuncs;		this->pWinAPIFuncs = nullptr;
	return;
}