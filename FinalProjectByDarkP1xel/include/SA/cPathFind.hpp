//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPATHFIND_HPP
#define SAPATHFIND_HPP

#pragma once

#include "Vector/cVector3D.hpp"
#include "SA/cNodeAddress.hpp"
#include "SA/cForbiddenArea.hpp"

class cPathFind final {
	public:
	class cNodeAddress nodeAddress {};
	class cPathNode *pNodesSearchLists[512];
	class cPathNode *pPathNodes[64 + 8];
	class cCarPathLink *pNaviNodes[64 + 8];
	class cNodeAddress *pNodeLinks[64 + 8];
	unsigned __int8 *pLinkLengths[64 + 8];
	class cPathIntersectionInfo *pPathIntersections[64 + 8];
	class cCarPathLinkAddress *pNaviLinks[64];
	void *pField_EA4[64];
	unsigned __int32 ui32NumNodes[64 + 8];
	unsigned __int32 ui32NumVehicleNodes[64 + 8];
	unsigned __int32 ui32NumPedNodes[64 + 8];
	unsigned __int32 ui32NumCarPathLinks[64 + 8];
	unsigned __int32 ui32NumAddresses[64 + 8];
	__int32 i32Field_1544[2048];
	unsigned __int32 ui32TotalNumNodesInSearchList{0};
	class cNodeAddress unkNodeAddress[8]{};
	unsigned __int32 ui32NumForbiddenAreas{0};
	class cForbiddenArea forbiddenAreas[64]{};
	bool bForbiddenForScriptedCarsEnabled{false};
	__int8 i8Padding[3];
	float fForbiddenForScrCarsX1{0};
	float fForbiddenForScrCarsX2{0};
	float fForbiddenForScrCarsY1{0};
	float fForbiddenForScrCarsY2{0};

	explicit cPathFind::cPathFind(void) = delete;
	auto cPathFind::findNodeClosestToCoors(class cNodeAddress *pPathLink, const class cVector3D *pPos, const unsigned __int16 ui16NodeType, const float fMaxDistance, const bool bBoatsOnly) -> void;
	auto cPathFind::findNodeCoorsForScript(class cVector3D *pPos, class cNodeAddress *pNodeAddress, bool *bResult = nullptr) -> void;
	cPathFind::~cPathFind(void) = delete;

	private:
};

#endif