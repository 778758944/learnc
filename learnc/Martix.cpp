//
//  Martix.cpp
//  learnc
//
//  Created by xiaobo on 2018/4/2.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <iostream>
#include <vector>
using namespace std;


class Martix {
public:
    vector<vector<int>> data;
    Martix(int x, int y, int z);
    void showData(void);
    const int h_size() const;
    const int l_size() const;
    Martix operator*(const Martix&);
};
Martix::Martix(int x, int y, int z){
    data.assign(x, vector<int>(y,z));
}

void Martix::showData(void) {
    int nRows, nCols, i, j;
    nRows = h_size();
    nCols = l_size();
    for(i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
            cout << data[i][j] << endl;
        }
    }
}

Martix Martix::operator*(const Martix &n){
    if(this->l_size() != n.h_size()) {
        Martix a(0,0,0);
        return a;
    }
    int Cols = n.l_size();
    int Rows = this->h_size();
    Martix b(Rows, Cols, 0);
    int i, j, z;
    for(i = 0; i < this->h_size(); i++) {
        for (j = 0; j < n.l_size(); j++) {
            for(z = 0; z < this->l_size(); z++) {
                b.data[i][j] += this->data[i][z] * n.data[z][j];
            }
        }
    }
    return b;
}


const int Martix::h_size() const {
    return (int) data.size();
}

const int Martix::l_size() const {
    if (data.empty()) {
        return 0;
    } else {
        return (int) data[0].size();
    }
}

int main() {
    Martix m(2, 3, 2);
    Martix n(3, 2, 3);
    (m * n).showData();
    
    return 0;
}
 */


