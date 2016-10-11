//
//  GameElement.cpp
//  Revenge
//
//  Created by ajay on 11/10/16.
//  
//

#include "GameElement.hpp"


GameElement::GameElement()
{
    //ctor
    sprite_ = nullptr;
    type_ = kTypePlayer ;
    id_ = -1;
    string name_ = "";
}

GameElement::~GameElement()
{
    //dtor
}

void GameElement::CreateElementSprite(cocos2d::Vec2 position)
{
    switch (type_)
    {
        case kTypePlayer:
            
            sprite_ = cocos2d::Sprite::create(cocos2d::FileUtils::getInstance()->fullPathForFilename("tiled/Player.png"));
          
            if(sprite_)
            {
                sprite_->setPosition(position);
                addChild(sprite_);
            }
            
            else
            {
                GAMELOG("Oops failed to create the psprite");
            }

            break;
            
        case kTypeBoss:
            break;
            
        case kTypeEnemy:
            break;
            
        case kTypeBullet:
            break;
            
            
        default:
            break;
    }
}