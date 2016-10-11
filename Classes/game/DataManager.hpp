//
//  DataManager.hpp
//  Revenge
//
//  Created by ajay on 10/10/16.
//
//

#ifndef DataManager_hpp
#define DataManager_hpp

#include <stdio.h>

class DataManager
{
    
public:
    
    DataManager();
    ~DataManager();
    static DataManager* SharedDataManager();
    
    void ReadLevelFile(std::string filename);
    
private :
    
    static DataManager* data_manager_ref_;
    
};

#endif /* DataManager_hpp */
