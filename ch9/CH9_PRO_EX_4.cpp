//
// Created by 이지원 on 2022/11/09.
// p.394-4

#include "CH9_PRO_EX_4.h"
#include <iostream>
using namespace std;

class Point {
private:
    double xval, yval;
public:
    Point(double x=0.0, double y=0.0) {
        xval = x;
        yval = y;
    }
    double getX() {
        return xval;
    }
    double getY() {
        return yval;
    }
    void setX(double xval) {this->xval = xval;}
    void setY(double yval) {this->yval = yval;}
};

void swap(Point& x, Point& y) {
    Point tmp;
    tmp = x;
    x=y;
    y=tmp;
}

int main() {
    Point p1(1.2, -2.8);
    Point p2(3, 6);

    cout << "(" << p1.getX() << "," << p1.getY() << ")" << endl;
    cout << "(" << p2.getX() << "," << p2.getY() << ")" << endl;

    swap(p1, p2);
    cout << "(" << p1.getX() << "," << p1.getY() << ")" << endl;
    cout << "(" << p2.getX() << "," << p2.getY() << ")" << endl;
    return 0;
}