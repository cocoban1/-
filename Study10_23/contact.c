//
// Created by 20359 on 2023/10/23.
//

#include "contact.h"

void InitContact(Contact* con){
    memset(con->data,0,sizeof (con->data));
    con ->sz = 0;
}
void AddContact(Contact* con){
    if (con ->sz == 100)
    {
        printf("通讯录已满,无法添加\n");
    }else{
        printf("请输入姓名：");
        scanf("%s",con->data[con ->sz].name);
        printf("请输入年龄：");
        scanf("%d",&con->data[con ->sz].age);
        printf("请输入性别：");
        scanf("%c",&con->data[con ->sz].sex);
        printf("请输入电话：");
        scanf("%s",con->data[con ->sz].telep);
        printf("请输入地址：");
        scanf("%s",con->data[con ->sz].addr);
        con ->sz++;
    }
    
}
void DleContact(Contact* con){
    if (con ->sz == 0)
    {
        printf("通讯录为空，无法删除\n");
        return;
    }else{
        printf("输入想要删除的编号");
    }
}
void ShowContact(const Contact* con){
    for (int i = 0; i < con->sz ; ++i) {
        printf("%20-s %d  %c  %s  %s\n",
               con ->data[i].name,
               con ->data[i].age,
               con ->data[i].sex,
               con ->data[i].telep,
               con ->data[i].addr
               );
    }
}

void SearchContact(const Contact* con){
    printf("请输入姓名：");
char name[10];
scanf("%s",name);
    for (int i = 0; i < con->sz; ++i) {
        if(strcmp(name,con->data[i].name) == 0){
            printf("%20-s %d  %c  %s  %s\n",
                   con ->data[i].name,
                   con ->data[i].age,
                   con ->data[i].sex,
                   con ->data[i].telep,
                   con ->data[i].addr
            );
        }else{
            printf("没有该联系人\n");
        }
    }
}

void ModifyContact(Contact* con){
    assert(con ->sz > 0);
    printf("请输入修改的编号：");
    int num;
    scanf("%d",&num);
    if(num > con ->sz){
        printf("输入的编号不存在\n");
    }else{
        printf("请输入要修改人的名字");
        char name[10];
        scanf("%s",&name);
        strcpy(con->data[num].name,name);
        printf("请输入要修改人的年龄");
        int age;
        scanf("%d",&age);
        con->data[num].age = age;
        printf("请输入要修改人的性别");
        char sex;
        scanf("%c",&sex);
        con->data[num].sex = sex;
        printf("请输入要修改人的电话");
        char tel[MAX_TELEP] = {0};
        scanf("%s",tel);
        strcpy(con->data[num].telep,tel);
        printf("请输入要修改人的地址");
        char addr[MAX_ADDR] = {0};  // 初始化
        scanf("%s",addr);
        strcpy(con->data[num].addr,addr);
        printf("修改成功\n");
        ShowContact(con);
    }
}
//
void SortContact(Contact* con){
    //按年龄排序
//    for (int i = 0; i < con->sz -1 ; ++i) {
//        for (int j = 0; j < con->sz -1 -i ; ++j) {
//            if(con->data[j].age > con->data[j+1].age){
//                PeoInfo temp = con->data[j];
//                con->data[j] = con->data[j+1];
//                con->data[j+1] = temp;
//                ShowContact(con);
//                printf("排序成功\n");
//
//
//            }
//        }
//    }
    //按姓名排序
    // 冒泡排序
//    for (int i = 0; i < con->sz -1 ; ++i) {
//        for (int j = 0; j < con ->sz-1-i; ++j) {
//
//            if(strcmp(con->data[j].name,con->data[j+1].name) > 0){
//                PeoInfo temp = con->data[j];
//                con->data[j] = con->data[j+1];
//                con->data[j+1] = temp;
//                ShowContact(con);
//                printf("排序成功\n");
//
//            }
//        }
//    }

}