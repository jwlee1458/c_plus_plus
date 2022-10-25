//
// Created by Jiwon on 2022/09/15.
// p.60-6

#include "CH1_PRO_EX_6.h"
#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    cout << "시: ";
    cin >> h;
    cout << "분: ";
    cin >> m;
    cout << "초: ";
    cin >> s;
    cout << "전체 초: ";
    cout << h * 60 * 60 + m * 60 + s << endl;
    return 0;
}