//
// Created by Jiwon on 2022/09/23.
// p.116-6

#include "CH2_PRO_EX_6.h"
#include <iostream>
using namespace std;

int main() {
    int i,j;
    for(i=1; i<=7; i++) {
        for(j=1; j<=i; j++) {
            cout << j;
        }

        for(j=6; j>=i; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}