//��������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
    printf("*************************\n");
    printf("*****1.play  0.exit******\n");
    printf("*************************\n");
}

//time_t
void game() {
    RAND_MAX;
    srand((unsigned int)time(NULL));
    //time�������Է���һ��ʱ���
    //1.���������
    int ret = rand();//������������������ɷ�Χ0- 32767
    //2.������
    int i = 0;

    while (1)
    {
        printf("�²¿���");
        scanf_s("%d", &i);
        if (ret > i)
        {
            printf("����������֡�");
        }
        else if(ret < i)
        {
            printf("С��������֡�");
        }
        else {
            printf("�ҵ���\n");
            break;
        }
    }
}
int main() {
    int input = 0;
    do {
        menu();//��ӡ�˵�
        printf("��ѡ��=v=");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                printf("��������Ϸ\n");
                game();
                break;
            case 0:
                printf("�˳���Ϸ");
                break;
            default:
                printf("ѡ������С����\n");
                break;
        }
    } while (input);
}