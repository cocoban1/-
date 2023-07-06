#include "game.h"

#include <stdio.h>

#include <stdlib.h>

//ɨ����Ϸ

void initBoard(char board[ROWS][COLS] , int rows , int cols , char set){
    for(int i = 0 ; i < rows ; i++){
        for (int j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}
void displayBoard(char board[ROWS][COLS] , int row , int col){
    printf("------ɨ����Ϸ-------\n");
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

//������
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
//��ȡ��Χ�׵�����
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    return (mine[x-1][y]+mine[x-1][y-1]+mine[x][y - 1]+mine[x+1][y-1]+mine[x+1][y]+
            mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1] - 8 * '0');
}


void showWhite(char mine[ROWS][COLS] , char show[ROWS][COLS] , int x , int y ,int* win){
    int count = GetMineCount(mine , x ,y);
    if(count == 0){//�������ף���ʼ�ݹ�
        show[x][y] = count + '0';
        for (int i = x - 1; i <= x + 1 ; ++i) {
            for (int j = y-1; j < y+1; ++j) {
                if(show[i][j] == '*'){
                    showWhite(mine , show , i , j ,win);
                }
            }
        }
    } else{//��������ֹͣ�ݹ�
        show[x][y] = count + '0';
    }
    //��¼չ����Ŀ
    (*win)++;
}
//����
void findMine(char mine[ROWS][COLS] , char show[ROWS][COLS] , int row , int col){
    int x = 0;
    int y = 0;
    int win = 0;

    while (win < row * col - EAZY_COUNT){
        printf("������Ҫ�Ų�����ꡣ");
        scanf("%d %d" ,&x , &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col){
            if (mine[x][y] == '1') {
                printf("BOOM! �㱻ը����");
                displayBoard(mine, ROW, COL);
                break;
            } else {
                //��λ�ò����ף���ͳ�����������Χ�м�����
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
            printf("����Ƿ�����������\n");
        }
        if(win >= row * col - EAZY_COUNT){
            printf("��ϲ�㣬���׳ɹ�");
            displayBoard(mine, ROW, COL);
        }
    }
}