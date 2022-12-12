//
// Created by 이지원 on 2022/12/01.
// p.434-4

#include "CH10_PRO_EX_4.h"
#include <iostream>
using namespace std;

class Box{
private:
    double length;
    double width;
    double height;
public:
    Box(int l=0,int w=0,int h=0):length(l),width(w),height(h){}
    double getVolume(void){
        return length * width * height;
    }

    friend void printBox(Box b);
};

void printBox(Box box){
    cout << "상자의 길이: " << box.length << endl;
    cout << "상자의 너비: " << box.width << endl;
    cout << "상자의 높이: " << box.height << endl;
    cout << "상자의 부피: " << box.getVolume() << endl;
}

int main(){
    Box a(10,10,10), b(20,20,20);
    cout << "상자 #1" << endl;
    printBox(a);
    return 0;
}