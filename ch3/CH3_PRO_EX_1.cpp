//
// Created by Jiwon on 2022/10/03.
// p.160-1

#include "CH3_PRO_EX_1.h"
#include <iostream>
using namespace std;

int maximum(int x, int y, int z) {
    if(x>y) {
        if(x>z) return x;
    } else {
        if (y>z) return y;
        else return z;
    }
}

int main() {
    int x, y, z;
    cout << "3개의 정수를 입력하시오: ";
    cin >> x >> y >> z;
    cout << "가장 큰 정수는 " << maximum(x, y, z);
    return 0;
}