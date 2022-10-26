//
// Created by 이지원 on 2022/10/18.
// p.244-3

#include "CH5_EX_3.h"
#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
    double rate;

public:
    BankAccount() {
        balance = 0;
        rate = 0.05;
    }
    BankAccount(int ba, double ra) {
        balance = ba;
        rate = ra;
    }

    void deposit(int money) {
        balance+=money;
        cout << "입금: " << money << endl;
        cout << "잔고: " << balance << endl;
    }

    void withdraw(int money) {
        balance-=money;
        cout << "출력: " << money << endl;
        cout << "잔고: " << balance << endl;
    }
};

int main() {
    BankAccount bankAccount;
    bankAccount.deposit(1000);
    bankAccount.withdraw(500);
    return 0;
}