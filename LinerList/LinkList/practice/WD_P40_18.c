#include "../LinkList.h"

void Link(LinkList A, LinkList B){
    LNode *p = A, *q = B;
    while(p->next != A)
        p = p->next;
    while(q->next != B)
        q = q->next;
    p->next = B;
    q->next = A;
}