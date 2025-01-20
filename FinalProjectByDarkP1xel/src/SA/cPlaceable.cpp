//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cPlaceable.hpp"

auto cPlaceable::getMatrix(void) -> class cMatrixLink * {
	return reinterpret_cast<class cMatrixLink *(__thiscall *)(class cPlaceable *pThis)>(0x411990)(this);
}


auto cPlaceable::getPosition(void) -> class cVector3D * {
	class cMatrixLink *pMatrix{this->pMatrix};
	if (pMatrix != nullptr) {
		return &pMatrix->Matrix.vecPos;
	} return static_cast<class cVector3D *>(&this->qPlacement);
}


auto cPlaceable::setPosition(const class cVector3D *pPos) -> void {
	reinterpret_cast<void(__thiscall *)(class cPlaceable *pThis, const class cVector3D *pPos)>(0x4241C0)(this, pPos);
	return;
}


auto cPlaceable::getHeading(void) -> float {
	return reinterpret_cast<float(__thiscall *)(class cPlaceable *pThis)>(0x441DB0)(this);
}


auto cPlaceable::setHeading(const float fHeading) -> void {
	reinterpret_cast<void(__thiscall *)(class cPlaceable *pThis, const float fHeading)>(0x43E0C0)(this, fHeading);
	return;
}


auto cPlaceable::setOrientation(const class cVector3D *pOrin) -> void {
	reinterpret_cast<void(__thiscall *)(class cPlaceable *pThis, const class cVector3D vecOrin)>(0x439A80)(this, *pOrin);
	return;
}