//
// Created by Jiwon on 2022/10/03.
// p.161-6

#include "CH3_PRO_EX_6.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while(true) {
        cout << "전화번호를 입력하시오: ";
        cin >> str;

        if(str=="quit") break;

        char c[] = "()";
        for(int i=0; i<strlen(c); i++) {
            str.erase(remove(str.begin(), str.end(), c[i]), str.end());
        }
        cout << str << endl;
    }
    return 0;
}