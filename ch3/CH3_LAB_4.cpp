//
// Created by Jiwon on 2022/09/27.
// p.143 디폴트 매개 변수 실습하기

#include "CH3_LAB_4.h"
#include <iostream>
using namespace std;

int sum(int x, int y, int z=0, int w=0) {
    return x+y+z+w;
}

int main() {
    cout << "sum(10, 15)=" << sum(10, 15) << endl;
    cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << endl;
    cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << endl;
}