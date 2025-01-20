//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\MP\stPlayerPool.hpp"

// .....
/* R1 */
// .....
auto stPlayerPool037R1::getPlayerNameByID(const unsigned __int16 ui16PlayerID) const -> std::string {
	const struct stRemotePlayer037R1 *pRemotePlayer{this->pRemotePlayer[ui16PlayerID]};
	return pRemotePlayer != nullptr ? pRemotePlayer->sPlayerName : std::move(std::string{});
}


auto stPlayerPool037R1::getLocalVehicleID(void) const -> unsigned __int16 {
	const struct stLocalPlayer037R1 *pLocalPlayer{this->pLocalPlayer};
	return pLocalPlayer != nullptr ? pLocalPlayer->ui16CurrentVehicleID : 0;
}


auto stPlayerPool037R1::getPlayerIDByHandle(class cPed *pPed) const -> unsigned __int16 {
	static class cPed *pSavedPed{pPed};					pSavedPed = pPed;
	static unsigned __int16 ui16SavedPlayerID{0};		ui16SavedPlayerID = 0;

	this->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
		const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
		if (pRemotePlayerData != nullptr) {
			const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
			if (pMPPed != nullptr && pSavedPed == pMPPed->MPEntity.pGTAEntity) {
				ui16SavedPlayerID = ui16PlayerID;
				return false;
			}
		} return true;
	});

	return ui16SavedPlayerID;
}


auto stPlayerPool037R1::getPlayerNameByHandle(class cPed *pPed) const -> std::string {
	static class cPed *pSavedPed{pPed};		pSavedPed = pPed;
	static std::string sNickName{};			sNickName.clear();

	this->forAllRemotePeds([](const unsigned __int16, struct stRemotePlayer037R1 *pRemotePlayer) -> bool {
		const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
		if (pRemotePlayerData != nullptr) {
			const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
			if (pMPPed != nullptr && pSavedPed == pMPPed->MPEntity.pGTAEntity) {
				sNickName.append(pRemotePlayer->sPlayerName);
				return false;
			}
		} return true;
	});

	return std::move(sNickName);
}


auto stPlayerPool037R1::getPlayerAFK(const unsigned __int16 ui16PlayerID) const -> bool {
	const struct stRemotePlayer037R1 *pRemotePlayer{this->pRemotePlayer[ui16PlayerID]};
	if (pRemotePlayer != nullptr) {
		const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayer->pPlayerData};
		if (pRemotePlayerData != nullptr) {
			return pRemotePlayerData->i32AFKState != 0;
		}
	} return false;
}


auto stPlayerPool037R1::removeAllPlayers(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stPlayerPool037R1 *pThis)>(cMP::ui32SAMPBase + 0x10320)(this);
	return;
}


auto stPlayerPool037R1::forAllRemotePeds(bool(__cdecl *pFunc)(const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R1 *pRemotePlayer)) const -> void {
	for (unsigned __int16 ui16PlayerID{0}; ui16PlayerID < 1004; ++ui16PlayerID) {
		if (this->i32IsListed[ui16PlayerID]) {
			struct stRemotePlayer037R1 *pRemotePlayer{this->pRemotePlayer[ui16PlayerID]};
			if (pRemotePlayer != nullptr && pRemotePlayer->pPlayerData != nullptr) {
				if (!pFunc(ui16PlayerID, pRemotePlayer)) {
					break;
				}
			}
		}
	} return;
}


// .....
/* R3 */
// .....
auto stPlayerPool037R3::getPlayerNameByID(const unsigned __int16 ui16PlayerID) const -> std::string {
	const struct stRemotePlayer037R3 *pRemotePlayer{this->pRemotePlayer[ui16PlayerID]};
	return pRemotePlayer != nullptr ? pRemotePlayer->sPlayerName : std::move(std::string{});
}


auto stPlayerPool037R3::getLocalVehicleID(void) const -> unsigned __int16 {
	const struct stLocalPlayer037R3 *pLocalPlayer{this->pLocalPlayer};
	return pLocalPlayer != nullptr ? pLocalPlayer->ui16CurrentVehicleID : 0;
}


auto stPlayerPool037R3::getPlayerIDByHandle(class cPed *pPed) const -> unsigned __int16 {
	static class cPed *pSavedPed{pPed};					pSavedPed = pPed;
	static unsigned __int16 ui16SavedPlayerID{0};		ui16SavedPlayerID = 0;

	this->forAllRemotePeds([](const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
		const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
		if (pRemotePlayerData != nullptr) {
			const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
			if (pMPPed != nullptr && pSavedPed == pMPPed->MPEntity.pGTAEntity) {
				ui16SavedPlayerID = ui16PlayerID;
				return false;
			}
		} return true;
	});

	return ui16SavedPlayerID;
}


auto stPlayerPool037R3::getPlayerNameByHandle(class cPed *pPed) const -> std::string {
	static class cPed *pSavedPed{pPed};		pSavedPed = pPed;
	static std::string sNickName{};			sNickName.clear();

	this->forAllRemotePeds([](const unsigned __int16, struct stRemotePlayer037R3 *pRemotePlayer) -> bool {
		const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
		if (pRemotePlayerData != nullptr) {
			const struct stSAMPPed *pMPPed{pRemotePlayerData->pSAMP_Actor};
			if (pMPPed != nullptr && pSavedPed == pMPPed->MPEntity.pGTAEntity) {
				sNickName.append(pRemotePlayer->sPlayerName);
				return false;
			}
		} return true;
	});

	return std::move(sNickName);
}


auto stPlayerPool037R3::getPlayerAFK(const unsigned __int16 ui16PlayerID) const -> bool {
	const struct stRemotePlayer037R3 *pRemotePlayer{this->pRemotePlayer[ui16PlayerID]};
	if (pRemotePlayer != nullptr) {
		const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayer->pPlayerData};
		if (pRemotePlayerData != nullptr) {
			return pRemotePlayerData->i32AFKState != 0;
		}
	} return false;
}


auto stPlayerPool037R3::removeAllPlayers(void) -> void {
	reinterpret_cast<void(__thiscall *)(struct stPlayerPool037R3 *pThis)>(cMP::ui32SAMPBase + 0x13470)(this);
	return;
}


auto stPlayerPool037R3::forAllRemotePeds(bool(__cdecl *pFunc)(const unsigned __int16 ui16PlayerID, struct stRemotePlayer037R3 *pRemotePlayer)) const -> void {
	for (unsigned __int16 ui16PlayerID{0}; ui16PlayerID < 1004; ++ui16PlayerID) {
		if (this->i32IsListed[ui16PlayerID]) {
			struct stRemotePlayer037R3 *pRemotePlayer{this->pRemotePlayer[ui16PlayerID]};
			if (pRemotePlayer != nullptr && pRemotePlayer->pPlayerData != nullptr) {
				if (!pFunc(ui16PlayerID, pRemotePlayer)) {
					break;
				}
			}
		}
	} return;
}