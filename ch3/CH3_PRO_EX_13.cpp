//
// Created by Jiwon on 2022/10/04.
// p.164-13

#include "CH3_PRO_EX_13.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool n1 = false, n2 = false, n3 = false;

    while (true) {
        cout << "암호를 입력하세요: ";
        cin >> str;

        for (int i = 0; i < str.length(); i++) {
            if (str.at(i) >= 'A' && str.at(i) <= 'Z') {
                n1 = true;
            }
            if (str.at(i) >= 'a' && str.at(i) <= 'z') {
                n2 = true;
            }
            if (str.at(i) >= '0' && str.at(i) <= '9') {
                n3 = true;
            }
        }
        if (n1 && n2 && n3) {
            cout << "안전합니다." << endl; break;
        }
        else {
            cout << "안전하지 않습니다." << endl;
        }
    }
    return 0;
}