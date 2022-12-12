//
// Created by 이지원 on 2022/11/09.
// p.393-2

#include "CH9_PRO_EX_2.h"
#include <iostream>
using namespace std;

class Line {
public:
    int getLength(void);
    Line(int len);
    Line(const Line& other);
    ~Line();

private:
    int *ptr;
};

Line::Line(int len) {
    cout << "일반 생성자" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line& other) {
    cout << "복사 생성자" << endl;
    ptr = new int;
    *ptr = *other.ptr;
}

int Line::getLength() {
    return *ptr;
}

Line::~Line() {
    if(ptr != nullptr) delete[] this->ptr;
    ptr = nullptr;
}

int main() {
    Line obj1(10);
    Line obj2(obj1);
    Line obj3(obj1);
    cout << "선의 길이: " << obj1.Line::getLength() << endl;
    Line obj4(obj1);
    cout << "선의 길이: " << obj2.Line::getLength() << endl;
    return 0;
}