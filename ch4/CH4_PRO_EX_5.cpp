//
// Created by 이지원 on 2022/10/10.
// p.211-5

#include "CH4_PRO_EX_5.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice {
    int face;
public:
    void roll() {
        face = (int)(rand()%6+1);
    }

    void print() {
        cout << "주사위 값 = " << face << endl;
    }
};

int main() {
    srand(time(NULL));
    Dice obj;
    for(int i=0; i<2; i++) {
        obj.roll();
        obj.print();
    }
    return 0;
}