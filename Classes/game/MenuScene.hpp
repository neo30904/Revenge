//
//  MenuScene.hpp
//  Escape
//  Created by ajay on 06/10/16.
//  @brief This is the Game Menu Scene Class.
//

#ifndef MenuScene_hpp
#define MenuScene_hpp

#include <stdio.h>
#include "cocos2d.h"


class MenuScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    void GoToGameWorldScene(cocos2d::Ref *sender);
    
    CREATE_FUNC(MenuScene);
    
    
private:
    cocos2d::Layer* hud_layer_;
};

#endif /* MenuScene_hpp */
