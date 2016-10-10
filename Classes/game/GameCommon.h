//
//  GameCommon.h
//  Escape
//
//  Created by ajay on 06/10/16.
//
//

#ifndef GameCommon_h
#define GameCommon_h

#define DEBUG 1


#if(DEBUG)
    #define GAMELOG(format, ...)      cocos2d::log(format, ##__VA_ARGS__)
#else
    #define GAMELOG(format, ...)
#endif

#endif /* GameCommon_h */
