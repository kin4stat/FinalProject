//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SATRANSMISSION_HPP
#define SATRANSMISSION_HPP

#pragma once

#include "SA/cTransmissionGear.hpp"

class cTransmission final {
	public:
	class cTransmissionGear transmGears[6]{};
	unsigned __int8 ui8DriveType{0};
	unsigned __int8 ui8EngineType{0};
	unsigned __int8 ui8NumberOfGears{0};
	__int8 i8Field_4B{0};
	unsigned __int32 ui32HandlingFlags{0};
	float fEngineAcceleration{0};
	float fEngineInertia{0};
	float fMaxGearVelocity{0};
	__int32 i32Field_5C{0};
	float fMinGearVelocity{0};
	float fCurrentSpeed{0};

	explicit cTransmission(void) = default;
	~cTransmission(void) = default;

	private:
};

#endif