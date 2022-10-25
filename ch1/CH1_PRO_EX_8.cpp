//
// Created by Jiwon on 2022/09/15.
// p.61-8

#include "CH1_PRO_EX_8.h"
#include <iostream>
using namespace std;

int main() {
    int q1, q2, q3, t1, t2;
    cout << "퀴즈 #1 성적: ";
    cin >> q1;
    cout << "퀴즈 #2 성적: ";
    cin >> q2;
    cout << "퀴즈 #3 성적: ";
    cin >> q3;
    cout << "중간고사 성적: ";
    cin >> t1;
    cout << "기말고사 성적: ";
    cin >> t2;
    cout << "성적 총합: " << q1+q2+q3+t1+t2 << endl;
    return 0;
}