#include "SeqList.h"


//顺序表的增删查改

int main() {
    SL s;
    SLInit(&s);
    SLPushBack(&s, 1);
    SLPushBack(&s, 2);
    SLPushBack(&s, 3);
    SLPushBack(&s, 4);
    SLPrint(&s);
    SLPushFrount(&s,10);
    SLPushFrount(&s,20);
    SLPushFrount(&s,30);
    SLPopFrount(&s);
    SLPushPos(&s,2,18);
    SLPushPos(&s,2,28);
    SLPushPos(&s,2,38);

    SLPrint(&s);

}
