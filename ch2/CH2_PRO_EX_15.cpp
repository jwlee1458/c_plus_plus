//
// Created by Jiwon on 2022/09/23.
// p.119-15

#include "CH2_PRO_EX_15.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int user, computer;
    while (true) {
        cout << "가위, 바위, 보 중에 하나를 선택하세요(1, 2, 3): ";
        cin >> user;
        if (user >= 1 && user <= 3) {
            break;
        } else {
            cout << "다시 입력하세요." << endl;
        }
    }
    srand(time(NULL));
    computer = rand() % 3 + 1;
    cout << "컴퓨터: " << computer << endl;
    if(user > computer) {
        cout << "사용자 승!";
    } else if(user < computer) {
        cout << "컴퓨터 승!";
    } else {
        cout << "무승부!";
    }
    return 0;
}
