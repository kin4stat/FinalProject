//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef TEXTLABELPOOL_HPP
#define TEXTLABELPOOL_HPP

#pragma once

#include "MP/st3DText.hpp"

struct st3DTextPool final {
	struct st3DText text3D[2048]{};
	__int32 i32IsListed[2048];

	explicit st3DTextPool::st3DTextPool(void) = delete;
	auto st3DTextPool::forAll3D(bool(__cdecl *pFunc)(const unsigned __int16 ui163DTextID, struct st3DText *p3DText)) -> void;
	st3DTextPool::~st3DTextPool(void) = delete;
};

#endif