//
//  main.cpp
//  PortableFIleSystem
//
//  Created by Prachi Kolte on 2016/12/02.
//  Copyright © 2016 Prachi Kolte. All rights reserved.
//

#include <iostream>

#include <iostream>
#include <String>
#include "fileops.hpp"

using namespace std;

int main()
{
    char * buffer = new char [10];
    
    FileOps::readBytes("/Users/samkitshah/myGit/PortableFIleSystem/PortableFIleSystem/test1.txt", 2, 5, buffer); //full path because xcode runs in a different directory where you need to put the files to use only file names its not an issue
    cout<<"Data is:"<<buffer<<endl;
    
    FileOps::readBytes("/Users/samkitshah/myGit/PortableFIleSystem/PortableFIleSystem/test1.txt", 10, 5, buffer);
    cout<<"Data is:"<<buffer<<endl;
    
    strcpy(buffer,"somen");
    FileOps::writeBytes("/Users/samkitshah/myGit/PortableFIleSystem/PortableFIleSystem/test1.txt", 12, 5, buffer);
    
    FileOps::readBytes("/Users/samkitshah/myGit/PortableFIleSystem/PortableFIleSystem/test1.txt", 2, 5, buffer);
    cout<<"Data is:"<<buffer<<endl;
    
    FileOps::readBytes("/Users/samkitshah/myGit/PortableFIleSystem/PortableFIleSystem/test1.txt", 10, 5, buffer);
    cout<<"Data is:"<<buffer<<endl;
    
    
}
