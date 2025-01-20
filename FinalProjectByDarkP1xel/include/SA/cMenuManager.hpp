//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAMENUMANAGER_HPP
#define SAMENUMANAGER_HPP

#pragma once

#include "Vector/cVector2D.hpp"
#include "SA/cSprite2D.hpp"

class cMenuManager final {
	public:
	__int8 i8Field_0{0};
	__int8 i8Field_1[3];
	float fStatsScrollSpeed{0};
	__int8 i8Field_8{0};
	__int8 i8Field_9[23];
	__int8 i8Field_20{0};
	bool bHudOn{false};
	__int8 i8Field_22[2];
	__int32 i32RadarMode{0};
	__int8 i8Field_28[4];
	unsigned __int32 ui32TargetBlipIndex{0};
	__int8 i8Field_30{0};
	__int8 i8Field_31{0};
	bool bDontDrawFrontEnd{false};
	bool bActivateMenuNextFrame{false};
	bool bMenuAccessWidescreen{false};
	__int8 i8Field_35{0};
	__int8 i8Field_36[2];
	__int32 i32Field_38{0};
	__int32 i32Brightness{0};
	float fDrawDistance{0};
	bool bShowSubtitles{false};
	__int8 i8Field_45[4];
	__int8 i8Field_49{0};
	bool bMapLegend{false};
	bool bWidescreenOn{false};
	bool bFrameLimiterOn{false};
	bool bRadioAutoSelect{false};
	__int8 i8Field_4E{0};
	__int8 i8SfxVolume{0};
	__int8 i8RadioVolume{0};
	bool bRadioEq{false};
	__int8 i8RadioStation{0};
	__int8 i8Field_53{0};
	__int32 i32SelectedMenuItem{0};
	__int8 i8Field_58{0};
	__int8 i8DrawRadarOrMap{0};
	__int8 i8Field_5A{0};
	__int8 i8Field_5B{0};
	bool bMenuActive{false};
	__int8 i8DoGameReload{0};
	__int8 i8Field_5E{0};
	__int8 i8IsSaveDone{0};
	bool bLoadingData{false};
	__int8 i8Field_61[3];
	float fMapZoom{0};
	float fMapBaseX{0};
	float fMapBaseY{0};
	class cVector2D vecMousePos {};
	__int8 i8Field_78{0};
	__int8 i8Field_79[3];
	__int32 i32TitleLanguage{0};
	__int32 i32TextLanguage{0};
	__int8 i8Language{0};
	__int8 i8PreviousLanguage{0};
	__int8 i8Field_86[2];
	__int32 i32Field_88{0};
	bool bLanguageChanged{false};
	__int8 i8Field_8D[3];
	__int32 i32Field_90{0};
	__int32 i32Field_94{0};
	__int8 *pJPEGBuffer{nullptr};
	__int8 i8Field_9C[16];
	__int32 i32Field_AC{0};
	__int8 i8RadioMode{0};
	__int8 i8InvertPadX1{0};
	__int8 i8InvertPadY1{0};
	__int8 i8InvertPadX2{0};
	__int8 i8InvertPadY2{0};
	__int8 i8SwapPadAxis1{0};
	__int8 i8SwapPadAxis2{0};
	__int8 i8Field_B7{0};
	bool bDrawMouse{false};
	__int8 i8Field_B9[3];
	__int32 i32MousePosLeft{0};
	__int32 i32MousePosTop{0};
	bool bMipMapping{false};
	bool bTracksAutoScan{false};
	__int16 i16Field_C6{0};
	__int32 i32AppliedAntiAliasingLevel{0};
	__int32 i32AntiAliasingLevel{0};
	__int8 i8Controller{0};
	__int8 i8Field_D1[3];
	__int32 i32AppliedResolution{0};
	__int32 i32Resolution{0};
	__int32 i32Field_DC{0};
	__int32 i32MousePosLeftA{0};
	__int32 i32MousePosTopA{0};
	bool bSavePhotos{false};
	bool bMainMenuSwitch{false};
	__int8 i8PlayerNumber{0};
	__int8 i8Field_EB{0};
	__int32 i32Field_EC{0};
	__int32 i32Field_F0{0};
	__int8 i8Field_F4{0};
	__int8 i8Field_F5[3];
	class cSprite2D spTextures[25]{};
	bool bTexturesLoaded{false};
	unsigned __int8 ui8CurrentMenuPage{0};
	__int8 i8Field_15E{0};
	unsigned __int8 ui8SelectedSaveGame{0};
	__int8 i8Field_160{0};
	__int8 i8Field_161{0};
	char cMpackName[8];
	__int8 i8Field_16A[6486];
	__int32 i32Field_1AC0{0};
	__int32 i32Field_1AC4{0};
	__int32 i32Field_1AC8{0};
	__int32 i32Field_1ACC{0};
	__int32 i32Field_1AD0{0};
	__int32 i32Field_1AD4{0};
	__int32 i32Field_1AD8{0};
	__int16 i16Field_1ADC{0};
	bool bChangeVideoMode{false};
	__int8 i8Field_1ADF{0};
	__int32 i32Field_1AE0{0};
	__int32 i32Field_1AE4{0};
	__int8 i8Field_1AE8{0};
	__int8 i8Field_1AE9{0};
	__int8 i8Field_1AEA{0};
	bool bScanningUserTracks{false};
	__int32 i32Field_1AEC{0};
	__int8 i8Field_1AF0{0};
	__int8 i8Field_1AF1{0};
	__int8 i8Field_1AF2{0};
	__int8 i8Field_1AF3{0};
	__int32 i32Field_1AF4{0};
	__int32 i32Field_1AF8{0};
	__int32 i32Field_1AFC{0};
	__int32 i32Field_1B00{0};
	__int32 i32Field_1B04{0};
	__int8 i8Field_1B08{0};
	__int8 i8Field_1B09{0};
	__int8 i8Field_1B0A{0};
	__int8 i8Field_1B0B{0};
	__int32 i32Field_1B0C{0};
	__int8 i8Field_1B10{0};
	__int8 i8Field_1B11{0};
	__int8 i8Field_1B12{0};
	__int8 i8Field_1B13{0};
	__int8 i8Field_1B14{0};
	__int8 i8Field_1B15{0};
	__int8 i8Field_1B16{0};
	__int8 i8Field_1B17{0};
	__int32 i32EventToDo{0};
	__int32 i32Field_1B1C{0};
	unsigned __int8 ui8TexturesRound{0};
	unsigned __int8 ui8NumberOfMenuOptions{0};
	__int16 i16Field_1B22{0};
	__int32 i32Field_1B24{0};
	__int8 i8Field_1B28{0};
	__int8 i8Field_1B29{0};
	__int16 i16Field_1B2A{0};
	__int32 i32Field_1B2C{0};
	__int32 i32Field_1B30{0};
	__int16 i16Field_1B34{0};
	__int16 i16Field_1B36{0};
	__int32 i32Field_1B38{0};
	__int8 i8Field_1B3C{0};
	__int8 i8Field_1B3D{0};
	__int8 i8Field_1B3E{0};
	__int8 i8Field_1B3F{0};
	__int32 i32Field_1B40{0};
	__int8 i8Field_1B44{0};
	__int8 i8Field_1B45{0};
	__int16 i16Field_1B46{0};
	__int32 i32Field_1B48{0};
	__int32 i32Field_1B4C{0};
	__int8 i8BackgroundSprite{0};
	__int8 i8Field_1B51{0};
	__int16 i16Field_1B52{0};
	__int32 i32Field_1B54{0};
	__int32 i32Field_1B58{0};
	__int8 i8Field_1B5C{0};
	__int8 i8Field_1B5D{0};
	__int16 i16Field_1B5E{0};
	__int32 i32Field_1B60{0};
	__int32 i32Field_1B64{0};
	__int32 i32Field_1B68{0};
	__int32 i32Field_1B6C{0};
	__int32 i32Field_1B70{0};
	__int32 i32Field_1B74{0};

	explicit cMenuManager(void) = delete;
	auto checkForMenuClosing(void) -> void;
	~cMenuManager(void) = delete;

	private:
};

#endif