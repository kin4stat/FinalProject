//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#include "include\SA\cWeather.hpp"

auto cWeather::forceWeatherNow(const __int16 i16WeatherID) -> void {
	reinterpret_cast<void(__cdecl *)(const __int16 i16WeatherID)>(0x72A4F0)(i16WeatherID);
	return;
}