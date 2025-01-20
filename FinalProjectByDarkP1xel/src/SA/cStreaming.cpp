//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "SA/cStreaming.hpp"

auto cStreaming::init(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x5B9020)();
	return;
}


auto cStreaming::reInit(void) -> unsigned __int32 {
	return reinterpret_cast<unsigned __int32(__cdecl *)(void)>(0x40E560)();
}


auto cStreaming::loadScene(const class cVector3D *pPos) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pPos)>(0x40EB70)(pPos);
	return;
}


auto cStreaming::loadSceneCollision(const class cVector3D *pPos) -> void {
	reinterpret_cast<void(__cdecl *)(const class cVector3D *pPos)>(0x40ED80)(pPos);
	return;
}


auto cStreaming::requestModel(const unsigned __int32 ui32ModelID, const __int32 i32StreamingFlags) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32ModelID, const __int32 i32StreamingFlags)>(0x4087E0)(ui32ModelID, i32StreamingFlags);
	return;
}


auto cStreaming::requestAllModels(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x4095C0)();
	return;
}


auto cStreaming::removeModel(const unsigned __int32 ui32ModelID) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32ModelID)>(0x4089A0)(ui32ModelID);
	return;
}


auto cStreaming::loadAllRequestedModels(const bool bOnlyPriorityRequests) -> void {
	reinterpret_cast<void(__cdecl *)(const bool bOnlyPriorityRequests)>(0x40EA10)(bOnlyPriorityRequests);
	return;
}


auto cStreaming::setModelIsDeletable(const unsigned __int32 ui32ModelID) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32ModelID)>(0x409C10)(ui32ModelID);
	return;
}


auto cStreaming::getMemoryAvailable(void) -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(0x8A5A80);
}


auto cStreaming::getMemoryUsed(void) -> unsigned __int32 {
	return *reinterpret_cast<const unsigned __int32 *>(0x8E4CB4);
}


auto cStreaming::deleteAllRwObjects(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x4090A0)();
	return;
}


auto cStreaming::deleteLeastUsedEntityRwObject(const bool bNotOnScreen, const unsigned __int32 ui32StreamingFlags) -> bool {
	return reinterpret_cast<bool(__cdecl *)(const bool bNotOnScreen, const unsigned __int32 ui32StreamingFlags)>(0x409760)(bNotOnScreen, ui32StreamingFlags);
}


auto cStreaming::removeAllUnusedModels(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x40CF80)();
	return;
}


auto cStreaming::makeSpaceFor(const unsigned __int32 ui32MemoryToCleanInBytes) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32MemoryToCleanInBytes)>(0x40E120)(ui32MemoryToCleanInBytes);
	return;
}


auto cStreaming::removeCurrentZonesModels(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x40B080)();
	return;
}


auto cStreaming::removeBigBuildings(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x4093B0)();
	return;
}


auto cStreaming::removeLeastUsedModel(const unsigned __int32 ui32StreamingFlags) -> bool {
	return reinterpret_cast<bool(__cdecl *)(const unsigned __int32 ui32StreamingFlags)>(0x40CFD0)(ui32StreamingFlags);
}


auto cStreaming::removeBuildingsNotInArea(const unsigned __int32 ui32Area) -> void {
	reinterpret_cast<void(__cdecl *)(const unsigned __int32 ui32Area)>(0x4094B0)(ui32Area);
	return;
}


auto cStreaming::shutdown(void) -> void {
	reinterpret_cast<void(__cdecl *)(void)>(0x4084B0)();
	return;
}