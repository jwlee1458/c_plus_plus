//
// Created by Jiwon on 2022/09/15.
// p.53 화씨온도를 섭씨온도로 바꾸기

#include "CH1_LAB_2.h"
#include <iostream>
using namespace std;

int main() {
    double F = 60;
    double C = (5.0/9.0)*(F-32);
    cout << "화씨온도 " << F << "도는 섭씨온도 " << C <<"입니다." << endl;
    return 0;
}