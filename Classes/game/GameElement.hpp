//
//  GameElement.hpp
//  Revenge
//
//  Created by ajay on 11/10/16.
//  @brief This is the Class which holds the basic properties of the elements and all our game elements inherit from this.
//

#pragma once

#ifndef GameElement_hpp
#define GameElement_hpp

#include <stdio.h>
#include "GameCommon.h"
#include "cocos2d.h"


class GameElement
{
public:
    GameElement();
    virtual ~GameElement();
    
    void CreateElementSprite(cocos2d::Vec2 position);
    
    
    void set_type(GameElementsType type) { type_ = type;};
    
    
    GameElementsType get_type() { return type_;};
        
private:
    
    cocos2d::Sprite* sprite_;
    
    GameElementsType type_;
    int id_;
    std::string name_;
    
};
#endif /* GameElement_hpp */
