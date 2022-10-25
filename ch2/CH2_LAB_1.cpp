//
// Created by Jiwon on 2022/09/18.
// p.72 비밀 코드 맞추기

#include "CH2_LAB_1.h"
#include <iostream>
using namespace std;

int main() {
    char code;
    char secretcode = 'h';
    while(true) {
        cout << "비밀 코드를 맞춰보세요: ";
        cin >> code;
        if(code > secretcode) {
            cout << code << "앞에 있음" << endl;
        } else if(code < secretcode) {
            cout << code << "뒤에 있음" << endl;
        } else {
            cout << "정답" << endl;
            break;
        }
    }
    return 0;
}