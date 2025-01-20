//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RWLLLINK_HPP
#define RWLLLINK_HPP

#pragma once

struct stRwLLLink final {
	struct stRwLinkList *pRwNext{nullptr};
	struct stRwLinkList *pRwPrev{nullptr};
};

#endif