#include <stdio.h>
#include "contact.h"


void menu(){
    printf("******************************");
    printf("***** 1. add    2. dle    ****");
    printf("***** 3. search 4. modify ****");
    printf("***** 5. show   6. sort   ****");
    printf("*****       0.exit        ****");
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
            AddContact( &con);
                break;
            case 1:
            DleContact( &con);
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
    } while (0);
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
