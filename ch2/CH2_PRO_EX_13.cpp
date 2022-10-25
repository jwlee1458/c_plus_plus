//
// Created by Jiwon on 2022/09/23.
// p.118-13

#include "CH2_PRO_EX_13.h"
#include <iostream>
using namespace std;

int main() {
    int n, i, a=0, b=1, c;
    cout << "몇 항까지 구할까요: ";
    cin >> n;
    cout << a << " " << b;
    for(i=3; i<=n; i++) {
        c=a+b;
        cout << " " << c;
        a=b;
        b=c;
    }
    return 0;
}