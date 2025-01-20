//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SALISTITEM_HPP
#define SALISTITEM_HPP

#pragma once

class cListItem final {
	public:
	class cListItem *pNext{nullptr};
	class cListItem *pPrev{nullptr};

	explicit cListItem::cListItem(void) = default;
	cListItem::~cListItem(void) = default;

	private:
};

#endif