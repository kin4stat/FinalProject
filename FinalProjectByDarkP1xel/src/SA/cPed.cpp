//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cPed.hpp"	  

auto cPed::getWeapon(const unsigned __int8 ui8WeaponSlot) const -> class cWeapon * {
	return reinterpret_cast<class cWeapon *>(reinterpret_cast<const unsigned __int32>(this) + 0x5A0 + (ui8WeaponSlot * 0x1C));
}


auto cPed::getPedIntelligence(void) const -> class cPedIntelligence * {
	return *reinterpret_cast<class cPedIntelligence **>(reinterpret_cast<const unsigned __int32>(this) + 0x47C);
}


auto cPed::getVehicle(void) const -> class cVehicle * {
	return *reinterpret_cast<class cVehicle **>(reinterpret_cast<const unsigned __int32>(this) + 0x58C);
}


auto cPed::getLastVehicle(void) const -> class cVehicle * {
	return *reinterpret_cast<class cVehicle **>(reinterpret_cast<const unsigned __int32>(this) + 0x588);
}


auto cPed::getContactEntity(void) const -> class cEntity * {
	return *reinterpret_cast<class cEntity **>(reinterpret_cast<const unsigned __int32>(this) + 0x584);
}


auto cPed::getAlive(void) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cPed *pThis)>(0x5E0170)(this);
}


auto cPed::getHealth(void) const -> float {
	return *reinterpret_cast<const float *>(reinterpret_cast<const unsigned __int32>(this) + 0x540);
}


auto cPed::setHealth(const float fHealth) -> void {
	*reinterpret_cast<float *>(reinterpret_cast<const unsigned __int32>(this) + 0x540) = fHealth;
	return;
}


auto cPed::getArmor(void) const -> float {
	return *reinterpret_cast<const float *>(reinterpret_cast<const unsigned __int32>(this) + 0x548);
}


auto cPed::setArmor(const float fArmor) -> void {
	*reinterpret_cast<float *>(reinterpret_cast<const unsigned __int32>(this) + 0x548) = fArmor;
	return;
}


auto cPed::getInterior(void) const -> unsigned __int8 {
	return *reinterpret_cast<const unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x2F);
}


auto cPed::setInterior(const unsigned __int8 ui8Interior) -> void {
	*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x2F) = ui8Interior;
	return;
}


auto cPed::resetEnexPtr(void) -> void {
	*reinterpret_cast<void **>(reinterpret_cast<const unsigned __int32>(this) + 0x78C) = nullptr;
	return;
}


auto cPed::getPedState(void) const -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(this + 0x530);
}


auto cPed::setPedState(const unsigned __int32 ui32State) -> void {
	*reinterpret_cast<unsigned __int32 *>(this + 0x530) = ui32State;
	return;
}


auto cPed::getMoveState(void) const -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(this + 0x534);
}


auto cPed::setMoveState(const unsigned __int32 ui32MoveState) -> void {
	*reinterpret_cast<unsigned __int32 *>(this + 0x534) = ui32MoveState;
	return;
}


auto cPed::getPlayerCheck(void) const -> unsigned __int8 {
	return *reinterpret_cast<const unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x46C);
}


auto cPed::setPlayerCheck(const unsigned __int8 ui8PlayerCheck) -> void {
	*reinterpret_cast<unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x46C) = ui8PlayerCheck;
	return;
}


auto cPed::getBonePosition(class cVector3D *pResult, const unsigned __int32 ui32BoneID, const bool bDynamic) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis, class cVector3D *pResult, const unsigned __int32 ui32BoneID, const bool bDynamic)>(0x5E4280)(this, pResult, ui32BoneID, bDynamic);
	return;
}


auto cPed::updatePosition(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5E1B10)(this);
	return;
}


auto cPed::calculateNewVelocity(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5E4C50)(this);
	return;
}


auto cPed::giveWeapon(const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32Ammo, const bool bLikeUnused) -> void {
	reinterpret_cast<__int32(__thiscall *)(class cPed *pThis, const unsigned __int32 ui32WeaponID, unsigned __int32 ui32Ammo, const bool bLikeUnused)>(0x5E6080)(this, ui32WeaponID, ui32Ammo, bLikeUnused);
	return;
}


auto cPed::giveDelayedWeapon(const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32Ammo) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis, const unsigned __int32 ui32WeaponID, const unsigned __int32 ui32Ammo)>(0x5E89B0)(this, ui32WeaponID, ui32Ammo);
	return;
}


auto cPed::getCurrentWeaponSlot(void) const -> unsigned __int8 {
	return *reinterpret_cast<const unsigned __int8 *>(reinterpret_cast<const unsigned __int32>(this) + 0x718);
}


auto cPed::getCurrentWeaponModel(void) const -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(reinterpret_cast<const unsigned __int32>(this) + 0x740);
}


auto cPed::setCurrentWeapon(const unsigned __int32 ui32WeaponID) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis, const unsigned __int32 ui32WeaponID)>(0x5E6280)(this, ui32WeaponID);
	return;
}


auto cPed::clearWeapon(const __int32 i32ModelID) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis, const __int32 i32ModelID)>(0x5E3990)(this, i32ModelID);
	return;
}


auto cPed::clearWeapons(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5E6320)(this);
	return;
}


auto cPed::dettachPedFromEntity(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5E7EC0)(this);
	return;
}


auto cPed::positionAnyPedOutOfCollision(void) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cPed *pThis)>(0x5E13C0)(this);
}


auto cPed::setPedPositionInCar(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5DF910)(this);
	return;
}


auto cPed::stopNonPartialAnims(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5DED10)(this);
	return;
}


auto cPed::clearAll(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis)>(0x5E5320)(this);
	return;
}


auto cPed::teleport(const class cVector3D *pPos) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis, const class cVector3D vecPos, const __int32 i32Unk)>(0x5E4110)(this, *pPos, 0);
	return;
}


auto cPed::say(const unsigned __int16 ui16AudioTable, const unsigned __int32 ui32Unk, const float fUnkVolume, const bool bIgnoreMute, const bool bVocal, const bool bUnk) -> void {
	reinterpret_cast<void(__thiscall *)(class cPed *pThis, const unsigned __int16 ui16AudioTable, const unsigned __int32 ui32Unk, const float fUnkVolume, const bool bIgnoreMute, const bool bVocal, const bool bUnk)>(0x5EFFE0)(this, ui16AudioTable, ui32Unk, fUnkVolume, bIgnoreMute, bVocal, bUnk);
	return;
}


auto cPed::isPlayer(void) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cPed *pThis)>(0x5DF8F0)(this);
}


auto cPed::setModelIndex(const unsigned __int32 ui32ModelID) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cPed *pThis, const unsigned __int32 ui32ModelID)>(0x5E4880)(this, ui32ModelID);
}