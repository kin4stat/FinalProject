//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "DirectX/cDXFont.hpp"

cDXFont::cDXFont(class cWinAPIFuncs *pWinAPIFuncs) {
	this->pWinAPIFuncs = pWinAPIFuncs;
	return;
}


auto cDXFont::createFont(IDirect3DDevice9 *pDeviceInterface, const cDXFont::eFontType fontType, const D3DXFONT_DESCW *fontSettings) -> ID3DXFont * {
	if (this->pFont[static_cast<const unsigned __int32>(fontType)] == nullptr) {
		this->pWinAPIFuncs->d3dxCreateFont(pDeviceInterface, fontSettings, &this->pFont[static_cast<const unsigned __int32>(fontType)]);
	} return this->pFont[static_cast<const unsigned __int32>(fontType)];
}


auto cDXFont::getFontInterface(const cDXFont::eFontType fontType) const -> ID3DXFont * {
	return this->pFont[static_cast<const unsigned __int32>(fontType)];
}


auto cDXFont::getTextLengthInPixelsA(const cDXFont::eFontType fontType, const std::string &sText) const -> unsigned __int32 {
	if (this->pFont[static_cast<const unsigned __int32>(fontType)] != nullptr) {
		TEXTMETRICA textMertic{};
		this->pFont[static_cast<const unsigned __int32>(fontType)]->GetTextMetricsA(&textMertic);
		return sText.length() * textMertic.tmAveCharWidth;
	} return 0;
}


auto cDXFont::getTextLengthInPixelsW(const cDXFont::eFontType fontType, const std::wstring &wsText) const -> unsigned __int32 {
	if (this->pFont[static_cast<const unsigned __int32>(fontType)] != nullptr) {
		TEXTMETRICW textMertic{};
		this->pFont[static_cast<const unsigned __int32>(fontType)]->GetTextMetricsW(&textMertic);
		return wsText.length() * textMertic.tmAveCharWidth;
	} return 0;
}


auto cDXFont::drawTextShadowedA(const cDXFont::eFontType fontType, const char *pText, RECT *pRectPos, const DWORD dwFormat, const D3DCOLOR d3dColorA, const D3DCOLOR d3dColorB, const D3DCOLOR d3dShadowColor) const -> void {
	if (this->pFont[static_cast<const unsigned __int32>(fontType)] != nullptr) {
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextA(nullptr, pText, -1, pRectPos, dwFormat, d3dShadowColor);
		pRectPos->left += 1;
		pRectPos->top -= 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextA(nullptr, pText, -1, pRectPos, dwFormat, d3dShadowColor);
		pRectPos->left += 1;
		pRectPos->top += 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextA(nullptr, pText, -1, pRectPos, dwFormat, d3dShadowColor);
		pRectPos->left -= 1;
		pRectPos->top -= 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextA(nullptr, pText, -1, pRectPos, dwFormat, d3dColorB);
		pRectPos->left -= 1;
		pRectPos->top += 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextA(nullptr, pText, -1, pRectPos, dwFormat, d3dColorA);
	} return;
}


auto cDXFont::drawTextShadowedW(const cDXFont::eFontType fontType, const wchar_t *pText, RECT *pRectPos, const DWORD dwFormat, const D3DCOLOR d3dColorA, const D3DCOLOR d3dColorB, const D3DCOLOR d3dShadowColor) const -> void {
	if (this->pFont[static_cast<const unsigned __int32>(fontType)] != nullptr) {
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextW(nullptr, pText, -1, pRectPos, dwFormat, d3dShadowColor);
		pRectPos->left += 1;
		pRectPos->top -= 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextW(nullptr, pText, -1, pRectPos, dwFormat, d3dShadowColor);
		pRectPos->left += 1;
		pRectPos->top += 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextW(nullptr, pText, -1, pRectPos, dwFormat, d3dShadowColor);
		pRectPos->left -= 1;
		pRectPos->top -= 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextW(nullptr, pText, -1, pRectPos, dwFormat, d3dColorB);
		pRectPos->left -= 1;
		pRectPos->top += 1;
		this->pFont[static_cast<const unsigned __int32>(fontType)]->DrawTextW(nullptr, pText, -1, pRectPos, dwFormat, d3dColorA);
	} return;
}


cDXFont::~cDXFont(void) {
	for (unsigned __int32 UI32{0}; UI32 < (sizeof(this->pFont) / 4); ++UI32) {
		if (this->pFont[UI32] != nullptr) {
			this->pFont[UI32]->Release();
			this->pFont[UI32] = nullptr;
		}
	} this->pWinAPIFuncs = nullptr;
	return;
}