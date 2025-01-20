//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SA3DMARKER_HPP
#define SA3DMARKER_HPP

#pragma once

#include "SA/cMatrix.hpp"

class c3DMarker final {
	public:
	class cMatrix Matrix {};
	struct stRpAtomic *pAtomic{nullptr};
	struct stRpMaterial *pMaterial{nullptr};
	unsigned __int16 ui16Type{0};
	bool bIsUsed{false};
	bool bMustBeRenderedThisFrame{false};
	__int32 i32Identifier{0};
	unsigned __int8 ui8Colour[4];
	__int16 i16PulsePeriod{0};
	__int16 i16RotateRate{0};
	__int32 i16StartTime{0};
	float fPulseFraction{0};
	float fStdSize{0};
	float fSize{0};
	float fBrightness{0};
	float fCameraRange{0};
	class cVector3D vecNormal {};
	__int16 i16LastMapReadX{0};
	__int16 i16LastMapReadY{0};
	float fLastMapReadResultZ{0};
	float fRoofHeight{0};
	class cVector3D vecLastPosition {};
	__int32 i32OnScreenTestTime{0};

	explicit c3DMarker(void) = delete;
	~c3DMarker(void) = delete;

	private:
};

#endif