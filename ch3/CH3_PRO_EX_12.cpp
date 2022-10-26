//
// Created by Jiwon on 2022/10/04.
// p.163-12

#include "CH3_PRO_EX_12.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int counter[256] = {0};
    string str;

    cout << "문자열을 입력하시오: ";
    getline(cin, str);

    for(int i=0; i<str.size(); i++) {
        counter[str[i]]++;
    }

    for(int i=0; i<256; i++) {
        if(counter[i]!=0) {
            cout << char(i) << ": " << counter[i] << endl;
        }
    }
    return 0;
}