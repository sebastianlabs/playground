//
//  main.cpp
//  playground
//
//  Created by Sebastian Labs on 11/4/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printOut(vector<int> print){
    vector<int>::iterator it;
    it = print.begin();
    
    for(int i=0; i<print.size(); i++){
        printf("element at pos %d is %d\n", i, *it);
        ++it;
    }
}

int main(int argc, const char * argv[]) {
    
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    
    vector<int>::iterator it;
    it = vec.begin();
    
    printOut(vec);
    
    //turn everything around
    printf("\nturn everything around\n\n");
    
    reverse(vec.begin(), vec.end());
    
    printOut(vec);
    
    
    
    return 0;
}

