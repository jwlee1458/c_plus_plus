//
// Created by Jiwon on 2022/10/03.
// p.160-3

#include "CH3_PRO_EX_3.h"
#include <iostream>
#include <cmath>
using namespace std;

double hypot(double r1, double r2) {
    return sqrt(pow(r1, 2)+pow(r2, 2));
}

int main() {
    double r1, r2;
    cout << "직각삼각형의 한변: ";
    cin >> r1;
    cout << "직각삼각형의 한변: ";
    cin >> r2;
    cout << "빗변 " << hypot(r1, r2);
    return 0;
}