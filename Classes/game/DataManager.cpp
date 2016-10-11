//
//  DataManager.cpp
//  Revenge
//
//  Created by ajay on 10/10/16.
//
//

#include "DataManager.hpp"
#include "GameCommon.h"

DataManager* DataManager::data_manager_ref_ = nullptr;


DataManager::DataManager()
{

    //ctor
}

DataManager::~DataManager()
{
    
    //dtor
}


DataManager* DataManager::SharedDataManager()
{
    if(!data_manager_ref_)
    {
        data_manager_ref_ = new DataManager();
    }
    
    return data_manager_ref_;
}


void DataManager::ReadLevelFile(std::string filename)
{
    //cocos2d::TMXTiledMap *tiled_map= cocos2d::TMXTiledMap::create(cocos2d::FileU);
}

