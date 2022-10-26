//
// Created by 이지원 on 2022/10/10.
// p.210-2

#include "CH4_PRO_EX_2.h"
#include <iostream>
#include <string>
using namespace std;

class Computer {
    string name;
    int RAM;
    double cpu_speed;

public:
    void setComputer(string na, int ra, double cp) {
        name = na;
        RAM = ra;
        cpu_speed = cp;
    }

    void print() {
        cout << "이름 : " << name << endl;
        cout << "RAM : " << RAM << endl;
        cout << "CPU 속도 : " << cpu_speed << endl;
    }
};

int main() {
    Computer obj;
    obj.setComputer("오피스컴퓨터", 8, 4.2);
    obj.print();
    return 0;
}