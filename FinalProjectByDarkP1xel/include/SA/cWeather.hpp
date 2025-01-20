//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SAWEATHER_HPP
#define SAWEATHER_HPP

#pragma once

class cWeather final {
	public:
	explicit cWeather(void) = delete;
	~cWeather(void) = delete;

	static auto forceWeatherNow(const __int16 i16WeatherID) -> void;

	private:
};

#endif