//
// Created by Jiwon on 2022/09/18.
// p.91 도형의 면적 계산하기

#include "CH2_LAB_5.h"
#include <iostream>
using namespace std;

int main() {
    int figure, l, w, h, r;
    while(true) {
        cout << "도형을 선택하시오(1, 2, 3): ";
        cin >> figure;
        if (figure==1) {
            cout << "가로: ";
            cin >> l;
            cout << "세로: ";
            cin >> w;
            cout << "면적: " << l*w << endl;
            break;
        } else if (figure==2) {
            cout << "반지름: ";
            cin >> r;
            cout << "면적: " << 3.14*r*r << endl;
            break;
        } else if (figure==3) {
            cout << "가로: ";
            cin >> l;
            cout << "높이: ";
            cin >> h;
            cout << "면적: " << 1*l*h/2 << endl;
            break;
        } else {
            cout << "유효하지 않은 숫자입니다." << endl;
        }
    }
    return 0;
}