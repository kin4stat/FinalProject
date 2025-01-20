//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPOOL_HPP
#define SAPOOL_HPP

#pragma once

union uPoolObjectFlags final {
	struct stObjectFlags {
		unsigned __int8 ui8ID : 7;
		bool bEmpty : 1;
	} objFlags;
	unsigned __int8 ui8Value{0};
};

template <class T> class cPool final {
	public:
	T *pObjects{nullptr};
	union uPoolObjectFlags *pByteMap{nullptr};
	__int32 i32Size{0};
	__int32 i32FirstFree{0};
	bool bOwnsAllocations{false};
	bool bField_11{false};

	explicit cPool::cPool(void) = default;
	auto cPool::forAllPeds(bool(__cdecl *pFunc)(class cPed *pPed)) const -> void;
	auto cPool::forAllVehs(bool(__cdecl *pFunc)(class cAutomobile *pAuto)) const -> void;
	auto cPool::forAllObjs(bool(__cdecl *pFunc)(class cObject *pObject)) const -> void;
	cPool::~cPool(void) = default;

	private:

};

#endif