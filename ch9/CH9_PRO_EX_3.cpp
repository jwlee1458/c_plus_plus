//
// Created by 이지원 on 2022/11/09.
// p.394-3

#include "CH9_PRO_EX_3.h"
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(const char *str);
    MyClass(const MyClass& other);
    ~MyClass();

private:
    char* stored;
};

MyClass::MyClass(const char *str) {
    cout << "일반 생성자" << endl;
    stored = new char[strlen(str) + 1];
    strcpy(stored, str);
}

MyClass::MyClass(const MyClass& other) {
    cout << "복사 생성자" << endl;
    stored = new char;
    *stored = *other.stored;
}

MyClass::~MyClass() {
    if(stored != nullptr) delete[] stored;
    stored = nullptr;
}

int main() {
    MyClass obj1("0");
    MyClass obj2(obj1);
    return 0;
}