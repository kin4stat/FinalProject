//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cEntity.hpp"

auto cEntity::updateRW(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cEntity *pThis)>(0x446F90)(this);
	return;
}


auto cEntity::updateRwFrame(void) -> void {
	reinterpret_cast<void(__thiscall *)(class cEntity *pThis)>(0x532B00)(this);
	return;
}


auto cEntity::isVisible(void) -> bool {
	return reinterpret_cast<bool(__thiscall *)(class cEntity *pThis)>(0x536BC0)(this);
}


auto cEntity::isVeh(void) const -> bool {
	return this->ui16ModelIndex >= 400 && this->ui16ModelIndex <= 611;
}


auto cEntity::isPed(void) const -> bool {
	return this->ui16ModelIndex >= 0 && this->ui16ModelIndex <= 311;
}


auto cEntity::getBoundRect(class cVector4D *pRectOut) -> void {
	reinterpret_cast<void(__thiscall *)(class cEntity *pThis, class cVector4D *pRectOut)>(0x534120)(this, pRectOut);
	return;
}


auto cEntity::getColModel(void) -> class cColModel * {
	return reinterpret_cast<class cColModel *(__thiscall *)(class cEntity *pThis)>(0x535300)(this);
}


auto cEntity::getHeading(void) -> float {
	return reinterpret_cast<float(__thiscall *)(class cEntity *pThis)>(0x49D520)(this);
}


auto cEntity::setModelIndex(const unsigned __int32 ui32ModelID) -> void {
	return reinterpret_cast<void(__thiscall *)(class cEntity *pThis, const unsigned __int32 ui32ModelID)>(0x532AE0)(this, ui32ModelID);
}