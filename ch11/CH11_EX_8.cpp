//
// Created by 이지원 on 2022/12/01.
// p.473-8

#include "CH11_EX_8.h"
#include <iostream>
using namespace std;

class Human {
    string name;
    int age;
public:
    Human() {
        name = "";
        age = 0;
    }
    Human(string name, int age) {
        name = name;
        age = age;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    void setName(string name) {
        this->name=name;
    }
    void setAge(int age) {
        this->age=age;
    }
    void print(string name, int age) {
        cout << "(\"" << name << "\", " << age  << "세), ";
    }
};

class Student : public Human {
    string major;
public:
    Student(string name, int age, string major) {
        major = "";
    }
};

int main() {
    Human human;
    human.print("춘향", 18);
    human.print("몽룡", 21);
    human.print("사또", 50);
}