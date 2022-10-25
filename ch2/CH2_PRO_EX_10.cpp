//
// Created by Jiwon on 2022/09/23.
// p.117-10

#include "CH2_PRO_EX_10.h"
#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    for(i=1; i<100; i++) {
        for(j=1; j<100; j++) {
            for(k=1; k<100; k++) {
                if(i*i+j*j==k*k) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
    return 0;
}