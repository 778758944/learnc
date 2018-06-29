//
//  class.cpp
//  learnc
//
//  Created by xiaobo on 2018/3/28.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;
    // 类的内联函数
    double getVolume(void) {
        return length * breadth * height;
    };
    void setLength(double len);
    void setWidth(double wid);
    double getWidth(void);
//私有成员
private:
    double width;
};

class Rect {
protected:
    double width;
public:
    void setWidth(double wid);
    double getWidth(void);
};

void Rect::setWidth(double wid) {
    width = wid;
};

double Rect::getWidth(void){
    return width;
};

class SmallRect:Rect{
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

void Box::setLength(double len) {
    length = len;
};

void Box::setWidth(double wid) {
    width = wid;
};

double Box::getWidth(void) {
    return width;
};

double SmallRect::getSmallWidth(void) {
    return width;
};

void SmallRect::setSmallWidth(double wid){
    width = wid;
};

// 构造函数
class Line {
public:
    void setLength(double len);
    double getLength(void);
    Line(double len); // 构造函数
    Line(const Line &obj); // 拷贝构造函数
    ~Line(); // 析构函数
    
private:
    double * ptr;
};

Line::Line(double len){
    ptr = new double;
    *ptr = len;
    cout << "构造函数" << endl;
}

Line::Line(const Line &obj) {
    cout << "拷贝构造函数" << endl;
    ptr = new double;
    *ptr = *obj.ptr;
}

void Line::setLength(double len) {
    *ptr = len;
}

double Line::getLength(void) {
    return *ptr;
}

Line::~Line(void) {
    cout << "Object is being deteled" << endl;
    delete ptr;
}

void displayLine(Line obj) {
    cout << obj.getLength() << endl;
};

class FriendTest {
    double width;
public:
    friend void printWidth(FriendTest ft);
    void setWidth(double wid);
};

void FriendTest::setWidth(double wid) {
    width = wid;
};

void printWidth(FriendTest ft) {
    cout << ft.width << endl;
};

class ThisBox {
public:
    static int objectCount;
    ThisBox (double l = 2.0, double b = 2.0, double h = 2.0) {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        objectCount++;
    }
    
    double Volume() {
        return length * breadth * height;
    }
    
    bool compare(ThisBox box) {
        // 指向对象的指针
        return this -> Volume() > box.Volume();
    }
    
    static int getCount(void) {
        return objectCount;
    }
    
private:
    double length;
    double breadth;
    double height;
};

// 初始化静态成员
int ThisBox::objectCount = 0;




int main(){
    Box Box1;
    Box Box2;
    double volume = 0.0;
    
    Box1.height = 5.0;
    Box1.setLength(6.0);
    Box1.breadth = 7.0;
    
    Box2.height = 10.0;
    Box2.setLength(12.0);
    Box2.breadth = 13.0;
    
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 的体积" << Box1.getVolume() << endl;
    
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 的体积" << Box2.getVolume() << endl;
    
    Box1.setWidth(100.1);
    cout << "Box1.width:" << Box1.getWidth() << endl;
    
    SmallRect rect;
    rect.setSmallWidth(10.2);
    cout << "rect.width" << rect.getSmallWidth() << endl;
    
    Rect rect2;
    rect2.setWidth(3.2);
    cout << "rect2.width" << rect2.getWidth() << endl;
    // 带构造函数参数类的初始化
    Line line(10.009);
    Line line2 = line; // 对象赋值调用拷贝构造函数
    // 把对象作为参数传递，需调用拷贝构造函数
    displayLine(line);
    displayLine(line2);
    
    FriendTest ft;
    ft.setWidth(100.11);
    printWidth(ft);
    
    ThisBox thisbox1(3.3, 1.2, 1.5);
//    ThisBox thisbox2(8.5, 6.0, 2.0);
    ThisBox thisbox2(2.1, 2.3, 4.5);
    
    ThisBox * ptrbox;
    
    ptrbox = &thisbox1;
    
    cout << "this box2 is volume:" << thisbox2.Volume() << endl;
    cout << "this box1 volume: " << thisbox1.Volume() << endl;
    
    if(thisbox1.compare(thisbox2)) {
        cout << "box2 is smaller than box1" << endl;
    } else {
        cout << "box2 is equal to or large than box1" << endl;
    }
    cout << "object is " << ThisBox::objectCount << endl;
    return 0;
}
*/










