//
// Created by cocoban on 23-05-23.
//

//ɨ����Ϸ
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
    //�����
    char mine[ROWS][COLS];
    //
    char show[ROWS][COLS];
    //��ʼ������
    initBoard(mine,ROWS,COLS, '0');
    initBoard(show,ROWS,COLS, '*');
    //��ӡ
    //displayBoard(mine ,ROW,COL);
    //displayBoard(show ,ROW,COL);
    //������
    setMine(mine , ROW , COL);
    //displayBoard(mine ,ROW,COL);
//    �Ų���
    findMine(mine , show , ROW , COL);
}
int main(){
    int input = 0;
    srand((unsigned int)time(NULL));
    do{
        menu();
        printf("��ѡ��:>");
        scanf("%d" , &input);
        switch (input) {
            case 1:
                printf("ɨ��\n");
                game();
                break;
            case 0:
                printf("�ѳ�\n");
                break;
            default:
                printf("�����������������\n");
                break;
        }
    }while (input);
}
