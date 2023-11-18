//
// Created by 20359 on 2023/11/18.
//改造通讯录实现
//1.通讯录的空间不是固定的，可以动态增加
//2.默认可存放3个人的信息，如果不够，一次增加两个人。
//

#ifndef STUDY11_11_CONTACT_H
#define STUDY11_11_CONTACT_H
#define MAX 100
#define MAX_NAME 20
#define MAX_TELEP 14
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define ADD_SZ 2    //每次增加的人数
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


#endif //STUDY11_11_CONTACT_H

//通讯录信息
typedef struct PeoInfo{
    char name[MAX_NAME];
    int age;
    char sex;
    char telep[MAX_TELEP];
    char addr[MAX_ADDR];
}PeoInfo;

//动态版本
typedef struct Contact{
PeoInfo* data;
int sz;         //记录当前放的有效元素的个数
int capacity;   //记录当前最大可存放的个数
}Contact;


//静态版本
/*typedef struct Contact
{
    PeoInfo data[MAX];
    int sz ;
}Contact;*/

void InitContact(Contact* con);
void AddContact(Contact* con);
void DleContact(Contact* con);
void ShowContact(const Contact* con);
void SearchContact(const Contact* con);
void ModifyContact(Contact* con);
void SortContact(Contact* con);
int CheakCapacity(Contact* con);
void LoadContact(Contact* con);
void SaveContact(Contact* con);
