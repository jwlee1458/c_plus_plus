//
// Created by Jiwon on 2022/09/19.
// p.102 배열에서 최대값 찾기

#include "CH2_LAB_7.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[10], max;

    for(auto& i:arr) {
        i=rand()%100+1;
        cout << i << " ";
    }
    cout << endl;

    max=arr[0];
    for(auto& i:arr) {
        if(i>max)
            max = i;
    }
    cout << "최대값 = " << max;
    return 0;
}