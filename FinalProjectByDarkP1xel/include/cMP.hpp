//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MP_HPP
#define MP_HPP

#pragma once

#include "include\cMain.hpp"

#include "include\MP\stSAMPEntity.hpp"
#include "include\MP\stControllerState.hpp"
#include "include\MP\stSpawnInfo.hpp"
#include "include\MP\stWeaponBaseData.hpp"
#include "include\MP\stCameraTarget.hpp"
#include "include\MP\stSurfData.hpp"
#include "include\MP\stClassSelection.hpp"
#include "include\MP\stSpectating.hpp"
#include "include\MP\stDamageData.hpp"
#include "include\MP\stVehicleInfo.hpp"
#include "include\MP\stSAMPVehicle.hpp"
#include "include\MP\stAimData.hpp"
#include "include\MP\stPickupPool.hpp"
#include "include\MP\stTextDrawPool.hpp"
#include "include\MP\stPlayerPool.hpp"
#include "include\MP\stVehiclePool.hpp"
#include "include\MP\stSAMPPools.hpp"
#include "include\MP\RakNet\cBitStream.hpp"
#include "include\MP\RakNet\stPlayerID.hpp"
#include "include\MP\RakNet\stNetworkID.hpp"
#include "include\MP\RakNet\cRakClientManager.hpp"
#include "include\MP\RakNet\stPacket.hpp"
#include "include\MP\RakNet\stRPCParameters.hpp"
#include "include\MP\RakNet\stRPCNode.hpp"
#include "include\MP\RakNet\cRakClient.hpp"
#include "include\MP\stSAMP.hpp"
#include "include\MP\stChatEntry.hpp"
#include "include\MP\stChatInfo.hpp"
#include "include\MP\stMiscInfo.hpp"
#include "include\MP\stUnoccupiedData.hpp"
#include "include\MP\stBulletData.hpp"
#include "include\MP\stEnterVehicle.hpp"
#include "include\MP\stSCMEvent.hpp"
#include "include\MP\stDeath.hpp"
#include "include\MP\stAnimation.hpp"
#include "include\MP\stOnFootData.hpp"
#include "include\MP\stInCarData.hpp"
#include "include\MP\stPassengerData.hpp"
#include "include\MP\stTrailerData.hpp"
#include "include\MP\stHeadSync.hpp"
#include "include\MP\stSAMPPed.hpp"
#include "include\MP\stRemotePlayer.hpp"
#include "include\MP\stLocalPlayer.hpp"
#include "include\MP\stRemotePlayerData.hpp"
#include "include\MP\stBulletPacket.hpp"
#include "include\MP\stUnoccupiedPacket.hpp"
#include "include\MP\stInCarPacket.hpp"

class cMP final {
	public:

	enum class eVer : const unsigned __int32 {
		eUnkVer,
		e037R1,
		e037R2,
		e037R3,
		e037R4
	};

	enum class eLauncherType : const unsigned __int32 {
		eUnknown,
		eOriginal,
		eSRauncher,
		eArizona,
		eRadmir,
		eMalimovka,
		eNamalsk,
		eGTARP,
		ePremier,
		eAmazing,
		eSAMP_NET,
		eGreenTech,
		eDiamond,
		eStrix,
		eUGMP
	};

	static unsigned __int32 cMP::ui32SAMPBase;
	static cMP::eVer cMP::SAMPVer;
	static cMP::eLauncherType cMP::LauncherType;

	explicit cMP::cMP(class cMain *pMain);
	auto cMP::getPatch(void) const -> class cMPPatch *;
	auto cMP::getRakClientManager(void) const -> class cRakClientManager *;
	auto cMP::isLoaded(void) const -> bool;
	auto cMP::getMainStructR1(void) const -> struct stSAMP037R1 *;
	auto cMP::getMainStructR3(void) const -> struct stSAMP037R3 *;
	auto cMP::getChatInfo(void) const -> struct stChatInfo *;
	auto cMP::getMiscInfoR1(void) const -> struct stMiscInfo037R1 *;
	auto cMP::getMiscInfoR3(void) const -> struct stMiscInfo037R3 *;
	auto cMP::getPlayerColor(const unsigned __int16 ui16PlayerID) const -> unsigned long;
	cMP::~cMP(void);

	static auto cMP::reconnect(const class cMP *pMP) -> void;
	static auto cMP::sendTroll(const class cMain *pMain, const struct stRemotePlayer037R1 *pRemotePlayerR1, const struct stRemotePlayer037R3 *pRemotePlayerR3) -> void;

	private:
	class cMPPatch *pPatch{nullptr};
	class cRakClientManager *pRakClientManager{nullptr};
};

#endif