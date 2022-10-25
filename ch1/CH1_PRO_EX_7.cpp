//
// Created by Jiwon on 2022/09/15.
// p.61-7

#include "CH1_PRO_EX_7.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, a, v;
    cout << "반지름: ";
    cin >> r;
    a = 4*3.14*pow(r,2);
    v = 4*3.14*pow(r,3)/3;
    cout << "표면적: " << a << endl;
    cout << "부피: " << v << endl;
    return 0;
}