//猜数字游戏
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
    //time函数可以返回一个时间戳
    //1.生成随机数
    int ret = rand();//可以生成随机数，生成范围0- 32767
    //2.猜数字
    int i = 0;

    while (1)
    {
        printf("猜猜看那");
        scanf_s("%d", &i);
        if (ret > i)
        {
            printf("大于这个数字。");
        }
        else if(ret < i)
        {
            printf("小于这个数字。");
        }
        else {
            printf("找到了\n");
            break;
        }
    }
}
int main() {
    int input = 0;
    do {
        menu();//打印菜单
        printf("请选择=v=");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                printf("猜数字游戏\n");
                game();
                break;
            case 0:
                printf("退出游戏");
                break;
            default:
                printf("选戳啦，小笨蛋\n");
                break;
        }
    } while (input);
}