//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAHANDLINGDATAMGR_HPP
#define SAHANDLINGDATAMGR_HPP

#pragma once

#include "include\SA\cAutoHandlingData.hpp"

class cHandlingDataMgr final {
	public:
	float fField_0{0};
	float fField_4{0};
	float fField_8{0};
	float fField_C{0};
	float fField_10{0};
	class cAutoHandlingData autoHandling[210]{};
	// class cBikeHandlingData bikeHandling[13];
	// class cFlyingHandlingData flyingHandling[24];
	// class cBoatHandlingData boatHandling[12];

	explicit cHandlingDataMgr::cHandlingDataMgr(void) = default;
	auto cHandlingDataMgr::convertDataToWorldUnits(const class cAutoHandlingData *pAutoHandling) -> void;
	auto cHandlingDataMgr::makeElegyDriftMode(const unsigned __int32 ui32Status) -> void;
	cHandlingDataMgr::~cHandlingDataMgr(void) = default;

	private:
};

#endif