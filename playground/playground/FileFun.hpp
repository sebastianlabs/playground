//
//  FileFun.hpp
//  playground
//
//  Created by Sebastian Labs on 11/6/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#ifndef FileFun_hpp
#define FileFun_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class FileFun{
    string _filePath = "";
    std::ifstream _stream;
public:
    FileFun();
    FileFun(const string & filePath);
    FileFun(FileFun & ff);
    void run();
    double average(vector<double>& vec1);
};

#endif /* FileFun_hpp */
