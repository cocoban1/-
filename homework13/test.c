//
// Created by cocoban on 23-05-23.
//

//扫雷游戏
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu(){
    printf("************************\n");
    printf("*********1.play*********\n");
    printf("*********2.exit*********\n");
    printf("************************\n");
}
void game(){
    //存放雷
    char mine[ROWS][COLS];
    //
    char show[ROWS][COLS];
    //初始化数组
    initBoard(mine,ROWS,COLS, '0');
    initBoard(show,ROWS,COLS, '*');
    //打印
    //displayBoard(mine ,ROW,COL);
    //displayBoard(show ,ROW,COL);
    //布置雷
    setMine(mine , ROW , COL);
    //displayBoard(mine ,ROW,COL);
//    排查雷
    findMine(mine , show , ROW , COL);
}
int main(){
    int input = 0;
    srand((unsigned int)time(NULL));
    do{
        menu();
        printf("请选择:>");
        scanf("%d" , &input);
        switch (input) {
            case 1:
                printf("扫雷\n");
                game();
                break;
            case 0:
                printf("脱出\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    }while (input);
}
