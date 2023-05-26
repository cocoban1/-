#include "game.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//É¨À×ÓÎÏ·
void initBoard(char board[ROWS][COLS] , int rows , int cols , char set){
    for(int i = 0 ; i < rows ; i++){
        for (int j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}
void displayBoard(char board[ROW][COL] , int row , int col){
    printf("------É¨À×ÓÎÏ·-------\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d " , i);
    }
    printf("\n");
    for (int i = 1; i <= col; ++i) {
        printf("%d " ,i );
        for (int j = 0; j < row; ++j) {
            printf("%c " , board[i][j]);
        }
        printf("\n");
    }
}
//²¼ÖÃÀ×
void setMine(char board[ROWS][COLS] , int row , int col){
    int count = 10;
    while (count){
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if(board[x][y] == '0'){
            board[x][y] = '1';
            count--;
        }
    }
}
//ÅÅÀ×
void findMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col){

}