//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MAIN_HPP
#define MAIN_HPP

#pragma once
#pragma execution_character_set("UTF-8")

#include <tuple>
#include <chrono>
#include <thread>
#include <random>
#include <iomanip>
#include <sstream>
#include <cwctype>
#include <algorithm>

#include <Windows.h>
#include <WinInet.h>
#include <TlHelp32.h>
#include <winternl.h>
#include <d3dx9core.h>

#include "Vector/cVector4D.hpp"
#include "Vector/cCompressedVector2D.hpp"
#include "Vector/cCompressedVector3D.hpp"

#include "include\cLog.hpp"
#include "include\cWinAPIFuncs.hpp"
#include "include\cHook.hpp"
#include "include\cDirectX.hpp"
#include "include\cInternet.hpp"
#include "include\cGui.hpp"
#include "include\cSA.hpp"
#include "include\cSAPatch.hpp"
#include "include\cMP.hpp"
#include "include\cMPPatch.hpp"

class cMain final {
	public:
	static HMODULE cMain::hModule;
	static LDR_DATA_TABLE_ENTRY *cMain::pModuleLDRData;

	explicit cMain(const HMODULE hModule);
	auto getWinAPIFuncs(void) const -> class cWinAPIFuncs *;
	auto getHook(void) const -> class cHook *;
	auto getDirectX(void) const -> class cDirectX *;
	auto getInternet(void) const -> class cInternet *;
	auto getGui(void) const -> class cGui *;
	auto getSA(void) const -> class cSA *;
	auto getMP(void) const -> class cMP *;
	auto getVMT(void *pVTBL) const -> void **;
	auto getVMT(void *pVTBL, const unsigned __int32 ui32Offset) const -> void *;
	auto getTEB(void) const->TEB *;
	auto getPEB(void) const->PEB *;
	auto getCurrentProcessID(void) const -> unsigned __int32;
	auto getLdrDataTableEntry(const std::wstring &wsModuleName, const HMODULE hModule = nullptr) const->LDR_DATA_TABLE_ENTRY *;
	auto getProcAddr(const std::wstring &wsModuleName, const std::wstring &wsProcName, const HMODULE hModule = nullptr) const -> void *;
	auto getModuleEntryPoint(const HMODULE hModule) const -> void *;
	auto getModuleNameW(const HMODULE hModule, const bool bNoExtension) const->std::wstring;
	auto hideModuleFile(const bool bStatus, const HMODULE hModule) const -> bool;
	auto moveModuleFileW(const HMODULE hModule, const wchar_t *pTo) const -> bool;
	auto getDirectoryW(void) const->std::wstring;
	auto getCurrentProcessNameW(void) const->std::wstring;
	auto getParentProcessNameW(void) const->std::wstring;
	auto getVolumeSerialW(void) const->std::wstring;
	auto getCMDArgvNoCleanW(__int32 *pTotalArgvs) const -> wchar_t **;
	auto getResource(const HMODULE hModule, const unsigned __int32 ui32ID, const wchar_t *pType, unsigned __int32 *pOutSize = nullptr) const -> void *;
	auto getTimeA(const bool b12) const->std::string;
	auto getWinMinorVersion(void) const -> unsigned __int32;
	auto getFirstFileNameW(const std::wstring &wsNameOrWildCard) const->std::wstring;
	auto hideModule(const HMODULE hModule) const -> void;
	auto getAddressModule(void *pAddress) const->HMODULE;
	auto isInternetHooked(void) const -> bool;
	auto isModuleAddressLocal(void *pAddress, const HMODULE hModule) const -> bool;
	auto xorStrByNumberA(std::string &&sStrToCrypt, const unsigned __int16 ui16XORTotal = 8) const -> void;
	auto xorStrByNumberW(std::wstring &&wsStrToCrypt, const unsigned __int16 ui16XORTotal = 8) const -> void;
	auto xorStrByKeyA(std::string &&sStrToCrypt, const std::string &sKey) const -> void;
	auto xorStrByKeyW(std::wstring &&wsStrToCrypt, const std::wstring &wsKey) const -> void;
	auto wideToMultiByte(const unsigned __int32 ui32CodePage, std::wstring &&wsStr) const->std::string;
	auto multiByteToWide(const unsigned __int32 ui32CodePage, std::string &&sStr) const->std::wstring;
	auto patchAddress(void *pAddress, const void *pPatch, const unsigned __int32 ui32Size, const bool bZero = false, const bool bVP = true) const -> void;
	auto shuffleStringA(std::string &&sStrToShuffle) const -> void;
	auto shuffleStringW(std::wstring &&wsStrToShuffle) const -> void;
	~cMain(void);

	private:
	class cWinAPIFuncs *pWinAPIFuncs{nullptr};
	class cHook *pHook{nullptr};
	class cDirectX *pDirectX{nullptr};
	class cInternet *pInternet{nullptr};
	class cGui *pGui{nullptr};
	class cSA *pSA{nullptr};
	class cMP *pMP{nullptr};
};

#endif