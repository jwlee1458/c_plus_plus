//
// Created by Jiwon on 2022/09/23.
// p.115-2

#include "CH2_PRO_EX_2.h"
#include <iostream>
using namespace std;

int main() {
    int menu;
    cout << "콜라(1), 물(2), 스프라이트(3), 주스(4), 커피(5) 중에서 번호 하나를 선택하세요: ";
    cin >> menu;
    switch (menu) {
        case 1:
            cout << "콜라를 선택하였습니다.";
            break;
        case 2:
            cout << "물을 선택하였습니다.";
            break;
        case 3:
            cout << "스프라이트를 선택하였습니다.";
            break;
        case 4:
            cout << "주스를 선택하였습니다.";
            break;
        case 5:
            cout << "커피를 선택하였습니다.";
            break;
        default:
            cout << "오류. 선택이 유효하지 않습니다. 돈을 반환합니다.";
            break;
    }
    return 0;
}