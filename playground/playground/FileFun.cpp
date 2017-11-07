//
//  FileFun.cpp
//  playground
//
//  Created by Sebastian Labs on 11/6/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#include "FileFun.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

FileFun::FileFun(const string & filePath){
    _filePath = filePath;
}

FileFun::FileFun(FileFun & ff){
    _filePath = ff._filePath;
}

void FileFun::run(){
    
    if(_filePath.length() > 0){
        
        _stream.open(_filePath);
        if(_stream.is_open()){
            std::string delimiter = " ";
            
            vector<std::string> names;
            vector<double> grades;
            long posDelimiter=0;
            string line = "";
            
            while(std::getline(_stream, line)){
                posDelimiter = line.find(delimiter);
                names.push_back(line.substr(0, posDelimiter));
                double grade = std::stod(line.substr(++posDelimiter, line.size()));
                grades.push_back(grade);
            }
        }else cout<<"file is empty or does not exist";
    }
}
