//
// Created by Jiwon on 2022/09/23.
// p.116-4

#include "CH2_PRO_EX_4.h"
#include <iostream>
using namespace std;

int main() {
    int n1;
    for(int i=0; i<5; i++) {
        cout << "임의의 정수를 5번 입력하세요: ";
        cin >> n1;
    }
    if(n1==5) {
        cout << "5를 입력하였군요! 컴퓨터 승";
    } else {
        cout << "인내심이 강합니다. 사용자 승";
    }
    return 0;
}