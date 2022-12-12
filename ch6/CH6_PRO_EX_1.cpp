//
// Created by 이지원 on 2022/10/25.
// p.281-1

#include "CH6_PRO_EX_1.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    int size;

    cout << "정수의 개수 : ";
    cin >> size;

    vector<int> vec(size);

    for(int i=0; i<size; i++) {
        cout << "정수를 입력하시오 : ";
        cin >> x;
        vec.push_back(x);
    }

    int max=0;
    int min=1000;
    for(int n: vec) {
        if(max<n) max=n;
        if(min>n) min=n;
    }

    cout << "최대값 : " << max << endl;
    cout << "최소값 : " << min << endl;
    return 0;
}