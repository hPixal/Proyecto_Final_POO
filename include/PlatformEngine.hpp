#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "playScene.hpp"
#include "Platform.hpp"
using namespace sf;


class PlatformEngine {
    std::vector<Platform*> current_platforms;
    //var
    int plat_distance;
    size_t max_plat=1;
    int level;
    int* getpoits;
    public:
    PlatformEngine(int platmax,int &points); //<-- constructor
    bool getCollision(const Entity &player);
    void Update(Game &g,View &pl_view,int level);
    void initVector();
    void givePos(Vector2f bounds,int prevPlat);
    void Draw(RenderWindow &win);
    Platform* getNewPlatform(int level);
    ~PlatformEngine();
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