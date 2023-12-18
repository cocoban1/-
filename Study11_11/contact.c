//
// Created by 20359 on 2023/11/18.

//

#include "contact.h"


//�ж�ͨѶ¼�Ƿ���
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
    printf("����ɹ�\n");
}
void LoadContact(Contact* con){
    FILE *pf = fopen("contact.dat","rb");
}
//��ʼ��ͨѶ¼
void InitContact(Contact* con){
    con ->data =(PeoInfo*)malloc(3*sizeof(PeoInfo));
    if (con ->data == NULL){
        perror("InitContact error");
        return;
    }
    con ->sz = 0;
    con ->capacity = DEFAULT_SZ;
}

//�����ϵ��
//��̬�汾
void AddContact(Contact* con){
    assert(con);
    if(CheakCapacity(con) == 0){
        printf("ͨѶ¼����,�޷����\n");
        return;
    }
    printf("������������");
    scanf("%s",con->data[con ->sz].name);
    printf("���������䣺");
    scanf("%d",&con->data[con ->sz].age);
    printf("�������Ա�");
    scanf("%c",&con->data[con ->sz].sex);
    printf("������绰��");
    scanf("%s",con->data[con ->sz].telep);
    printf("�������ַ��");
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

//��̬�汾
/*void AddContact(Contact* con){
    if (con ->sz == 100)
    {
        printf("ͨѶ¼����,�޷����\n");
    }else{
        printf("������������");
        scanf("%s",con->data[con ->sz].name);
        printf("���������䣺");
        scanf("%d",&con->data[con ->sz].age);
        printf("�������Ա�");
        scanf("%c",&con->data[con ->sz].sex);
        printf("������绰��");
        scanf("%s",con->data[con ->sz].telep);
        printf("�������ַ��");
        scanf("%s",con->data[con ->sz].addr);
        con ->sz++;
    }

}*/

void DleContact(Contact* con){
    if (con ->sz == 0)
    {
        printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
        return;
    }else{
        printf("������Ҫɾ���ı��");
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
    printf("������������");
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
            printf("û�и���ϵ��\n");
        }
    }
}

void ModifyContact(Contact* con){
    assert(con ->sz > 0);
    printf("�������޸ĵı�ţ�");
    int num;
    scanf("%d",&num);
    if(num > con ->sz){
        printf("����ı�Ų�����\n");
    }else{
        printf("������Ҫ�޸��˵�����");
        char name[10];
        scanf("%s",&name);
        strcpy(con->data[num].name,name);
        printf("������Ҫ�޸��˵�����");
        int age;
        scanf("%d",&age);
        con->data[num].age = age;
        printf("������Ҫ�޸��˵��Ա�");
        char sex;
        scanf("%c",&sex);
        con->data[num].sex = sex;
        printf("������Ҫ�޸��˵ĵ绰");
        char tel[MAX_TELEP] = {0};
        scanf("%s",tel);
        strcpy(con->data[num].telep,tel);
        printf("������Ҫ�޸��˵ĵ�ַ");
        char addr[MAX_ADDR] = {0};  // ��ʼ��
        scanf("%s",addr);
        strcpy(con->data[num].addr,addr);
        printf("�޸ĳɹ�\n");
        ShowContact(con);
    }
}
//
void SortContact(Contact* con){
    //����������
//    for (int i = 0; i < con->sz -1 ; ++i) {
//        for (int j = 0; j < con->sz -1 -i ; ++j) {
//            if(con->data[j].age > con->data[j+1].age){
//                PeoInfo temp = con->data[j];
//                con->data[j] = con->data[j+1];
//                con->data[j+1] = temp;
//                ShowContact(con);
//                printf("����ɹ�\n");
//
//
//            }
//        }
//    }
    //����������
    // ð������
//    for (int i = 0; i < con->sz -1 ; ++i) {
//        for (int j = 0; j < con ->sz-1-i; ++j) {
//
//            if(strcmp(con->data[j].name,con->data[j+1].name) > 0){
//                PeoInfo temp = con->data[j];
//                con->data[j] = con->data[j+1];
//                con->data[j+1] = temp;
//                ShowContact(con);
//                printf("����ɹ�\n");
//
//            }
//        }
//    }

}