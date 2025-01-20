//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cMatrix.hpp"

auto cMatrix::rotateX(const float fX) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const float fX)>(0x59B1E0)(this, fX);
	return;
}


auto cMatrix::setRotateXOnly(const float fX) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const float fX)>(0x59AFA0)(this, fX);
	return;
}


auto cMatrix::rotateY(const float fY) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const float fY)>(0x59B2C0)(this, fY);
	return;
}


auto cMatrix::setRotateYOnly(const float fY) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const float fY)>(0x59AFE0)(this, fY);
	return;
}


auto cMatrix::rotateZ(const float fZ) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const float fZ)>(0x59B390)(this, fZ);
	return;
}


auto cMatrix::setRotateZOnly(const float fZ) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const float fZ)>(0x59B020)(this, fZ);
	return;
}


auto cMatrix::resetOrientation(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis)>(0x59AEA0)(this);
	return;
}


auto cMatrix::reOrthogonale(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis)>(0x59B6A0)(this);
	return;
}


auto cMatrix::forceUpVector(const class cVector3D *pVec) -> void {
	reinterpret_cast<void(__thiscall *)(class cMatrix *pThis, const class cVector3D vecForce)>(0x59B7E0)(this, *pVec);
	return;
}