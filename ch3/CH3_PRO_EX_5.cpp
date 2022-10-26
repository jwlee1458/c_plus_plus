//
// Created by Jiwon on 2022/10/03.
// p.161-5

#include "CH3_PRO_EX_5.h"
#include <iostream>
using namespace std;

void sayHello(int n=1) {
    for(int i=0; i<n; i++) {
        cout << "hello ";
    }
}

int main() {
    cout << "sayHello()->";
    sayHello();
    cout << endl;
    cout << "sayHello(3)->";
    sayHello(3);
    cout << endl;

    return 0;
}