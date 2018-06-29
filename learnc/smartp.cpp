//
//  smartp.cpp
//  learnc
//
//  Created by xiaobo on 2018/4/11.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <memory>
#include <iostream>
#include <utility>
using namespace std;

class Test {
    public:
    Test(int a = 0) : m_a(a) {};
    ~Test() {
        cout << "Calling destructor" << endl;
    };
    int m_a;
};

void Fun() {
    int a = 0,
        b = 5,
        c;
    
    if (a == 0) {
        throw "Invalid divisor";
    }
    
    c = b/a;
    return;
}
class B;
class A {
    public:
        A(): m_sptrB(nullptr) {};
        ~A() {
            cout << "A is destoryed" << endl;
        };
        shared_ptr<B> m_sptrB;
};

class B {
public:
    B(): m_sptrA(nullptr) {};
    ~B() {
        cout << "B is destoryed" << endl;
    };
    shared_ptr<A> m_sptrA;
};

void Foo(shared_ptr<Test> p1) {
    cout << p1->m_a << endl;
}

int main() {
    // 创建一个指向对象的指针
    std::shared_ptr<Test> p (new Test(5));
    
    // auto_ptr指针复制发生了控制权转移，Foo执行完后p指向的内存被释放
    Foo(p);
    cout << p->m_a << endl;
    
//    shared_ptr<Test> sptr1(new Test[5], [](Test* p){delete[ ] p;});
    
    shared_ptr<A> sptrA(new A);
    shared_ptr<B> sptrB(new B);

    sptrA -> m_sptrB = sptrB;
    sptrB -> m_sptrA = sptrA;
    Test k(5);
    cout << k.m_a << endl;
    return 0;
}
 */
