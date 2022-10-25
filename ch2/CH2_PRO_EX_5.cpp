//
// Created by Jiwon on 2022/09/23.
// p.116-5

#include "CH2_PRO_EX_5.h"
#include <iostream>
using namespace std;

int main() {
    int n1, sum;
    sum=0;
    do {
        cout << "임의의 정수를 입력하세요: ";
        cin >> n1;
        sum+=n1;
    } while(n1!=0);
    cout << "합계=" << sum;
    return 0;
}