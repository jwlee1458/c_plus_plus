//
// Created by Jiwon on 2022/09/15.
// p.60-4

#include "CH1_PRO_EX_4.h"
#include <iostream>
using namespace std;

int main() {
    int l, w, h;
    cout << "길이: ";
    cin >> l;
    cout << "너비: ";
    cin >> w;
    cout << "높이: ";
    cin >> h;
    cout << "\n상자의 부피: " << l*w*h << endl;
    cout << "상자의 표면적: " << 2*((l*w)+(l*h)+(h*w)) << endl;
    return 0;
}