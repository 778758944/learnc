//
//  Martix.hpp
//  learnc
//
//  Created by xiaobo on 2018/4/2.
//  Copyright © 2018年 xiaobo. All rights reserved.
//

#ifndef Martix_hpp
#define Martix_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Martix {
public:
    vector<int> data;
    Martix(int x, int y);
    void showData(void);
};

#endif /* Martix_hpp */
