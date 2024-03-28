#include "SList.h"

void TestSList() {
    int n;
    printf("请输入链表的长度:");
    scanf("%d", &n);
    printf("\n请输入链表节点的数据:");
    SLTNode *plist = NULL;
    for (int i = 0; i < n; ++i) {
        int val;
        scanf("%d", &val);
        SLTNode *newnode = BuySListNode(val);
//      头插
        newnode->next = plist;
        plist = newnode;
    }
    SLTBackPush(plist,1000);
    SLTBackPush(plist,10000);
    SLTPrint(plist);
}
int main(){
    TestSList();

    }