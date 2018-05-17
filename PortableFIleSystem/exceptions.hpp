//
//  exceptions.hpp
//  PortableFIleSystem
//
//  Created by Shah Samkit on 2016/12/02.
//  Copyright © 2016 Shah Samkit. All rights reserved.
//

#ifndef exceptions_hpp
#define exceptions_hpp

#include <stdio.h>
#include <exception>

using namespace std;

class FileException:public exception{
    const char * what () const throw () {
        return "File Exception occured";
    }
};

#endif /* exceptions_hpp */
