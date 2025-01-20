//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef EXPORTAPI_HPP
#define EXPORTAPI_HPP

#pragma once

extern "C" __declspec(dllexport) auto __cdecl getVersion(void) -> const char * {
	return PROJECT_VERSION_A;
}

#endif