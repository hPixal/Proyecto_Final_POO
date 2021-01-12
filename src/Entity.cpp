#include "Entity.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

Entity::Entity(std::string name){
    _tex.loadFromFile(name);
    _spr.setTexture(_tex);
}

void Entity::draw(RenderWindow &win){
    win.draw(_spr);
}

Entity::~Entity() {

}

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