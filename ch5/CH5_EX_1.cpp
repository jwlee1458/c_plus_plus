//
// Created by 이지원 on 2022/10/18.
// p.244-1

#include "CH5_EX_1.h"
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point();
    Point(int xx=0, int yy=0);
    ~Point();
};

Point::Point() {}
Point::Point(int xx, int yy) : x(xx), y(yy) {}
Point::~Point() {}

int main() {
    Point point(100, 200);
    return 0;
}