//
// Created by Jiwon on 2022/09/23.
// p.111 지뢰 찾기

#include "CH2_LAB_10.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    bool board[10][10]={0};
    srand(time(NULL));

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if((rand()%100) < 30) {
                board[i][j] = true;
            }
        }
    }

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(board[i][j]) {
                cout << "# ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    return 0;
}