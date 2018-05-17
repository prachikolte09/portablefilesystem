//
//  fileops.cpp
//  PortableFIleSystem
//
//  Created by Shah Samkit on 2016/12/02.
//  Copyright © 2016 Shah Samkit. All rights reserved.
//

#include "fileops.hpp"

void FileOps::readBytes(string filename,int offset,int bytes, char *dataBuffer){
    
    ifstream fileBuffer(filename, ios::in);
    
    if(fileBuffer.is_open()){
        fileBuffer.seekg(offset, ios::beg); //ios:beg -> from beg to offset
        fileBuffer.read(dataBuffer, bytes);
        fileBuffer.close();
    }
    else
        throw new FileException();
}

void FileOps::writeBytes(string filename,int offset,int bytes, char *dataBuffer){
    
    ofstream fileBuffer(filename, ios::out | fstream::in);//fstream::in so that it does not overwite the data
    ofstream fileBuffer2("test2.txt");
    
    if(fileBuffer.is_open()){
        fileBuffer.seekp(offset,ios::beg);
        fileBuffer.write(dataBuffer, bytes);
        fileBuffer.close();
    }
    else
        throw new FileException();
}
