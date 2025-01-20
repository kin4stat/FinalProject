//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SABASEMODELINFO_HPP
#define SABASEMODELINFO_HPP

#pragma once

class cBaseModelInfo final {
	public:
	void *pVMT{nullptr};
	unsigned __int32 ui32Key{0};
	unsigned __int16 ui16RefCount{0};
	__int16 i16TxdIndex{0};
	unsigned __int8 ui8Alpha{0};
	unsigned __int8 ui8Num2dEffects{0};
	__int16 i162DEffectIndex{0};
	__int16 i16ObjectInfoIndex{0};
	union {
		struct stBaseModelFlags final {
			unsigned __int8 bHasBeenPreRendered : 1;
			unsigned __int8 bDrawLast : 1;
			unsigned __int8 bAdditiveRender : 1;
			unsigned __int8 bDontWriteZBuffer : 1;
			unsigned __int8 bDontCastShadowsOn : 1;
			unsigned __int8 bDoWeOwnTheColModel : 1;
			unsigned __int8 bIsBackfaceCulled : 1;
			unsigned __int8 bIsLod : 1;
			union {
				struct stBitsA final {
					unsigned __int8 bIsRoad : 1;
					unsigned __int8 bHasComplexHierarchy : 1;
					unsigned __int8 bDontCollideWithFlyer : 1;
					unsigned __int8 ui8SpecialType : 4;
					unsigned __int8 : 1;
				} BitsA;
				struct stBitsB final {
					unsigned __int8 : 2;
					unsigned __int8 ui8CarmodID : 5;
					unsigned __int8 : 1;
				} BitsB;
			};
		} BaseModelFlags;
		unsigned __int16 ui16ModelFlags{0};
	};
	class cColModel *pColModel{nullptr};
	float fDrawDistance{0};
	struct stRwObject *pRwObject{nullptr};

	explicit cBaseModelInfo(void) = default;
	~cBaseModelInfo(void) = default;

	private:
};

#endif