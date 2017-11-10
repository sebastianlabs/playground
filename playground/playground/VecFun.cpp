//
//  VecFun.cpp
//  playground
//
//  Created by Sebastian Labs on 11/6/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#include "VecFun.hpp"
#include <stdio.h>
#include <vector>
#include <set>

using namespace std;

void VecFun::printOut(std::vector<int> print){
    if(!print.empty()){
        vector<int>::iterator it = print.begin();
    
        for(int i=0; i<print.size(); i++){
            printf("element at pos %d is %d\n", i, *it);
            ++it;
        }
    }else
        printf("empty vector\n");
    printf("\n");
}

void VecFun::run(){
    vector<int> vec1 = {1,2,2,3,4,5,6,6,7,8,9,10};
    vector <int> vec2 = vec1;
    
    vector<int>::iterator itVec1 = vec1.begin();
    vector<int>::iterator itVec2 = vec2.end();
    --itVec2; // end points to element AFTER the last so we have to adjust
    printOut(vec1);
    //turn everything around
   // printf("\nturn everything around\n\n");
    
    //stl way to reverse
    //reverse(vec.begin(), vec.end());
    
    //manual way to reverse
//    for(int i=0; i<vec1.size(); i++){
//        *itVec1 = *itVec2;
//        ++itVec1;
//        --itVec2;
//    }
//    printOut(vec1);
//    printOut(vec2);
    
    itVec1 = std::find(vec1.begin(), vec1.end(), 6);
    int pos = std::distance(vec1.begin(), itVec1);
    printf("pos = %i\n", pos);
    
    //vec1.insert(++vec1.begin(), vec2.begin(), vec2.end());
    printOut(vec1);
    //remove dupes in vec using set
    set<int> s;
    for(itVec1 = vec1.begin(); itVec1 != vec1.end(); itVec1++){
        s.insert(*itVec1); //copy to set
    }
    
    vec1.clear();
    
    for(set<int>::const_iterator sit = s.begin(); sit != s.end(); sit++){
        vec1.push_back(*sit);
    }
    
    printOut(vec1);

    
    printOut(vec1);
}
