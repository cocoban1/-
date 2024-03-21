//
// Created by 20359 on 2024/3/5.
//

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int SLDataType;
typedef struct SeqList
{
    SLDataType *a;
    int size;
    int capacity;
}SL;
//检查顺序表
void SLCheckCapacity(SL *ps);
void SLPushBack(SL *ps,SLDataType x);
//打印顺序表
void SLPrint(SL* ps);
void SLInit(SL *ps );
//尾删顺序表
void SLPopBack(SL *ps);
//头插头删顺序表
void SLPushFrount(SL *ps,SLDataType x);
void SLPopFrount(SL* ps);

//在pos位置删除插入
void SLPushPos(SL* ps,int pos,SLDataType x);