//
// Created by 이지원 on 2022/12/01.
// p.477-5

#include "CH11_PRO_EX_5.h"
#include <iostream>
using namespace std;

class Shape {
    int x, y;
    string color;
public:
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    string getColor() {
        return color;
    }
    void setX(int x) {
        this->x=x;
    }
    void setY(int y) {
        this->y=y;
    }
    void setColor(string s) {
        color=s;
    }
    void getArea() {}
};

class Circle : public Shape {
    int r;
public:
    void setR(int r) {
        this->r = r;
    }
    void getArea() {
        Shape::getArea();
        cout << "원의 둘레: " << 2 * 3.14 * r << endl;
        cout << "원의 면적: " << r * r * 3.14<< endl;
    }
};

int main() {
    Circle circle;
    circle.setR(20);
    circle.getArea();
    return 0;
}