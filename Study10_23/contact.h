//
// Created by 20359 on 2023/10/23.
//实现一个通讯录，包括姓名、年龄、性别、电话号码和地址。
//

#ifndef STUDY10_23_CONTACT_H
#define STUDY10_23_CONTACT_H
#define MAX 100
#define MAX_NAME 20
#define MAX_TELEP 14
#define MAX_ADDR 30
#include <stdio.h>
#include <string.h>
#include <assert.h>


#endif //STUDY10_23_CONTACT_H
typedef struct PeoInfo{
    char name[MAX_NAME];
    int age;
    char sex;
    char telep[MAX_TELEP];
    char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
    PeoInfo data[MAX];
    int sz ;
}Contact;

void InitContact(Contact* con);
void AddContact(Contact* con);
void DleContact(Contact* con);
void ShowContact(const Contact* con);
void SearchContact(const Contact* con);
void ModifyContact(Contact* con);
void SortContact(Contact* con);