//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef DIRECTX_HPP
#define DIRECTX_HPP

#pragma once

#include "include\cWinAPIFuncs.hpp"
#include "DirectX/cDXFont.hpp"
#include "DirectX/cDXLine.hpp"

class cDirectX final {
	public:
	static IDirect3D9 *cDirectX::pIDirect3D9;
	static IDirect3DDevice9 *cDirectX::pIDirect3DDevice9;
	static D3DPRESENT_PARAMETERS *cDirectX::pPresentationParameters;

	enum class eIDirect3D9_VTBL : const unsigned __int32 {
		eGetAdapterIdentifier = 5
	};

	enum class eIDirect3DDevice9_VTBL : const unsigned __int32 {
		eReset = 16,
		ePresent,
		eDrawIndexedPrimitive = 82,
		eSetStreamSource = 100
	};

	explicit cDirectX::cDirectX(class cWinAPIFuncs *pWinAPIFuncs);
	auto cDirectX::getFont(void) const -> class cDXFont *;
	auto cDirectX::getLine(void) const -> class cDXLine *;
	cDirectX::~cDirectX(void);

	private:
	class cDXFont *pFont{nullptr};
	class cDXLine *pLine{nullptr};
};

#endif