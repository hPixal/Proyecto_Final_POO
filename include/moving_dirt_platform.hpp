#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Platform.hpp"
#include "Game.hpp"
#include "Entity.hpp"

using namespace sf;

class moving_dirt_platform : public Platform {
    int m_speed;
public:
    moving_dirt_platform(std::string filename);
    void Update(Game &game) override;
    ~moving_dirt_platform() override { }
};


/*
This file is part of Skyjump.

    Skyjump is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Skyjump is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Skyjump.  If not, see <https://www.gnu.org/licenses/>.
*/
