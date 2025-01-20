//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAD3DRESOURCESYSTEM_HPP
#define SAD3DRESOURCESYSTEM_HPP

#pragma once

class cD3DResourceSystem final {
	public:
	explicit cD3DResourceSystem(void) = delete;
	~cD3DResourceSystem(void) = delete;

	static auto cancelBuffering(void) -> void;
	static auto tidyUpD3DTextures(const unsigned __int32 ui32Count = 100) -> void;
	static auto tidyUpD3DIndexBuffers(const unsigned __int32 ui32Count = 200) -> void;

	private:
};

#endif