//
// Created by 이지원 on 2022/11/09.
// p.395-5

#include "CH9_PRO_EX_5.h"
#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    static int count;

    Box(double l=2.0, double w=2.0, double h=2.0) {
        length = l;
        width = w;
        height = h;
        count++;
    }

    ~Box() {}

    double Volume() {
        return length * width * height;
    }
};

int Box::count=0;

int main() {
    Box b1;
    Box b2(1,2,3);
    cout << "전체 객체 수: " << Box::count << endl;
    return 0;
}