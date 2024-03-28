//
// Created by 20359 on 2024/3/21.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef DS_3_21_SLIST_H
#define DS_3_21_SLIST_H
typedef int SLTDataType;
typedef struct SListNode{
    SLTDataType data;
    struct SListNode* next;
}SLTNode;
void SLTBackPush(SLTNode*phead,SLTDataType x);
SLTNode* BuySListNode(SLTDataType x);
void SLTPrint(SLTNode* phead);
#endif //DS_3_21_SLIST_H
