//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cWinAPIFuncs.hpp"

cWinAPIFuncs::cWinAPIFuncs(const class cMain *pMain) {


	const auto __loadDLL = [this](wchar_t *pName) -> const HMODULE{
		UNICODE_STRING usModuleFileName{};
		usModuleFileName.Buffer = pName;
		usModuleFileName.Length = static_cast<const unsigned __int16>(wcslen(pName)) * 2;
		usModuleFileName.MaximumLength = usModuleFileName.Length + 2;

		HMODULE hModule{nullptr};
		this->ldrLoadDll(0, nullptr, &usModuleFileName, &hModule);
		return hModule;
	};


	const HMODULE hNTDLL{static_cast<const HMODULE>(pMain->getLdrDataTableEntry(L"NTDLL.DLL")->DllBase)};
	this->pLdrLoadDll_t = static_cast<const cWinAPIFuncs::NTDLL_LdrLoadDll_t>(pMain->getProcAddr(std::move(std::wstring{}), L"LdrLoadDll", hNTDLL));
	this->pZwQueryInformationFile_t = static_cast<const cWinAPIFuncs::NTDLL_ZwQueryInformationFile_t>(pMain->getProcAddr(std::move(std::wstring{}), L"ZwQueryInformationFile", hNTDLL));
	this->pZwQueryVirtualMemory_t = static_cast<const cWinAPIFuncs::NTDLL_ZwQueryVirtualMemory_t>(pMain->getProcAddr(std::move(std::wstring{}), L"ZwQueryVirtualMemory", hNTDLL));
	this->pLdrAccessResource_t = static_cast<const cWinAPIFuncs::NTDLL_LdrAccessResource_t>(pMain->getProcAddr(std::move(std::wstring{}), L"LdrAccessResource", hNTDLL));
	this->pZwFlushInstructionCache_t = static_cast<const cWinAPIFuncs::NTDLL_ZwFlushInstructionCache_t>(pMain->getProcAddr(std::move(std::wstring{}), L"ZwFlushInstructionCache", hNTDLL));
	this->pZwQueryInformationProcess_t = static_cast<const cWinAPIFuncs::NTDLL_ZwQueryInformationProcess_t>(pMain->getProcAddr(std::move(std::wstring{}), L"ZwQueryInformationProcess", hNTDLL));
	this->pZwOpenProcess_t = static_cast<const cWinAPIFuncs::NTDLL_ZwOpenProcess_t>(pMain->getProcAddr(std::move(std::wstring{}), L"ZwOpenProcess", hNTDLL));
	this->pZwClose_t = static_cast<const cWinAPIFuncs::NTDLL_ZwClose_t>(pMain->getProcAddr(std::move(std::wstring{}), L"ZwClose", hNTDLL));
	this->pRtlGetVersion_t = static_cast<const cWinAPIFuncs::NTDLL_RtlGetVersion_t>(pMain->getProcAddr(std::move(std::wstring{}), L"RtlGetVersion", hNTDLL));
	this->pRtlAllocateHeap_t = static_cast<const cWinAPIFuncs::NTDLL_RtlAllocateHeap_t>(pMain->getProcAddr(std::move(std::wstring{}), L"RtlAllocateHeap", hNTDLL));
	this->pRtlFreeHeap_t = static_cast<const cWinAPIFuncs::NTDLL_RtlFreeHeap_t>(pMain->getProcAddr(std::move(std::wstring{}), L"RtlFreeHeap", hNTDLL));
	this->pRtlIpv4StringToAddressExW_t = static_cast<const cWinAPIFuncs::NTDLL_RtlIpv4StringToAddressExW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"RtlIpv4StringToAddressExW", hNTDLL));

	const HMODULE hWinInet{__loadDLL(L"WININET.DLL")};
	this->pInternetOpenW_t = static_cast<const cWinAPIFuncs::WININET_InternetOpenW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"InternetOpenW", hWinInet));
	this->pInternetOpenUrlW_t = static_cast<const cWinAPIFuncs::WININET_InternetOpenUrlW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"InternetOpenUrlW", hWinInet));
	this->pInternetReadFile_t = static_cast<const cWinAPIFuncs::WININET_InternetReadFile_t>(pMain->getProcAddr(std::move(std::wstring{}), L"InternetReadFile", hWinInet));
	this->pHttpQueryInfoW_t = static_cast<const cWinAPIFuncs::WININET_HttpQueryInfoW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"HttpQueryInfoW", hWinInet));
	this->pInternetConnectW_t = static_cast<const cWinAPIFuncs::WININET_InternetConnectW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"InternetConnectW", hWinInet));
	this->pHttpOpenRequestW_t = static_cast<const cWinAPIFuncs::WININET_HttpOpenRequestW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"HttpOpenRequestW", hWinInet));
	this->pHttpSendRequestW_t = static_cast<const cWinAPIFuncs::WININET_HttpSendRequestW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"HttpSendRequestW", hWinInet));
	this->pHttpAddRequestHeadersW_t = static_cast<const cWinAPIFuncs::WININET_HttpAddRequestHeadersW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"HttpAddRequestHeadersW", hWinInet));
	this->pInternetCloseHandle_t = static_cast<const cWinAPIFuncs::WININET_InternetCloseHandle_t>(pMain->getProcAddr(std::move(std::wstring{}), L"InternetCloseHandle", hWinInet));

	const HMODULE hWinHttp{__loadDLL(L"WINHTTP.DLL")};
	this->pWinHttpOpen_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpOpen_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpOpen", hWinHttp));
	this->pWinHttpConnect_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpConnect_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpConnect", hWinHttp));
	this->pWinHttpOpenRequest_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpOpenRequest_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpOpenRequest", hWinHttp));
	this->pWinHttpSetOption_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpSetOption_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpSetOption", hWinHttp));
	this->pWinHttpSendRequest_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpSendRequest_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpSendRequest", hWinHttp));
	this->pWinHttpReceiveResponse_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpReceiveResponse_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpReceiveResponse", hWinHttp));
	this->pWinHttpQueryDataAvailable_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpQueryDataAvailable_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpQueryDataAvailable", hWinHttp));
	this->pWinHttpQueryHeaders_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpQueryHeaders_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpQueryHeaders", hWinHttp));
	this->pWinHttpReadData_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpReadData_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpReadData", hWinHttp));
	this->pWinHttpCloseHandle_t = static_cast<const cWinAPIFuncs::WINHTTP_WinHttpCloseHandle_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WinHttpCloseHandle", hWinHttp));

	const HMODULE hWS2_32{static_cast<const HMODULE>(pMain->getLdrDataTableEntry(L"WS2_32.DLL")->DllBase)};
	this->pWSAStartup_t = static_cast<const cWinAPIFuncs::WS2_WSAStartup_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WSAStartup", hWS2_32));
	this->pWSACleanup_t = static_cast<const cWinAPIFuncs::WS2_WSACleanup_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WSACleanup", hWS2_32));
	this->pSocket_t = static_cast<const cWinAPIFuncs::WS2_socket_t>(pMain->getProcAddr(std::move(std::wstring{}), L"socket", hWS2_32));
	this->pBind_t = static_cast<const cWinAPIFuncs::WS2_bind_t>(pMain->getProcAddr(std::move(std::wstring{}), L"bind", hWS2_32));
	this->pHtons_t = static_cast<const cWinAPIFuncs::WS2_htons_t>(pMain->getProcAddr(std::move(std::wstring{}), L"htons", hWS2_32));
	this->pSendto_t = static_cast<const cWinAPIFuncs::WS2_sendto_t>(pMain->getProcAddr(std::move(std::wstring{}), L"sendto", hWS2_32));
	this->pRecvfrom_t = static_cast<const cWinAPIFuncs::WS2_recvfrom_t>(pMain->getProcAddr(std::move(std::wstring{}), L"recvfrom", hWS2_32));
	this->pClosesocket_t = static_cast<const cWinAPIFuncs::WS2_closesocket_t>(pMain->getProcAddr(std::move(std::wstring{}), L"closesocket", hWS2_32));

	const HMODULE hDX25{__loadDLL(L"D3DX9_25.DLL")};
	this->pD3DXCreateTextureFromFileInMemory_t = static_cast<const cWinAPIFuncs::D3DX9_D3DXCreateTextureFromFileInMemory_t>(pMain->getProcAddr(std::move(std::wstring{}), L"D3DXCreateTextureFromFileInMemory", hDX25));

	const HMODULE hDX43{__loadDLL(L"D3DX9_43.DLL")};
	this->pD3DXCreateLine_t = static_cast<const cWinAPIFuncs::D3DX9_D3DXCreateLine_t>(pMain->getProcAddr(std::move(std::wstring{}), L"D3DXCreateLine", hDX43));
	this->pD3DXCreateFontIndirectW_t = static_cast<const cWinAPIFuncs::D3DX9_D3DXCreateFontIndirectW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"D3DXCreateFontIndirectW", hDX43));

	const HMODULE hUser32{static_cast<const HMODULE>(pMain->getLdrDataTableEntry(L"USER32.DLL")->DllBase)};
	this->pGetForegroundWindow_t = static_cast<const cWinAPIFuncs::USER32_GetForegroundWindow_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetForegroundWindow", hUser32));
	this->pGetKeyNameTextA_t = static_cast<const cWinAPIFuncs::USER32_GetKeyNameTextA_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetKeyNameTextA", hUser32));
	this->pGetAsyncKeyState_t = static_cast<const cWinAPIFuncs::USER32_GetAsyncKeyState_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetAsyncKeyState", hUser32));
	this->pEnumDisplayDevicesW_t = static_cast<const cWinAPIFuncs::USER32_EnumDisplayDevicesW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"EnumDisplayDevicesW", hUser32));

	const HMODULE hKernelBase{static_cast<const HMODULE>(pMain->getLdrDataTableEntry(L"KERNELBASE.DLL")->DllBase)};
	this->pVirtualProtect_t = static_cast<const cWinAPIFuncs::KERNELBASE_VirtualProtect_t>(pMain->getProcAddr(std::move(std::wstring{}), L"VirtualProtect", hKernelBase));
	this->pGetCurrentProcess_t = static_cast<const cWinAPIFuncs::KERNELBASE_GetCurrentProcess_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetCurrentProcess", hKernelBase));
	this->pWideCharToMultiByte_t = static_cast<const cWinAPIFuncs::KERNELBASE_WideCharToMultiByte_t>(pMain->getProcAddr(std::move(std::wstring{}), L"WideCharToMultiByte", hKernelBase));
	this->pMultiByteToWideChar_t = static_cast<const cWinAPIFuncs::KERNELBASE_MultiByteToWideChar_t>(pMain->getProcAddr(std::move(std::wstring{}), L"MultiByteToWideChar", hKernelBase));
	this->pFindResourceExW_t = static_cast<const cWinAPIFuncs::KERNELBASE_FindResourceExW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"FindResourceExW", hKernelBase));
	this->pLockResource_t = static_cast<const cWinAPIFuncs::KERNELBASE_LockResource_t>(pMain->getProcAddr(std::move(std::wstring{}), L"LockResource", hKernelBase));
	this->pGetVolumeInformationW_t = static_cast<const cWinAPIFuncs::KERNELBASE_GetVolumeInformationW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetVolumeInformationW", hKernelBase));
	this->pVirtualAlloc_t = static_cast<const cWinAPIFuncs::KERNELBASE_VirtualAlloc_t>(pMain->getProcAddr(std::move(std::wstring{}), L"VirtualAlloc", hKernelBase));
	this->pLocalFree_t = static_cast<const cWinAPIFuncs::KERNELBASE_LocalFree_t>(pMain->getProcAddr(std::move(std::wstring{}), L"LocalFree", hKernelBase));
	this->pVirtualFree_t = static_cast<const cWinAPIFuncs::KERNELBASE_VirtualFree_t>(pMain->getProcAddr(std::move(std::wstring{}), L"VirtualFree", hKernelBase));
	this->pGetTickCount_t = static_cast<const cWinAPIFuncs::KERNELBASE_GetTickCount_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetTickCount", hKernelBase));
	this->pFindFirstFileExW_t = static_cast<const cWinAPIFuncs::KERNELBASE_FindFirstFileExW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"FindFirstFileExW", hKernelBase));
	this->pFindClose_t = static_cast<const cWinAPIFuncs::KERNELBASE_FindClose_t>(pMain->getProcAddr(std::move(std::wstring{}), L"FindClose", hKernelBase));
	this->pCreateFileW_t = static_cast<const cWinAPIFuncs::KERNELBASE_CreateFileW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"CreateFileW", hKernelBase));
	this->pBeep_t = static_cast<const cWinAPIFuncs::KERNELBASE_Beep_t>(pMain->getProcAddr(std::move(std::wstring{}), L"Beep", hKernelBase));
	this->pSetFileAttributesW_t = static_cast<const cWinAPIFuncs::KERNELBASE_SetFileAttributesW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"SetFileAttributesW", hKernelBase));
	this->pDisableThreadLibraryCalls_t = static_cast<const cWinAPIFuncs::KERNELBASE_DisableThreadLibraryCalls_t>(pMain->getProcAddr(std::move(std::wstring{}), L"DisableThreadLibraryCalls", hKernelBase));
	this->pCloseHandle_t = static_cast<const cWinAPIFuncs::KERNELBASE_CloseHandle_t>(pMain->getProcAddr(std::move(std::wstring{}), L"CloseHandle", hKernelBase));
	this->pGetFileTime_t = static_cast<const cWinAPIFuncs::KERNELBASE_GetFileTime_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetFileTime", hKernelBase));
	this->pFileTimeToSystemTime_t = static_cast<const cWinAPIFuncs::KERNELBASE_FileTimeToSystemTime_t>(pMain->getProcAddr(std::move(std::wstring{}), L"FileTimeToSystemTime", hKernelBase));
	this->pGetProcessHeap_t = static_cast<const cWinAPIFuncs::KERNELBASE_GetProcessHeap_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetProcessHeap", hKernelBase));

	const HMODULE hKernel32{static_cast<const HMODULE>(pMain->getLdrDataTableEntry(L"KERNEL32.DLL")->DllBase)};
	this->pGetSystemWindowsDirectoryA_t = static_cast<const cWinAPIFuncs::KERNEL32_GetSystemWindowsDirectoryA_t>(pMain->getProcAddr(std::move(std::wstring{}), L"GetSystemWindowsDirectoryA", hKernel32));
	this->pSetUnhandledExceptionFilter_t = static_cast<const cWinAPIFuncs::KERNEL32_SetUnhandledExceptionFilter_t>(pMain->getProcAddr(std::move(std::wstring{}), L"SetUnhandledExceptionFilter", hKernel32));
	this->pMoveFileW_t = static_cast<const cWinAPIFuncs::KERNEL32_MoveFileW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"MoveFileW", hKernel32));
	this->pCreateToolhelp32Snapshot_t = static_cast<const cWinAPIFuncs::KERNEL32_CreateToolhelp32Snapshot_t>(pMain->getProcAddr(std::move(std::wstring{}), L"CreateToolhelp32Snapshot", hKernel32));
	this->pProcess32FirstW_t = static_cast<const cWinAPIFuncs::KERNEL32_Process32FirstW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"Process32FirstW", hKernel32));
	this->pProcess32NextW_t = static_cast<const cWinAPIFuncs::KERNEL32_Process32NextW_t>(pMain->getProcAddr(std::move(std::wstring{}), L"Process32NextW", hKernel32));

	this->pCommandLineToArgvW_t = static_cast<const cWinAPIFuncs::SHELL32_CommandLineToArgvW_t>(pMain->getProcAddr(L"SHELL32.DLL", L"CommandLineToArgvW"));

	this->pCoFreeUnusedLibrariesEx_t = static_cast<const cWinAPIFuncs::ComBase_CoFreeUnusedLibrariesEx_t>(pMain->getProcAddr(L"COMBASE.DLL", L"CoFreeUnusedLibrariesEx"));

	const HMODULE hBASS{static_cast<const HMODULE>(pMain->getLdrDataTableEntry(L"BASS.DLL")->DllBase)};
	this->pBASS_Init_t = static_cast<const cWinAPIFuncs::BASS_Init_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_Init", hBASS));
	this->pBASS_ErrorGetCode_t = static_cast<const cWinAPIFuncs::BASS_ErrorGetCode_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_ErrorGetCode", hBASS));
	this->pBASS_StreamCreateURL_t = static_cast<const cWinAPIFuncs::BASS_StreamCreateURL_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_StreamCreateURL", hBASS));
	this->pBASS_ChannelGetTags_t = static_cast<const cWinAPIFuncs::BASS_ChannelGetTags_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_ChannelGetTags", hBASS));
	this->pBASS_ChannelPlay_t = static_cast<const cWinAPIFuncs::BASS_ChannelPlay_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_ChannelPlay", hBASS));
	this->pBASS_ChannelPause_t = static_cast<const cWinAPIFuncs::BASS_ChannelPause_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_ChannelPause", hBASS));
	this->pBASS_ChannelStop_t = static_cast<const cWinAPIFuncs::BASS_ChannelStop_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_ChannelStop", hBASS));
	this->pBASS_SetConfig_t = static_cast<const cWinAPIFuncs::BASS_SetConfig_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_SetConfig", hBASS));
	this->pBASS_StreamFree_t = static_cast<const cWinAPIFuncs::BASS_StreamFree_t>(pMain->getProcAddr(std::move(std::wstring{}), L"BASS_StreamFree", hBASS));

	return;
}


auto cWinAPIFuncs::ldrLoadDll(UINT32 Flags, PUINT32 Reserved, PUNICODE_STRING ModuleFileName, HMODULE *ModuleHandle) const -> NTSTATUS {
	return this->pLdrLoadDll_t(Flags, Reserved, ModuleFileName, ModuleHandle);
}


auto cWinAPIFuncs::zwQueryInformationFile(HANDLE FileHandle, IO_STATUS_BLOCK *IoStatusBlock, PVOID FileInformation, ULONG Length, FILE_INFORMATION_CLASS FileInformationClass) const -> NTSTATUS {
	return this->pZwQueryInformationFile_t(FileHandle, IoStatusBlock, FileInformation, Length, FileInformationClass);
}


auto cWinAPIFuncs::zwQueryVirtualMemory(HANDLE ProcessHandle, PVOID BaseAddress, __int32 MemoryInformationClass, PVOID MemoryInformation, SIZE_T MemoryInformationLength, PSIZE_T ReturnLength) const -> NTSTATUS {
	return this->pZwQueryVirtualMemory_t(ProcessHandle, BaseAddress, MemoryInformationClass, MemoryInformation, MemoryInformationLength, ReturnLength);
}


auto cWinAPIFuncs::ldrAccessResource(PVOID BaseAddress, PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry, PVOID *Resource, PULONG Size) const -> NTSTATUS {
	return this->pLdrAccessResource_t(BaseAddress, ResourceDataEntry, Resource, Size);
}


auto cWinAPIFuncs::zwFlushInstructionCache(HANDLE hProcess, LPCVOID lpBaseAddress, ULONG dwSize) const -> NTSTATUS {
	return this->pZwFlushInstructionCache_t(hProcess, lpBaseAddress, dwSize);
}


auto cWinAPIFuncs::zwQueryInformationProcess(HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength) const -> NTSTATUS {
	return this->pZwQueryInformationProcess_t(ProcessHandle, ProcessInformationClass, ProcessInformation, ProcessInformationLength, ReturnLength);
}


auto cWinAPIFuncs::zwOpenProcess(PHANDLE ProcessHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, void *ClientId) const -> NTSTATUS {
	return this->pZwOpenProcess_t(ProcessHandle, DesiredAccess, ObjectAttributes, ClientId);
}


auto cWinAPIFuncs::zwClose(HANDLE Handle) const -> NTSTATUS {
	return this->pZwClose_t(Handle);
}


auto cWinAPIFuncs::rtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation) const -> NTSTATUS {
	return this->pRtlGetVersion_t(lpVersionInformation);
}


auto cWinAPIFuncs::rtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size) const -> void * {
	return this->pRtlAllocateHeap_t(HeapHandle, Flags, Size);
}


auto cWinAPIFuncs::rtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID HeapBase) const -> BOOL {
	return this->pRtlFreeHeap_t(HeapHandle, Flags, HeapBase);
}


auto cWinAPIFuncs::rtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, in_addr *Address, PUSHORT Port) const -> NTSTATUS {
	return this->pRtlIpv4StringToAddressExW_t(AddressString, Strict, Address, Port);
}


auto cWinAPIFuncs::internetOpenW(LPCWSTR lpszAgent, DWORD dwAccessType, LPCWSTR lpszProxy, LPCWSTR lpszProxyBypass, DWORD dwFlags) const -> HINTERNET {
	return this->pInternetOpenW_t(lpszAgent, dwAccessType, lpszProxy, lpszProxyBypass, dwFlags);
}


auto cWinAPIFuncs::internetOpenUrlW(HINTERNET hInternet, LPCWSTR lpszUrl, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwFlags, DWORD_PTR dwContext) const -> HINTERNET {
	return this->pInternetOpenUrlW_t(hInternet, lpszUrl, lpszHeaders, dwHeadersLength, dwFlags, dwContext);
}


auto cWinAPIFuncs::internetReadFile(HINTERNET hFile, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead) const -> BOOL {
	return this->pInternetReadFile_t(hFile, lpBuffer, dwNumberOfBytesToRead, lpdwNumberOfBytesRead);
}


auto cWinAPIFuncs::httpQueryInfoW(HINTERNET hRequest, DWORD dwInfoLevel, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex) const -> BOOL {
	return this->pHttpQueryInfoW_t(hRequest, dwInfoLevel, lpBuffer, lpdwBufferLength, lpdwIndex);
}


auto cWinAPIFuncs::internetConnectW(HINTERNET hInternet, LPCWSTR lpszServerName, INTERNET_PORT nServerPort, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwService, DWORD dwFlags, DWORD_PTR dwContext) const -> HINTERNET {
	return this->pInternetConnectW_t(hInternet, lpszServerName, nServerPort, lpszUserName, lpszPassword, dwService, dwFlags, dwContext);
}


auto cWinAPIFuncs::httpOpenRequestW(HINTERNET hConnect, LPCWSTR lpszVerb, LPCWSTR lpszObjectName, LPCWSTR lpszVersion, LPCWSTR lpszReferrer, LPCWSTR *lplpszAcceptTypes, DWORD dwFlags, DWORD_PTR dwContext) const -> HINTERNET {
	return this->pHttpOpenRequestW_t(hConnect, lpszVerb, lpszObjectName, lpszVersion, lpszReferrer, lplpszAcceptTypes, dwFlags, dwContext);
}


auto cWinAPIFuncs::httpSendRequestW(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength) const -> BOOL {
	return this->pHttpSendRequestW_t(hRequest, lpszHeaders, dwHeadersLength, lpOptional, dwOptionalLength);
}


auto cWinAPIFuncs::httpAddRequestHeadersW(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, DWORD dwModifiers) const -> BOOL {
	return this->pHttpAddRequestHeadersW_t(hRequest, lpszHeaders, dwHeadersLength, dwModifiers);
}


auto cWinAPIFuncs::internetCloseHandle(HINTERNET hInternet) const -> BOOL {
	return this->pInternetCloseHandle_t(hInternet);
}


auto cWinAPIFuncs::winHttpOpen(LPCWSTR pszAgentW, DWORD dwAccessType, LPCWSTR pszProxyW, LPCWSTR pszProxyBypassW, DWORD dwFlags) const -> HINTERNET {
	return this->pWinHttpOpen_t(pszAgentW, dwAccessType, pszProxyW, pszProxyBypassW, dwFlags);
}


auto cWinAPIFuncs::winHttpConnect(HINTERNET hSession, LPCWSTR pswzServerName, INTERNET_PORT nServerPort, DWORD dwReserved) const -> HINTERNET {
	return this->pWinHttpConnect_t(hSession, pswzServerName, nServerPort, dwReserved);
}


auto cWinAPIFuncs::winHttpOpenRequest(HINTERNET hConnect, LPCWSTR pwszVerb, LPCWSTR pwszObjectName, LPCWSTR pwszVersion, LPCWSTR pwszReferrer, LPCWSTR *ppwszAcceptTypes, DWORD dwFlags) const -> HINTERNET {
	return this->pWinHttpOpenRequest_t(hConnect, pwszVerb, pwszObjectName, pwszVersion, pwszReferrer, ppwszAcceptTypes, dwFlags);
}


auto cWinAPIFuncs::winHttpSetOption(HINTERNET hInternet, DWORD dwOption, LPVOID lpBuffer, DWORD dwBufferLength) const -> BOOL {
	return this->pWinHttpSetOption_t(hInternet, dwOption, lpBuffer, dwBufferLength);
}


auto cWinAPIFuncs::winHttpSendRequest(HINTERNET hRequest, LPCWSTR lpszHeaders, DWORD dwHeadersLength, LPVOID lpOptional, DWORD dwOptionalLength, DWORD dwTotalLength, DWORD_PTR dwContext) const -> BOOL {
	return this->pWinHttpSendRequest_t(hRequest, lpszHeaders, dwHeadersLength, lpOptional, dwOptionalLength, dwTotalLength, dwContext);
}


auto cWinAPIFuncs::winHttpReceiveResponse(HINTERNET hRequest, LPVOID lpReserved) const -> BOOL {
	return this->pWinHttpReceiveResponse_t(hRequest, lpReserved);
}


auto cWinAPIFuncs::winHttpQueryDataAvailable(HINTERNET hRequest, LPDWORD lpdwNumberOfBytesAvailable) const -> BOOL {
	return this->pWinHttpQueryDataAvailable_t(hRequest, lpdwNumberOfBytesAvailable);
}


auto cWinAPIFuncs::winHttpQueryHeaders(HINTERNET hRequest, DWORD dwInfoLevel, LPCWSTR pwszName, LPVOID lpBuffer, LPDWORD lpdwBufferLength, LPDWORD lpdwIndex) const -> BOOL {
	return this->pWinHttpQueryHeaders_t(hRequest, dwInfoLevel, pwszName, lpBuffer, lpdwBufferLength, lpdwIndex);
}


auto cWinAPIFuncs::winHttpReadData(HINTERNET hRequest, LPVOID lpBuffer, DWORD dwNumberOfBytesToRead, LPDWORD lpdwNumberOfBytesRead) const -> BOOL {
	return this->pWinHttpReadData_t(hRequest, lpBuffer, dwNumberOfBytesToRead, lpdwNumberOfBytesRead);
}


auto cWinAPIFuncs::winHttpCloseHandle(HINTERNET hInternet) const -> BOOL {
	return this->pWinHttpCloseHandle_t(hInternet);
}


auto cWinAPIFuncs::wSAStartup(WORD wVersionRequired, LPWSADATA lpWSAData) const -> __int32 {
	return this->pWSAStartup_t(wVersionRequired, lpWSAData);
}


auto cWinAPIFuncs::wSACleanup(void) const -> __int32 {
	return this->pWSACleanup_t();
}


auto cWinAPIFuncs::socket(__int32 af, __int32 type, __int32 protocol) const -> SOCKET {
	return this->pSocket_t(af, type, protocol);
}


auto cWinAPIFuncs::bind(SOCKET s, const sockaddr *addr, __int32 namelen) const -> __int32 {
	return this->pBind_t(s, addr, namelen);
}


auto cWinAPIFuncs::htons(u_short netshort) const -> u_short {
	return this->pHtons_t(netshort);
}


auto cWinAPIFuncs::sendto(SOCKET s, const char *buf, __int32 len, __int32 flags, const sockaddr *to, __int32 tolen) const -> __int32 {
	return this->pSendto_t(s, buf, len, flags, to, tolen);
}


auto cWinAPIFuncs::recvfrom(SOCKET s, char *buf, __int32 len, __int32 flags, sockaddr *from, __int32 *fromlen) const -> __int32 {
	return this->pRecvfrom_t(s, buf, len, flags, from, fromlen);
}


auto cWinAPIFuncs::closesocket(SOCKET s) const -> __int32 {
	return this->pClosesocket_t(s);
}


auto cWinAPIFuncs::d3dxCreateTextureInMemory(IDirect3DDevice9 *pDevice, LPCVOID pSrcData, UINT SrcDataSize, LPDIRECT3DTEXTURE9 *ppTexture) const -> HRESULT {
	return this->pD3DXCreateTextureFromFileInMemory_t(pDevice, pSrcData, SrcDataSize, ppTexture);
}


auto cWinAPIFuncs::d3dxCreateLine(IDirect3DDevice9 *pDevice, LPD3DXLINE *ppLine) const -> HRESULT {
	return this->pD3DXCreateLine_t(pDevice, ppLine);
}


auto cWinAPIFuncs::d3dxCreateFont(IDirect3DDevice9 *pDevice, const D3DXFONT_DESCW *pDesc, LPD3DXFONT *ppFont) const -> HRESULT {
	return this->pD3DXCreateFontIndirectW_t(pDevice, pDesc, ppFont);
}


auto cWinAPIFuncs::getForegroundWindow(void) const -> HWND {
	return this->pGetForegroundWindow_t();
}


auto cWinAPIFuncs::getKeyNameTextA(LONG lParam, LPSTR lpString, __int32 cchSize) const -> __int32 {
	return this->pGetKeyNameTextA_t(lParam, lpString, cchSize);
}


auto cWinAPIFuncs::getAsyncKeyState(__int32 i32Key) const -> __int16 {
	return this->pGetAsyncKeyState_t(i32Key);
}


auto cWinAPIFuncs::enumDisplayDevicesW(LPCWSTR lpDevice, DWORD iDevNum, PDISPLAY_DEVICEW lpDisplayDevice, DWORD dwFlags) const -> BOOL {
	return this->pEnumDisplayDevicesW_t(lpDevice, iDevNum, lpDisplayDevice, dwFlags);
}


auto cWinAPIFuncs::virtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect) const -> BOOL {
	return this->pVirtualProtect_t(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}


auto cWinAPIFuncs::getCurrentProcess(void) const -> HANDLE {
	return this->pGetCurrentProcess_t();
}


auto cWinAPIFuncs::wideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, __int32 cchWideChar, LPSTR lpMultiByteStr, __int32 cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar) const -> __int32 {
	return this->pWideCharToMultiByte_t(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}


auto cWinAPIFuncs::multiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, __int32 cbMultiByte, LPWSTR lpWideCharStr, __int32 cchWideChar) const -> __int32 {
	return this->pMultiByteToWideChar_t(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}


auto cWinAPIFuncs::findResourceExW(HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage) const -> HRSRC {
	return this->pFindResourceExW_t(hModule, lpType, lpName, wLanguage);
}


auto cWinAPIFuncs::lockResource(HGLOBAL hResData) const -> LPVOID {
	return this->pLockResource_t(hResData);
}


auto cWinAPIFuncs::getVolumeInformationW(LPCWSTR lpRootPathName, LPWSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPWSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize) const -> BOOL {
	return this->pGetVolumeInformationW_t(lpRootPathName, lpVolumeNameBuffer, nVolumeNameSize, lpVolumeSerialNumber, lpMaximumComponentLength, lpFileSystemFlags, lpFileSystemNameBuffer, nFileSystemNameSize);
}


auto cWinAPIFuncs::virtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect) const -> LPVOID {
	return this->pVirtualAlloc_t(lpAddress, dwSize, flAllocationType, flProtect);
}


auto cWinAPIFuncs::localFree(HLOCAL hMem) const -> HLOCAL {
	return this->pLocalFree_t(hMem);
}


auto cWinAPIFuncs::virtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType) const -> BOOL {
	return this->pVirtualFree_t(lpAddress, dwSize, dwFreeType);
}


auto cWinAPIFuncs::getTickCount(void) const -> unsigned long {
	return this->pGetTickCount_t();
}


auto cWinAPIFuncs::findFirstFileExW(LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags) const -> HANDLE {
	return this->pFindFirstFileExW_t(lpFileName, fInfoLevelId, lpFindFileData, fSearchOp, lpSearchFilter, dwAdditionalFlags);
}


auto cWinAPIFuncs::findClose(HANDLE hFindFile) const -> BOOL {
	return this->pFindClose_t(hFindFile);
}


auto cWinAPIFuncs::createFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, SECURITY_ATTRIBUTES *lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile) const -> HANDLE {
	return this->pCreateFileW_t(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}


auto cWinAPIFuncs::beep(DWORD dwFreq, DWORD dwDuration) const -> BOOL {
	return this->pBeep_t(dwFreq, dwDuration);
}


auto cWinAPIFuncs::setFileAttributesW(LPCWSTR lpFileName, DWORD dwFileAttributes) const -> BOOL {
	return this->pSetFileAttributesW_t(lpFileName, dwFileAttributes);
}


auto cWinAPIFuncs::disableThreadLibraryCalls(HMODULE hLibModule) const -> BOOL {
	return this->pDisableThreadLibraryCalls_t(hLibModule);
}


auto cWinAPIFuncs::closeHandle(HANDLE hObject) const -> BOOL {
	return this->pCloseHandle_t(hObject);
}


auto cWinAPIFuncs::getFileTime(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime) const -> BOOL {
	return this->pGetFileTime_t(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}


auto cWinAPIFuncs::fileTimeToSystemTime(FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime) const -> BOOL {
	return this->pFileTimeToSystemTime_t(lpFileTime, lpSystemTime);
}


auto cWinAPIFuncs::getProcessHeap(void) const -> HANDLE {
	return this->pGetProcessHeap_t();
}


auto cWinAPIFuncs::createToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID) const -> HANDLE {
	return this->pCreateToolhelp32Snapshot_t(dwFlags, th32ProcessID);
}


auto cWinAPIFuncs::process32FirstW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe) const -> BOOL {
	return this->pProcess32FirstW_t(hSnapshot, lppe);
}


auto cWinAPIFuncs::process32NextW(HANDLE hSnapshot, LPPROCESSENTRY32W lppe) const -> BOOL {
	return this->pProcess32NextW_t(hSnapshot, lppe);
}


auto cWinAPIFuncs::getSystemWindowsDirectoryA(LPSTR lpBuffer, UINT uSize) const -> UINT {
	return this->pGetSystemWindowsDirectoryA_t(lpBuffer, uSize);
}


auto cWinAPIFuncs::setUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter) const -> LPTOP_LEVEL_EXCEPTION_FILTER {
	return this->pSetUnhandledExceptionFilter_t(lpTopLevelExceptionFilter);
}


auto cWinAPIFuncs::moveFileW(LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName) const -> BOOL {
	return this->pMoveFileW_t(lpExistingFileName, lpNewFileName);
}


auto cWinAPIFuncs::commandLineToArgvW(LPCWSTR lpCmdLine, __int32 *pNumArgs) const -> LPWSTR * {
	return this->pCommandLineToArgvW_t(lpCmdLine, pNumArgs);
}


auto cWinAPIFuncs::coFreeUnusedLibrariesEx(DWORD dwUnloadDelay, DWORD dwReserved) const -> void {
	this->pCoFreeUnusedLibrariesEx_t(dwUnloadDelay, dwReserved);
	return;
}


auto cWinAPIFuncs::bassInit(__int32 i32Device, DWORD dwFreq, DWORD dwFlags, HWND hWin, GUID *pCLSID) const -> BOOL {
	return this->pBASS_Init_t(i32Device, dwFreq, dwFlags, hWin, pCLSID);
}


auto cWinAPIFuncs::bassErrorGetCode(void) const -> __int32 {
	return this->pBASS_ErrorGetCode_t();
}


auto cWinAPIFuncs::bassStreamCreateURL(const char *pUrl, DWORD dwOffset, DWORD dwFlags, void(__stdcall *pProc)(void *pBuffer, DWORD dwLength, DWORD dwUser), void *pUser) const -> HANDLE {
	return this->pBASS_StreamCreateURL_t(pUrl, dwOffset, dwFlags, pProc, pUser);
}


auto cWinAPIFuncs::bassChannelGetTags(HANDLE hHandle, DWORD dwTags) const -> const char * {
	return this->pBASS_ChannelGetTags_t(hHandle, dwTags);
}


auto cWinAPIFuncs::bassChannelPlay(HANDLE hHandle, BOOL bRestart) const -> BOOL {
	return this->pBASS_ChannelPlay_t(hHandle, bRestart);
}


auto cWinAPIFuncs::bassChannelPause(HANDLE hHandle) const -> BOOL {
	return this->pBASS_ChannelPause_t(hHandle);
}


auto cWinAPIFuncs::bassChannelStop(HANDLE hHandle) const -> BOOL {
	return this->pBASS_ChannelStop_t(hHandle);
}


auto cWinAPIFuncs::bassSetConfig(DWORD dwOption, DWORD dwValue) const -> BOOL {
	return this->pBASS_SetConfig_t(dwOption, dwValue);
}


auto cWinAPIFuncs::bassStreamFree(HANDLE hHandle) const -> BOOL {
	return this->pBASS_StreamFree_t(hHandle);
}


cWinAPIFuncs::~cWinAPIFuncs(void) {
	return;
}