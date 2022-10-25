//
// Created by Jiwon on 2022/09/23.
// p.117-9

#include "CH2_PRO_EX_9.h"
#include <iostream>
using namespace std;

int main() {
    double C, F;
    for(F=0; F<=100; F+=10) {
        C=(F-32.0)*5.0/9.0;
        cout << F << "     " << C << endl;
    }
    return 0;
}