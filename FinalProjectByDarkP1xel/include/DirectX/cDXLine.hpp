//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef DXLINE_HPP
#define DXLINE_HPP

#pragma once

#include "cWinAPIFuncs.hpp"

class cDXLine final {
	public:

	enum class eLineType : const unsigned __int8 {
		eNormal,
		eFinalHud,
		eNameTags
	};

	explicit cDXLine(class cWinAPIFuncs *pWinAPIFuncs);
	auto createLine(IDirect3DDevice9 *pDeviceInterface, const cDXLine::eLineType lineType)->ID3DXLine *;
	auto getLineInterface(const cDXLine::eLineType lineType) const->ID3DXLine *;
	auto drawLine(const cDXLine::eLineType lineType, const class cVector2D *vecFrom, const class cVector2D *vecTo, const D3DCOLOR d3dColor) const -> void;
	~cDXLine(void);

	private:
	class cWinAPIFuncs *pWinAPIFuncs{nullptr};
	ID3DXLine *pLine[3];
};

#endif