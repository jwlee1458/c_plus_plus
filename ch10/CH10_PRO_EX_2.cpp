//
// Created by 이지원 on 2022/12/01.
// p.433-2

#include "CH10_PRO_EX_2.h"
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

    bool operator==(Box& i){
        return getVolume()==i.getVolume();
    }

    void print(Box a) {
        cout << "상자의 길이: " << a.length << endl;
        cout << "상자의 너비: " << a.width << endl;
        cout << "상자의 높이: " << a.height << endl;
        cout << "상자의 부피: " << a.getVolume() << endl;
        cout << endl;
    }
};

int main(){
    Box a(10,10,10), b(20,20,20);
    cout << "상자 #1"  << endl;
    a.print(a);
    cout << "상자 #2"  << endl;
    a.print(b);
    cout << (a==b);
    return 0;
}