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
	explicit cStreaming::cStreaming(void) = delete;
	cStreaming::~cStreaming(void) = delete;

	static auto cStreaming::init(void) -> void;
	static auto cStreaming::reInit(void) -> unsigned __int32;
	static auto cStreaming::loadScene(const class cVector3D *pPos) -> void;
	static auto cStreaming::loadSceneCollision(const class cVector3D *pPos) -> void;
	static auto cStreaming::requestModel(const unsigned __int32 ui32ModelID, const __int32 i32StreamingFlags) -> void;
	static auto cStreaming::requestAllModels(void) -> void;
	static auto cStreaming::removeModel(const unsigned __int32 ui32ModelID) -> void;
	static auto cStreaming::loadAllRequestedModels(const bool bOnlyPriorityRequests) -> void;
	static auto cStreaming::setModelIsDeletable(const unsigned __int32 ui32ModelID) -> void;
	static auto cStreaming::getMemoryAvailable(void) -> unsigned __int32;
	static auto cStreaming::getMemoryUsed(void) -> unsigned __int32;
	static auto cStreaming::deleteAllRwObjects(void) -> void;
	static auto cStreaming::deleteLeastUsedEntityRwObject(const bool bNotOnScreen, const unsigned __int32 ui32StreamingFlags = 0) -> bool;
	static auto cStreaming::removeAllUnusedModels(void) -> void;
	static auto cStreaming::makeSpaceFor(const unsigned __int32 ui32MemoryToCleanInBytes) -> void;
	static auto cStreaming::removeCurrentZonesModels(void) -> void;
	static auto cStreaming::removeBigBuildings(void) -> void;
	static auto cStreaming::removeLeastUsedModel(const unsigned __int32 ui32StreamingFlags = 0) -> bool;
	static auto cStreaming::removeBuildingsNotInArea(const unsigned __int32 ui32Area = 0) -> void;
	static auto cStreaming::shutdown(void) -> void;

	private:
};

#endif