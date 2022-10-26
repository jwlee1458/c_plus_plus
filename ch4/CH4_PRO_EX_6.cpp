//
// Created by 이지원 on 2022/10/10.
// p.212-6

#include "CH4_PRO_EX_6.h"
#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int age;
    int salary;

public:
    void setPerson(string na, int ag, int sa) {
        name = na;
        age = ag;
        salary = sa;
    }

    void print() {
        cout << "Employee1:" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << salary << endl;
    }
};

int main() {
    Employee obj;
    obj.setPerson("김철수", 38, 2000000);
    obj.print();
    return 0;
}