//
// Created by 이지원 on 2022/12/01.
// p.431-8

#include "CH10_EX_8.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(int n) {
        real = n/2;
        imag = 0;
    }
    Complex(double r, double i) : real(r), imag(i) {}
    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);
    Complex operator+=(Complex);
    Complex operator-=(Complex);

    operator double() {
        return sqrt(real*real + imag*imag);
    }

    bool operator==(Complex);
    bool operator!=(Complex);

    friend istream& operator >> (istream&, Complex&);
    friend ostream& operator << (ostream&, const Complex&);
};

Complex operator+(Complex x, Complex y) {
    return Complex(x.real+y.real, x.imag+y.imag);
}
Complex operator-(Complex x, Complex y) {
    return Complex(x.real-y.real, x.imag-y.imag);
}

istream& operator>> (istream& in, Complex& c) {
    in >> c.real >> c.imag;
    if (!in) {
        c = Complex(0, 0);
    }
    return in;
}

ostream& operator<< (ostream& out, const Complex& c) {
    cout << "real: " << c.real  << ", imag: " << c.imag << endl;
    return out;
}

bool Complex::operator==(Complex c) {
    return real == c.real && imag == c.imag;
}

bool Complex::operator!=(Complex c) {
    return real != c.real || imag != c.imag;
}

int main() {
    Complex a(1, 7);
    Complex b(3, 8);
    Complex c = a+b;
    Complex d = operator+(a, b);
    Complex e = 6;

    cin >> a;
    cout << a;
    return 0;
}