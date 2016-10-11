//
//  GameCommon.h
//  Escape
//
//  Created by ajay on 06/10/16.
//
//

#pragma once

#ifndef GameCommon_h
#define GameCommon_h


#include "DataManager.hpp"
#define DEBUG 1

#if(DEBUG)
    #define GAMELOG(format, ...)      cocos2d::log(format, ##__VA_ARGS__)
#else
    #define GAMELOG(format, ...)
#endif



typedef  enum
{
    kTypeNone  = 0,
    kTypePlayer,
    kTypeEnemy,
    kTypeBoss,
    kTypeBullet,
}GameElementsType;



#endif /* GameCommon_h */
