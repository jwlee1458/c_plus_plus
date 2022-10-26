//
// Created by 이지원 on 2022/10/18.
// p.244-2

#include "CH5_EX_2.h"
#include <string>
using namespace std;

class Person {
private:
    string name;
    int snumber;
    int age;

public:
    Person() {}
    Person(string na, int sn, int ag) :name(na), snumber(sn), age(ag) {}
    ~Person() {}
};

int main() {
    return 0;
}