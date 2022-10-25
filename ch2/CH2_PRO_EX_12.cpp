//
// Created by Jiwon on 2022/09/23.
// p.118-12

#include "CH2_PRO_EX_12.h"
#include <iostream>
using namespace std;

int main() {
    int i;
    for(i=1; i<=100; i++) {
        if(i%3==0) {
            cout << "박수 ";
        } else{
            cout << i << " ";
        }
    }
    return 0;
}
