//
//  GameWorldScene.cpp
//  Revenge
//
//  Created by ajay on 10/10/16.
//
//

#include "GameWorldScene.hpp"
#include "GameCommon.h"

cocos2d::Scene* GameWorldScene::createScene()
{
    auto scene = GameWorldScene::create();
    return scene;
}

bool GameWorldScene::init()
{
    if(!cocos2d::Scene::init())
    {
        return false;
    }
    
    
    GAMELOG("Welcome To GameWorldScene of the game");
    return true;
}

