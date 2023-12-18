//
// Created by 20359 on 2023/11/18.
//����ͨѶ¼ʵ��
//1.ͨѶ¼�Ŀռ䲻�ǹ̶��ģ����Զ�̬����
//2.Ĭ�Ͽɴ��3���˵���Ϣ�����������һ�����������ˡ�
//

#ifndef STUDY11_11_CONTACT_H
#define STUDY11_11_CONTACT_H
#define MAX 100
#define MAX_NAME 20
#define MAX_TELEP 14
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define ADD_SZ 2    //ÿ�����ӵ�����
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


#endif //STUDY11_11_CONTACT_H

//ͨѶ¼��Ϣ
typedef struct PeoInfo{
    char name[MAX_NAME];
    int age;
    char sex;
    char telep[MAX_TELEP];
    char addr[MAX_ADDR];
}PeoInfo;

//��̬�汾
typedef struct Contact{
PeoInfo* data;
int sz;         //��¼��ǰ�ŵ���ЧԪ�صĸ���
int capacity;   //��¼��ǰ���ɴ�ŵĸ���
}Contact;


//��̬�汾
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
