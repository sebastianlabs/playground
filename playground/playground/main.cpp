//
//  main.cpp
//  playground
//
//  Created by Sebastian Labs on 11/4/17.
//  Copyright © 2017 Sebastian Labs. All rights reserved.
//

#include <iostream>
#include <string>
#include "VecFun.hpp"
#include "FileFun.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    
//    VecFun vecTest;
//    vecTest.run();

    FileFun ff("/Users/str0be/git/playground/playground/playground/scores.txt");
    ff.run();
    
    return 0;
}

