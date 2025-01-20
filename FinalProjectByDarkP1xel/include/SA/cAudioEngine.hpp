//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAAUDIOENGINE_HPP
#define SAAUDIOENGINE_HPP

#pragma once

class cAudioEngine final {
	public:
	explicit cAudioEngine(void) = delete;
	auto reset(void) -> void;
	auto reportFrontendAudioEvent(const unsigned __int16 ui16EventID, const float fVolumeChange = 0, const float fSpeed = 1.0F) -> void;
	auto reportMissionAudioEvent(const unsigned __int16 ui16EventID, const class cVector3D *pPos = nullptr) -> void;
	~cAudioEngine(void) = delete;

	private:
};

#endif