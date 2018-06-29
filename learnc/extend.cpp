//
//  extend.cpp
//  learnc
//
//  Created by xiaobo on 2018/3/30.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <iostream>
using namespace std;
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }
    
    void setHeight(int h) {
        height = h;
    }
// 内部访问派生类能继承
protected:
    int width;
    int height;
};

class PaintCost {
public:
    int getCost(int area) {
        return area * 70;
    }
};

class Rectangle: public Shape, public PaintCost {
public:
    int getArea() {
        return width * height;
    }
};

class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }
    // 多态
    // 实现抽象类
    virtual int area(void) = 0;
};

class Rectangle: public Shape {
    public:
    Rectangle(int a = 0, int b = 0): Shape(a,b) {}
    int area () {
        cout << "Rectangle class area:" << endl;
        return (width * height);
    }
};

class Triangle: public Shape {
    public:
    Triangle(int a = 0, int b = 0): Shape(a,b) {}
    int area(void) {
        cout << "Triangle class area :" << endl;
        return (width * height/2);
    }
};

int main(void) {
    Rect.setWidth(5);
    Rect.setHeight(7);
    
    int area = Rect.getArea();
    
    cout << "Total area:" << area << endl;
    cout << "Total cost:" << Rect.getCost(area) << endl;
    Shape * shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);
    
    shape = &rec;
    
    shape -> area();
    
    shape = &tri;
    shape -> area();
    return 0;
}
 */





















