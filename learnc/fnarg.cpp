//
//  fnarg.cpp
//  learnc
//
//  Created by xiaobo on 2018/3/29.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct person {
    char name[20];
    int age;
} Person;

void fun(int x);
void fun2(int *x);
void fun3(int &x);
void fun5(Person &);

int main(void) {
    int * ptr;
    int * ptr2 = new int;
    *ptr2 = 10;
    cout << *ptr2 << endl;
    int arr[5] = {1};
    ptr = arr;
    cout << ptr[0] << endl;
    int y1 = 0;
    int y2 = 0;
    int y3 = 0;
    Person jack = {
        "jack",
        12,
    };
    fun(y1);
    fun2(&y2);
    fun3(y3);
    fun5(jack);
    cout << "y1 = "<<y1 << endl;
    cout << "y2 = "<< y2 << endl;
    cout << "y3 = " << y3 << endl;
    cout << "age is " << jack.age << endl;
    return 0;
}
// 值传递
void fun(int x) {
    x += 5;
}
// 指针传递
void fun2(int *x){
    cout << x << endl;
    cout << sizeof(x) << endl;
    *x += 5;
}
// 引用传递
void fun3(int &x) {
    cout << x << endl;
    x += 5;
}

void fun5(Person &p) {
    cout << p.name << endl;
    p.age = 13;
}
*/














