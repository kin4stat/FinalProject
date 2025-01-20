//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SARADAR_HPP
#define SARADAR_HPP

#pragma once

class cRadar final {
	public:
	explicit cRadar(void) = delete;
	~cRadar(void) = delete;

	static auto removeRadarSections(void) -> void;
	static auto limitToMap(float *pX, float *pY) -> void;
	static auto limitRadarPoint(class cVector2D *pOut) -> long double;
	static auto transformRadarPointToRealWorldSpace(class cVector2D *pOut, const class cVector2D *pIn) -> void;
	static auto transformRadarPointToScreenSpace(class cVector2D *pOut, const class cVector2D *pIn) -> void;
	static auto transformRealWorldPointToRadarSpace(class cVector2D *pOut, const class cVector2D *pIn) -> void;

	private:
};

#endif