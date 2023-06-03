//
// Created by cocoban on 23-06-03.
//
#include "game.h"
void initBoard(char board[ROW][COL],int row,int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            board[i][j] = ' ';
        }
    }
}
void DisplayBoard(char board[ROW][COL], int row, int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf(" %c " ,board[i][j]);
            if(j != col -1 )
                printf("%c",'|');
        }
        printf("\n");
        if (i < row - 1)
        {
            //printf("---|---|---\n");
            int j = 0;
            for (j = 0; j < col; j++)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家下棋>:\n");
    while (1)
    {
        printf("请输入下棋的坐标，中间使用空格>:");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x-1][y-1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("坐标被占有，不能落子，重新输入坐标\n");
            }
        }
        else
        {
            printf("坐标非法，重新输入\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;//0~row-1
    int y = 0;//0~col-1

    printf("电脑下棋:>\n");

    while (1)
    {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char isWin(char board[ROW][COL], int row, int col)
{
    //赢
    //行
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    //列
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }
    //对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
        return board[1][1];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
        return board[1][1];

    //平局
    if (IsFull(board, row, col) == 1)
    {
        return 'Q';
    }
    //继续
    return 'C';
}