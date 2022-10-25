//
// Created by Jiwon on 2022/09/23.
// p.117-8

#include "CH2_PRO_EX_8.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "정수를 입력하시오: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
    return 0;
}