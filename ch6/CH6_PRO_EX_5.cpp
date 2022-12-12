//
// Created by 이지원 on 2022/10/25.
// p.283-5

#include "CH6_PRO_EX_5.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
    string name;
    double marks;
    Student(string n, double m) : name{n}, marks{m} {}
    void print() {
        cout << "이름 : " << name << endl;
        cout << "학점 : " << marks << endl;
    }
};

bool compare(Student s1, Student s2) {
    if(s1.marks > s2.marks) return true;
    else return false;
}

void sun() {
    for (int i = 1; i <= 20; i++)
        cout << "=";
    cout << endl;
}

int main() {
    vector<Student> v;
    string Name;
    double Marks;
    char c;

    while(true) {
        cout << "이름 : ";
        cin >> Name;
        cout << "학점 : ";
        cin >> Marks;
        cin.ignore();

        Student s{Name, Marks};
        v.push_back(s);

        cout << "계속 작성할 것인가요?(n/y) ";
        cin >> c;
        if(tolower(c) == 'n') break;
        cin.ignore();
    }

    sort(v.begin(), v.end(), compare);

    sun();
    for(auto& vp:v) vp.print();
    sun();
    return 0;
}