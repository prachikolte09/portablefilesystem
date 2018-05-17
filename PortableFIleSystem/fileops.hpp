//
//  fileops.hpp
//  PortableFIleSystem
//
//  Created by Shah Samkit on 2016/12/02.
//  Copyright © 2016 Shah Samkit. All rights reserved.
//

#ifndef fileops_hpp
#define fileops_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "exceptions.hpp"

using namespace std;

class FileOps {
    
public:
    static void readBytes(string filename,int offset,int bytes, char *dataBuffer);
    static void writeBytes(string filename,int offset,int bytes, char *dataBuffer);
};


#endif /* fileops_hpp */
