#include <stdio.h>
#include "game.h"


void menu(){
        printf("*****************************\n");
        printf("********  1. play   *********\n");
        printf("********  0. exit   *********\n");
        printf("*****************************\n");
}
void game() {
    char board[ROW][COL] = {0};
    initBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    char ret = 0;
    while (1)
    {
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = isWin(board, ROW, COL);
        if (ret != 'C')
            break;
        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = isWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }
    if (ret == '*')
        printf("玩家赢\n");
    else if (ret == '#')
        printf("电脑赢\n");
    else
        printf("平局\n");
}
int main() {
    int input = 0;
    do{
        menu();
        printf("请选择:>");
        scanf("%d" , &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                break;
            default:
                printf("选择错误，请重新选择\n");
                break;
        }
    } while (input);
}
