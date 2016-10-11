//
//  GameView.cpp
//  Revenge
//
//  Created by ajay on 10/10/16.
//
//

#include "GameView.hpp"
#include "GameCommon.h"
#include "Player.hpp"


cocos2d::Layer* GameView::CreateLayer()
{
    auto layer = GameView::create();
    return layer;
}


bool GameView::init()
{
    if(!cocos2d::Layer::init())
    {
        return false;
    }
    
    level_map_ = nullptr;
    map_objects_ = nullptr;
    
    
    viewport_ = cocos2d::Vec2::ZERO;
    viewport_offset_ = cocos2d::Vec2::ZERO;
    
    AddLevel();
    
    GAMELOG("Setting the View for the Game");
    return true;
}

void GameView::AddLevel()
{
    level_map_ = cocos2d::TMXTiledMap::create(cocos2d::FileUtils::getInstance()->fullPathForFilename("tiled/TileMap.tmx"));
    
    if(level_map_)
    {
        addChild(level_map_);
        
        map_objects_ = level_map_->getObjectGroup("Objects");
        CreatePlayer();
        
    }
    
    else
    {
        GAMELOG("Oops problem reading the Map File");
    }
    
    UpdateView();
    
}


void GameView::CreatePlayer()
{
    
    GAMELOG("Creating Player");
    
    player_ = new Player();
    player_->set_type(kTypePlayer);
    
    cocos2d::ValueMap spawn_points = map_objects_->getObject("SpawnPoint");
    cocos2d::Vec2 player_position(spawn_points["x"].asInt() , spawn_points["y"].asInt());
    
    player_->CreateSprite(player_position_);
}

void GameView::UpdateView()
{
    cocos2d::Size winSize = cocos2d::Director::getInstance()->getWinSize();
    
    int x = MAX(player_sprite_->getPositionX(), winSize.width/2);
    int y = MAX(player_sprite_->getPositionY(), winSize.height/2);
    x = MIN(x, (level_map_->getMapSize().width * level_map_->getTileSize().width) - winSize.width / 2);
    y = MIN(y, (level_map_->getMapSize().height * level_map_->getTileSize().height) - winSize.height/2);
    
    cocos2d::Vec2 actual_position(x, y);
    cocos2d::Vec2 centre_of_view(winSize.width/2, winSize.height/2);
    
    cocos2d::Vec2 viewport = centre_of_view - actual_position;
    setPosition(viewport);
    
    
}
