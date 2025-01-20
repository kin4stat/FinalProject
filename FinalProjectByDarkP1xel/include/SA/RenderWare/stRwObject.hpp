//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RWOBJECT_HPP
#define RWOBJECT_HPP

#pragma once

struct stRwObject final {
	__int8 i8Type{0};
	__int8 i8SubType{0};
	__int8 i8Flags{0};
	__int8 i8PrivateFlags{0};
	struct stRwFrame *pParent{nullptr};
};

#endif