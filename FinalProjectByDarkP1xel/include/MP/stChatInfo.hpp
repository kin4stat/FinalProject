//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPCHATINFO_HPP
#define MPCHATINFO_HPP

#pragma once

#include "include\cMP.hpp"

struct stChatInfo final {
	unsigned __int32 ui32PageSize{0};
	char *pLastMsgText{nullptr};
	__int32 i32ChatWindowMode{0};
	bool bTimeStamps{false};
	unsigned __int32 ui32LogFileExist{0};
	char ñLogFilePathChatLog[260 + 1];
	class cDXUTDialog *pGameUI{nullptr};
	class cDXUTEditBox *pEditBackground{nullptr};
	class cDXUTScrollBar *pScrollBar{nullptr};
	unsigned long ulTextColor{0};
	unsigned long ulInfoColor{0};
	unsigned long ulDebugColor{0};
	unsigned __int32 ui32ChatWindowBottom{0};
	struct stChatEntry chatEntry[100]{};
	struct stFontRenderer *pFontRenderer{nullptr};
	ID3DXSprite *pTextSprite{nullptr};
	ID3DXSprite *pSprite{nullptr};
	IDirect3DDevice9 *pD3DDevice{nullptr};
	__int32 i32RenderMode{0};
	ID3DXRenderToSurface *pID3DXRenderToSurface{nullptr};
	IDirect3DTexture9 *pTexture{nullptr};
	IDirect3DSurface9 *pSurface{nullptr};
	D3DDISPLAYMODE *pD3DDisplayMode{nullptr};
	__int32 i32Unk1[4];
	__int32 i32Redraw{0};
	__int32 i32PrevScrollBarPosition{0};
	__int32 i32FontSizeY{0};
	__int32 i32TimeStampWidth{0};
	__int32 i32TimeStampTextOffset{0};

	explicit stChatInfo(void) = delete;
	auto addColorMessage(const unsigned long ulColor, const char *pText) -> void;
	~stChatInfo(void) = delete;
};

#endif