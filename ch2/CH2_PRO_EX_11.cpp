//
// Created by Jiwon on 2022/09/23.
// p.118-11

#include "CH2_PRO_EX_11.h"
#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cout << "n의 값을 입력하시오: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        sum+=i*i;
    }
    cout << "계산값은 " << sum << "입니다.";
    return 0;
}