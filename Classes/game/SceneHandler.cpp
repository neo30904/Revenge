//
//  SceneHandler.cpp
//  Escape
//
//  Created by ajay on 06/10/16.
//
//

#include "SceneHandler.hpp"
#include "GameCommon.h"
#include "MenuScene.hpp"
#include "GameWorldScene.hpp"


SceneHandler* SceneHandler::ref_scene_handler_ = nullptr;

SceneHandler::SceneHandler()
{
    
}


SceneHandler* SceneHandler::SharedSceneHandler()
{
        if(!ref_scene_handler_)
        {
            ref_scene_handler_ = new SceneHandler();
        }
    
    return ref_scene_handler_;
}


void SceneHandler::SetMenuScene()
{
    GAMELOG("Setting MenuScene");
    auto scene = MenuScene::createScene();
    
    if(scene)
    {
        if(cocos2d::Director::getInstance()->getRunningScene()==nullptr)
        {
            cocos2d::Director::getInstance()->runWithScene(scene);
        }
        
        else
        {
            cocos2d::Director::getInstance()->replaceScene(cocos2d::TransitionFade::create(1, scene ,cocos2d::Color3B::BLACK));
        }
    }
    
    else
    {
        GAMELOG("Oops failed to load Menu Scene");
    }
 
}

void SceneHandler::SetGameWorldScene()
{
    GAMELOG("Setting GameWorldScene");
    auto scene = GameWorldScene::createScene();
    
    if(scene)
    {
        if(cocos2d::Director::getInstance()->getRunningScene()==nullptr)
        {
            cocos2d::Director::getInstance()->runWithScene(scene);
        }
        
        else
        {
            cocos2d::Director::getInstance()->replaceScene(cocos2d::TransitionFade::create(1, scene ,cocos2d::Color3B::BLACK));
        }
    }
    
    else
    {
        GAMELOG("Oops failed to load Menu Scene");
    }
    
}