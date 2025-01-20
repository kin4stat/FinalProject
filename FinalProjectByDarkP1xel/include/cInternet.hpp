//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef INTERNET_HPP
#define INTERNET_HPP

#pragma once

#include "include\cWinAPIFuncs.hpp"

class cInternet final {
	public:
	explicit cInternet(class cWinAPIFuncs *pWinAPIFuncs);
	auto sockStrToAddrW(const __int16 i16Af, const wchar_t *pURL, const unsigned __int16 ui16Port, sockaddr_in *pServerAddrIn) const -> bool;
	auto sendToW(const SOCKET socSocket, sockaddr_in *pAddrIn, const wchar_t *pData) const -> void;
	auto recvFromW(const SOCKET socSocket, sockaddr_in *pAddrIn, const unsigned __int16 ui16RecvSize, __int32 *pTotalRecv) const->std::wstring;
	auto sendInetW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL, const unsigned __int16 ui16Port, const wchar_t *pType, const wchar_t *pParams = nullptr, const wchar_t *pHeaders = nullptr, const unsigned __int32 ui32HeadersLen = 0) const->std::wstring;
	auto sendHttpW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL, const unsigned __int16 ui16Port, const wchar_t *pType, const wchar_t *pParams = nullptr, const wchar_t *pHeaders = nullptr, const unsigned __int32 ui32HeadersLen = 0) const->std::wstring;
	auto readURLInetW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL) const->std::wstring;
	auto readURLHttpW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL) const->std::wstring;
	~cInternet(void);

	private:
	class cWinAPIFuncs *pWinAPIFuncs{nullptr};
};

#endif