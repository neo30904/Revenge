//
//  GameView.hpp
//  Revenge
//
//  Created by ajay on 10/10/16.
//  @brief This is class is responsible for adding the Game related objects to the view.
//

#ifndef GameView_hpp
#define GameView_hpp

#include <stdio.h>
#include "cocos2d.h"


class GameView : public cocos2d::Layer
{
  
public:
    
    virtual bool init();
    
    static Layer* CreateLayer();
    
    void AddLevel();
    CREATE_FUNC(GameView);
    
private:
    
    cocos2d::TMXTiledMap * level_map_;
    cocos2d::TMXObjectGroup * map_objects_;
    
    cocos2d::Sprite* player_sprite_;
};
#endif /* GameView_hpp */
