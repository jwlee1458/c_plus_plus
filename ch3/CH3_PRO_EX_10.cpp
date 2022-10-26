//
// Created by Jiwon on 2022/10/03.
// p.162-10

#include "CH3_PRO_EX_10.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand()%2;
}

int main() {
    int x=0, y=0, n=flip();
    srand(time(NULL));

    for(int i=0; i<100; i++) {
        if(n) x++; //앞면
        else y++; //뒷면
    }

    cout << "동전의 앞면: " << x << endl;
    cout << "동전의 앞면: " << y << endl;
    return 0;
}