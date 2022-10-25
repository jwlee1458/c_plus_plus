//
// Created by Jiwon on 2022/09/18.
// p.93 산수 문제 자동 출제

#include "CH2_LAB_6.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n1, n2, num, answer;
    cout << "산수 문제를 자동으로 출제합니다." << endl;
    srand(time(NULL));
    n1 = rand()%100 + 1;
    n2 = rand()%100 + 1;
    answer = n1 + n2;
    while(true) {
        cout << n1 << " + " << n2 << " = ";
        cin >> num;
        if(num==answer) {
            cout << "맞았습니다." << endl;
            break;
        } else {
            cout << "틀렸습니다. 다시 풀어주세요." << endl;
        }
    }
    return 0;
}
