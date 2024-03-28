//
// Created by 20359 on 2024/3/21.
//
#include "SList.h"
void SLTPrint(SLTNode* phead){
    while (phead){
        printf("%d->",phead->data);
        phead = phead->next;
    }
    printf("NULL\n");
}
//创建节点
SLTNode* BuySListNode(SLTDataType x){
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    if(newnode == NULL){
        perror("malloc fail");
        exit(-1);
    }
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}
void SLTBackPush(SLTNode*phead,SLTDataType x)
{
    SLTNode *pback = phead;
    while (phead){
        pback = phead;
        phead = phead->next;
    }
    SLTNode *newnode = BuySListNode(x);
    pback->next = newnode;
    newnode->data = x;
}