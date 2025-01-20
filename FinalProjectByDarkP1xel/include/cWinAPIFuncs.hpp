//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef WINAPIFUNCS_HPP
#define WINAPIFUNCS_HPP

#pragma once

#include "include\cMain.hpp"

class cWinAPIFuncs final {
	public:
	explicit cWinAPIFuncs(const class cMain *pMain);
	auto ldrLoadDll(UINT32 Flags, PUINT32 Reserved, PUNICODE_STRING ModuleFileName, HMODULE *ModuleHandle) const->NTSTATUS;
	auto zwQueryInformationFile(HANDLE FileHandle, IO_STATUS_BLOCK *IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass) const->NTSTATUS;
	auto zwQueryVirtualMemory(HANDLE ProcessHandle, PVOID BaseAddress, __int32 MemoryInformationClass, PVOID MemoryInformation, SIZE_T MemoryInformationLength, PSIZE_T ReturnLength) const->NTSTATUS;
	auto ldrAccessResource(PVOID BaseAddress, PIMAGE_RESOURCE_DATA_ENTRY	ResourceDataEntry, PVOID *Resource, PULONG Size) const->NTSTATUS;
	auto zwFlushInstructionCache(HANDLE hProcess, LPCVOID lpBaseAddress, ULONG dwSize) const->NTSTATUS;
	auto zwQueryInformationProcess(HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength) const->NTSTATUS;
	auto zwOpenProcess(PHANDLE ProcessHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, void *ClientId) const->NTSTATUS;
	auto zwClose(HANDLE Handle) const->NTSTATUS;
	auto rtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation) const->NTSTATUS;
	auto rtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size) const -> void *;
	auto rtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID HeapBase) const->BOOL;
	auto rtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, in_addr *Address, PUSHORT Port) const->NTSTATUS;
	auto internetOpenW(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags) const->HINTERNET;
	auto internetOpenUrlW(HINTERNET hInternet, LPCWSTR lpszUrl, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwFlags, DWORD_PTR dwContext) const->HINTERNET;
	auto internetReadFile(HINTERNET hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead) const->BOOL;
	auto httpQueryInfoW(HINTERNET hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex) const->BOOL;
	auto internetConnectW(HINTERNET hInternet, LPCWSTR lpszServerName, INTERNET_PORT nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext) const->HINTERNET;
	auto httpOpenRequestW(HINTERNET hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszReferrer, LPCWSTR *lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext) const->HINTERNET;
	auto httpSendRequestW(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength) const->BOOL;
	auto httpAddRequestHeadersW(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwModifiers) const->BOOL;
	auto internetCloseHandle(HINTERNET hInternet) const->BOOL;
	auto winHttpOpen(LPCWSTR pszAgentW, DWORD dwAccessType, LPCWSTR pszProxyW, LPCWSTR pszProxyBypassW, DWORD dwFlags) const->HINTERNET;
	auto winHttpConnect(HINTERNET hSession, LPCWSTR pswzServerName, INTERNET_PORT nServerPort, DWORD dwReserved) const->HINTERNET;
	auto winHttpOpenRequest(HINTERNET hConnect, LPCWSTR pwszVerb, LPCWSTR pwszObjectName, LPCWSTR pwszVersion, LPCWSTR pwszReferrer, LPCWSTR *ppwszAcceptTypes, DWORD dwFlags) const->HINTERNET;
	auto winHttpSetOption(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength) const->BOOL;
	auto winHttpSendRequest(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength, DWORD dwTotalLength, DWORD_PTR dwContext) const->BOOL;
	auto winHttpReceiveResponse(HINTERNET hRequest, LPVOID lpReserved) const->BOOL;
	auto winHttpQueryDataAvailable(HINTERNET hRequest, LPDWORD lpdwNumberOfBytesAvailable) const->BOOL;
	auto winHttpQueryHeaders(HINTERNET hRequest, DWORD dwInfoLevel, LPCWSTR pwszName, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex) const->BOOL;
	auto winHttpReadData(HINTERNET hRequest, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead) const->BOOL;
	auto winHttpCloseHandle(HINTERNET hInternet) const->BOOL;
	auto wSAStartup(WORD wVersionRequired, LPWSADATA lpWSAData) const -> __int32;
	auto wSACleanup(void) const -> __int32;
	auto socket(__int32 af, __int32 type, __int32 protocol) const->SOCKET;
	auto bind(SOCKET s, const sockaddr *addr, __int32 namelen) const -> __int32;
	auto htons(u_short netshort) const->u_short;
	auto sendto(SOCKET s, const char *buf, __int32 len, __int32 flags, const sockaddr *to, __int32 tolen) const -> __int32;
	auto recvfrom(SOCKET s, char *buf, __int32 len, __int32 flags, sockaddr *from, __int32 *fromlen) const -> __int32;
	auto closesocket(SOCKET s) const -> __int32;
	auto d3dxCreateTextureInMemory(IDirect3DDevice9 *pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPDIRECT3DTEXTURE9 *ppTexture) const->HRESULT;
	auto d3dxCreateLine(IDirect3DDevice9 *pDevice, LPD3DXLINE *ppLine) const->HRESULT;
	auto d3dxCreateFont(IDirect3DDevice9 *pDevice, const D3DXFONT_DESCW *pDesc, LPD3DXFONT *ppFont) const->HRESULT;
	auto getForegroundWindow(void) const->HWND;
	auto getKeyNameTextA(LONG lParam, LPSTR lpString, __int32 cchSize) const -> __int32;
	auto getAsyncKeyState(__int32 i32Key) const -> __int16;
	auto enumDisplayDevicesW(LPCWSTR lpDevice, DWORD iDevNum, PDISPLAY_DEVICEW lpDisplayDevice, DWORD dwFlags) const->BOOL;
	auto virtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect) const->BOOL;
	auto getCurrentProcess(void) const->HANDLE;
	auto wideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, __int32 cchWideChar, LPSTR lpMultiByteStr, __int32 cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar) const -> __int32;
	auto multiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, __int32 cbMultiByte, LPWSTR lpWideCharStr, __int32 cchWideChar) const -> __int32;
	auto findResourceExW(HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage) const->HRSRC;
	auto lockResource(HGLOBAL hResData) const->LPVOID;
	auto getVolumeInformationW(LPCWSTR lpRootPathName, LPWSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPWSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize) const->BOOL;
	auto virtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect) const->LPVOID;
	auto localFree(HLOCAL hMem) const->HLOCAL;
	auto virtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType) const->BOOL;
	auto getTickCount(void) const -> unsigned long;
	auto findFirstFileExW(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags) const->HANDLE;
	auto findClose(HANDLE hFindFile) const->BOOL;
	auto createFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, SECURITY_ATTRIBUTES *lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile) const->HANDLE;
	auto beep(DWORD dwFreq, DWORD dwDuration) const->BOOL;
	auto setFileAttributesW(LPCWSTR lpFileName, DWORD dwFileAttributes) const->BOOL;
	auto disableThreadLibraryCalls(HMODULE hLibModule) const->BOOL;
	auto closeHandle(HANDLE hObject) const->BOOL;
	auto getFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime) const->BOOL;
	auto fileTimeToSystemTime(FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime) const->BOOL;
	auto getProcessHeap(void) const->HANDLE;
	auto getSystemWindowsDirectoryA(LPSTR lpBuffer, UINT uSize) const->UINT;
	auto setUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter) const->LPTOP_LEVEL_EXCEPTION_FILTER;
	auto moveFileW(LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName) const->BOOL;
	auto createToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID) const->HANDLE;
	auto process32FirstW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe) const->BOOL;
	auto process32NextW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe) const->BOOL;
	auto commandLineToArgvW(LPCWSTR lpCmdLine, __int32 *pNumArgs) const->LPWSTR *;
	auto coFreeUnusedLibrariesEx(DWORD dwUnloadDelay, DWORD dwReserved) const -> void;
	auto bassInit(__int32 i32Device, DWORD dwFreq, DWORD dwFlags, HWND hWin, GUID *pCLSID) const->BOOL;
	auto bassErrorGetCode(void) const -> __int32;
	auto bassStreamCreateURL(const char *pUrl, DWORD dwOffset, DWORD dwFlags, void(__stdcall *pProc)(void *pBuffer, DWORD dwLength, DWORD dwUser), void *pUser) const->HANDLE;
	auto bassChannelGetTags(HANDLE hHandle, DWORD dwTags) const -> const char *;
	auto bassChannelPlay(HANDLE hHandle, BOOL bRestart) const->BOOL;
	auto bassChannelPause(HANDLE hHandle) const->BOOL;
	auto bassChannelStop(HANDLE hHandle) const->BOOL;
	auto bassSetConfig(DWORD dwOption, DWORD dwValue) const->BOOL;
	auto bassStreamFree(HANDLE hHandle) const->BOOL;
	~cWinAPIFuncs(void);

	private:
	using NTDLL_LdrLoadDll_t = NTSTATUS(__stdcall *)(UINT32 Flags, PUINT32 Reserved, PUNICODE_STRING ModuleFileName, HMODULE *ModuleHandle);
	NTDLL_LdrLoadDll_t pLdrLoadDll_t{nullptr};

	using NTDLL_ZwQueryInformationFile_t = NTSTATUS(__stdcall *)(HANDLE FileHandle, IO_STATUS_BLOCK *IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass);
	NTDLL_ZwQueryInformationFile_t pZwQueryInformationFile_t{nullptr};

	using NTDLL_ZwQueryVirtualMemory_t = NTSTATUS(__stdcall *)(HANDLE ProcessHandle, PVOID BaseAddress, __int32 MemoryInformationClass, PVOID MemoryInformation, SIZE_T MemoryInformationLength, PSIZE_T ReturnLength);
	NTDLL_ZwQueryVirtualMemory_t pZwQueryVirtualMemory_t{nullptr};

	using NTDLL_LdrAccessResource_t = NTSTATUS(__stdcall *)(PVOID BaseAddress, PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry, PVOID *Resource, PULONG Size);
	NTDLL_LdrAccessResource_t pLdrAccessResource_t{nullptr};

	using NTDLL_ZwFlushInstructionCache_t = NTSTATUS(__stdcall *)(HANDLE hProcess, LPCVOID lpBaseAddress, ULONG dwSize);
	NTDLL_ZwFlushInstructionCache_t pZwFlushInstructionCache_t{nullptr};

	using NTDLL_ZwQueryInformationProcess_t = NTSTATUS(__stdcall *)(HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength);
	NTDLL_ZwQueryInformationProcess_t pZwQueryInformationProcess_t{nullptr};

	using NTDLL_ZwOpenProcess_t = NTSTATUS(__stdcall *)(PHANDLE ProcessHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, void *ClientId);
	NTDLL_ZwOpenProcess_t pZwOpenProcess_t{nullptr};

	using NTDLL_ZwClose_t = NTSTATUS(__stdcall *)(HANDLE Handle);
	NTDLL_ZwClose_t pZwClose_t{nullptr};

	using NTDLL_RtlGetVersion_t = NTSTATUS(__stdcall *)(PRTL_OSVERSIONINFOW lpVersionInformation);
	NTDLL_RtlGetVersion_t pRtlGetVersion_t{nullptr};

	using NTDLL_RtlAllocateHeap_t = void *(__stdcall *)(PVOID HeapHandle, ULONG Flags, SIZE_T Size);
	NTDLL_RtlAllocateHeap_t pRtlAllocateHeap_t{nullptr};

	using NTDLL_RtlFreeHeap_t = BOOL(__stdcall *)(PVOID HeapHandle, ULONG Flags, PVOID HeapBase);
	NTDLL_RtlFreeHeap_t pRtlFreeHeap_t{nullptr};

	using NTDLL_RtlIpv4StringToAddressExW_t = NTSTATUS(__stdcall *)(PCWSTR AddressString, BOOLEAN Strict, in_addr *Address, PUSHORT Port);
	NTDLL_RtlIpv4StringToAddressExW_t pRtlIpv4StringToAddressExW_t{nullptr};

	using WININET_InternetOpenW_t = HINTERNET(__stdcall *)(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags);
	WININET_InternetOpenW_t pInternetOpenW_t{nullptr};

	using WININET_InternetOpenUrlW_t = HINTERNET(__stdcall *)(HINTERNET hInternet, LPCWSTR lpszUrl, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwFlags, DWORD_PTR dwContext);
	WININET_InternetOpenUrlW_t pInternetOpenUrlW_t{nullptr};

	using WININET_InternetReadFile_t = BOOL(__stdcall *)(HINTERNET hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead);
	WININET_InternetReadFile_t pInternetReadFile_t{nullptr};

	using WININET_HttpQueryInfoW_t = BOOL(__stdcall *)(HINTERNET hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
	WININET_HttpQueryInfoW_t pHttpQueryInfoW_t{nullptr};

	using WININET_InternetConnectW_t = HINTERNET(__stdcall *)(HINTERNET hInternet, LPCWSTR lpszServerName, INTERNET_PORT nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext);
	WININET_InternetConnectW_t pInternetConnectW_t{nullptr};

	using WININET_HttpOpenRequestW_t = HINTERNET(__stdcall *)(HINTERNET hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszReferrer, LPCWSTR *lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext);
	WININET_HttpOpenRequestW_t pHttpOpenRequestW_t{nullptr};

	using WININET_HttpSendRequestW_t = BOOL(__stdcall *)(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength);
	WININET_HttpSendRequestW_t pHttpSendRequestW_t{nullptr};

	using WININET_HttpAddRequestHeadersW_t = BOOL(__stdcall *)(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwModifiers);
	WININET_HttpAddRequestHeadersW_t pHttpAddRequestHeadersW_t{nullptr};

	using WININET_InternetCloseHandle_t = BOOL(__stdcall *)(HINTERNET hInternet);
	WININET_InternetCloseHandle_t pInternetCloseHandle_t{nullptr};

	using WINHTTP_WinHttpOpen_t = HINTERNET(__stdcall *)(LPCWSTR pszAgentW, DWORD dwAccessType, LPCWSTR pszProxyW, LPCWSTR pszProxyBypassW, DWORD dwFlags);
	WINHTTP_WinHttpOpen_t pWinHttpOpen_t{nullptr};

	using WINHTTP_WinHttpConnect_t = HINTERNET(__stdcall *)(HINTERNET hSession, LPCWSTR pswzServerName, INTERNET_PORT nServerPort, DWORD dwReserved);
	WINHTTP_WinHttpConnect_t pWinHttpConnect_t{nullptr};

	using WINHTTP_WinHttpOpenRequest_t = HINTERNET(__stdcall *)(HINTERNET hConnect, LPCWSTR pwszVerb, LPCWSTR pwszObjectName, LPCWSTR pwszVersion, LPCWSTR pwszReferrer, LPCWSTR *ppwszAcceptTypes, DWORD dwFlags);
	WINHTTP_WinHttpOpenRequest_t pWinHttpOpenRequest_t{nullptr};

	using WINHTTP_WinHttpSetOption_t = BOOL(__stdcall *)(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength);
	WINHTTP_WinHttpSetOption_t pWinHttpSetOption_t{nullptr};

	using WINHTTP_WinHttpSendRequest_t = BOOL(__stdcall *)(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength, DWORD dwTotalLength, DWORD_PTR dwContext);
	WINHTTP_WinHttpSendRequest_t pWinHttpSendRequest_t{nullptr};

	using WINHTTP_WinHttpReceiveResponse_t = BOOL(__stdcall *)(HINTERNET hRequest, LPVOID lpReserved);
	WINHTTP_WinHttpReceiveResponse_t pWinHttpReceiveResponse_t{nullptr};

	using WINHTTP_WinHttpQueryDataAvailable_t = BOOL(__stdcall *)(HINTERNET hRequest, LPDWORD lpdwNumberOfBytesAvailable);
	WINHTTP_WinHttpQueryDataAvailable_t pWinHttpQueryDataAvailable_t{nullptr};

	using WINHTTP_WinHttpQueryHeaders_t = BOOL(__stdcall *)(HINTERNET hRequest, DWORD dwInfoLevel, LPCWSTR pwszName, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex);
	WINHTTP_WinHttpQueryHeaders_t pWinHttpQueryHeaders_t{nullptr};

	using WINHTTP_WinHttpReadData_t = BOOL(__stdcall *)(HINTERNET hRequest, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead);
	WINHTTP_WinHttpReadData_t pWinHttpReadData_t{nullptr};

	using WINHTTP_WinHttpCloseHandle_t = BOOL(__stdcall *)(HINTERNET hInternet);
	WINHTTP_WinHttpCloseHandle_t pWinHttpCloseHandle_t{nullptr};

	using WS2_WSAStartup_t = __int32(__stdcall *)(WORD wVersionRequired, LPWSADATA lpWSAData);
	WS2_WSAStartup_t pWSAStartup_t{nullptr};

	using WS2_WSACleanup_t = __int32(__stdcall *)(void);
	WS2_WSACleanup_t pWSACleanup_t{nullptr};

	using WS2_socket_t = SOCKET(__stdcall *)(__int32 af, __int32 type, __int32 protocol);
	WS2_socket_t pSocket_t{nullptr};

	using WS2_bind_t = __int32(__stdcall *)(SOCKET s, const sockaddr *addr, __int32 namelen);
	WS2_bind_t pBind_t{nullptr};

	using WS2_htons_t = u_short(__stdcall *)(u_short netshort);
	WS2_htons_t pHtons_t{nullptr};

	using WS2_sendto_t = __int32(__stdcall *)(SOCKET s, const char *buf, __int32 len, __int32 flags, const sockaddr *to, __int32 tolen);
	WS2_sendto_t pSendto_t{nullptr};

	using WS2_recvfrom_t = __int32(__stdcall *)(SOCKET s, char *buf, __int32 len, __int32 flags, sockaddr *from, __int32 *fromlen);
	WS2_recvfrom_t pRecvfrom_t{nullptr};

	using WS2_closesocket_t = __int32(__stdcall *)(SOCKET s);
	WS2_closesocket_t pClosesocket_t{nullptr};

	using D3DX9_D3DXCreateTextureFromFileInMemory_t = HRESULT(__stdcall *)(IDirect3DDevice9 *pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPDIRECT3DTEXTURE9 *ppTexture);
	D3DX9_D3DXCreateTextureFromFileInMemory_t pD3DXCreateTextureFromFileInMemory_t{nullptr};

	using D3DX9_D3DXCreateLine_t = HRESULT(__stdcall *)(IDirect3DDevice9 *pDevice, LPD3DXLINE *ppLine);
	D3DX9_D3DXCreateLine_t pD3DXCreateLine_t{nullptr};

	using D3DX9_D3DXCreateFontIndirectW_t = HRESULT(__stdcall *)(IDirect3DDevice9 *pDevice, const D3DXFONT_DESCW *pDesc, LPD3DXFONT *ppFont);
	D3DX9_D3DXCreateFontIndirectW_t pD3DXCreateFontIndirectW_t{nullptr};

	using USER32_GetForegroundWindow_t = HWND(__stdcall *)(void);
	USER32_GetForegroundWindow_t pGetForegroundWindow_t{nullptr};

	using USER32_GetKeyNameTextA_t = __int32(__stdcall *)(LONG lParam, LPSTR lpString, __int32 cchSize);
	USER32_GetKeyNameTextA_t pGetKeyNameTextA_t{nullptr};

	using USER32_GetAsyncKeyState_t = __int16(__stdcall *)(__int32 i32Key);
	USER32_GetAsyncKeyState_t pGetAsyncKeyState_t{nullptr};

	using USER32_EnumDisplayDevicesW_t = BOOL(__stdcall *)(LPCWSTR lpDevice, DWORD iDevNum, PDISPLAY_DEVICEW lpDisplayDevice, DWORD dwFlags);
	USER32_EnumDisplayDevicesW_t pEnumDisplayDevicesW_t{nullptr};

	using KERNELBASE_VirtualProtect_t = BOOL(__stdcall *)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
	KERNELBASE_VirtualProtect_t pVirtualProtect_t{nullptr};

	using KERNELBASE_GetCurrentProcess_t = HANDLE(__stdcall *)(void);
	KERNELBASE_GetCurrentProcess_t pGetCurrentProcess_t{nullptr};

	using KERNELBASE_WideCharToMultiByte_t = __int32(__stdcall *)(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, __int32 cchWideChar, LPSTR lpMultiByteStr, __int32 cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
	KERNELBASE_WideCharToMultiByte_t pWideCharToMultiByte_t{nullptr};

	using KERNELBASE_MultiByteToWideChar_t = __int32(__stdcall *)(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, __int32 cbMultiByte, LPWSTR lpWideCharStr, __int32 cchWideChar);
	KERNELBASE_MultiByteToWideChar_t pMultiByteToWideChar_t{nullptr};

	using KERNELBASE_FindResourceExW_t = HRSRC(__stdcall *)(HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage);
	KERNELBASE_FindResourceExW_t pFindResourceExW_t{nullptr};

	using KERNELBASE_LockResource_t = LPVOID(__stdcall *)(HGLOBAL hResData);
	KERNELBASE_LockResource_t pLockResource_t{nullptr};

	using KERNELBASE_GetVolumeInformationW_t = BOOL(__stdcall *)(LPCWSTR lpRootPathName, LPWSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPWSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);
	KERNELBASE_GetVolumeInformationW_t pGetVolumeInformationW_t{nullptr};

	using KERNELBASE_VirtualAlloc_t = LPVOID(__stdcall *)(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
	KERNELBASE_VirtualAlloc_t pVirtualAlloc_t{nullptr};

	using KERNELBASE_LocalFree_t = HLOCAL(__stdcall *)(HLOCAL hMem);
	KERNELBASE_LocalFree_t pLocalFree_t{nullptr};

	using KERNELBASE_VirtualFree_t = BOOL(__stdcall *)(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
	KERNELBASE_VirtualFree_t pVirtualFree_t{nullptr};

	using KERNELBASE_GetTickCount_t = unsigned long(__stdcall *)(void);
	KERNELBASE_GetTickCount_t pGetTickCount_t{nullptr};

	using KERNELBASE_FindFirstFileExW_t = HANDLE(__stdcall *)(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags);
	KERNELBASE_FindFirstFileExW_t pFindFirstFileExW_t{nullptr};

	using KERNELBASE_FindClose_t = BOOL(__stdcall *)(HANDLE hFindFile);
	KERNELBASE_FindClose_t pFindClose_t{nullptr};

	using KERNELBASE_CreateFileW_t = HANDLE(__stdcall *)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, SECURITY_ATTRIBUTES *lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
	KERNELBASE_CreateFileW_t pCreateFileW_t{nullptr};

	using KERNELBASE_Beep_t = BOOL(__stdcall *)(DWORD dwFreq, DWORD dwDuration);
	KERNELBASE_Beep_t pBeep_t{nullptr};

	using KERNELBASE_SetFileAttributesW_t = BOOL(__stdcall *)(LPCWSTR lpFileName, DWORD dwFileAttributes);
	KERNELBASE_SetFileAttributesW_t pSetFileAttributesW_t{nullptr};

	using KERNELBASE_DisableThreadLibraryCalls_t = BOOL(__stdcall *)(HMODULE hLibModule);
	KERNELBASE_DisableThreadLibraryCalls_t pDisableThreadLibraryCalls_t{nullptr};

	using KERNELBASE_CloseHandle_t = BOOL(__stdcall *)(HANDLE hObject);
	KERNELBASE_CloseHandle_t pCloseHandle_t{nullptr};

	using KERNELBASE_GetFileTime_t = BOOL(__stdcall *)(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);
	KERNELBASE_GetFileTime_t pGetFileTime_t{nullptr};

	using KERNELBASE_FileTimeToSystemTime_t = BOOL(__stdcall *)(FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime);
	KERNELBASE_FileTimeToSystemTime_t pFileTimeToSystemTime_t{nullptr};

	using KERNELBASE_GetProcessHeap_t = HANDLE(__stdcall *)(void);
	KERNELBASE_GetProcessHeap_t pGetProcessHeap_t{nullptr};

	using KERNEL32_GetSystemWindowsDirectoryA_t = UINT(__stdcall *)(LPSTR lpBuffer, UINT uSize);
	KERNEL32_GetSystemWindowsDirectoryA_t pGetSystemWindowsDirectoryA_t{nullptr};

	using KERNEL32_SetUnhandledExceptionFilter_t = LPTOP_LEVEL_EXCEPTION_FILTER(__stdcall *)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
	KERNEL32_SetUnhandledExceptionFilter_t pSetUnhandledExceptionFilter_t{nullptr};

	using KERNEL32_MoveFileW_t = BOOL(__stdcall *)(LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName);
	KERNEL32_MoveFileW_t pMoveFileW_t{nullptr};

	using KERNEL32_CreateToolhelp32Snapshot_t = HANDLE(__stdcall *)(DWORD dwFlags, DWORD th32ProcessID);
	KERNEL32_CreateToolhelp32Snapshot_t pCreateToolhelp32Snapshot_t{nullptr};

	using KERNEL32_Process32FirstW_t = BOOL(__stdcall *)(HANDLE hSnapshot, LPPROCESSENTRY32W lppe);
	KERNEL32_Process32FirstW_t pProcess32FirstW_t{nullptr};

	using KERNEL32_Process32NextW_t = BOOL(__stdcall *)(HANDLE hSnapshot, LPPROCESSENTRY32W lppe);
	KERNEL32_Process32NextW_t pProcess32NextW_t{nullptr};

	using SHELL32_CommandLineToArgvW_t = LPWSTR *(__stdcall *)(LPCWSTR lpCmdLine, __int32 *pNumArgs);
	SHELL32_CommandLineToArgvW_t pCommandLineToArgvW_t{nullptr};

	using ComBase_CoFreeUnusedLibrariesEx_t = void(__stdcall *)(DWORD dwUnloadDelay, DWORD dwReserved);
	ComBase_CoFreeUnusedLibrariesEx_t pCoFreeUnusedLibrariesEx_t{nullptr};

	using BASS_Init_t = BOOL(__stdcall *)(__int32 i32Device, DWORD dwFreq, DWORD dwFlags, HWND hWin, GUID *pCLSID);
	BASS_Init_t pBASS_Init_t{nullptr};

	using BASS_ErrorGetCode_t = __int32(__stdcall *)(void);
	BASS_ErrorGetCode_t pBASS_ErrorGetCode_t{nullptr};

	using BASS_StreamCreateURL_t = HANDLE(__stdcall *)(const char *pUrl, DWORD dwOffset, DWORD dwFlags, void(__stdcall *pProc)(void *pBuffer, DWORD dwLength, DWORD dwUser), void *pUser);
	BASS_StreamCreateURL_t pBASS_StreamCreateURL_t{nullptr};

	using BASS_ChannelGetTags_t = const char *(__stdcall *)(HANDLE hHandle, DWORD dwTags);
	BASS_ChannelGetTags_t pBASS_ChannelGetTags_t{nullptr};

	using BASS_ChannelPlay_t = BOOL(__stdcall *)(HANDLE hHandle, BOOL bRestart);
	BASS_ChannelPlay_t pBASS_ChannelPlay_t{nullptr};

	using BASS_ChannelPause_t = BOOL(__stdcall *)(HANDLE hHandle);
	BASS_ChannelPause_t pBASS_ChannelPause_t{nullptr};

	using BASS_ChannelStop_t = BOOL(__stdcall *)(HANDLE hHandle);
	BASS_ChannelStop_t pBASS_ChannelStop_t{nullptr};

	using BASS_SetConfig_t = BOOL(__stdcall *)(DWORD dwOption, DWORD dwValue);
	BASS_SetConfig_t pBASS_SetConfig_t{nullptr};

	using BASS_StreamFree_t = BOOL(__stdcall *)(HANDLE hHandle);
	BASS_StreamFree_t pBASS_StreamFree_t{nullptr};
};

#endif