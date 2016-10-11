//
//  GameWorldScene.hpp
//  Revenge
//
//  Created by ajay on 10/10/16.
//  @brief This is class is responsible for adding the view  , hud to the game world.
//

#ifndef GameWorldScene_hpp
#define GameWorldScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class GameView;

class GameWorldScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    
    CREATE_FUNC(GameWorldScene);
    
    
private:
    cocos2d::Layer* hud_layer_;
    cocos2d::Layer* game_view_layer_;
};

#endif /* GameWorldScene_hpp */
