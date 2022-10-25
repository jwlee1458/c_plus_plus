//
// Created by Jiwon on 2022/09/23.
// p.119-14

#include "CH2_PRO_EX_14.h"
#include <iostream>
using namespace std;

int main() {
    int n1, n2, sum=0;
    char c;
    while(true) {
        cout << "연산의 종류: ";
        cin >> c;
        if(c=='+'||c=='-'||c=='*'||c=='/') {
            break;
        } else {
            cout << "다시 입력하세요." << endl;
            cin >> c;
        }
    }
    cout << "숫자를 입력하시오: ";
    cin >> n1 >> n2;
    switch (c) {
        case '+':
            sum=n1+n2;
            break;
        case '-':
            sum=n1-n2;
            break;
        case '*':
            sum=n1*n2;
            break;
        case '/':
            if(n2==0) {
                cout << "분모가 0이라 나눌 수 없습니다.";
            } else {
                sum=(double)n1/(double)n2;
                break;
            }
        default:
            break;
    }
    cout << "계산의 결과: " << sum;
    return 0;
}