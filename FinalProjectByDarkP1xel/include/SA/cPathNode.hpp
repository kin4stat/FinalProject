//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAPATHNODE_HPP
#define SAPATHNODE_HPP

#pragma once

#include "Vector/cCompressedVector3D.hpp"
#include "SA/cNodeAddress.hpp"

class cPathNode final {
	public:
	class cPathNode *pPrev{nullptr};
	class cPathNode **ppToMeInTheList{nullptr};
	class cCompressedVector3D compVecPosn {};
	unsigned __int16 ui16SearchList{0};
	__int16 i16BaseLinkID{0};
	class cNodeAddress nodeAddress {};
	unsigned __int8 ui8PathWidth{0};
	unsigned __int8 ui8NodeType{0};
	unsigned __int8 ui8NumLinks : 4;
	unsigned __int8 ui8TrafficLevel : 2;
	unsigned __int8 bRoadBlocks : 1;
	unsigned __int8 bWaterNode : 1;
	unsigned __int8 bEmergencyVehiclesOnly : 1;
	unsigned __int8 bUnk1 : 1;
	unsigned __int8 bDontWander : 1;
	unsigned __int8 bUnk2 : 1;
	unsigned __int8 bNotHighway : 1;
	unsigned __int8 bHighway : 1;
	unsigned __int8 bUnk3 : 1;
	unsigned __int8 bUnk4 : 1;
	unsigned __int8 ui8SpawnProbability : 4;
	unsigned __int8 ui8BehaviourType : 4;
	__int8 i8Field_1B{0};

	explicit cPathNode::cPathNode(void) = delete;
	cPathNode::~cPathNode(void) = delete;

	private:
};

#endif