//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\Vector\cVector3D.hpp"

cVector3D::cVector3D(void) {
	return;
}


cVector3D::cVector3D(const float fX, const float fY, const float fZ) {
	this->fX = fX;
	this->fY = fY;
	this->fZ = fZ;
	return;
}


auto cVector3D::magnitude(void) const -> float {
	return std::sqrtf(this->fX * this->fX + this->fY * this->fY + this->fZ * this->fZ);
}


auto cVector3D::isAnyEmpty(void) const -> bool {
	return this->fX == 0 || this->fY == 0 || this->fZ == 0;
}


auto cVector3D::isXYEmpty(void) const -> bool {
	return this->fX == 0 || this->fY == 0;
}


auto cVector3D::clear(void) -> void {
	this->fX = 0;
	this->fY = 0;
	this->fZ = 0;
	return;
}


auto cVector3D::operator += (const class cVector3D &vecRight) -> class cVector3D * {
	this->fX += vecRight.fX;
	this->fY += vecRight.fY;
	this->fZ += vecRight.fZ;
	return this;
}


cVector3D::~cVector3D(void) {
	return;
}


auto cVector3D::multiply3x3(class cVector3D *pOut, const class cMatrix *pMat, const class cVector3D *pIn) -> void {
	reinterpret_cast<void(__cdecl *)(class cVector3D *pOut, const class cMatrix *pMat, const class cVector3D *pIn)>(0x59C790)(pOut, pMat, pIn);
	return;
}


auto cVector3D::scaleVector2(class cVector3D *pOut, const float fTotal, const class cVector3D *pIn) -> void {
	reinterpret_cast<void(__cdecl *)(class cVector3D *pOut, const float fTotal, const class cVector3D *pIn)>(0x40FE90)(pOut, fTotal, pIn);
	return;
}