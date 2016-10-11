//
//  Player.hpp
//  Revenge
//
//  Created by ajay on 11/10/16.
//  @brief this is the player class responsible for handling player's properties.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "GameElement.hpp"

class Player : public GameElement
{
public:
    Player();
    virtual ~Player();
    
    
private:
    float health_;
};

#endif /* Player_hpp */
