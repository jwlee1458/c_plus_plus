//
// Created by Jiwon on 2022/09/19.
// p.104 사과를 제일 좋아하는 사람찾기

#include "CH2_LAB_8.h"
#include <iostream>
using namespace std;

int main() {
    const int size=10;
    int person[size], max, num;
    for(auto& i:person) {
        cout << "아침에 먹는 사과의 개수: ";
        cin >> i;
    }
    cout << endl;

    max=person[0];
    num=0;
    for(int i=0; i<size; i++) {
        if(person[i]>max) {
            max=person[i];
            num = i;
        }
    }
    cout << "가장 많은 사과를 먹은 사람 번호 = " << num;
    return 0;
}
