//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cPathFind.hpp"

auto cPathFind::findNodeClosestToCoors(class cNodeAddress *pPathLink, const class cVector3D *pPos, const unsigned __int16 ui16NodeType, const float fMaxDistance, const bool bBoatsOnly) -> void {
	reinterpret_cast<void(__thiscall *)(class cPathFind *pThis, class cNodeAddress *pPathLink, const class cVector3D vecPos, const unsigned __int16 ui16NodeType, const float fMaxDistance, const __int32 i32Unk1, __int32 i32Unk2, const __int32 i32Unk3, const bool bBoatsOnly, const __int32 i32Unk4)>(0x44F460)(this, pPathLink, *pPos, ui16NodeType, fMaxDistance, 0, 0, 0, bBoatsOnly, 0);
	return;
}


auto cPathFind::findNodeCoorsForScript(class cVector3D *pPos, class cNodeAddress *pNodeAddress, bool *bResult) -> void {
	reinterpret_cast<void(__thiscall *)(class cPathFind *pThis, class cVector3D *pPos, class cNodeAddress nodeAddress, bool *bResult)>(0x4505E0)(this, pPos, *pNodeAddress, bResult);
	return;
}