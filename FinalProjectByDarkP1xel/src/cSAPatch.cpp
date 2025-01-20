//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\cSAPatch.hpp"

cSAPatch::cSAPatch(class cMain *pMain) {
	this->pMain = pMain;
	return;
}


auto cSAPatch::patchLeaveCarAndDie(void) const -> void {
	/* CTaskComplexLeaveCarAndDie::Clone */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62F223), nullptr, 0x1);
	return;
}


auto cSAPatch::patchFlickr(void) const -> void {
	/* CStreaming::Init2 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5B8E55), "\x90\x5F\x01\x00", 0x4);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5B8EB0), "\x90\x5F\x01\x00", 0x4);
	return;
}


auto cSAPatch::patchRandomGPCI(void) const -> void {
	/* MP_GPCI (0xC9236C | 0xC92392) */
	std::mt19937 randEngine{std::random_device{}()};
	for (unsigned __int32 UI32{0xC9236C}; UI32 < 0xC92392; ++UI32) {
		const unsigned __int32 ui32Char{std::uniform_int_distribution<unsigned __int32>{0, 128}(randEngine)};
		this->pMain->patchAddress(reinterpret_cast<void *>(UI32), &ui32Char, 0x1);
	} return;
}


auto cSAPatch::patchExtraColour(void) const -> void {
	/* ExtraColor */
	this->pMain->patchAddress(reinterpret_cast<void *>(0xB7C484), nullptr, 4, true);
	this->pMain->patchAddress(reinterpret_cast<void *>(0xB79E3C), nullptr, 4, true);
	return;
}


auto cSAPatch::patchEntryExitStackPosn(void) const -> void {
	/* EntryExitStackPosn */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x96A7C4), nullptr, 4, true);
	return;
}


auto cSAPatch::DisableMouseUpdateETC(const unsigned __int32 ui32Status) const -> void {
	/* CPad::UpdateMouse | CCam::Process_FollowPed_SA | _psMouseSetPos | CCamera::Process | CPad::CycleCameraModeUpJustDown */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53F484), ui32Status ? nullptr : "\x88\x0D\x04\x34\xB7\x00", 0x6); // LMB
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53F48E), ui32Status ? nullptr : "\x88\x15\x05\x34\xB7\x00", 0x6); // RMB
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52FADB), ui32Status ? "\xEB" : "\x75", 0x1); // Ctrl
	this->pMain->patchAddress(reinterpret_cast<void *>(0x531287), ui32Status ? "\xEB" : "\x75", 0x1); // Enter
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52E24B), ui32Status ? "\xE9\x0B\x01\x00\x00\x90" : "\x0F\x84\x0A\x01\x00\x00", 0x6); // LShift
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52E2A8), ui32Status ? "\xE9\xAE\x00\x00\x00\x90" : "\x0F\x84\xAD\x00\x00\x00", 0x6); // LCtrl
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52EFA2), ui32Status ? "\xEB" : "\x74", 0x1); // MouseWheelA
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52EFBA), ui32Status ? "\xEB" : "\x74", 0x1); // MouseWheelB
	this->pMain->patchAddress(reinterpret_cast<void *>(0x523F45), ui32Status ? "\xEB" : "\x74", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5404A0), ui32Status ? "\xB8\x00\x00\x00\x00\xC3\x90" : "\x0F\xB7\x81\x0A\x01\x00\x00", 0x7);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x524028), ui32Status ? "\xE9\x1A\x01\x00\x00\x90" : "\x0F\x84\x19\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52419C), ui32Status ? nullptr : "\x7A\x07", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52561E), ui32Status ? "\xE9\x26\x01\x00\x00\x90" : "\x0F\x84\x25\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7453F0), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x10", 0x3);
	return;
}


auto cSAPatch::ProtHPVeh(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::VehicleDamage | CBike::VehicleDamage | CPlane::VehicleDamage | CPlayerInfo::Process | UNK */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6A80E1), ui32Status ? "\xE9\xC5\x02\x00\x00\x90" : "\x0F\x85\xC4\x02\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6B8EC0), ui32Status ? "\xC2\x18\x00\x90\x90" : "\x51\xD9\x44\x24\x08", 0x5);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6CC4B0), ui32Status ? "\xC2\x18\x00" : "\x83\xEC\x48", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x570DB6), ui32Status ? "\xE9\x5E\x01\x00\x00\x90" : "\x0F\x86\x5D\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D8071), ui32Status ? nullptr : "\xD8\xA4\x24\x90\x00\x00\x00", 0x7);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D7CCE), ui32Status ? "\xE9\xD6\x05\x00\x00\x90" : "\x0F\x84\xD5\x05\x00\x00", 0x6);
	return;
}


auto cSAPatch::ProtDieInVeh(const unsigned __int32 ui32Status) const -> void {
	/* CVehicle::KillPedsInVehicle */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D1C80), ui32Status ? "\xC3\x90\x90\x90\x90\x90" : "\x64\xA1\x00\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::ProtDieEnterVehOnFire(const unsigned __int32 ui32Status) const -> void {
	/* CVehicle::KillPedsGettingInVehicle */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D82F0), ui32Status ? "\xC3\x90" : "\x6A\xFF", 0x2);
	return;
}


auto cSAPatch::ProtTriggerExplosion(const unsigned __int32 ui32Status) const -> void {
	/* CWorld::TriggerExplosion */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x56B790), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x10", 0x3);
	return;
}


auto cSAPatch::WallShot(const unsigned __int32 ui32Status) const -> void {
	// AIM
	this->pMain->patchAddress(reinterpret_cast<void *>(0x740701), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x740703), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x740709), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));

	// No AIM
	this->pMain->patchAddress(reinterpret_cast<void *>(0x740B49), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x740B4B), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x740B51), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));

	// SNIPER
	this->pMain->patchAddress(reinterpret_cast<void *>(0x73620D), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x73620F), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x736215), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::AlwaysCrossHair(const unsigned __int32 ui32Status) const -> void {
	/* CHud::DrawCrossHairs */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58E112), ui32Status ? "\xEB" : "\x74", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58E238), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::QuickCrossHair(const unsigned __int32 ui32Status) const -> void {
	/* CHud::DrawCrossHairs */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58E1CF), ui32Status ? nullptr : "\x35", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::FastSpawn(const unsigned __int32 ui32Status) const -> void {
	/* CGameLogic::Update */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x442D18), ui32Status ? nullptr : "\x89\x0D\xAC\xA8\x96\x00", 0x6);
	return;
}


auto cSAPatch::NoSpreadPro(const unsigned __int32 ui32Status) const -> void {
	/* fPlayerAimScale */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8D6110), ui32Status ? nullptr : "\x00\x00\x40\x3F", 0x4, *reinterpret_cast<const bool *>(&ui32Status)); // 0.75
	return;
}


auto cSAPatch::SprintSpeed(const unsigned __int32 ui32Status, const float *pSprintSpeed) const -> void {
	/* CPed::CalculateNewVelocity */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5E52B5), &pSprintSpeed, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5E52B5), "\x24\x86\x85\x00", 0x4);
	} return;
}


auto cSAPatch::JetPackSpeed(const unsigned __int32 ui32Status, const float *pJetPackSpeed) const -> void {
	/* CTaskSimpleJetPack::ProcessThrust */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8703DA), ui32Status ? "\xFA\x43" : "\xC8\x42", 0x2); // Height
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F11F + 0x2), &pJetPackSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F132 + 0x2), &pJetPackSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F2BC + 0x2), &pJetPackSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F2C8 + 0x2), &pJetPackSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F3A4 + 0x2), &pJetPackSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F3AE + 0x2), &pJetPackSpeed, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F11F + 0x2), "\x84\x39\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F132 + 0x2), "\x84\x39\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F2BC + 0x2), "\x84\x39\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F2C8 + 0x2), "\x84\x39\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F3A4 + 0x2), "\x84\x39\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x67F3AE + 0x2), "\x84\x39\x86\x00", 0x4);
	} return;
}


auto cSAPatch::NoJetPackDropPickup(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleJetPack::DropJetPack */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x67B671), ui32Status ? "\xEB" : "\x75", 0x1);
	return;
}


auto cSAPatch::NoJetPackSounds(const unsigned __int32 ui32Status) const -> void {
	/* CAEPedAudioEntity::UpdateJetPack */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4E0EE0), ui32Status ? "\xC2\x08\x00\x90\x90\x90" : "\x8A\x81\x98\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::HudPercentage(const unsigned __int32 ui32Status, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) const -> void {
	/* CHud__RenderHealthBar | CSprite2d::DrawBarChart */
	// Percentage
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589354 + 1), ui32Status ? "\x01" : nullptr, 0x1, !ui32Status);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589124 + 1), ui32Status ? "\x01" : nullptr, 0x1, !ui32Status);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589208 + 1), ui32Status ? "\x01" : nullptr, 0x1, !ui32Status);
	// Font
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7289EC + 1), ui32Status ? "\x02" : "\x01", 0x1);
	// Alignment
	this->pMain->patchAddress(reinterpret_cast<void *>(0x728A51 + 1), ui32Status ? "\x01" : "\x02", 0x1);

	// Color
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x7289D2 + 1), &ui8R, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x7289D0 + 1), &ui8G, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x7289CE + 1), &ui8B, 0x1);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x7289D2 + 1), nullptr, 0x1, true);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x7289D0 + 1), nullptr, 0x1, true);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x7289CE + 1), nullptr, 0x1, true);
	} return;
}


auto cSAPatch::NoHudBorder(const unsigned __int32 ui32Status) const -> void {
	/* ... */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589352 + 1), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589122 + 1), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589206 + 1), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58F58C + 1), ui32Status ? "\x01" : "\x02", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58EB6F + 1), ui32Status ? "\x01" : "\x02", 0x1);
	return;
}


auto cSAPatch::ForegroundWork(const unsigned __int32 ui32Status) const -> void {
	/* ... */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x747FB6), ui32Status ? "\x01" : nullptr, 0x1, !*reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x74805A), ui32Status ? "\x01" : nullptr, 0x1, !*reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53E9A6), ui32Status ? nullptr : "\x0F\x84\x5D\x02\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53EA88), ui32Status ? nullptr : "\x0F\x84\x7B\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x74542B), ui32Status ? nullptr : "\x50\x51\xFF\x15\x00\x83\x85\x00", 0x8);
	return;
}


auto cSAPatch::NoCamCollision(const unsigned __int32 ui32Status) const -> void {
	/* CheckCameraCollisionPeds */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x415320), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x18", 0x3);
	/* CheckCameraCollisionBuildings */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x41A820), ui32Status ? "\xC3\x90\x90\x90" : "\x8B\x44\x24\x04", 0x4);
	/* CheckCameraCollisionVehicles */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x41A990), ui32Status ? "\xC3\x90\x90\x90" : "\x8B\x44\x24\x08", 0x4);
	/* CheckCameraCollisionObjects */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x41AB20), ui32Status ? "\xC3\x90\x90\x90" : "\x8B\x44\x24\x08", 0x4);
	return;
}


auto cSAPatch::DisableEffects(const unsigned __int32 ui32Status) const -> void {
	/* RenderEffects */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53E170), ui32Status ? "\xE9\x6B\x65\x1C" : "\xE8\x9B\x46\x1D", 0x4);
	return;
}


auto cSAPatch::DrawDistance(const unsigned __int32 ui32Status, const float *pDrawDistance) const -> void {
	/* ... */
	if (ui32Status) {
		/* CurrentFarClip */
		cMP::LauncherType != cMP::eLauncherType::eArizona ? this->pMain->patchAddress(reinterpret_cast<void *>(0x53EA95), &pDrawDistance, 0x4) : true;
		this->pMain->patchAddress(reinterpret_cast<void *>(0x53DC7B), &pDrawDistance, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x53DCB8), &pDrawDistance, 0x4);
	} else {
		/* CurrentFarClip */
		cMP::LauncherType != cMP::eLauncherType::eArizona ? this->pMain->patchAddress(reinterpret_cast<void *>(0x53EA95), "\xF0\xC4\xB7\x00", 0x4) : true;
		this->pMain->patchAddress(reinterpret_cast<void *>(0x53DC7B), "\xF0\xC4\xB7\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x53DCB8), "\xF0\xC4\xB7\x00", 0x4);
	} return;
}


auto cSAPatch::NoZerosInMoney(const unsigned __int32 ui32Status) const -> void {
	/* ... */
	if (cMP::LauncherType != cMP::eLauncherType::eArizona) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x866C96), ui32Status ? "\x64\x00" : "\x30\x38", 0x2);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x866C8F), ui32Status ? "\x64\x00" : "\x30\x37", 0x2);
	} return;
}


auto cSAPatch::NoClosedDoors(const unsigned __int32 ui32Status) const -> void {
	/* ... */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x63E40F), ui32Status ? "\xEB\xBA" : "\x6A\x1C", 0x2);
	return;
}


auto cSAPatch::NoPlaneHeightLimit(const unsigned __int32 ui32Status) const -> void {
	/* CVehicle::HeightAboveCeiling */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D261D), ui32Status ? "\xEB" : "\x7B", 0x1);
	return;
}


auto cSAPatch::AlwaysVehEnterExit(const unsigned __int32 ui32Status) const -> void {
	/* IsRoomForPedToLeaveCar */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6504C0), ui32Status ? "\xB0\x01\xC3\x90\x90\x90" : "\x81\xEC\x88\x00\x00\x00", 0x6);
	/* CVehicle::CanPedJumpOutCar */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D2030), ui32Status ? "\xB0\x01\xC2\x04\x00\x90\x90\x90\x90" : "\x56\x8B\xF1\x8B\x8E\x90\x05\x00\x00", 0x9);
	/* CVehicle::CanPedStepOutCar */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D1F30), ui32Status ? "\xB0\x01\xC2\x04\x00\x90" : "\x83\xEC\x0C\x8B\x41\x14", 0x6);
	/* CCarEnterExit::IsVehicleStealable */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6510D0), ui32Status ? "\xB0\x01\xC3" : "\x83\xEC\x30", 0x3);
	/* CTaskSimpleCarWaitForDoorNotToBeInUse::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x646C95), ui32Status ? nullptr : "\x75\x05", 0x2);
	return;
}


auto cSAPatch::BunnyHopSpeed(const unsigned __int32 ui32Status, const float *pBunnyHopSpeed) const -> void {
	/* CTaskSimpleJump::Launch */
	/* Patch set X/Y */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x679BA8), ui32Status ? "\xEB\x42" : "\x74\x17", 0x2);
	if (ui32Status) {
		/* Patch move force speed */
		this->pMain->patchAddress(reinterpret_cast<void *>(0x679B84), &pBunnyHopSpeed, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x679B84), "\xB0\x03\x87\x00", 0x4);
	} return;
}


auto cSAPatch::BunnyHopHeight(const unsigned __int32 ui32Status, const float *pBunnyHopHeight) const -> void {
	/* CTaskSimpleJump::Launch | CTaskSimpleSwim::ProcessSwimmingResistance */
	/* Patch "test" for cheat MegaJump is ON */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x679C41), ui32Status ? nullptr : "\x74\x19", 0x2);
	if (ui32Status) {
		/* Patch move force speed */
		this->pMain->patchAddress(reinterpret_cast<void *>(0x679C54), &pBunnyHopHeight, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x68A37F), &pBunnyHopHeight, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x679C54), "\x2C\x86\x85\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x68A37F), "\xDC\x08\x87\x00", 0x4);
	} return;
}


auto cSAPatch::ColorfulSmoke(const unsigned __int32 ui32Status, const float *fR, const float *fG, const float *fB) const -> void {
	/* FxEmitter_c::CreateParticle */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x4A260D), &fR, 0x4); // R
		this->pMain->patchAddress(reinterpret_cast<void *>(0x4A261E), &fG, 0x4); // G
		this->pMain->patchAddress(reinterpret_cast<void *>(0x4A262F), &fB, 0x4); // B
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x4A260D), "\xAC\x9A\x85\x00", 0x4); // R
		this->pMain->patchAddress(reinterpret_cast<void *>(0x4A261E), "\xAC\x9A\x85\x00", 0x4); // G
		this->pMain->patchAddress(reinterpret_cast<void *>(0x4A262F), "\xAC\x9A\x85\x00", 0x4); // B
	} return;
}


auto cSAPatch::GunRun(const unsigned __int32 ui32Status) const -> void {
	/* sub_6883D7 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x688597), ui32Status ? nullptr : "\x0F\x85\xCA\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x66D8ED), ui32Status ? nullptr : "\x0F\x85\xAC\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::GunJump(const unsigned __int32 ui32Status) const -> void {
	/* sub_6883D7 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6886F8), ui32Status ? nullptr : "\x0F\x85\xDF\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::RapidFire(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleUseGun::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62A8EA), ui32Status ? nullptr : "\x0F\x84\xAA\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::AlwaysDriftSmoke(const unsigned __int32 ui32Status) const -> void {
	/* sub_6DE886 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6DEBAE), ui32Status ? "\xE9\x37\x01\x00\x00\x90" : "\x0F\x84\xE3\x05\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6DED08), ui32Status ? nullptr : "\x0F\x84\x87\x01\x00\x00", 0x6);
	return;
}


auto cSAPatch::AlwaysWeaponSwitch(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerPed::ProcessWeaponSwitch */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60D85B), ui32Status ? nullptr : "\x0F\x85\x5B\x03\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60D869), ui32Status ? nullptr : "\x0F\x85\x4D\x03\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60D87C), ui32Status ? nullptr : "\x0F\x85\x3A\x03\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60D88E), ui32Status ? nullptr : "\x0F\x85\x2A\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60D8A0), ui32Status ? "\xEB\x1B\x90\x90\x90\x90" : "\x0F\x85\x18\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60D8D6), ui32Status ? "\xEB\x54\x90\x90\x90\x90" : "\x0F\x84\xE2\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60DA95), ui32Status ? "\xEB\x2C\x90\x90\x90\x90" : "\x0F\x84\x23\xFF\xFF\xFF", 0x6);
	return;
}


auto cSAPatch::AllSkills(const unsigned __int32 ui32Status) const -> void {
	/* CPed::GetWeaponSkill */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E3BE0), ui32Status ? "\xEB\xD2\x90" : "\x5F\x32\xC0", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x61E4B6), ui32Status ? nullptr : "\x74\x2C", 0x2);
	return;
}


auto cSAPatch::AlwaysDuck(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleDuck::CanPedDuck */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x692610), ui32Status ? "\xB0\x01\xC3\x90\x90" : "\x56\x8B\x74\x24\x08", 0x5);
	return;
}


auto cSAPatch::QuickInterior(const unsigned __int32 ui32Status) const -> void {
	/* CEntryExit::TransitionFinished */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4404FD), ui32Status ? "\xE9\x76\x01\x00\x00\x90" : "\x0F\x85\x75\x01\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoInertia(const unsigned __int32 ui32Status) const -> void {
	/* CPhysical::ApplyCollisionAlt */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x544D50), ui32Status ? "\xC2\x14\x00" : "\x83\xEC\x68", 0x3);
	return;
}


auto cSAPatch::LongBulletTrack(const unsigned __int32 ui32Status) const -> void {
	/* CBulletTraces::AddTrace */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x726CE2), ui32Status ? "\x88\x13" : "\x2C\x01", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x726CDE), ui32Status ? "\xFF" : "\x46", 0x1);
	return;
}


auto cSAPatch::DayVehLights(const unsigned __int32 ui32Status) const -> void {
	/* CVehicle::GetVehicleLightsStatus */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6D55C0), ui32Status ? "\xB0\x01\xC3\x90\x90\x90" : "\x51\xA0\x53\x01\xB7\x00", 0x6);
	return;
}


auto cSAPatch::LongLights(const unsigned __int32 ui32Status, const float *pLongLights) const -> void {
	/* CVehicle::DoHeadLightReflectionTwin | CVehicle::DoHeadLightReflectionSingle */

	/* Fix camera distance */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x70C58B), ui32Status ? "\xEB" : "\x7B", 0x1);
	/* Fix brightness on camera move */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x70C5ED), ui32Status ? "\xEB" : "\x7B", 0x1);

	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1537), &pLongLights, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E16A3), &pLongLights, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1537), "\x90\x8B\x85\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E16A3), "\x90\x8B\x85\x00", 0x4);
	} return;
}


auto cSAPatch::BrightnessLights(const unsigned __int32 ui32Status, const unsigned __int8 ui8BrightnessLights) const -> void {
	/* CVehicle::DoHeadLightReflectionTwin | CVehicle::DoHeadLightReflectionSingle */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1556), &ui8BrightnessLights, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E155E), &ui8BrightnessLights, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1560), &ui8BrightnessLights, 0x1);

		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1685), &ui8BrightnessLights, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1687), &ui8BrightnessLights, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1689), &ui8BrightnessLights, 0x1);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1556), "\x2D", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E155E), "\x2D", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1560), "\x2D", 0x1);

		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1685), "\x2D", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1687), "\x2D", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6E1689), "\x2D", 0x1);
	} return;
}


auto cSAPatch::AlwaysGlide(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleUseGun::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62A578), ui32Status ? nullptr : "\x74\x13", 0x2);
	return;
}


auto cSAPatch::NoModelLimit(const unsigned __int32 ui32Status) const -> void {
	/* CVisibilityPlugins::RenderPedCB | CVisibilityPlugins::RenderWeaponCB | CVisibilityPlugins::SetupVehicleVariables | CRenderer::ScanBigBuildingList */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x733600), ui32Status ? nullptr : "\x7A\x29", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7336D4), ui32Status ? nullptr : "\x75\x09", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0xC88020), nullptr, 0x4, true); // gVehicleAngleToCamera	| AUTO RESET
	this->pMain->patchAddress(reinterpret_cast<void *>(0xC88024), nullptr, 0x4, true); // gVehicleDistanceFromCamera | AUTO RESET
	this->pMain->patchAddress(reinterpret_cast<void *>(0x733160), ui32Status ? "\xC3\x90\x90\x90" : "\x8B\x44\x24\x04", 0x4);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x554C13), ui32Status ? nullptr : "\x74\x33", 0x2);
	return;
}


auto cSAPatch::WeaponWallHack(const unsigned __int32 ui32Status) const -> void {
	/* CVisibilityPlugins::RenderWeaponPedsForPC */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x732F3F + 0x1), ui32Status ? nullptr : "\x01", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::RadarStreamSize(const unsigned __int32 ui32Status) const -> void {
	/* CRadar::DrawMap */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x586C9D), ui32Status ? "\x96" : "\x34", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x586B4A), ui32Status ? "\xE9\x46\x01\x00\x00\x90" : "\x0F\x84\xB8\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::InfiniteAmmo(const unsigned __int32 ui32Status) const -> void {
	/* CWeapon::Fire | CWeapon::FireFromCar */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7428E6), ui32Status ? nullptr : "\xFF\x4E\x0C", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x73FAAF), ui32Status ? nullptr : "\xFF\x4E\x0C", 0x3);
	return;
}


auto cSAPatch::NoReload(const unsigned __int32 ui32Status) const -> void {
	/* CWeapon::Fire */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7428F5), ui32Status ? "\xE9\xB1\x00\x00\x00\x90" : "\x0F\x85\xB0\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::AllowDropJetPack(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleJetPack::ProcessControlInput */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x67E827), ui32Status ? nullptr : "\x74\x26", 0x2);
	return;
}


auto cSAPatch::RenderGrass(const unsigned __int32 ui32Status) const -> void {
	/* CGame::Process */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53C159), ui32Status ? "\xE8\x42\x0E\x0A\x00" : nullptr, 0x5);
	return;
}


auto cSAPatch::SunMoon(const unsigned __int32 ui32Status) const -> void {
	/* CGame::Process */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53C136), ui32Status ? "\xE8\x65\x04\x1C\x00" : nullptr, 0x5);
	return;
}


auto cSAPatch::UseGameCheats(const unsigned __int32 ui32Status) const -> void {
	/* CPad__AddToPCCheatString */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x438576), ui32Status ? "\xC6\x05\x8C\x91\x96\x00\x01" : "\xFF\x25\xAA\x85\x43\x00\x90", 0x7);
	return;
}


auto cSAPatch::FullAiming(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleCarDrive::ProcessPed | CCam::Process_AimWeapon */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6446BD), ui32Status ? nullptr : "\x0F\x84\x94\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5227C7), ui32Status ? nullptr : "\xD9\x9E\xBC\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5225DD), ui32Status ? nullptr : "\xD9\x9E\xAC\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::DrawBlurOnSpeed(const unsigned __int32 ui32Status, const unsigned __int8 ui8BlurIntensity, const unsigned __int8 ui8R, const unsigned __int8 ui8G, const unsigned __int8 ui8B) const -> void {
	/* RenderEffects | DrawBlur */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x704E8A), ui32Status ? "\xE8\x11\xE2\xFF\xFF" : nullptr, 0x5);
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x8D5104), &ui8BlurIntensity, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x703338 + 0x1), &ui8R, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x70332F + 0x1), &ui8G, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x70332A + 0x1), &ui8B, 0x1);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x8D5104), "\x24", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x703338 + 0x1), "\xFF", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x70332F + 0x1), "\xFF", 0x1); 
		this->pMain->patchAddress(reinterpret_cast<void *>(0x70332A + 0x1), "\xFF", 0x1); 
	} return;
}


auto cSAPatch::NoLeaveVehUnderWorld(const unsigned __int32 ui32Status, const float *pLimit) const -> void {
	/* CWorld::RemoveFallenCars */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x565ED2 + 0x2), &pLimit, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x565ED2 + 0x2), "\x14\x90\x85\x00", 0x4);
	} return;
}


auto cSAPatch::NeverDrunk(const unsigned __int32 ui32Status) const -> void {
	/* CMBlur::SetDrunkBlur */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x71D730), ui32Status ? "\xC3\x90\x90\x90" : "\xD9\x44\x24\x04", 0x4);
	return;
}


auto cSAPatch::DrawVehNames(const unsigned __int32 ui32Status) const -> void {
	/* CHud::Draw */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58FBE9), ui32Status ? "\xE8\xB2\xB2\xFF\xFF" : nullptr, 0x5);
	return;
}


auto cSAPatch::LightMap(const unsigned __int32 ui32Status) const -> void {
	/* SetLightsWithTimeOfDayColour */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x73558B), ui32Status ? nullptr : "\x74\x3C", 0x2);
	return;
}


auto cSAPatch::HPBar160(const unsigned __int32 ui32Status) const -> void {
	/* 0xB793E0 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0xB793E1), ui32Status ? "\x00\x64" : "\x40\x0E", 0x2);
	return;
}


auto cSAPatch::AlwaysRainOnVeh(const unsigned __int32 ui32Status) const -> void {
	/* sub_408C8C */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6AB2DF), ui32Status ? nullptr : "\x7A\x23", 0x2);
	return;
}


auto cSAPatch::BlipScaler(const unsigned __int32 ui32Status, const unsigned __int8 ui8Size) const -> void {
	/* CRunningScript::ProcessCommands300To399 */
	if (ui32Status) {
		// Short Range
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47CEED + 0x1), &ui8Size, 0x1);
		// Long Range
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47C76D), "\xBA", 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47C76D + 0x1), nullptr, 0x4, true);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47C76D + 0x1), &ui8Size, 0x1);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47C76D + 0x5), nullptr, 0x1);
	} else {
		// Short Range
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47CEED + 0x1), "\x03", 0x1);
		// Long Range
		this->pMain->patchAddress(reinterpret_cast<void *>(0x47C76D), "\x8B\x15\x7C\x3C\xA4\x00", 0x6);
	} return;
}


auto cSAPatch::PlayerBlipScale(const unsigned __int32 ui32Status, const float *pSize) const -> void {
	/* CRadar::DrawBlips */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5886DA + 0x2), &pSize, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5886DA + 0x2), "\x00\x90\x85\x00", 0x4);
	} return;
}


auto cSAPatch::NoBlipInfelicity(const unsigned __int32 ui32Status) const -> void {
	/* CRadar::DrawEntityBlip */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x587B3E), ui32Status ? nullptr : "\xD8\x05\x90\x8B\x85\x00", 0x6);
	return;
}


auto cSAPatch::NoNorthBlip(const unsigned __int32 ui32Status) const -> void {
	/* CRadar::DrawBlips */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58812B), ui32Status ? "\xE9\xB3\x01\x00\x00\x90\x90\x90" : "\x75\x68\xD9\x05\x14\x83\xBA\x00", 0x8);
	return;
}


auto cSAPatch::NoGaragesCamera(const unsigned __int32 ui32Status) const -> void {
	/* CGarages__CameraShouldBeOutside */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x448650), ui32Status ? "\xB0\x00\xC3\x90\x90" : "\xE9\x2B\xCA\x11\x01", 0x5);
	return;
}


auto cSAPatch::HudClock(const unsigned __int32 ui32Status) const -> void {
	/* a02d02d[] */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x859A6C), ui32Status ? "\x25\x30\x32\x64\x3A\x25\x30\x32\x64\x00" : nullptr, 0xA, !ui32Status);
	return;
}


auto cSAPatch::NoWaterCollision(const unsigned __int32 ui32Status) const -> void {
	/* cBuoyancy::ProcessBuoyancy */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6C3EF0), ui32Status ? "\xB0\x00\xC2\x10\x00" : "\x83\xEC\x24\x53\x55", 0x5);
	return;
}


auto cSAPatch::AirBreak(const unsigned __int32 ui32Status) const -> void {
	/* CPhysical::ProcessControl | CAutomobile::GetHeightAboveRoad | CPed::UpdatePosition | CPedGeometryAnalyser::IsInAir | CPed::Teleport */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6A62B0), ui32Status ? nullptr : "\xD9\x81\x98\x08\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E411C), ui32Status ? nullptr : "\x74\x1C", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E4121), ui32Status ? nullptr : "\x74\x17", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E1B10), ui32Status ? "\xC3\x90\x90\x90\x90" : "\xA0\x88\x30\xA4\x00", 0x5);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5F1CC2), ui32Status ? "\xE9\x57\x01\x00\x00\x90" : "\x0F\x85\x56\x01\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoWetRoads(const unsigned __int32 ui32Status) const -> void {
	/* CWeather::Update */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x72BB8B), ui32Status ? "\xEB\x4A" : "\x74\x06", 0x2);
	return;
}


auto cSAPatch::NoUpsideDownAnim(const unsigned __int32 ui32Status) const -> void {
	/* CUpsideDownCarCheck::IsCarUpsideDown */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x463830), ui32Status ? "\xB0\x00\xC2\x04\x00\x90\x90\x90\x90\x90" : "\x8B\x4C\x24\x04\x8B\x81\x90\x05\x00\x00", 0xA);
	return;
}


auto cSAPatch::Ripazha(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::ProcessFlyingCarStuff */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6A8500), ui32Status ? "\x8A\x41\x36\xC0\xE8\x03\x84\xC0\x74\x08\x3C\x08\x74\x04\x3C\x03\x75\x65\xA0\x60\x91\x96\x00\x84\xC0\x90\x90\xD9\x41\x4C\xD9\x41\x48\xD9\x41\x44\xD9\xC0\xD8\xC9\xD9\xC2\xD8\xCB\xDE\xC1\xD9\xC3\xD8\xCC\xDE\xC1\xD9\xFA\xDD\xDB\xDD\xD8\xDD\xD8\xD8\x1D\x50\x8B\x85\x00\xDF\xE0\xF6\xC4\x41\x75\x2E\xD9\x05\x5C\xCB\xB7\x00\xD8\x1D\x50\x8B\x85\x00\xDF\xE0\xF6\xC4\x41\x75\x1B\x68\xF6\x3F\x1C\xC6\x68\xF6\x3F\x1C\xC6\x68\xF6\x3F\x1C\xC6\x68\xF6\x3F\x1C\xC6\x6A\x03\xE8\x79\x00\x03\x00\xC3" : "\xC3\x90\x90", ui32Status ? 0x78 : 0x3);
	return;
}


auto cSAPatch::NoBladeRotating(const unsigned __int32 ui32Status) const -> void {
	/* sub_6DAF07 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x871D9C), ui32Status ? nullptr : "\xCD\xCC\x4C\x3E", 0x4, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::SpeechMore(const unsigned __int32 ui32Status) const -> void {
	/* CAEPedSpeechAudioEntity::AddSayEvent */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4E67B3), ui32Status ? nullptr : "\x0F\x82\x20\xFF\xFF\xFF", 0x6);
	return;
}


auto cSAPatch::NoCameraResetAfterAim(const unsigned __int32 ui32Status) const -> void {
	/* CCam::Process_AimWeapon | CCam::Process_FollowPed_SA */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5231A6), ui32Status ? "\xEB" : "\x75", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52322D), ui32Status ? "\xEB" : "\x75", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5233BA), ui32Status ? "\xEB" : "\x75", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x523402), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::CutCameraAnim(const unsigned __int32 ui32Status) const -> void {
	/* CCamera::Process */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52BA76), ui32Status ? "\xE9\x5E\x09\x00\x00\x90" : "\x0F\x84\x5D\x09\x00\x00", 0x6);
	return;
}


auto cSAPatch::LightPedsVehs(const unsigned __int32 ui32Status) const -> void {
	/* __rxD3D9VertexShaderDefaultLightingCallBack | CPhysical::GetLightingFromCol */
	//this->pMain->patchAddress(reinterpret_cast<void *>(0x76121B), ui32Status ? nullptr : "\x74\x45", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x863C10), ui32Status ? "\x00\x00\xC0\x40" : "\x9F\xAA\xAA\x3E", 0x4);
	return;
}


auto cSAPatch::NoPedStopAnim(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerPed::SetRealMoveAnim */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60AABC), ui32Status ? nullptr : "\x75\x0A", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60AAC6), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::NoRadio(const unsigned __int32 ui32Status) const -> void {
	/* CAERadioTrackManager::Service */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4EA042), ui32Status ? nullptr : "\x74\x0D", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4EB66C), ui32Status ? "\xE9\x12\x02\x00\x00\x90" : "\x0F\x84\x11\x02\x00\x00", 0x6);
	return;
}


auto cSAPatch::FixedAmmoDraw(const unsigned __int32 ui32Status) const -> void {
	/* CPed::GiveWeapon | CHud__DrawAmmo */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E60DD), ui32Status ? "\xEB" : "\x7C", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58955A), ui32Status ? nullptr : "\x0F\x8B\xE0\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58956B), ui32Status ? nullptr : "\x0F\x8B\xD1\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589470), ui32Status ? "\xEB" : "\x7E", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x589436), ui32Status ? nullptr : "\x7F\x02", 0x2);
	return;
}


auto cSAPatch::MatrixSkins(const unsigned __int32 ui32Status) const -> void {
	/* __rxD3D9VertexShaderDefaultMeshRenderCallBack */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x76106A + 0x1), ui32Status ? nullptr : "\x04", 0x1, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::NoFall(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleInAir::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x680B7A), ui32Status ? "\xE9\xFB\xFE\xFF\xFF\x90" : "\x0F\x84\xFA\xFE\xFF\xFF", 0x6);
	return;
}


auto cSAPatch::NoAngleDelay(const unsigned __int32 ui32Status) const -> void {
	/* CPed::CalculateNewVelocity | CTaskSimpleSwim::ProcessControlInput */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E4DF6), ui32Status ? "\xEB" : "\x75", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E4DA1), ui32Status ? "\xEB" : "\x75", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x870884), ui32Status ? "\x8F\xC2\xF5\x3D" : "\x0A\xD7\xA3\x3C", 0x4);
	return;
}


auto cSAPatch::NoWindSound(const unsigned __int32 ui32Status) const -> void {
	/* XXX */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x505BF2), ui32Status ? "\xE9\xB9\x0B\x00\x00\x90" : "\x0F\x85\xB8\x0B\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x506694), ui32Status ? "\xE9\x17\x01\x00\x00\x90" : "\x0F\x85\x16\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x50538C), ui32Status ? "\xE9\x01\x02\x00\x00\x90" : "\x0F\x85\x00\x02\x00\x00", 0x6);
	return;
}


auto cSAPatch::FishEye(const unsigned __int32 ui32Status) const -> void {
	/* ... */
	this->pMain->patchAddress(reinterpret_cast<void *>(0xB6F252), ui32Status ? "\xC8" : "\x8C", 0x1); // FishEye
	this->pMain->patchAddress(reinterpret_cast<void *>(0x522F19), ui32Status ? "\xEB" : "\x75", 0x1); // No PED reset
	this->pMain->patchAddress(reinterpret_cast<void *>(0x521660), ui32Status ? "\xEB" : "\x75", 0x1); // No PED Weap reset 1
	this->pMain->patchAddress(reinterpret_cast<void *>(0x511B71), ui32Status ? nullptr : "\xC7\x86\xB4\x00\x00\x00\x00\x00\x8C\x42", 0xA); // No PED Weap reset 2
	this->pMain->patchAddress(reinterpret_cast<void *>(0x51D5AB), ui32Status ? nullptr : "\xC7\x87\xB4\x00\x00\x00\x00\x00\x8C\x42", 0xA); // No PED Interior reset 1
	this->pMain->patchAddress(reinterpret_cast<void *>(0x51D5BC), ui32Status ? "\xEB" : "\x75", 0x1); // No PED Interior reset 2
	this->pMain->patchAddress(reinterpret_cast<void *>(0x524B7F), ui32Status ? "\xEB" : "\x75", 0x1); // No Veh reset 1
	this->pMain->patchAddress(reinterpret_cast<void *>(0x524BBF), ui32Status ? nullptr : "\xC7\x86\xB4\x00\x00\x00\x00\x00\xC8\x42", 0xA); // No Veh reset 2
	this->pMain->patchAddress(reinterpret_cast<void *>(0x524BDE), ui32Status ? nullptr : "\xC7\x86\xB4\x00\x00\x00\x00\x00\x8C\x42", 0xA); // No Veh reset 3
	this->pMain->patchAddress(reinterpret_cast<void *>(0x524B3E), ui32Status ? "\xEB" : "\x75", 0x1); // No Veh SPEED reset
	this->pMain->patchAddress(reinterpret_cast<void *>(0x517EB4), ui32Status ? nullptr : "\xC7\x86\xB4\x00\x00\x00\x00\x00\x8C\x42", 0xA); // Vehicle Camera FIX 1
	this->pMain->patchAddress(reinterpret_cast<void *>(0x518145), ui32Status ? nullptr : "\xC7\x86\xB4\x00\x00\x00\x00\x00\x70\x42", 0xA); // Vehicle Camera FIX 2
	this->pMain->patchAddress(reinterpret_cast<void *>(0x50DED2), ui32Status ? nullptr : "\x89\x8B\xB4\x00\x00\x00", 0x6); // Vehicle Camera FIX 3
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5108A8), ui32Status ? "\xEB" : "\x75", 0x1); // Camera/Sniper FIX 1
	this->pMain->patchAddress(reinterpret_cast<void *>(0x509BB4), ui32Status ? "\xC3\x90\x90" : "\xF6\xC4\x05", 0x3); // Camera/Sniper FIX 2
	this->pMain->patchAddress(reinterpret_cast<void *>(0x510861), ui32Status ? "\xEB" : "\x74", 0x1); // Camera/Sniper FIX 3
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5108E9), ui32Status ? "\xEB" : "\x74", 0x1); // Camera/Sniper FIX 4
	return;
}


auto cSAPatch::NoFog(const unsigned __int32 ui32Status) const -> void {
	/* fFarPlane */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7FE654), ui32Status ? nullptr : "\x89\x0D\xF8\x92\xC9\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0xC992F8), ui32Status ? "\x00\x60\xEA\x46" : "\x00\x00\x48\x44", 0x4);
	return;
}


auto cSAPatch::DisableCarMoveZ(const unsigned __int32 ui32Status) const -> void {
	/* CPhysical::ProcessShiftSectorList */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x546CB4), ui32Status ? nullptr : "\xD8\x47\x4C", 0x3);
	return;
}


auto cSAPatch::WaterProofEngine(const unsigned __int32 ui32Status) const -> void {
	/* UNK */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6A90C5), ui32Status ? "\xEB" : "\x7A", 0x1);
	return;
}


auto cSAPatch::NoClouds(const unsigned __int32 ui32Status) const -> void {
	/* CClouds::RenderBottomFromHeight | CClouds::VolumetricCloudsRender */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7154B0), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x44", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x716380), ui32Status ? "\xC3\x90\x90\x90\x90" : "\xA1\x14\x29\xB7\x00", 0x5);
	return;
}


auto cSAPatch::NoLODs(const unsigned __int32 ui32Status) const -> void {
	/* CRenderer::ConstructRenderList | CCamera::Process | flt_858FD8 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8CD809), ui32Status ? "\x40\x1C\xC6" : "\x00\xA0\x42", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8CD810), ui32Status ? "\x00\x40\x1C\x46" : "\xCD\xCC\x0C\x40", 0x4);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x52C9FD), ui32Status ? nullptr : "\xD8\x8E\xF0\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x858FDA), ui32Status ? "\x7A\x44" : "\x96\x43", 0x2);
	return;
}


auto cSAPatch::NoParaAfterLeaveFlyVeh(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerInfo::Process */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5704CB), ui32Status ? nullptr : "\xE8\x70\xE7\xFF\xFF", 0x5);
	return;
}


auto cSAPatch::SpeedHackMenuMap(const unsigned __int32 ui32Status, const float *pZoomSpeed, const float *pMoveSpeed) const -> void {
	/* CMenuManager::AdditionalOptionInput */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x57769A), &pZoomSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5779C9), &pZoomSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x578652), &pMoveSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5784B7), &pMoveSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x577E72), &pMoveSpeed, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x578322), &pMoveSpeed, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x57769A), "\xE4\x53\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5779C9), "\xE4\x53\x86\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x578652), "\x48\x8F\x85\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x5784B7), "\x48\x8F\x85\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x577E72), "\x48\x8F\x85\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x578322), "\x48\x8F\x85\x00", 0x4);
	} return;
}


auto cSAPatch::DarkShadows(const unsigned __int32 ui32Status) const -> void {
	/* _gRenderStencil */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x71162C), ui32Status ? "\xFF" : "\x50", 0x1);
	return;
}


auto cSAPatch::NoDarkUnderWater(const unsigned __int32 ui32Status) const -> void {
	/* RenderEffects */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x705138), ui32Status ? nullptr : "\x74\x0F", 0x2);
	return;
}


auto cSAPatch::LockCameraTargetEntity(const unsigned __int32 ui32Status) const -> void {
	/* CCamera::UpdateTargetEntity | CCam::Process_FollowPed_SA | CCamera::Process */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4807A3), ui32Status ? nullptr : "\xE8\x08\xB3\x08\x00", 0x5);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x50C4D2), ui32Status ? nullptr : "\x89\x06", 0x2); // PED
	this->pMain->patchAddress(reinterpret_cast<void *>(0x50C4AF), ui32Status ? nullptr : "\x89\x06", 0x2); // AUTO
	if (cMP::LauncherType != cMP::eLauncherType::eNamalsk) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x523E6B), ui32Status ? nullptr : "\x8B\x10", 0x2); // WTF FIX 1
		this->pMain->patchAddress(reinterpret_cast<void *>(0x523E6F), ui32Status ? nullptr : "\xFF\x52\x10", 0x3); // WTF FIX 2
	} return;
}


auto cSAPatch::NoHeatHaze(const unsigned __int32 ui32Status) const -> void {
	/* RenderEffects */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x701780), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x34", 0x3);
	return;
}


auto cSAPatch::AlwaysHUD(const unsigned __int32 ui32Status) const -> void {
	/* CHud::Draw */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58FBCB), ui32Status ? nullptr : "\x74\x13", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x58FBFA), ui32Status ? nullptr : "\x0F\x85\xA6\x00\x00\x00", 0x6); // bShowRadar | 0xBAA3FB
	return;
}


auto cSAPatch::JetPackAnyWeapon(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleJetPack::ProcessControlInput */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x67E7FA), ui32Status ? nullptr : "\x74\x25", 0x2);
	return;
}


auto cSAPatch::NoFallenTeleport(const unsigned __int32 ui32Status) const -> void {
	/* CWorld::RemoveFallenPeds | CWorld::RemoveFallenCars */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x565CB0), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x2C", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x565E80), ui32Status ? "\xC3\x90\x90" : "\x83\xEC\x2C", 0x3);
	return;
}


auto cSAPatch::PlusC(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleUseGun::ProcessPed | sub_624F30 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62AC47), ui32Status ? nullptr : "\x75\x50", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62508D), ui32Status ? nullptr : "\x75\x35", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62509B), ui32Status ? nullptr : "\x74\x27", 0x2);
	return;
}


auto cSAPatch::WallHackRadarTraces(const unsigned __int32 ui32Status) const -> void {
	/* CRadar::DrawCoordBlip | CRadar::HasThisBlipBeenRevealed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x586EC2), ui32Status ? nullptr : "\x8A\x56\x25", 0x3);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x583B0A), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::ObjectPunchPower(const unsigned __int32 ui32Status) const -> void {
	/* sub_40191E */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5A0E1E), ui32Status ? nullptr : "\x7A\x06", 0x2);
	return;
}


auto cSAPatch::StanceStyle(const unsigned __int32 ui32Status, const float *pStanceTotal) const -> void {
	/* CAutomobile::UpdateWheelMatrix */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6AA6EE), ui32Status ? nullptr : "\x0F\x85\x9B\x03\x00\x00", 0x6);
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6AA954), &pStanceTotal, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6AA954), "\x8C\x8B\x85\x00", 0x4);
	} return;
}


auto cSAPatch::FatWheels(const unsigned __int32 ui32Status, const float *pFatTotal) const -> void {
	/* CAutomobile::UpdateWheelMatrix */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6AA656), ui32Status ? nullptr : "\x75\x06", 0x2);
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6AA65A), &pFatTotal, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6AA65A), "\x4C\x10\x87\x00", 0x4);
	} return;
}


auto cSAPatch::InfiniteRun(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerPed::HandleSprintEnergy */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60A570), ui32Status ? "\xEB" : "\x75", 0x1);
	return;
}


auto cSAPatch::DriveOnWater(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::PreRender */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6AAB7D), ui32Status ? nullptr : "\x74\x0A", 0x2);
	return;
}


auto cSAPatch::InfiniteOxygen(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerPed::HandlePlayerBreath */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60A8E2), ui32Status ? "\xEB" : "\x75", 0x1);
	return;
}


auto cSAPatch::PressAuto(const unsigned __int32 ui32Status, const float *pPressAuto) const -> void {
	/* CAutomobile::ProcessControl */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6B2272), &pPressAuto, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6B2272), "\x24\x86\x85\x00", 0x4);
	} return;
}


auto cSAPatch::PowerSteering(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::ProcessControl | flt_C1BFEC | CBike::ProcessControlInputs */
	this->pMain->patchAddress(reinterpret_cast<void *>(0xC1BFEC), ui32Status ? "\x0A\xD7\x23\x3C" : "\x6E\x12\x83\x3B", 0x4);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x871300), ui32Status ? "\x00\x00\x80\x3F" : "\xCD\xCC\x4C\x3E", 0x4);
	return;
}


auto cSAPatch::AlwaysAsphalt(const unsigned __int32 ui32Status) const -> void {
	/* CColPoint::operator= | HOODLUM */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x1563827), ui32Status ? nullptr : "\x66\x8B\x3A", 0x3);
	return;
}


auto cSAPatch::NoTexturesAlpha(const unsigned __int32 ui32Status) const -> void {
	/* CVisibilityPlugins::RenderEntity | CRenderer::RenderOneNonRoad */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x732B77), ui32Status ? "\xE9\x9E\x00\x00\x00\x90" : "\x0F\x89\x9D\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5532B7), ui32Status ? nullptr : "\x75\x10", 0x2);
	return;
}


auto cSAPatch::LongTimeBlood(const unsigned __int32 ui32Status) const -> void {
	/* Fx_c::AddBlood */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x49EB69), ui32Status ? "\x00\x00\xE0\x40" : "\xCD\xCC\x4C\x3F", 0x4);
	return;
}


auto cSAPatch::LockAimAngle(const unsigned __int32 ui32Status) const -> void {
	/* CCam::Process_AimWeapon */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5222C2), ui32Status ? nullptr : "\xD9\x9E\xAC\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5222B6), ui32Status ? nullptr : "\xD9\x9E\xBC\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoCancelJump(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleJump::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x680CD4), ui32Status ? nullptr : "\x75\x1D", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x680CC5), ui32Status ? "\xEB" : "\x75", 0x1);
	return;
}


auto cSAPatch::NoCancelAim(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleUseGun::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62A50B), ui32Status ? nullptr : "\x75\x25", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62A50F), ui32Status ? "\xE9\xBC\x00\x00\x00\x90" : "\x0F\x85\xBB\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62A51C), ui32Status ? nullptr : "\x0F\x84\xAE\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoWaterWaves(const unsigned __int32 ui32Status) const -> void {
	/* CWaterLevel::RenderHighDetailWaterRectangle_OneLayer | CWaterLevel::CalculateWavesOnlyForCoordinate */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6E968A), ui32Status ? nullptr : "\x75\x0A", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6E7210), ui32Status ? "\xC3\x90\x90\x90" : "\x8B\x44\x24\x04", 0x4);
	return;
}


auto cSAPatch::WaterAlpha(const unsigned __int32 ui32Status) const -> void {
	/* CWaterLevel::RenderWater | WaterAlpha | WaterAlphaSecond */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6EFB4A), ui32Status ? nullptr : "\xA3\x0C\x38\x8D\x00", 0x5);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6EFB5C), ui32Status ? nullptr : "\xC7\x05\x08\x38\x8D\x00\xFF\x00\x00\x00", 0xA);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6EFB6B), ui32Status ? "\xEB" : "\x7F", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8D3808), ui32Status ? "\x32" : "\xA0", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8D380C), ui32Status ? "\x32" : "\x5A", 0x1);
	return;
}


auto cSAPatch::WeaponSwitchFire(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerPed::ProcessWeaponSwitch */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60DBDA), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::SubmergedSwimming(const unsigned __int32 ui32Status, const float *pSubmer) const -> void {
	/* CTaskSimpleSwim::ProcessSwimmingResistance */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x68A247), &pSubmer, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x68A247), "\xC4\x08\x87\x00", 0x4);
	} return;
}


auto cSAPatch::WaterForceOfGravity(const unsigned __int32 ui32Status, const float *pForceOfGravity) const -> void {
	/* CTaskSimpleSwim::ProcessSwimmingResistance */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x68A4CC), &pForceOfGravity, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x68A4CC), "\xCC\x08\x87\x00", 0x4);
	} return;
}


auto cSAPatch::FallOnWater(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleSwim::ProcessSwimmingResistance/flt_8708D0 */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8708D0), ui32Status ? nullptr : "\x66\x66\x66\x3F", 0x4, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::SteeringWheelSpeed(const unsigned __int32 ui32Status, const float *pWheelSpeed) const -> void {
	/* CAutomobile::ProcessControlInputs */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6AD927), &pWheelSpeed, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6AD927), "\x58\x10\x87\x00", 0x4);
	} return;
}


auto cSAPatch::EversionOfWheels(const unsigned __int32 ui32Status, const float *pWheelSpeed) const -> void {
	/* CAutomobile::ProcessControlInputs */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6ADD10), &pWheelSpeed, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6ADD10), "\xEC\x95\x85\x00", 0x4);
	} return;
}


auto cSAPatch::AcceleratedRetraction(const unsigned __int32 ui32Status, const float *pRetraction) const -> void {
	/* CTaskSimpleUseGun::ControlGunMove | CTaskSimplePlayerOnFoot::PlayerControlZelda */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x61E0CC), &pRetraction, 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x688522), &pRetraction, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x61E0CC), "\xA8\x8C\x85\x00", 0x4);
		this->pMain->patchAddress(reinterpret_cast<void *>(0x688522), "\xA8\x8C\x85\x00", 0x4);
	} return;
}


auto cSAPatch::NoDayAndNightVision(const unsigned __int32 ui32Status) const -> void {
	/* CPed::AddGogglesModel */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E3AD1), ui32Status ? nullptr : "\xC6\x00\x01", 0x3);
	return;
}


auto cSAPatch::NoSteerBlock(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::ProcessControl */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6B28E7), ui32Status ? "\xE9\x4E\x01\x00\x00\x90" : "\x0F\x85\x4D\x01\x00\x00", 0x6);
	return;
}


auto cSAPatch::HeightSphere(const unsigned __int32 ui32Status) const -> void {
	/* C3dMarker::Render */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7225A8), ui32Status ? nullptr : "\x75\x1B", 0x2);
	return;
}


auto cSAPatch::BoostOnDrift(const unsigned __int32 ui32Status, const float *pBoost) const -> void {
	/* cTransmission::CalculateDriveAcceleration */
	if (ui32Status) {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6D070F), &pBoost, 0x4);
	} else {
		this->pMain->patchAddress(reinterpret_cast<void *>(0x6D070F), "\x24\x86\x85\x00", 0x4);
	} return;
}


auto cSAPatch::LongTimeFootSmoke(const unsigned __int32 ui32Status) const -> void {
	/* particleProduceFootSmoke */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E384E), ui32Status ? nullptr : "\x0F\x84\xFB\x00\x00\x00", 0x6); // Ground test
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E3812), ui32Status ? "\x00\x00\xA0\x40" : "\x9A\x99\x19\x3E", 0x4); // Time
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E393F), ui32Status ? "\x10" : "\x24", 0x1); // Type
	return;
}


auto cSAPatch::NewGunFlash(const unsigned __int32 ui32Status) const -> void {
	/* Fx_c::TriggerGunshot */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4A0F5E), ui32Status ? "\x28" : "\x1C", 0x1);
	return;
}


auto cSAPatch::QuickBikeHop(const unsigned __int32 ui32Status) const -> void {
	/* CBmx::ProcessBunnyHop */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x871516), ui32Status ? "\x80\x3F" : "\xC8\x41", 0x2);
	return;
}


auto cSAPatch::BikeSpinner(const unsigned __int32 ui32Status) const -> void {
	/* CBmx::Process */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x8714C4), ui32Status ? "\x00\x00\x80\x3F" : "\x6F\x12\x03\x3B", 0x4);
	return;
}


auto cSAPatch::ArmOnWindow(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleCarDrive::ProcessBopping | CTaskSimpleCarDrive::ProcessArmBopping */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x642E93), ui32Status ? nullptr : "\x0F\x84\xD3\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x642EEE), ui32Status ? nullptr : "\x74\x7C", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x642AF4), ui32Status ? nullptr : "\x0F\x85\x6E\x03\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x642BF5), ui32Status ? "\xE9\x36\x01\x00\x00\x90" : "\x0F\x85\x35\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x642BE2), ui32Status ? nullptr : "\x0F\x8E\x7E\x02\x00\x00", 0x6);
	return;
}


auto cSAPatch::BigHead(const unsigned __int32 ui32Status, const float fSize) const -> void {
	/* CPed::PreRenderAfterTest */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E6DF3), ui32Status ? nullptr : "\x0F\x89\xB6\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E6E00), ui32Status ? nullptr : "\x0F\x85\xA9\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E6E27), ui32Status ? &fSize : nullptr, 0x4, !*reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E6E2F), ui32Status ? &fSize : nullptr, 0x4, !*reinterpret_cast<const bool *>(&ui32Status));
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E6E37), ui32Status ? &fSize : nullptr, 0x4, !*reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::NoVehStopOnPedLeave(const unsigned __int32 ui32Status) const -> void {
	/* CPed::PositionPedOutOfCollision */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E113F), ui32Status ? nullptr : "\x75\x0B", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5E114A), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::InteriorRunningFix(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimplePlayerOnFoot::PlayerControlZelda */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x688610), ui32Status ? nullptr : "\x75\x40", 0x2);
	return;
}


auto cSAPatch::StaticVehCamera(const unsigned __int32 ui32Status) const -> void {
	/* CPed::PositionPedOutOfCollision */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x525943), ui32Status ? "\xEB" : "\x7F", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5258EC), ui32Status ? nullptr : "\x74\x06", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x525A31), ui32Status ? nullptr : "\x74\x12", 0x2);
	return;
}


auto cSAPatch::QuickParkour(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleClimb::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6814ED), ui32Status ? nullptr : "\x0F\x8A\xAC\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x68150B), ui32Status ? nullptr : "\x0F\x8A\x8E\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x68153D), ui32Status ? nullptr : "\x7A\x60", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6813C7), ui32Status ? nullptr : "\x0F\x8A\xD2\x01\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoVehWheelReset(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::ProcessAI */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6B5579), ui32Status ? nullptr : "\x89\xBE\x94\x04\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6B568A), ui32Status ? nullptr : "\x89\xBE\x94\x04\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6B56EE), ui32Status ? nullptr : "\x89\x86\x94\x04\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoVehInAirRotate(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::ProcessAI */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x871040), ui32Status ? nullptr : "\x0A\xD7\xA3\x3C", 0x4, *reinterpret_cast<const bool *>(&ui32Status));
	return;
}


auto cSAPatch::VehRLRotate(const unsigned __int32 ui32Status) const -> void {
	/* CAutomobile::ProcessAI */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6B4E1C), ui32Status ? nullptr : "\x0F\x85\x8C\x03\x00\x00", 0x6);
	return;
}


auto cSAPatch::WeaponAllAxis(const unsigned __int32 ui32Status) const -> void {
	/* CTaskSimpleUseGun::ProcessPed */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62AE1B), ui32Status ? "\xEB" : "\x75", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62AE30), ui32Status ? nullptr : "\x7A\x06", 0x2);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x62AE5A), ui32Status ? nullptr : "\x74\x19", 0x2);
	return;
}


auto cSAPatch::NoBikeJumpLimit(const unsigned __int32 ui32Status) const -> void {
	/* CBmx::LaunchBunnyHopCB */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6C03BC), ui32Status ? nullptr : "\x0F\x85\x39\x01\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x6C03E6), ui32Status ? nullptr : "\x0F\x85\x0F\x01\x00\x00", 0x6);
	return;
}


auto cSAPatch::FastPassenger(const unsigned __int32 ui32Status) const -> void {
	/* CTaskComplexEnterCarAsPassengerTimed::ControlSubTask */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x63B209), ui32Status ? nullptr : "\x0F\x84\xB6\x00\x00\x00", 0x6);
	return;
}


auto cSAPatch::NoCameraLock(const unsigned __int32 ui32Status) const -> void {
	/* CCamera::ProcessVectorTrackLinear | CCamera::ProcessVectorMoveLinear */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x516461), ui32Status ? "\xEB" : "\x7A", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5164C1), ui32Status ? "\xEB" : "\x7A", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x5164EC), ui32Status ? "\xEB" : "\x74", 0x1);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x51648C), ui32Status ? "\xEB" : "\x74", 0x1);
	return;
}


auto cSAPatch::NoSpeedLock(const unsigned __int32 ui32Status) const -> void {
	/* CCullZones::DoExtraAirResistanceForPlayer */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x72DDD0), ui32Status ? "\xB0\x00\xC3\x90\x90" : "\xA1\xB8\x7A\xC8\x00", 0x5);
	return;
}


auto cSAPatch::NoGameSpeedReset(const unsigned __int32 ui32Status) const -> void {
	/* CPlayerPed::SetInitialState | CMBlur::ClearDrunkBlur */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x401190), ui32Status ? nullptr : "\xC7\x05\x64\xCB\xB7\x00\x00\x00\x80\x3F", 0xA);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x60CD41), ui32Status ? nullptr : "\xC7\x05\x64\xCB\xB7\x00\x00\x00\x80\x3F", 0xA);
	return;
}


auto cSAPatch::NoShadows(const unsigned __int32 ui32Status) const -> void {
	/* _gRenderStencil | RenderScene */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x53E025), ui32Status ? "\xE9\xCD\x00\x00\x00\x90" : "\x0F\x85\xCC\x00\x00\x00", 0x6);
	this->pMain->patchAddress(reinterpret_cast<void *>(0x7113C0), ui32Status ? "\xEB" : "\x7C", 0x1);
	return;
}


auto cSAPatch::MoreVehReflection(const unsigned __int32 ui32Status) const -> void {
	/* PipeRenderCB */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x86BE91), ui32Status ? "\x80\xBB\x44" : "\x00\x7E\x43", 0x3);
	return;
}


auto cSAPatch::FreePayNSpray(const unsigned __int32 ui32Status) const -> void {
	/* CGarage::Update */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x44AC95), ui32Status ? "\xEB" : "\x7D", 0x1);
	return;
}


auto cSAPatch::PickUpInVeh(const unsigned __int32 ui32Status) const -> void {
	/* CPickup::Update */
	this->pMain->patchAddress(reinterpret_cast<void *>(0x4577F9), ui32Status ? nullptr : "\x0F\x85\x6A\x01\x00\x00", 0x6);
	return;
}


cSAPatch::~cSAPatch(void) {
	this->pMain = nullptr;
	return;
}