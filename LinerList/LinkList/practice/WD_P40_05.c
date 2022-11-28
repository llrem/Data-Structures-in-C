#include "../LinkList.h"

void reverse(LinkList L){
    LNode *p, *q;
    p = L->next;
    L->next = NULL;
    while(p != NULL){
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
}