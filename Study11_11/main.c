#include <stdio.h>
#include "contact.h"


void menu(){
    printf("******************************\n");
    printf("***** 1. add    2. dle    ****\n");
    printf("***** 3. search 4. modify ****\n");
    printf("***** 5. show   6. sort   ****\n");
    printf("*****       0.exit        ****\n");
}

void test(){
    int input = 0;
    //首先创建通讯录
    Contact con;
    InitContact( &con);
    do{
        menu();
        printf("请选择->");
        scanf("%d", &input);
        switch (input) {
            case 0:
                SaveContact( &con);
                printf("退出程序\n");
                return;
            case 1:
                AddContact( &con);
                break;
            case 2:
                DleContact(&con);
                break;
            case 3:
                SearchContact(&con);
                break;
            case 4:
                ModifyContact(&con);
                break;
            case 5:
                ShowContact(&con);
                break;
            case 6:
                SortContact(&con);
                break;

        }
    } while (1);
}

int main() {
test();
return 0;
}
