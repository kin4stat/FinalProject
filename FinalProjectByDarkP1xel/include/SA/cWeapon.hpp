//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAWEAPON_HPP
#define SAWEAPON_HPP

#pragma once

class cWeapon final {
	public:
	unsigned __int32 ui32Type{0};
	unsigned __int32 ui32State{0};
	unsigned __int32 ui32AmmoInClip{0};
	unsigned __int32 ui32TotalAmmo{0};
	unsigned __int32 ui32TimeForNextShot{0};
	__int8 i8Field_14{0};
	__int8 i8Field_15{0};
	__int8 i8Field_16{0};
	__int8 i8Field_17{0};
	class cFxSystem_c *pFxSystem{nullptr};

	explicit cWeapon(void) = default;
	auto shutdown(void) -> void;
	~cWeapon(void) = default;

	private:
};

#endif