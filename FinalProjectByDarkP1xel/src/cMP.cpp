//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\cMP.hpp"

unsigned __int32 cMP::ui32SAMPBase{0};
cMP::eVer cMP::SAMPVer{cMP::eVer::eUnkVer};
cMP::eLauncherType cMP::LauncherType{cMP::eLauncherType::eUnknown};

cMP::cMP(class cMain *pMain) {
	LDR_DATA_TABLE_ENTRY *pSAMPEntry{nullptr};

	pSAMPEntry = pMain->getLdrDataTableEntry(L"SAMP.DLL");
	if (pSAMPEntry != nullptr) {
		if (pMain->getLdrDataTableEntry(L"plugin_Custom.asi") != nullptr) {
			cMP::LauncherType = cMP::eLauncherType::ePremier;
		} else if (pMain->getLdrDataTableEntry(L"_namalsk.asi") != nullptr) {
			cMP::LauncherType = cMP::eLauncherType::eNamalsk;
		} else if (pMain->getLdrDataTableEntry(L"diamond_clientside.asi") != nullptr) {
			cMP::LauncherType = cMP::eLauncherType::eDiamond;
		} else if (pMain->getLdrDataTableEntry(L"gtarp_clientside.asi") != nullptr) {
			cMP::LauncherType = cMP::eLauncherType::eGTARP;
		} else if (pMain->getLdrDataTableEntry(L"AZVoice.asi") != nullptr && pMain->getLdrDataTableEntry(L"GameSyms.dll") != nullptr) {
			cMP::LauncherType = cMP::eLauncherType::eArizona;
		} else {
			const std::wstring wsProcessName{std::move(pMain->getCurrentProcessNameW())};
			if (wsProcessName == L"sampnet.dll") {
				cMP::LauncherType = cMP::eLauncherType::eSAMP_NET;
			} else if (wsProcessName == L"gta_strix.exe") {
				cMP::LauncherType = cMP::eLauncherType::eStrix;
			} else {
				std::wstring wsParentName{std::move(pMain->getParentProcessNameW())};
				std::transform(wsParentName.cbegin(), wsParentName.cend(), wsParentName.begin(), ::std::towupper);
				if (wsParentName == L"UGMP.EXE") {
					cMP::LauncherType = cMP::eLauncherType::eUGMP;
				} else if (wsParentName == L"SRAUNCHERQT5.EXE" || wsParentName.find(L"SRAUNC~") != wsParentName.npos) {
					cMP::LauncherType = cMP::eLauncherType::eSRauncher;
				} else if (wsParentName == L"RADMIR_LAUNCHER_EX.EXE" || wsParentName.find(L"RADMIR~") != wsParentName.npos) {
					cMP::LauncherType = cMP::eLauncherType::eRadmir;
				} else if (wsParentName == L"MALINOVKA_CORE.EXE" || wsParentName.find(L"MALINO~") != wsParentName.npos) {
					cMP::LauncherType = cMP::eLauncherType::eMalimovka;
				} else if (wsParentName == L"GT_LAUNCHER.EXE" || wsParentName.find(L"GT_LAU~") != wsParentName.npos) {
					cMP::LauncherType = cMP::eLauncherType::eGreenTech;
				} else if (wsParentName == L"SAMP.EXE") {
					cMP::LauncherType = cMP::eLauncherType::eOriginal;
				}
			}
		}
	} else {
		pSAMPEntry = pMain->getLdrDataTableEntry(L"AZMP.DLL");
		if (pSAMPEntry != nullptr) {
			cMP::LauncherType = cMP::eLauncherType::eAmazing;
		}
	}

	if (pSAMPEntry != nullptr) {
		cMP::ui32SAMPBase = reinterpret_cast<const unsigned __int32>(pSAMPEntry->DllBase);
		const unsigned __int32 ui32MPEntryPoint{reinterpret_cast<const unsigned __int32>(pMain->getModuleEntryPoint(reinterpret_cast<const HMODULE>(cMP::ui32SAMPBase)))};
		switch (ui32MPEntryPoint - cMP::ui32SAMPBase) {
			case 0x31DF13: {
				cMP::SAMPVer = cMP::eVer::e037R1;
				break;
			}
			case 0x3195DD: {
				cMP::SAMPVer = cMP::eVer::e037R2;
				break;
			}
			case 0xCC4D0: {
				cMP::SAMPVer = cMP::eVer::e037R3;
				break;
			}
			case 0xCBCB0: {
				cMP::SAMPVer = cMP::eVer::e037R4;
				break;
			} default: break;
		}

		this->pPatch = new cMPPatch{pMain};
		this->pRakClientManager = new cRakClientManager{this};
	} return;
}


auto cMP::getPatch(void) const -> class cMPPatch * {
	return this->pPatch;
}


auto cMP::getRakClientManager(void) const -> class cRakClientManager * {
	return this->pRakClientManager;
}


auto cMP::isLoaded(void) const -> bool {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			return *reinterpret_cast<const bool *>(cMP::ui32SAMPBase + 0x21A114);
		}
		case cMP::eVer::e037R3: {
			return *reinterpret_cast<const bool *>(cMP::ui32SAMPBase + 0x26E8FC);
		} default: break;
	} return false;
}


auto cMP::getMainStructR1(void) const -> struct stSAMP037R1 * {
	return *reinterpret_cast<struct stSAMP037R1 **>(cMP::ui32SAMPBase + 0x21A0F8);
}


auto cMP::getMainStructR3(void) const -> struct stSAMP037R3 * {
	return *reinterpret_cast<struct stSAMP037R3 **>(cMP::ui32SAMPBase + 0x26E8DC);
}


auto cMP::getChatInfo(void) const -> struct stChatInfo * {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			return *reinterpret_cast<struct stChatInfo **>(cMP::ui32SAMPBase + 0x21A0E4);
		}
		case cMP::eVer::e037R3: {
			return *reinterpret_cast<struct stChatInfo **>(cMP::ui32SAMPBase + 0x26E8C8);
		} default: break;
	} return nullptr;
}


auto cMP::getMiscInfoR1(void) const -> struct stMiscInfo037R1 * {
	return *reinterpret_cast<struct stMiscInfo037R1 **>(cMP::ui32SAMPBase + 0x21A10C);
}


auto cMP::getMiscInfoR3(void) const -> struct stMiscInfo037R3 * {
	return *reinterpret_cast<struct stMiscInfo037R3 **>(cMP::ui32SAMPBase + 0x26E8F4);
}


auto cMP::getPlayerColor(const unsigned __int16 ui16PlayerID) const -> unsigned long {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			return (*reinterpret_cast<const unsigned long *>(cMP::ui32SAMPBase + 0x216378 + 4 * ui16PlayerID) >> 8) | 0xFF000000;
		}
		case cMP::eVer::e037R3: {
			return (*reinterpret_cast<const unsigned long *>(cMP::ui32SAMPBase + 0x151578 + 4 * ui16PlayerID) >> 8) | 0xFF000000;
		} default: break;
	} return 0;
}


cMP::~cMP(void) {
	delete this->pPatch;				this->pPatch = nullptr;
	delete this->pRakClientManager;		this->pRakClientManager = nullptr;
	return;
}


auto cMP::reconnect(const class cMP *pMP) -> void {
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			struct stSAMP037R1 *pSAMP{pMP->getMainStructR1()};
			pSAMP->restartGame();
			pSAMP->GameState = stSAMP037R1::eGameState::eWAIT_CONNECT;
			break;
		}
		case cMP::eVer::e037R3: {
			struct stSAMP037R3 *pSAMP{pMP->getMainStructR3()};
			pSAMP->restartGame();
			pSAMP->GameState = stSAMP037R3::eGameState::eWAIT_CONNECT;
			break;
		} default: break;
	} return;
}


auto cMP::sendTroll(const class cMain *pMain, const struct stRemotePlayer037R1 *pRemotePlayerR1, const struct stRemotePlayer037R3 *pRemotePlayerR3) -> void {
	struct stInCarPacket trollInCar {};
	struct stSAMPPed *pMPPed{nullptr};
	struct stSAMPVehicle *pMPVeh{nullptr};
	switch (cMP::SAMPVer) {
		case cMP::eVer::e037R1: {
			if (pRemotePlayerR1 != nullptr) {
				const struct stRemotePlayerData037R1 *pRemotePlayerData{pRemotePlayerR1->pPlayerData};
				if (pRemotePlayerData != nullptr && pRemotePlayerData->i32AFKState == 0) {
					pMPPed = pRemotePlayerData->pSAMP_Actor;
					pMPVeh = pRemotePlayerData->pSAMP_Vehicle;
					trollInCar.inCarData = pRemotePlayerData->inCarData;
				}
			} break;
		}
		case cMP::eVer::e037R3: {
			if (pRemotePlayerR3 != nullptr) {
				const struct stRemotePlayerData037R3 *pRemotePlayerData{pRemotePlayerR3->pPlayerData};
				if (pRemotePlayerData != nullptr && pRemotePlayerData->i32AFKState == 0) {
					pMPPed = pRemotePlayerData->pSAMP_Actor;
					pMPVeh = pRemotePlayerData->pSAMP_Vehicle;
					trollInCar.inCarData = pRemotePlayerData->inCarData;
				}
			} break;
		} default: break;
	}

	if (pMPPed != nullptr && pMPVeh != nullptr) {
		const class cPed *pDriver{pMPVeh->MPEntity.pGTAEntity->Vehicle.getDriver()};
		if (pDriver == nullptr || pDriver == pMPPed->MPEntity.pGTAEntity) {

			const class cGui *pGui{pMain->getGui()};

			switch (std::get<0>(pGui->tTrollMode)) {
				case cGui::eTrollMode::eLoading1: {
					trollInCar.inCarData.vecPosition.fX = 19999.9F;
					trollInCar.inCarData.vecPosition.fY = 19999.9F;
					trollInCar.inCarData.vecPosition.fZ = 99999.9F;
					break;
				}
				case cGui::eTrollMode::eLoading2: {
					trollInCar.inCarData.vecPosition.fX = 50000.0F;
					trollInCar.inCarData.vecPosition.fY = 50000.0F;
					trollInCar.inCarData.vecPosition.fZ = 50000.0F;
					break;
				}
				case cGui::eTrollMode::eLoading3: {
					trollInCar.inCarData.vecPosition.fZ = std::numeric_limits<const float>().quiet_NaN();
					break;
				}
				case cGui::eTrollMode::eLoading4: {
					trollInCar.inCarData.vecPosition.fX = -30000.0F;
					trollInCar.inCarData.vecPosition.fY = -30000.0F;
					break;
				}
				case cGui::eTrollMode::eTrailerID: {
					trollInCar.inCarData.ui16TrailerID = trollInCar.inCarData.ui16VehicleID;
					break;
				}
				case cGui::eTrollMode::eToSky1: {
					trollInCar.inCarData.vecMoveSpeed.fZ = 30.0F;
					trollInCar.inCarData.vecPosition.fZ += 3.0F;
					break;
				}
				case cGui::eTrollMode::eToSky2: {
					trollInCar.inCarData.vecPosition.fZ = 1000.0F;
					break;
				}
				case cGui::eTrollMode::eToHell1: {
					trollInCar.inCarData.vecMoveSpeed.fZ = -30.0F;
					trollInCar.inCarData.vecPosition.fZ -= 5.0F;
					break;
				}
				case cGui::eTrollMode::eToHell2: {
					trollInCar.inCarData.vecPosition.fZ = -500.0F;
					break;
				}
				case cGui::eTrollMode::eToMe: {
					trollInCar.inCarData.vecPosition = *pMain->getSA()->getCamera()->Placeable.getPosition();
					break;
				}
				case cGui::eTrollMode::eBlow: {
					trollInCar.inCarData.fVehicleHealth = 249.0F;
					break;
				}
				case cGui::eTrollMode::eMaxSpeed1: {
					trollInCar.inCarData.vecMoveSpeed.fX = 50.0F;
					trollInCar.inCarData.vecMoveSpeed.fY = 50.0F;
					break;
				}
				case cGui::eTrollMode::eMaxSpeed2: {
					trollInCar.inCarData.vecMoveSpeed.fX = 10.0F;
					trollInCar.inCarData.vecMoveSpeed.fY = 10.0F;
					break;
				}
				case cGui::eTrollMode::eMaxSpeed3: {
					trollInCar.inCarData.vecMoveSpeed.fX = 5.0F;
					trollInCar.inCarData.vecMoveSpeed.fY = 5.0F;
					break;
				}
				case cGui::eTrollMode::eFlip: {
					trollInCar.inCarData.vecQuaternion.fX = 1.0F;
					trollInCar.inCarData.vecQuaternion.fY = -1.0F;
					trollInCar.inCarData.vecQuaternion.fZ = 0;
					trollInCar.inCarData.vecQuaternion.fU = 0;
					break;
				}
				case cGui::eTrollMode::eFakeMinigun: {
					trollInCar.inCarData.ui8CurrentWeapon = 38;
					break;
				}
				case cGui::eTrollMode::eFix: {
					trollInCar.inCarData.fVehicleHealth = 1000.0F;
					break;
				}
				case cGui::eTrollMode::eWayPoint: {
					class cVector3D vecWayPos {};
					if (cSA::getWaypointPos(pMain->getSA(), std::move(vecWayPos))) {
						trollInCar.inCarData.vecPosition = std::move(vecWayPos);
					} else {
						return;
					} break;
				} default: break;
			}

			const class cRakClientManager *pRakClientManager{pMain->getMP()->getRakClientManager()};

			switch (std::get<0>(pGui->tTrollType)) {
				case cGui::eTrollType::eDefault: {
					for (__int32 i32TotalPackets{0}; i32TotalPackets < pGui->getInteger(cGui::eSyncIntegers::eTrollPacketsToSend); ++i32TotalPackets) {
						pRakClientManager->sendPacket(&trollInCar, sizeof(struct stInCarPacket));
					} break;
				}
				case cGui::eTrollType::eEnterExitVeh: {
					for (__int32 i32TotalPackets{0}; i32TotalPackets < pGui->getInteger(cGui::eSyncIntegers::eTrollPacketsToSend); ++i32TotalPackets) {
						pRakClientManager->sendEnterVehicle(trollInCar.inCarData.ui16VehicleID, false);
						pRakClientManager->sendPacket(&trollInCar, sizeof(struct stInCarPacket));
						pRakClientManager->sendExitVehicle(trollInCar.inCarData.ui16VehicleID);
					} break;
				} default: break;
			}

		}
	} return;
}