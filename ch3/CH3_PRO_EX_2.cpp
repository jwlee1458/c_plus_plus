//
// Created by Jiwon on 2022/10/03.
// p.160-2

#include "CH3_PRO_EX_2.h"
#include <iostream>
#include <cmath>
using namespace std;

double calc_volume(double r, double v) {
    v = (4.0 / 3.0 * 3.14 * pow(r, 3));
    return v;
}

int main() {
    double r, v;
    cout << "반지름을 입력하시오: ";
    cin >> r;
    cout << "구의 부피는 " << calc_volume(r, v);
    return 0;
}