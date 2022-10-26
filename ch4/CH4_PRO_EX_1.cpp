//
// Created by 이지원 on 2022/10/10.
// p.210-1

#include "CH4_PRO_EX_1.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int age;

public:
    void setPerson(string na, int ag) {
        name = na;
        age = ag;
    }

    void print() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
};

int main() {
    Person obj;
    obj.setPerson("김철수", 21);
    obj.print();
    return 0;
}