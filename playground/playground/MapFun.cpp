//
//  MapFun.cpp
//  playground
//
//  Created by Sebastian Labs on 11/8/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#include "MapFun.hpp"
#include <string>
#include <map>
#include <fstream>

using namespace std;

MapFun::MapFun(const string& filePath) {_filePath = filePath;};

void MapFun::run(){
    if(!_filePath.empty()){
        _stream.open(_filePath.c_str());
        if(_stream.is_open()){
            string line = "";
            double posDelim = 0;
            
            while(std::getline(_stream, line)){
                posDelim = line.find(" ");
                string name = line.substr(0, posDelim);
                int grade = std::stoi(line.substr(posDelim+1, line.size()-1));
                _nameGrade.insert(_nameGrade.end(), std::pair<string, int>(name, grade));
            }
            
        }
    }
}

int MapFun::queryMap(const string& name){
    if(!_nameGrade.empty()){
        map<string, int>::iterator it;
        it = _nameGrade.find(name);
        if(it != _nameGrade.end()) return it->second;
    }
    return 0;
};


