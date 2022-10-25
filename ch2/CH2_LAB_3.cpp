//
// Created by Jiwon on 2022/09/18.
// p.86 자음과 모음 개수 세기

#include "CH2_LAB_3.h"
#include <iostream>
using namespace std;

int main() {
    char word;
    int c=0, v=0;
    cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
    while(cin >> word) {
        switch (word) {
            case 'i': case 'e': case 'o': case 'u': case 'a':
                v++;
                break;
            default:
                c++;
        }
    }
    cout << "모음: " << v << endl;
    cout << "자음: " << c << endl;
    return 0;
}