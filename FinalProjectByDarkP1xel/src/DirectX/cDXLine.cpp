//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\DirectX\cDXLine.hpp"

cDXLine::cDXLine(class cWinAPIFuncs *pWinAPIFuncs) {
	this->pWinAPIFuncs = pWinAPIFuncs;
	return;
}


auto cDXLine::createLine(IDirect3DDevice9 *pDeviceInterface, const cDXLine::eLineType lineType) -> ID3DXLine * {
	if (this->pLine[static_cast<const unsigned __int32>(lineType)] == nullptr) {
		this->pWinAPIFuncs->d3dxCreateLine(pDeviceInterface, &this->pLine[static_cast<const unsigned __int32>(lineType)]);
	} return this->pLine[static_cast<const unsigned __int32>(lineType)];
}


auto cDXLine::getLineInterface(const cDXLine::eLineType lineType) const -> ID3DXLine * {
	return this->pLine[static_cast<const unsigned __int32>(lineType)];
}


auto cDXLine::drawLine(const cDXLine::eLineType lineType, const class cVector2D *vecFrom, const class cVector2D *vecTo, const D3DCOLOR d3dColor) const -> void {
	if (this->pLine[static_cast<const unsigned __int32>(lineType)] != nullptr) {
		const D3DXVECTOR2 dxVec[2]{
			{vecFrom->fX, vecFrom->fY},
			{vecTo->fX, vecTo->fY}
		};
		this->pLine[static_cast<const unsigned __int32>(lineType)]->Draw(dxVec, 2, d3dColor);
	} return;
}


cDXLine::~cDXLine(void) {
	for (unsigned __int32 UI32{0}; UI32 < (sizeof(this->pLine) / 4); ++UI32) {
		if (this->pLine[UI32] != nullptr) {
			this->pLine[UI32]->Release();
			this->pLine[UI32] = nullptr;
		}
	} this->pWinAPIFuncs = nullptr;
	return;
}