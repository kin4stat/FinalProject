//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "cDirectX.hpp"

IDirect3D9 *cDirectX::pIDirect3D9{nullptr};
IDirect3DDevice9 *cDirectX::pIDirect3DDevice9{nullptr};
D3DPRESENT_PARAMETERS *cDirectX::pPresentationParameters{nullptr};

cDirectX::cDirectX(class cWinAPIFuncs *pWinAPIFuncs) {
	this->pFont = new cDXFont{pWinAPIFuncs};
	this->pLine = new cDXLine{pWinAPIFuncs};
	return;
}


auto cDirectX::getFont(void) const -> class cDXFont * {
	return this->pFont;
}


auto cDirectX::getLine(void) const -> class cDXLine * {
	return this->pLine;
}


cDirectX::~cDirectX(void) {
	delete this->pFont;		this->pFont = nullptr;
	delete this->pLine;		this->pLine = nullptr;
	return;
}