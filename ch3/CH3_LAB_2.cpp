//
// Created by Jiwon on 2022/09/27.
// p.133 swap() 함수 만들기

#include "CH3_LAB_2.h"
#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a=100, b=200;
    printf("a=%d b=%d\n", a, b);
    swap(a, b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}