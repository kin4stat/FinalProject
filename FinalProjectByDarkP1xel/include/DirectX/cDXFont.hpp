//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef DXFONT_HPP
#define DXFONT_HPP

#pragma once

#include "include\cWinAPIFuncs.hpp"

class cDXFont final {
	public:

	enum class eFontType : const unsigned __int8 {
		eNormal,
		eFinalHud,
		eNameTags
	};

	explicit cDXFont(class cWinAPIFuncs *pWinAPIFuncs);
	auto createFont(IDirect3DDevice9 *pDeviceInterface, const cDXFont::eFontType fontType, const D3DXFONT_DESCW *fontSettings)->ID3DXFont *;
	auto getFontInterface(const cDXFont::eFontType fontType) const->ID3DXFont *;
	auto getTextLengthInPixelsA(const cDXFont::eFontType fontType, const std::string &sText) const -> unsigned __int32;
	auto getTextLengthInPixelsW(const cDXFont::eFontType fontType, const std::wstring &wsText) const -> unsigned __int32;
	auto drawTextShadowedA(const cDXFont::eFontType fontType, const char *pText, RECT *pRectPos, const DWORD dwFormat, const D3DCOLOR d3dColorA, const D3DCOLOR d3dColorB = 0xFF000000, const D3DCOLOR d3dShadowColor = 0xFF000000) const -> void;
	auto drawTextShadowedW(const cDXFont::eFontType fontType, const wchar_t *pText, RECT *pRectPos, const DWORD dwFormat, const D3DCOLOR d3dColorA, const D3DCOLOR d3dColorB = 0xFF000000, const D3DCOLOR d3dShadowColor = 0xFF000000) const -> void;
	~cDXFont(void);

	private:
	class cWinAPIFuncs *pWinAPIFuncs{nullptr};
	ID3DXFont *pFont[3];
};

#endif