#include <iostream>
#include <SFML/Graphics.hpp>
#include "static_dirt_platform.hpp"
#include "Platform.hpp"
#include "Game.hpp"
#include "Entity.hpp"

using namespace sf;

static_dirt_platform::static_dirt_platform(std::string filename) : Platform (filename) {
	_spr.setScale(1,1);
	this->points=10;
}

void static_dirt_platform::Update(Game &game) { 

}
