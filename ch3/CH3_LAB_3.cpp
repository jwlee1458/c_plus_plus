//
// Created by Jiwon on 2022/09/27.
// p.138 중복 함수

#include "CH3_LAB_3.h"
#include <iostream>
using namespace std;

void print(int i) {
    cout << "정수 출력: " << i << endl;
}

void print(double d) {
    cout << "실수 출력: " << d << endl;
}

void print(char c) {
    cout << "문자 출력: " << c << endl;
}

int main() {
    print(100);
    print(3.14);
    print('C');
    return 0;
}