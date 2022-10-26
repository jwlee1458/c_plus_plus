//
// Created by 이지원 on 2022/10/10.
// p.214-10

#include "CH4_PRO_EX_10.h"
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string number;
    int balance;

public:
    void init(string nu, int ba) {
        number = nu;
        balance = ba;
    }

    void deposit(int amount) {
        cout << "현재 잔액 : " << balance << endl;
        balance+=amount;
        cout << "after deposit(" << amount << ") 현재 잔액: " << balance << endl;
    }

    void withdraw(int amount) {
        balance-=amount;
        cout << "after withdraw(" << amount << ") 현재 잔액: " << balance << endl;
    }
};

int main() {
    BankAccount obj;
    obj.init("1234-56-789", 1000000);
    obj.deposit(1000000);
    obj.withdraw(1000000);
    return 0;
}