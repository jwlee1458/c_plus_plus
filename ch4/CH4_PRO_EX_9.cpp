//
// Created by 이지원 on 2022/10/10.
// p.213-9

#include "CH4_PRO_EX_9.h"
#include <iostream>
using namespace std;

class Triangle {
public:
    double b, h;

    void init(double bb, double hh) {
        b = bb;
        h = hh;
    }

    void area() {
        cout << "밑변이 " << b << "이고 높이가 " << h << "인 삼각형의 면적 : " << (double)(b*h)/2.0 << endl;
    }
};

int main() {
    Triangle obj;
    obj.init(3, 4);
    obj.area();
    return 0;
}