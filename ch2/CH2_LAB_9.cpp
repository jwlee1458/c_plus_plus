//
// Created by Jiwon on 2022/09/22.
// p.109 Tic-Tac-Toe 게임

#include "CH2_LAB_9.h"
#include <iostream>
using namespace std;

int main() {
    char board[3][3];
    int x, y, k, l;

    for(int x=0; x<3; x++) { //보드판 3x3
        for(int y=0; y<3; y++) {
            board[x][y] = ' ';
        }
    }

    for(int k=0; k<9; k++) { //차례 9번
        cout << "(x, y) 좌표: ";
        cin >> x >> y;
        board[x][y] = (k%2==0) ? 'x' : 'o';

        for(l=0; l<3; l++) { //화면에 체크
            cout << "---|---|---" << endl;
            cout << board[l][0] << "  | " << board[l][1] << " | " << board[l][2] << endl;
        }

        cout << "---|---|---" << endl;
    }
    return 0;
}