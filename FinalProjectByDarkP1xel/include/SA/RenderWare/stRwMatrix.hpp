//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef RWMATRIX_HPP
#define RWMATRIX_HPP

#pragma once

struct stRwMatrix final {
	class cVector3D vecRight {};
	unsigned __int32 i32Flags{0};
	class cVector3D vecTop {};
	unsigned __int32 ui32Pad1{0};
	class cVector3D vecAt {};
	unsigned __int32 ui32Pad2{0};
	class cVector3D vecPos {};
	unsigned __int32 ui32Pad3{0};
};

#endif