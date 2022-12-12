//
// Created by 이지원 on 2022/12/01.
// p.476-3

#include "CH11_PRO_EX_3.h"
#include <iostream>
using namespace std;

class Employee {
    string name;
    int salary;
public:
    Employee() {
        name = "";
        salary = 0;
    }
    Employee(string n, int s) {
        name = n;
        salary = s;
    }public:
    Employee() {
        name = "";
        salary = 0;
    }
    Employee(string n, int s) {
        name = n;
        salary = s;
    }
    string getName() {
        return name;
    }
    int getSalary() {
        return salary;
    }
    void setName(string n) {
        this->name=n;
    }
    void setSalary(int s) {
        this->salary=s;
    }
    void computeSalary() {}
};

class Manager : public Employee {
    int bonus;
public:
    Manager() {
        int bonus = 0;
    }
    Manager(int b) {
        bonus = 0;
    }
    int getBonus() {
        return bonus;
    }
    void setBonus(int b) {
        this->bonus=b;
    }
    double computeSalary(string name, int salary) {
        Employee::computeSalary();
        cout << "이름: " << name << endl;
        cout << "월급: " << salary << endl;
        cout << "보너스: " << bonus << endl;
        cout << "전체 급여: " << salary+bonus << endl;
        return (salary+bonus);
    }
};

int main() {
    Manager manager;
    manager.setBonus(100);
    manager.computeSalary("김철수", 200);
    return 0;
}