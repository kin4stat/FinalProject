//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPSERVERPRESETS_HPP
#define MPSERVERPRESETS_HPP

#pragma once

struct stServerPresets final {
	bool bUseCJWalk{false};
	unsigned __int32 ui32DeadDropsMoney{0};
	float fWorldBoundaries[4];
	bool bAllowWeapons{false};
	float fGravity{0};
	bool bDisableInteriorEnterExits{false};
	unsigned __int32 ui32VehicleFriendlyFire{0};
	bool bHoldTime{false};
	bool bInstagib{false};
	bool bZoneNames{false};
	bool bFriendlyFire{false};
	__int32 i32ClassesAvailable{0};
	float fNameTagsDistance{0};
	bool bManualVehicleEngineAndLight{false};
	unsigned __int8 ui8WorldTime_Hour{0};
	unsigned __int8 ui8WorldTime_Minute{0};
	unsigned __int8 ui8Weather{0};
	bool bNoNametagsBehindWalls{false};
	__int32 i32PlayerMarkersMode{0};
	float fGlobalChatRadiusLimit{0};
	bool bShowNameTags{false};
	bool bLimitGlobalChatRadius{false};
};

#endif