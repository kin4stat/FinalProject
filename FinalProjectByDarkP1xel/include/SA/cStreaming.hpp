//
// This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
// Official Thread: https://www.blast.hk/threads/60930/
//
// Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SASTREAMING_HPP
#define SASTREAMING_HPP

#pragma once

class cStreaming final {
	public:
	explicit cStreaming(void) = delete;
	~cStreaming(void) = delete;

	static auto init(void) -> void;
	static auto reInit(void) -> unsigned __int32;
	static auto loadScene(const class cVector3D *pPos) -> void;
	static auto loadSceneCollision(const class cVector3D *pPos) -> void;
	static auto requestModel(const unsigned __int32 ui32ModelID, const __int32 i32StreamingFlags) -> void;
	static auto requestAllModels(void) -> void;
	static auto removeModel(const unsigned __int32 ui32ModelID) -> void;
	static auto loadAllRequestedModels(const bool bOnlyPriorityRequests) -> void;
	static auto setModelIsDeletable(const unsigned __int32 ui32ModelID) -> void;
	static auto getMemoryAvailable(void) -> unsigned __int32;
	static auto getMemoryUsed(void) -> unsigned __int32;
	static auto deleteAllRwObjects(void) -> void;
	static auto deleteLeastUsedEntityRwObject(const bool bNotOnScreen, const unsigned __int32 ui32StreamingFlags = 0) -> bool;
	static auto removeAllUnusedModels(void) -> void;
	static auto makeSpaceFor(const unsigned __int32 ui32MemoryToCleanInBytes) -> void;
	static auto removeCurrentZonesModels(void) -> void;
	static auto removeBigBuildings(void) -> void;
	static auto removeLeastUsedModel(const unsigned __int32 ui32StreamingFlags = 0) -> bool;
	static auto removeBuildingsNotInArea(const unsigned __int32 ui32Area = 0) -> void;
	static auto shutdown(void) -> void;

	private:
};

#endif