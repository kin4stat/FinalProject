//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAMATRIXLINK_HPP
#define SAMATRIXLINK_HPP

#pragma once

#include "include\SA\cMatrix.hpp"

class cMatrixLink final {
	public:
	class cMatrix Matrix {};
	class cPlaceable *pOwner{nullptr};
	class cMatrixLink *pPrev{nullptr};
	class cMatrixLink *pNext{nullptr};

	explicit cMatrixLink::cMatrixLink(void) = default;
	cMatrixLink::~cMatrixLink(void) = default;

	private:
};

#endif