//
// Created by Jiwon on 2022/09/15.
// p.59-3

#include "CH1_PRO_EX_3.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h1, h2;
    cout << "첫 번째 변: ";
    cin >> h1;
    cout << "두 번째 변: ";
    cin >> h2;
    cout << "\n빗변 길이: " << sqrt(pow(h1, 2) + pow(h2, 2)) << endl;
    return 0;
}
