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

#include "include\Vector\cVector4D.hpp"
#include "include\Vector\cCompressedVector2D.hpp"
#include "include\Vector\cCompressedVector3D.hpp"

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

	explicit cMain::cMain(const HMODULE hModule);
	auto cMain::getWinAPIFuncs(void) const -> class cWinAPIFuncs *;
	auto cMain::getHook(void) const -> class cHook *;
	auto cMain::getDirectX(void) const -> class cDirectX *;
	auto cMain::getInternet(void) const -> class cInternet *;
	auto cMain::getGui(void) const -> class cGui *;
	auto cMain::getSA(void) const -> class cSA *;
	auto cMain::getMP(void) const -> class cMP *;
	auto cMain::getVMT(void *pVTBL) const -> void **;
	auto cMain::getVMT(void *pVTBL, const unsigned __int32 ui32Offset) const -> void *;
	auto cMain::getTEB(void) const->TEB *;
	auto cMain::getPEB(void) const->PEB *;
	auto cMain::getCurrentProcessID(void) const -> unsigned __int32;
	auto cMain::getLdrDataTableEntry(const std::wstring &wsModuleName, const HMODULE hModule = nullptr) const->LDR_DATA_TABLE_ENTRY *;
	auto cMain::getProcAddr(const std::wstring &wsModuleName, const std::wstring &wsProcName, const HMODULE hModule = nullptr) const -> void *;
	auto cMain::getModuleEntryPoint(const HMODULE hModule) const -> void *;
	auto cMain::getModuleNameW(const HMODULE hModule, const bool bNoExtension) const->std::wstring;
	auto cMain::hideModuleFile(const bool bStatus, const HMODULE hModule) const -> bool;
	auto cMain::moveModuleFileW(const HMODULE hModule, const wchar_t *pTo) const -> bool;
	auto cMain::getDirectoryW(void) const->std::wstring;
	auto cMain::getCurrentProcessNameW(void) const->std::wstring;
	auto cMain::getParentProcessNameW(void) const->std::wstring;
	auto cMain::getVolumeSerialW(void) const->std::wstring;
	auto cMain::getCMDArgvNoCleanW(__int32 *pTotalArgvs) const -> wchar_t **;
	auto cMain::getResource(const HMODULE hModule, const unsigned __int32 ui32ID, const wchar_t *pType, unsigned __int32 *pOutSize = nullptr) const -> void *;
	auto cMain::getTimeA(const bool b12) const->std::string;
	auto cMain::getWinMinorVersion(void) const -> unsigned __int32;
	auto cMain::getFirstFileNameW(const std::wstring &wsNameOrWildCard) const->std::wstring;
	auto cMain::hideModule(const HMODULE hModule) const -> void;
	auto cMain::getAddressModule(void *pAddress) const->HMODULE;
	auto cMain::isInternetHooked(void) const -> bool;
	auto cMain::isModuleAddressLocal(void *pAddress, const HMODULE hModule) const -> bool;
	auto cMain::xorStrByNumberA(std::string &&sStrToCrypt, const unsigned __int16 ui16XORTotal = 8) const -> void;
	auto cMain::xorStrByNumberW(std::wstring &&wsStrToCrypt, const unsigned __int16 ui16XORTotal = 8) const -> void;
	auto cMain::xorStrByKeyA(std::string &&sStrToCrypt, const std::string &sKey) const -> void;
	auto cMain::xorStrByKeyW(std::wstring &&wsStrToCrypt, const std::wstring &wsKey) const -> void;
	auto cMain::wideToMultiByte(const unsigned __int32 ui32CodePage, std::wstring &&wsStr) const->std::string;
	auto cMain::multiByteToWide(const unsigned __int32 ui32CodePage, std::string &&sStr) const->std::wstring;
	auto cMain::patchAddress(void *pAddress, const void *pPatch, const unsigned __int32 ui32Size, const bool bZero = false, const bool bVP = true) const -> void;
	auto cMain::shuffleStringA(std::string &&sStrToShuffle) const -> void;
	auto cMain::shuffleStringW(std::wstring &&wsStrToShuffle) const -> void;
	cMain::~cMain(void);

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