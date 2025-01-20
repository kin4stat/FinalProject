//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPPOOLS_HPP
#define MPPOOLS_HPP

#pragma once

struct stSAMPPools037R1 final {
	struct stActorPool *pActor{nullptr};
	struct stObjectPool *pObject{nullptr};
	struct stGangZonePool *pGangZone{nullptr};
	struct st3DTextPool *pText3D{nullptr};
	struct stTextDrawPool *pTextDraw{nullptr};
	void *pPlayerLabels{nullptr};
	struct stPlayerPool037R1 *pPlayer{nullptr};
	struct stVehiclePool *pVehicle{nullptr};
	struct stPickupPool *pPickup{nullptr};
};

struct stSAMPPools037R3 final {
	struct stMenuPool037R3 *pMenu{nullptr};
	struct stActorPool *pActor{nullptr};
	struct stPlayerPool037R3 *pPlayer{nullptr};
	struct stVehiclePool *pVehicle{nullptr};
	struct stPickupPool *pPickup{nullptr};
	struct stObjectPool *pObject{nullptr};
	struct stGangZonePool *pGangZone{nullptr};
	struct st3DTextPool *pText3D{nullptr};
	struct stTextDrawPool *pTextDraw{nullptr};
};

#endif