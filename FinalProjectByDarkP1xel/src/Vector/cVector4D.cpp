//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\Vector\cVector4D.hpp"

cVector4D::cVector4D(void) {
	return;
}


cVector4D::cVector4D(const float fX, const float fY, const float fZ, const float fU) {
	this->fX = fX;
	this->fY = fY;
	this->fZ = fZ;
	this->fU = fU;
	return;
}


cVector4D::~cVector4D(void) {
	return;
}