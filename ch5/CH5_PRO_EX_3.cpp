//
// Created by 이지원 on 2022/10/18.
// p.247-3

#include "CH5_PRO_EX_3.h"
#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }
    Box(int l, int w, int h) : length(l), width(w), height(h) {
    }

    int getLength() {
        return length;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }

    void setLength(int l) {
        length = l;
    }
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }

    bool empty() {
        if(length==0 || width==0 || height==0) {
            return false;
        } else return true;
    }

    int getVolume() {
        return length*width*height;
    }

    void print() {
        cout << "상자의 길이: " << length << endl;
        cout << "상자의 너비: " << width << endl;
        cout << "상자의 높이: " << height << endl;
        cout << "상자의 부피: " << getVolume() << endl;
    }
};

int main() {
    Box box1;
    Box box2;
    cout << "상자 #1" << endl;
    box1.print();
    cout << endl;
    box2.getLength();
    box2.getWidth();
    box2.getHeight();
    box2.setLength(3);
    box2.setWidth(2);
    box2.setHeight(4);
    cout << "상자 #2" << endl;
    box2.print();
    return 0;
}