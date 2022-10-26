//
// Created by 이지원 on 2022/10/18.
// p.248-5

#include "CH5_PRO_EX_5.h"
#include <iostream>
using namespace std;

class Complex {
private:
    double r;
    double i;

public:
    Complex() {
        r = 0;
        i = 0;
    }
    Complex(double _r, double _i) {
        r = _r;
        i = _i;
    }

    double getR() {
        return r;
    }
    double getI() {
        return i;
    }

    void setR(double _r) {
        r = _r;
    }
    void setI(double _i) {
        i = _i;
    }

    void print() {
        cout << "(" << r << ((i>=0 ? " + " : " - ")) << (i>=0 ? i : -i) << "i)";
    }
};

Complex add(Complex a, Complex b) {
    Complex Sum;
    Sum.setR(a.getR()+b.getR());
    Sum.setI(a.getI()+b.getI());
    return Sum;
}

int main() {
    Complex A(5, 3);
    Complex B(3, -4);
    A.print();
    cout << "+";
    B.print();
    cout << "=";
    add(A, B).print();
    return 0;
}
