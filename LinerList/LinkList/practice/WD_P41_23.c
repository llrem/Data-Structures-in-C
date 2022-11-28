#include "../LinkList.h"

int listLen(LinkList L){
    int len = 0;
    while(L->next != NULL){
        len++;
        L = L->next;
    }
    return len;
}

LNode* find_addr(LinkList *L1, LinkList *L2){
    int m = listLen(L1), n = listLen(L2);
    LNode *p, *q;
    for(p = L1; m > n; m--){
        p = p->next;
    }
    for(q = L2; m < n; n--){
        q = q->next;
    }
    while(p != NULL && p != q){
        p = p->next;
        q = q->next;
    }
    return p;
}