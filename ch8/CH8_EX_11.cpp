//
// Created by 이지원 on 2022/11/03.
// p.351-11

#include "CH8_EX_11.h"
#include <iostream>
#include <string>
using namespace std;

class Rect {
private:
    int width, height;

public:
    Rect(int w, int h) {
        width = w;
        height = h;
    }

    int getWidth() const {
        return width;
    }
    void setWidth(int w) {
        width = w;
    }
    int getHeight() const {
        return height;
    }
    void setHeight(int h) {
        height = h;
    }
    int getArea() const {
        return width * height;
    }
    int getPerimeter() const {
        return 2 * (width + height);
    }

    bool is_equal(Rect& r1, Rect& r2) const {
        if (r1.width == r2.width) {
            r1.height = r2.height;
            cout << "r1과 r2는 크기가 같습니다. " << endl;
            return true;
        }
        else {
            cout << "r1과 r2는 크기가 다릅니다. " << endl;
            return false;
        }
    }

    void print() const {
        cout << "사각형의 면적 : " << getArea() << endl;
        cout << "사각형의 둘레 : " << getPerimeter() << endl;
    }
};

int main() {
    Rect* p = new Rect(10, 20);
    Rect r1(10, 20);
    Rect r2(10, 20);
    p->print();
    p->is_equal(r1, r2);
    delete p;
    return 0;
}