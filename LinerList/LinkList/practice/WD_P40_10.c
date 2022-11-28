#include "../LinkList.h"

void divide(LinkList A){
    LNode *B, *pre, *p, *r;
    int k = 1;
    B = (LNode*)malloc(sizeof(LNode));
    B->next = NULL;
    pre = A->next, p = pre->next, r = B;
    while(p != NULL){
        pre->next = p->next;
        p->next = r->next;
        r->next = p;
        r = p;
        pre = pre->next;
        if(pre == NULL) break;
        p = pre->next;
    }
}