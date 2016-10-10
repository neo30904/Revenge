//
//  MenuScene.cpp
//  Escape
//
//  Created by ajay on 06/10/16.
//
//

#include "MenuScene.hpp"
#include "GameCommon.h"

cocos2d::Scene* MenuScene::createScene()
{
    auto scene = MenuScene::create();
    return scene;
}

bool MenuScene::init()
{
    if(!cocos2d::Scene::init())
    {
        return false;
    }
    
    
    hud_layer_ = cocos2d::Layer::create();
    addChild(hud_layer_);
    
    auto label = cocos2d::Label::createWithTTF("Welcome To The MenuScene", "fonts/Marker Felt.ttf", 24);
    
    label->setPosition(cocos2d::Vec2(cocos2d::Director::getInstance()->getWinSize().width/2 , cocos2d::Director::getInstance()->getWinSize().width/2));
    
    hud_layer_->addChild(label);
    
    
    
    auto menu_label = cocos2d::Label::createWithTTF("Start", "fonts/Marker Felt.ttf", 24);
    auto menu_btn = cocos2d::MenuItemLabel::create(menu_label, CC_CALLBACK_1(MenuScene::GoToGameWorldScene, this));
    
    auto menu = cocos2d::Menu::create(menu_btn,nullptr);
    
    menu->setPosition(cocos2d::Vec2(200,200));
    hud_layer_->addChild(menu);
    
    
    
    GAMELOG("Welcome To MenuScene of the game");
    return true;
}

void MenuScene::GoToGameWorldScene(cocos2d::Ref *sender)
{
    
}

