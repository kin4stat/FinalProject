//
//  This is a Final Project file.
//	Developer: DarkP1xel <DarkP1xel@yandex.ru>
//
//  Official Thread: https://www.blast.hk/threads/60930/
//
//  Copyright (C) 2021 BlastHack Team <BlastHack.Net>. All rights reserved.
//

#ifndef SACOLMODEL_HPP
#define SACOLMODEL_HPP

#pragma once

#include "SA/cBox.hpp"
#include "SA/cColSphere.hpp"

class cColModel final {
	public:
	class cBox boundBox {};
	class cColSphere boundSphere {};
	class cCollisionData *pColData{nullptr};

	explicit cColModel(void) = delete;
	~cColModel(void) = delete;

	private:
};

#endif