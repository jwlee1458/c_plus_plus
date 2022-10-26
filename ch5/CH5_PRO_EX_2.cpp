//
// Created by 이지원 on 2022/10/18.
// p.246-2

#include "CH5_PRO_EX_2.h"
#include <iostream>
#include <string>
using namespace std;

class Airplane {
private:
    string name;
    int capacity;
    int speed;

public:
    string getName() {
        return name;
    }
    int getCapacity() {
        return capacity;
    }
    int getSpeed() {
        return speed;
    }

    void setName(string na) {
        name = na;
    }
    void setCapacity(int ca) {
        capacity = ca;
    }
    void setSpeed(int sp) {
        speed = sp;
    }

    Airplane() {
        name = "보잉 787";
        capacity = 900;
        speed = 300;
    }
    Airplane(string na, int ca, int sp) {
        name = na;
        capacity = ca;
        speed = sp;
    }

    void print() {
        cout << "비행기의 이름: " << name << endl;
        cout << "비행기의 용량: " << capacity << endl;
        cout << "비행기의 속도: " << speed << " km/h" <<endl;
    }
};

int main() {
    Airplane airplane1;
    Airplane airplane2;
    cout << "비행기 #1" << endl;
    airplane1.print();
    cout << endl;
    airplane2.getName();
    airplane2.getCapacity();
    airplane2.getSpeed();
    airplane2.setName("에어버스 350");
    airplane2.setCapacity(400);
    airplane2.setSpeed(1000);
    cout << "비행기 #2" << endl;
    airplane2.print();
    return 0;
}