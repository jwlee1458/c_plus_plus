//
// Created by 이지원 on 2022/10/10.
// p.213-8

#include "CH4_PRO_EX_8.h"
#include <iostream>
using namespace std;

class Complex {
public:
    double r;
    double i;

    void init(double rr, double ii) {
        r = rr;
        i = ii;
    }

    void print() {
        if(i>=0) {
            cout << r << " + " << i << "i" << endl;
        } else {
            cout << r << " - " << -i << "i" << endl;
        }
    }
};

int main() {
    Complex obj;
    obj.init(5,3);
    obj.print();
    obj.init(3,-4);
    obj.print();
    return 0;
}