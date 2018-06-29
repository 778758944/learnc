//
//  sstream.cpp
//  learnc
//
//  Created by xiaobo on 2018/4/2.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <iostream>
#include <sstream>
#include <assert.h>
#include <string.h>
using namespace std;

class Person {
public:
    char name[12];
    int age;
    Person(char const * name, int age);
    void getPerson(void);
};

Person::Person(char const * n, int a) {
    strcpy(name, n);
    age = a;
}

void Person::getPerson(void) {
    cout << name << endl;
    cout << age << endl;
}

int main() {
    int a = 100;
    char str[10];
    char b[] = "100";
    int num;
    stringstream s;
    s << a;
    s >> str;
    s.clear();
    s << b;
    s >> num;
    cout << str << endl;
    cout << num << endl;
    
    Person p("jack", 10);
    Person* p1;
    p1 = &p;
    p1->getPerson();
    cout << p1->name << endl;
    cout << p1->age << endl;
    
}
 */
