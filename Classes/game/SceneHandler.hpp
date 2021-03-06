//
//  SceneHandler.hpp
//  Escape
//  Created by ajay on 06/10/16.
//  @brief This class is used for switching between different game scenes.
//

#ifndef SceneHandler_hpp
#define SceneHandler_hpp

#include <stdio.h>


class SceneHandler
{
    
    SceneHandler();
    
public:
    static SceneHandler* SharedSceneHandler();
    
    void SetMenuScene();
    void SetGameWorldScene();
    
private:
    static SceneHandler* ref_scene_handler_;
};


#endif /* SceneHandler_hpp */
