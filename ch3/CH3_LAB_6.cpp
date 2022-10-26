//
// Created by Jiwon on 2022/09/27.
// p.156 행맨

#include "CH3_LAB_6.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    string answer;
    string list[] = {"the", "c++", "programming", "language"};
    int n = rand()%4;
    answer = list[n];

    string guess(answer.length(), '_');
    while(true) {
        cout << guess << endl;
        cout << "글자를 입력하시오: ";
        cin >> ch;
        for(int i=0; i<answer.length(); i++) {
            if(ch == answer[i]) {
                guess[i] = ch;
            }
        }
        if(answer == guess) {
            cout << answer << endl;
            cout << "성공하였습니다.!";
            break;
        }
    }
    return 0;
}