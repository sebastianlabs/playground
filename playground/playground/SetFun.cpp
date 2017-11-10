//
//  SetFun.cpp
//  playground
//
//  Created by Sebastian Labs on 11/10/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#include "SetFun.hpp"
#include <set>

using namespace std;

void SetFun::run(){
    
    set<int> set1;
    for (int i=0; i<=100; i++){
        set1.insert(i);
    }
    set<int>::const_iterator it = set1.find(20);
    int size = (int)set1.size();
    int sum = 0;
    
    if(!set1.empty()){
        for(set<int>::const_iterator it = set1.begin(); it != set1.end(); it++ ){
            sum += *it;
        }
    }
    printf("sum: %d", sum);
}
