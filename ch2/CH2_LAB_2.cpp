//
// Created by Jiwon on 2022/09/18.
// p.74 세 개의 정수 중에서 큰 수 찾기

#include "CH2_LAB_2.h"
#include <iostream>
using namespace std;

int main() {
    int a, b ,c;
    cout << "3개의 정수를 입력하시오.: ";
    cin >> a >> b >> c;
    cout << "가장 큰 정수는 " ;
    if(a>b && a>c) {
        cout << a << endl;
    } else if(b>a && b>c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }
    return 0;
}