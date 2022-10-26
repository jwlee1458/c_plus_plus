//
// Created by 이지원 on 2022/10/10.
// p.211-3

#include "CH4_PRO_EX_3.h"
#include <iostream>
using namespace std;

class Sum {
    int n1, n2;

public:
    void init(int x, int y) {
        n1 = x;
        n2 = y;
    }

    int add() {
        return n1+n2;
    }
};

int main() {
    Sum obj;
    int a, b;
    cout << "첫 번째 정수 : ";
    cin >> a;
    cout << "두 번째 정수 : ";
    cin >> b;
    obj.init(a, b);
    cout << "연산 결과 : " << obj.add() << endl;
    return 0;
}