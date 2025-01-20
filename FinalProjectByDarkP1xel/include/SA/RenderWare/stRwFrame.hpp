//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RWFRAME_HPP
#define RWFRAME_HPP

#pragma once

#include "include\SA\RenderWare\stRwObject.hpp"
#include "include\SA\RenderWare\stRwLLLink.hpp"
#include "include\SA\RenderWare\stRwMatrix.hpp"
#include "include\SA\RenderWare\stRwLinkList.hpp"

struct stRwFrame final {
	struct stRwObject rwObject {};
	struct stRwLLLink lllInDirtyListLink {};
	struct stRwMatrix matModelling {};
	struct stRwMatrix matLTM {};
	struct stRwLinkList objectList {};
	struct stRwFrame *pChild{nullptr};
	struct stRwFrame *pNext{nullptr};
	struct stRwFrame *pRoot{nullptr};
	char cPluginData[8];
	char cBodeName[24];
};

#endif