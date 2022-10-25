//
// Created by Jiwon on 2022/09/15.
// p.51 최대한도의 사탕사기

#include "CH1_LAB_1.h"
#include <iostream>
using namespace std;

int main() {
    int money = 1000;
    int candy = 300;
    cout << "현재 가지고 있는 돈: " << money << endl;
    cout << "캔디의 가격: " << candy << endl;
    cout << "최대로 살 수 있는 캔디의 개수 = " << money/candy << endl;
    cout << "캔디 구입 후 남는 돈 = " << money%candy << endl;
    return 0;
}