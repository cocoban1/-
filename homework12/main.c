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
    //��ӡ����
    DisplayBoard(board, ROW, COL);
    char ret = 0;
    while (1)
    {
        //�������
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //�ж���Ӯ
        ret = isWin(board, ROW, COL);
        if (ret != 'C')
            break;
        //��������
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //�ж���Ӯ
        ret = isWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }
    if (ret == '*')
        printf("���Ӯ\n");
    else if (ret == '#')
        printf("����Ӯ\n");
    else
        printf("ƽ��\n");
}
int main() {
    int input = 0;
    do{
        menu();
        printf("��ѡ��:>");
        scanf("%d" , &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                break;
            default:
                printf("ѡ�����������ѡ��\n");
                break;
        }
    } while (input);
}
