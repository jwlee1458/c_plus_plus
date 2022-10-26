//
// Created by 이지원 on 2022/10/10.
// p.208-3

#include "CH4_EX_3.h"
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int salary;
    int years;

public:
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getSalary() {
        return salary;
    }
    int getYears() {
        return years;
    }

    void setName(string na) {
        name = na;
    }
    void setAge(int ag) {
        age = ag;
    }
    void setSalary(int sa) {
        salary = sa;
    }
    void setYears(int ye) {
        years = ye;
    }
};

int main() {
    Employee obj;
    obj.setName("홍길동");
    obj.setAge(26);
    obj.setSalary(1000000);
    obj.setYears(1);
    cout << "이름 : " << obj.getName() << endl;
    cout << "나이 : " << obj.getAge() << endl;
    cout << "급여 : " << obj.getSalary() << endl;
    cout << "연도 : " << obj.getYears() << endl;

    return 0;
}