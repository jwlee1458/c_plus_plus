//
// Created by Jiwon on 2022/09/27.
// p.126 함수 만들기

#include "CH3_LAB_1.h"
#include <iostream>
using namespace std;

int square(int n) {
    return (n*n);
}
int main() {
    int n;
    cout << "제곱할 정수를 입력하세요: ";
    cin >> n;
    cout << square(n) << endl;
    return 0;
}