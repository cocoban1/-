//
// Created by 20359 on 2023/11/18.

//

#include "contact.h"


//判断通讯录是否满
int CheakCapacity(Contact* con){
    if (con ->sz == con->capacity){
        PeoInfo* ptr = (PeoInfo*) realloc(con ->data,(con->capacity +ADD_SZ)*sizeof(PeoInfo));
        if (ptr == NULL){
            perror("CheakCapacity error");
            return 0;

        }else{
            con->data = ptr;
            con->capacity += ADD_SZ;
            return 1;
        }
    }
}

void SaveContact(Contact* con){
    FILE *pf = fopen("contact.dat","wb");
    if (pf == NULL){
        perror("SaveContact error");
        return;
    }
int i  = 0;
    for (i = 0; i < con ->sz ; ++i) {
        fwrite(con->data+ i,sizeof(PeoInfo),1,pf);
    }
    fclose(pf);
    pf = NULL;
    printf("保存成功\n");
}
void LoadContact(Contact* con){
    FILE *pf = fopen("contact.dat","rb");
}
//初始化通讯录
void InitContact(Contact* con){
    con ->data =(PeoInfo*)malloc(3*sizeof(PeoInfo));
    if (con ->data == NULL){
        perror("InitContact error");
        return;
    }
    con ->sz = 0;
    con ->capacity = DEFAULT_SZ;
}

//添加联系人
//动态版本
void AddContact(Contact* con){
    assert(con);
    if(CheakCapacity(con) == 0){
        printf("通讯录已满,无法添加\n");
        return;
    }
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


    /* if(con ->sz == con->capacity){
        PeoInfo* temp = (PeoInfo*)malloc(2 * con->capacity * sizeof(PeoInfo));
        if (temp == NULL)
            exit(1);
        for (int i = 0; i < con ->sz ; ++i) {
            temp[i] = con ->data[i];
        }
        free(con->data);
        con->data = temp;
        con->capacity *= 2;
    }*/
}

//静态版本
/*void AddContact(Contact* con){
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

}*/

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