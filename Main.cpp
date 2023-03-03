#include "Main.h"
#include <iostream>

#define BKing 10
#define BQueen 1
#define BRook 2
#define BBishop 3
#define BKnight 4
#define BPawn 5
#define WKing -10
#define WQueen -1
#define WRook -2
#define WBishop -3
#define WKnight -4
#define WPawn -5

int main() {


        char board[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if ((i + j) % 2 == 0) {
                    board[i][j] = 'B';
                } else {
                    board[i][j] = 'W';
                }

            }
        }
        for(int i = 0;i<8;i++){
            for(int j = 0; j<8;j++){
                std::cout << board[i][j] << " ";
            }
            std::cout <<std::endl;
        }
        return 0;
    }
