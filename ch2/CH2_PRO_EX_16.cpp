//
// Created by Jiwon on 2022/09/23.
// p.119-16

#include "CH2_PRO_EX_16.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int init_money=50, win=0, batting=0;
    srand(time(NULL));
    for(int i=0; i<1000; i++) {
        int money = init_money;
        while (money>0 && money<250) {
            batting++;
            if ((double) rand() / RAND_MAX < 0.5) money++;
            else money--;
            if(money == 250) win++;
        }
    }
    cout << "초기 금액 $50" << endl;
    cout << "목표 금액 $250" << endl;
    cout << "1000번 중의 " << win << "번 승리" << endl;
    cout << "이긴 확률 = " << (double)win*100/1000 << endl;
    cout << "평균 배팅 횟수 = " << (double)batting/1000 << endl;
    return 0;
}