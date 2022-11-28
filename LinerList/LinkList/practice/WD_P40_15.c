#include "../LinkList.h"

void Union(LinkList A, LinkList B){
    LNode *p = A->next, *q = B->next;
    A->next = NULL;
    while(p != NULL && q != NULL){
        if(p->data == q->data){
            p->next = A->next;
            A->next = p;
            p = p->next;
            q = q->next;
        }else if(p->data < q->data){
            p = p->next;
        }else{
            q = q->next;
        }
    }
}