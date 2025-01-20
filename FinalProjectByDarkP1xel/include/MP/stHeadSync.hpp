//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef MPHEADSYNC_HPP
#define MPHEADSYNC_HPP

#pragma once

struct stHeadSync final {
	class cVector3D vecHeadSync {};
	__int32 i32HeadLastTick{0};
	__int32 i32HeadSyncLookTick{0};
};

#endif