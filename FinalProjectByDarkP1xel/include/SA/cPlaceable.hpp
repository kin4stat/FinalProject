//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPLACEABLE_HPP
#define SAPLACEABLE_HPP

#pragma once

#include "include\Vector\cVector4D.hpp"
#include "include\SA\cMatrixLink.hpp"

class cPlaceable final {
	public:
	void *pVTBL{nullptr};
	class cVector4D qPlacement {};
	class cMatrixLink *pMatrix{nullptr};

	explicit cPlaceable::cPlaceable(void) = default;
	auto cPlaceable::getMatrix(void) -> class cMatrixLink *;
	auto cPlaceable::getPosition(void) -> class cVector3D *;
	auto cPlaceable::setPosition(const class cVector3D *pPos) -> void;
	auto cPlaceable::getHeading(void) -> float;
	auto cPlaceable::setHeading(const float fHeading) -> void;
	auto cPlaceable::setOrientation(const class cVector3D *pOrin) -> void;
	cPlaceable::~cPlaceable(void) = default;

	private:
};

#endif