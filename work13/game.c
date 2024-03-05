#include "game.h"

#include <stdio.h>

#include <stdlib.h>

//扫雷游戏

void initBoard(char board[ROWS][COLS] , int rows , int cols , char set){
    for(int i = 0 ; i < rows ; i++){
        for (int j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}
void displayBoard(char board[ROWS][COLS] , int row , int col){
    printf("------扫雷游戏-------\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d " , i);
    }
    printf("\n");
    for (int i = 1; i <= row; ++i) {
        printf("%d " ,i );
        for (int j = 1; j <= col; ++j) {
            printf("%c " , board[i][j]);
        }
        printf("\n");
    }
}

//布置雷
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
//获取周围雷的数量
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    return (mine[x-1][y]+mine[x-1][y-1]+mine[x][y - 1]+mine[x+1][y-1]+mine[x+1][y]+
            mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1] - 8 * '0');
}


void showWhite(char mine[ROWS][COLS] , char show[ROWS][COLS] , int x , int y ,int* win){
    int count = GetMineCount(mine , x ,y);
    if(count == 0){//四周无雷，开始递归
        show[x][y] = count + '0';
        for (int i = x - 1; i <= x + 1 ; ++i) {
            for (int j = y-1; j < y+1; ++j) {
                if(show[i][j] == '*'){
                    showWhite(mine , show , i , j ,win);
                }
            }
        }
    } else{//四周有雷停止递归
        show[x][y] = count + '0';
    }
    //记录展开数目
    (*win)++;
}
//排雷
void findMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col){
    int x = 0;
    int y = 0;
    int win = 0;

    while (win < row * col - EAZY_COUNT){
        printf("请输入要排插的坐标。");
        scanf("%d %d" ,&x , &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col){
            if (mine[x][y] == '1') {
                printf("BOOM! 你被炸死了");
                displayBoard(mine, ROW, COL);
                break;
            } else {
                //该位置不是雷，就统计这个坐标周围有几个雷
                int count = GetMineCount(mine, x, y);
                show[x][y] = count + '0';
                displayBoard(show, ROW, COL);
                if(count == 0)
                {
                    showWhite(mine , show, x, y, &win);
                } else
                    win++;
            }
        }else{
            printf("坐标非法，重新输入\n");
        }
        if(win >= row * col - EAZY_COUNT){
            printf("恭喜你，排雷成功");
            displayBoard(mine, ROW, COL);
        }
    }
}