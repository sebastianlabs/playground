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
        vector<std::string> names;
        vector<double> grades;
        _stream.open(_filePath);
        if(_stream.is_open()){
            std::string delimiter = " ";
            
            long posDelimiter=0;
            string line = "";
            
            while(std::getline(_stream, line)){
                posDelimiter = line.find(delimiter);
                names.push_back(line.substr(0, posDelimiter));
                double grade = std::stod(line.substr(++posDelimiter, line.size()));
                grades.push_back(grade);
            }
        }else cout<<"file is empty or does not exist";
        
        printf("average grade is: %f\n", average(grades));
    }
}

double FileFun::average(vector<double>& vec1){
    double average = 0;
    
    if(vec1.size() > 0){
        vector<double>::iterator it;
        it = vec1.begin();
        
        while(it != vec1.end()){
            average += (*it);
            it++;
        }
        return average/vec1.size();
    }
    return 0;
}
