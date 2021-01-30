#include "static_cloud_platform.hpp"

static_cloud_platform::static_cloud_platform(std::string filename) : Platform(filename) {
    this->_spr.setScale(0.70,0.70);
    points = 20;
}

void static_cloud_platform::Update(Game &game){
    if (!canBounce && transp>5)
    {
        transp-=10;
        _spr.setColor(Color(255,255,255,transp));
    }
    if (transp<5)
    {
        _spr.setColor(Color(255,255,255,0));
    }
    
}

bool static_cloud_platform::collideWith(const Entity & ent2) {
    auto r1 = this->_spr.getGlobalBounds();
	auto r2 = ent2._spr.getGlobalBounds();
	r1.height = 10.f;
	
	r2.top = r2.top + r2.height;
	r2.height = 10.f;
	if (r2.intersects(r1) && this->canBounce)
    {
        this->canBounce=false;
        return true;
    }
    return false;
}


static_cloud_platform::~static_cloud_platform() {

}