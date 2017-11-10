//
//  MapFun.hpp
//  playground
//
//  Created by Sebastian Labs on 11/8/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#ifndef MapFun_hpp
#define MapFun_hpp

#include <stdio.h>
#include "MapFun.hpp"
#include <string>
#include <map>
#include <fstream>
#include <vector>

using namespace std;

class MapFun{
    string _filePath = "";
    std::ifstream _stream;
    map<string, int> _nameGrade;
public:
    MapFun();
    MapFun(const string & filePath);
    MapFun(MapFun & ff);
    void run();
    double average(vector<double>& vec1);
    int queryMap(const string& name);
};

#endif /* MapFun_hpp */
