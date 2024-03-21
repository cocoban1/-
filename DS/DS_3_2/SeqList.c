//
// Created by 20359 on 2024/3/5.
//
//初始化顺序表
#include <assert.h>
#include "SeqList.h"

void SLInit(SL *ps ){

    SLDataType*  tmp = (SLDataType*)malloc(sizeof(SLDataType)*4);
    if(tmp == NULL){
        perror("malloc failed");
        exit(-1);
    }
    ps->a = tmp;
    ps->size = 0;
    ps->capacity = 4;
}
//打印顺序表
void SLPrint(SL* ps){
    for (int i = 0; i < ps->size ; ++i) {
        printf("%d ",ps->a[i]);
    }
    printf("\n");
}

//检查顺序表
void SLCheckCapacity(SL *ps){
    if(ps->size == ps->capacity )
    {
        SLDataType* tmp = realloc(ps->a, ps->capacity*2*sizeof(SLDataType));

        if(tmp == NULL){
            perror("relloc failed");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity *= 2;
    }
}


//顺序表尾插
void SLPushBack(SL *ps,SLDataType x)
{
    SLCheckCapacity(ps);
    ps->a[ps->size] = x;
    ps->size++;
}
//顺序表尾删
void SLPopBack(SL *ps)
{
    assert(ps->size > 0);
    ps->size--;
}
//顺序表头插
void SLPushFrount(SL *ps,SLDataType x)
{
    SLCheckCapacity(ps);
    for (int end =ps->size - 1 ; end >0 ; --end) {
        ps->a[end + 1] = ps->a[end];
    }
    ps->a[0] = x;
    ps->size++;
}
//顺序表头删
void SLPopFrount(SL* ps)
{
    assert(ps->size>0);
    for (int frount= 0; frount < ps->size - 2; ++frount) {
        ps->a[frount] = ps->a[frount+1];
    }
    ps->size--;
}
//在POS位置插入
void SLPushPos(SL* ps,int pos,SLDataType x

{
    assert(ps!=NULL);

    for (int end = ps->size-1; end > pos-1; --end) {
        ps->a[end+1] = ps->a[end];
    }
}