//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SARENDER_HPP
#define SARENDER_HPP

#pragma once

class cRenderer final {
	public:
	explicit cRenderer::cRenderer(void) = delete;
	cRenderer::~cRenderer(void) = delete;

	static auto cRenderer::requestObjectsInDirection(const class cVector3D *pPos, const float fAngle = 0) -> void;

	private:
};

#endif