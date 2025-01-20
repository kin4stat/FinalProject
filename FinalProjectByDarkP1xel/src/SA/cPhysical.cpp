//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cPhysical.hpp"

auto cPhysical::applySpeed(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x547B80)(this);
	return;
}


auto cPhysical::applyMoveSpeed(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x542DD0)(this);
	return;
}


auto cPhysical::skipPhysics(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x5433B0)(this);
	return;
}


auto cPhysical::unsetIsInSafePosition(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x548320)(this);
	return;
}


auto cPhysical::addToMovingList(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x542800)(this);
	return;
}


auto cPhysical::removeFromMovingList(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x542860)(this);
	return;
}


auto cPhysical::removeAndAdd(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis)>(0x542560)(this);
	return;
}


auto cPhysical::applyMoveForce(const class cVector3D *pMove) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis, const class cVector3D vecMove)>(0x5429F0)(this, *pMove);
	return;
}


auto cPhysical::applyTurnForce(class cVector3D *pDir, class cVector3D *pVelocity) -> void {
	reinterpret_cast<void(__thiscall *)(class cPhysical *pThis, class cVector3D vecDir, class cVector3D vecVelocity)>(0x542A50)(this, *pDir, *pVelocity);
	return;
}