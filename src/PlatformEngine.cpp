#include "PlatformEngine.hpp"
#include "playScene.hpp"
#include "Platform.hpp"
#include "static_dirt_platform.hpp"

PlatformEngine::PlatformEngine(int* platmax) {
    this->max_plat=*platmax;
    initTextures();
    initVector();
}

void PlatformEngine::initTextures() {
    platformTypes[0] = new static_dirt_platform("models/platform_dirt.png");
    //ADD MORE PLAT TYPES AND TEXTURES
}

void PlatformEngine::initVector(){
    Vector2f initial_platform;
    initial_platform.x = 280;
    initial_platform.y = 100;
    current_platforms.push_back(*platformTypes[0]);
    current_platforms[0].spawnPlatform(initial_platform); //falta el RenderTarget
}

void PlatformEngine::Update(RenderWindow &win,int level,int i){
    Vector2u aux = win.getSize();   //
    Vector2f aux2;                  // This is used to convert Vector2u 
    aux2.x = aux.x;                 // into vector2f in order to make the 
    aux2.y = aux.y;                 // the function call & get "win" bounds
    current_platforms[i].Update();
    if (current_platforms[0]._spr.getPosition().y > win.getSize().y)
    {
        current_platforms.erase(current_platforms.begin(),current_platforms.begin()+1);
    }
    if (current_platforms.size() < max_plat)
    {
        current_platforms.push_back(*getNewPlatform(level));
        givePos(aux2,current_platforms.size()-1);
    }

    for (int i = 0; i < static_cast<int>(max_plat); i++)
    {
        Draw(win,i);
    }
    
}

void PlatformEngine::givePos(Vector2f bounds,int prevPlat){
    int aux = rand() % 6;
    int spawnPos = bounds.x / 6 - 100; // 100 it's the plat size in X
    Vector2f pos;
    pos.y = plat_distance + current_platforms[prevPlat]._spr.getPosition().y;
    pos.x = aux*spawnPos;
    current_platforms[prevPlat+1].spawnPlatform(pos);
}
void PlatformEngine::Draw(RenderWindow &win,int i){
    current_platforms[i].Draw(win);
}

Platform* PlatformEngine::getNewPlatform(int level){
    int aux;
    
    switch (level)
    {
    case 1:
        return platformTypes[0];
        break;
    case 2:
        aux = rand()%4;
        if (aux == 1)
        {
            return platformTypes[1];
        }else
        {
            return platformTypes[0];
        }
        
    default:
        std::cerr << "ERROR WITH AUX IN GETNEWPLATFOM()" << std::endl;
        break;
    }
    return NULL;
}

PlatformEngine::~PlatformEngine() {

}