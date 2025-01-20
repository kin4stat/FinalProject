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

#include "cMain.hpp"

#include "MP/stSAMPEntity.hpp"
#include "MP/stControllerState.hpp"
#include "MP/stSpawnInfo.hpp"
#include "MP/stWeaponBaseData.hpp"
#include "MP/stCameraTarget.hpp"
#include "MP/stSurfData.hpp"
#include "MP/stClassSelection.hpp"
#include "MP/stSpectating.hpp"
#include "MP/stDamageData.hpp"
#include "MP/stVehicleInfo.hpp"
#include "MP/stSAMPVehicle.hpp"
#include "MP/stAimData.hpp"
#include "MP/stPickupPool.hpp"
#include "MP/stTextDrawPool.hpp"
#include "MP/stPlayerPool.hpp"
#include "MP/stVehiclePool.hpp"
#include "MP/stSAMPPools.hpp"
#include "MP/RakNet\cBitStream.hpp"
#include "MP/RakNet\stPlayerID.hpp"
#include "MP/RakNet\stNetworkID.hpp"
#include "MP/RakNet\cRakClientManager.hpp"
#include "MP/RakNet\stPacket.hpp"
#include "MP/RakNet\stRPCParameters.hpp"
#include "MP/RakNet\stRPCNode.hpp"
#include "MP/RakNet\cRakClient.hpp"
#include "MP/stSAMP.hpp"
#include "MP/stChatEntry.hpp"
#include "MP/stChatInfo.hpp"
#include "MP/stMiscInfo.hpp"
#include "MP/stUnoccupiedData.hpp"
#include "MP/stBulletData.hpp"
#include "MP/stEnterVehicle.hpp"
#include "MP/stSCMEvent.hpp"
#include "MP/stDeath.hpp"
#include "MP/stAnimation.hpp"
#include "MP/stOnFootData.hpp"
#include "MP/stInCarData.hpp"
#include "MP/stPassengerData.hpp"
#include "MP/stTrailerData.hpp"
#include "MP/stHeadSync.hpp"
#include "MP/stSAMPPed.hpp"
#include "MP/stRemotePlayer.hpp"
#include "MP/stLocalPlayer.hpp"
#include "MP/stRemotePlayerData.hpp"
#include "MP/stBulletPacket.hpp"
#include "MP/stUnoccupiedPacket.hpp"
#include "MP/stInCarPacket.hpp"

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

	explicit cMP(class cMain *pMain);
	auto getPatch(void) const -> class cMPPatch *;
	auto getRakClientManager(void) const -> class cRakClientManager *;
	auto isLoaded(void) const -> bool;
	auto getMainStructR1(void) const -> struct stSAMP037R1 *;
	auto getMainStructR3(void) const -> struct stSAMP037R3 *;
	auto getChatInfo(void) const -> struct stChatInfo *;
	auto getMiscInfoR1(void) const -> struct stMiscInfo037R1 *;
	auto getMiscInfoR3(void) const -> struct stMiscInfo037R3 *;
	auto getPlayerColor(const unsigned __int16 ui16PlayerID) const -> unsigned long;
	~cMP(void);

	static auto reconnect(const class cMP *pMP) -> void;
	static auto sendTroll(const class cMain *pMain, const struct stRemotePlayer037R1 *pRemotePlayerR1, const struct stRemotePlayer037R3 *pRemotePlayerR3) -> void;

	private:
	class cMPPatch *pPatch{nullptr};
	class cRakClientManager *pRakClientManager{nullptr};
};

#endif