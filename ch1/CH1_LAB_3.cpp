//
// Created by Jiwon on 2022/09/15.
// p.55 주사위 게임

#include "CH1_LAB_3.h"
#include <iostream>
#include <ctime>
#include <cstdlib> //rand()
using namespace std;

int main() {
    srand(time(NULL)); //seed number 변경 -> random number 생성 시 값이 변경
    int dice1 = (rand()%6) + 1;
    int dice2 = (rand()%6) + 1;
    cout << "두 주사위 합 = " << dice1+dice2 << endl;
    return 0;
}