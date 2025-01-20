//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cInternet.hpp"

cInternet::cInternet(class cWinAPIFuncs *pWinAPIFuncs) {
	this->pWinAPIFuncs = pWinAPIFuncs;

	WSADATA wsaData{};
	pWinAPIFuncs->wSAStartup(0x514, &wsaData);
	return;
}


auto cInternet::sockStrToAddrW(const __int16 i16Af, const wchar_t *pURL, const unsigned __int16 ui16Port, sockaddr_in *pServerAddrIn) const -> bool {
	in_addr inAddr{};
	unsigned __int16 ui16PortBytes{0};
	if (this->pWinAPIFuncs->rtlIpv4StringToAddressExW(pURL, 0, &inAddr, &ui16PortBytes) == 0) {
		pServerAddrIn->sin_family = i16Af;
		pServerAddrIn->sin_port = this->pWinAPIFuncs->htons(ui16Port);
		pServerAddrIn->sin_addr = std::move(inAddr);
		return true;
	} return false;
}


auto cInternet::sendToW(const SOCKET socSocket, sockaddr_in *pAddrIn, const wchar_t *pData) const -> void {
	this->pWinAPIFuncs->sendto(socSocket, reinterpret_cast<const char *>(pData), wcslen(pData) * 2, 0, reinterpret_cast<const sockaddr *>(pAddrIn), sizeof(sockaddr_in));
	return;
}


auto cInternet::recvFromW(const SOCKET socSocket, sockaddr_in *pAddrIn, const unsigned __int16 ui16RecvSize, __int32 *pTotalRecv) const->std::wstring {
	std::string sRecv(ui16RecvSize, '\0');
	__int32 i32AddrInSize{sizeof(sockaddr_in)};
	*pTotalRecv = this->pWinAPIFuncs->recvfrom(socSocket, &sRecv[0], ui16RecvSize, 0, reinterpret_cast<sockaddr *>(pAddrIn), &i32AddrInSize);
	return std::move(std::wstring{sRecv.cbegin(), sRecv.cend()});
}


auto cInternet::sendInetW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL, const unsigned __int16 ui16Port, const wchar_t *pType, const wchar_t *pParams, const wchar_t *pHeaders, const unsigned __int32 ui32HeadersLen) const -> std::wstring {
	const HINTERNET hInternetSession{this->pWinAPIFuncs->internetOpenW(pUserAgent, INTERNET_OPEN_TYPE_PRECONFIG, nullptr, nullptr, 0)};
	if (hInternetSession != nullptr) {
		const HINTERNET hInternetConnect{this->pWinAPIFuncs->internetConnectW(hInternetSession, pURL, ui16Port, nullptr, nullptr, INTERNET_SERVICE_HTTP, 0, 0)};
		if (hInternetConnect != nullptr) {
			const HINTERNET hInternetRequest{this->pWinAPIFuncs->httpOpenRequestW(hInternetConnect, pType, pParams, L"HTTP/1.1", nullptr, nullptr, !bHTTPS ? INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_IGNORE_CERT_CN_INVALID | INTERNET_FLAG_IGNORE_CERT_DATE_INVALID | INTERNET_FLAG_NO_AUTH : INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_IGNORE_CERT_CN_INVALID | INTERNET_FLAG_IGNORE_CERT_DATE_INVALID | INTERNET_FLAG_NO_AUTH | INTERNET_FLAG_SECURE, 0)};
			if (hInternetRequest != nullptr) {
				if (this->pWinAPIFuncs->httpSendRequestW(hInternetRequest, pHeaders, ui32HeadersLen, nullptr, 0)) {
					unsigned __int32 ui32QueryResult{0};
					unsigned long ulTotalBytes{sizeof(unsigned __int32)};
					if (this->pWinAPIFuncs->httpQueryInfoW(hInternetRequest, HTTP_QUERY_FLAG_NUMBER | HTTP_QUERY_CONTENT_LENGTH, &ui32QueryResult, &ulTotalBytes, nullptr)) {
						unsigned long ulNumberOfBytesRead{0};
						std::string sDataBuffer(ui32QueryResult, '\0');
						if (this->pWinAPIFuncs->internetReadFile(hInternetRequest, &sDataBuffer[0], ui32QueryResult, &ulNumberOfBytesRead)) {
							this->pWinAPIFuncs->internetCloseHandle(hInternetRequest);
							this->pWinAPIFuncs->internetCloseHandle(hInternetConnect);
							this->pWinAPIFuncs->internetCloseHandle(hInternetSession);
							return std::move(std::wstring{sDataBuffer.cbegin(), sDataBuffer.cend()});
						}
					}
				} this->pWinAPIFuncs->internetCloseHandle(hInternetRequest);
			} this->pWinAPIFuncs->internetCloseHandle(hInternetConnect);
		} this->pWinAPIFuncs->internetCloseHandle(hInternetSession);
	} return std::move(std::wstring{});
}


auto cInternet::sendHttpW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL, const unsigned __int16 ui16Port, const wchar_t *pType, const wchar_t *pParams, const wchar_t *pHeaders, const unsigned __int32 ui32HeadersLen) const -> std::wstring {
	const HINTERNET hInternetSession{this->pWinAPIFuncs->winHttpOpen(pUserAgent, /*WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY*/4, /*WINHTTP_NO_PROXY_NAME*/nullptr, /*WINHTTP_NO_PROXY_BYPASS*/nullptr, 0)};
	if (hInternetSession != nullptr) {
		const HINTERNET hInternetConnect{this->pWinAPIFuncs->winHttpConnect(hInternetSession, pURL, ui16Port, 0)};
		if (hInternetConnect != nullptr) {
			const wchar_t *pAcceptTypes[5] {L"text/plain", L"text/html", L"text/xml", L"*/*", L'\0'};
			const HINTERNET hInternetRequest{this->pWinAPIFuncs->winHttpOpenRequest(hInternetConnect, pType, pParams, L"HTTP/1.1", /*WINHTTP_NO_REFERER*/nullptr, pAcceptTypes, !bHTTPS ? 0x00000000 : /*WINHTTP_FLAG_SECURE*/0x00800000)};
			if (hInternetRequest != nullptr) {
				unsigned __int32 ui32RequestOptions[2]{
					/*WINHTTP_DISABLE_AUTHENTICATION*/0x00000004 | /*WINHTTP_DISABLE_COOKIES*/0x00000001,
						/*WINHTTP_DECOMPRESSION_FLAG_GZIP*/0x00000001 | /*WINHTTP_DECOMPRESSION_FLAG_DEFLATE*/0x00000002
				};
				if (this->pWinAPIFuncs->winHttpSetOption(hInternetRequest, /*WINHTTP_OPTION_DISABLE_FEATURE*/63, &ui32RequestOptions[0], sizeof(unsigned __int32)) &&
					this->pWinAPIFuncs->winHttpSetOption(hInternetRequest, /*WINHTTP_OPTION_DECOMPRESSION*/118, &ui32RequestOptions[1], sizeof(unsigned __int32)) &&
					this->pWinAPIFuncs->winHttpSendRequest(hInternetRequest, pHeaders, ui32HeadersLen, /*WINHTTP_NO_REQUEST_DATA*/nullptr, 0, /*WINHTTP_IGNORE_REQUEST_TOTAL_LENGTH*/0, 0) &&
					this->pWinAPIFuncs->winHttpReceiveResponse(hInternetRequest, nullptr)) {
					unsigned __int32 ui32QueryResult{0};
					unsigned long ulTotalBytes{sizeof(unsigned __int32)};
					if (this->pWinAPIFuncs->winHttpQueryHeaders(hInternetRequest, /*WINHTTP_QUERY_FLAG_NUMBER*/0x20000000 | /*WINHTTP_QUERY_CONTENT_LENGTH*/5, /*WINHTTP_HEADER_NAME_BY_INDEX*/nullptr, &ui32QueryResult, &ulTotalBytes, /*WINHTTP_NO_HEADER_INDEX*/nullptr)) {
						std::string sDataBuffer(ui32QueryResult, '\0');
						if (this->pWinAPIFuncs->winHttpReadData(hInternetRequest, &sDataBuffer[0], ui32QueryResult, nullptr)) {
							this->pWinAPIFuncs->winHttpCloseHandle(hInternetRequest);
							this->pWinAPIFuncs->winHttpCloseHandle(hInternetConnect);
							this->pWinAPIFuncs->winHttpCloseHandle(hInternetSession);
							return std::move(std::wstring{sDataBuffer.cbegin(), sDataBuffer.cend()});
						}
					}
				} this->pWinAPIFuncs->winHttpCloseHandle(hInternetRequest);
			} this->pWinAPIFuncs->winHttpCloseHandle(hInternetConnect);
		} this->pWinAPIFuncs->winHttpCloseHandle(hInternetSession);
	} return std::move(std::wstring{});
}


auto cInternet::readURLInetW(const wchar_t *pUserAgent, const bool bHTTPS, const wchar_t *pURL) const -> std::wstring {
	const HINTERNET hInternetSession{this->pWinAPIFuncs->internetOpenW(pUserAgent, INTERNET_OPEN_TYPE_PRECONFIG, nullptr, nullptr, 0)};
	if (hInternetSession != nullptr) {
		const HINTERNET hInternetOpen{this->pWinAPIFuncs->internetOpenUrlW(hInternetSession, pURL, nullptr, 0, !bHTTPS ? INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_IGNORE_CERT_CN_INVALID | INTERNET_FLAG_IGNORE_CERT_DATE_INVALID | INTERNET_FLAG_NO_AUTH : INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_IGNORE_CERT_CN_INVALID | INTERNET_FLAG_IGNORE_CERT_DATE_INVALID | INTERNET_FLAG_NO_AUTH | INTERNET_FLAG_SECURE, 0)};
		if (hInternetOpen != nullptr) {
			unsigned __int32 ui32QueryResult{0};
			unsigned long ulTotalBytes{sizeof(unsigned __int32)};
			if (this->pWinAPIFuncs->httpQueryInfoW(hInternetOpen, HTTP_QUERY_FLAG_NUMBER | HTTP_QUERY_CONTENT_LENGTH, &ui32QueryResult, &ulTotalBytes, nullptr)) {
				std::string sDataBuffer(ui32QueryResult, '\0');
				if (this->pWinAPIFuncs->internetReadFile(hInternetOpen, &sDataBuffer[0], ui32QueryResult, &ulTotalBytes)) {
					this->pWinAPIFuncs->internetCloseHandle(hInternetOpen);
					this->pWinAPIFuncs->internetCloseHandle(hInternetSession);
					return std::move(std::wstring{sDataBuffer.cbegin(), sDataBuffer.cend()});
				}
			} this->pWinAPIFuncs->internetCloseHandle(hInternetOpen);
		} this->pWinAPIFuncs->internetCloseHandle(hInternetSession);
	} return std::move(std::wstring{});
}


auto cInternet::readURLHttpW(const wchar_t *, const bool, const wchar_t *) const -> std::wstring {
	return std::move(std::wstring{});
}


cInternet::~cInternet(void) {
	this->pWinAPIFuncs->wSACleanup();
	this->pWinAPIFuncs = nullptr;
	return;
}