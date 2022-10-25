//
// Created by Jiwon on 2022/09/18.
// p.88 숫자 맞추기 게임

#include "CH2_LAB_4.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num, answer, count;
    srand(time(NULL));
    answer = rand()%100 + 1;
    count = 0;
    do {
        cout << "정답: ";
        cin >> num;
        count++;
        if (num > answer) {
            cout << "Down" << endl;
        } else if (num < answer) {
            cout << "Up" << endl;
        } else {
            cout << "정답입니다. 시도 횟수 = " << count << endl;
        }
    } while(true);
}