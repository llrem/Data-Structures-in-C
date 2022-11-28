#include "../LinkList.h"

void mergeList(LinkList A, LinkList B){
    LNode *p = A->next, *q = B->next;
    LNode* C = (LNode*)malloc(sizeof(LNode));
    C->next = NULL;
    while(p != NULL && q != NULL){
        if(p->data < q->data){
            A->next = p->next;
            p->next = C->next;
            C->next = p;
            p = A->next;
        }else{
            B->next = q->next;
            q->next = C->next;
            C->next = q;
            q = B->next;
        }
    }
    while(p != NULL){
        A->next = p->next;
        p->next = C->next;
        C->next = p;
        p = A->next;
    }
    while(q != NULL){
        B->next = q->next;
        q->next = C->next;
        C->next = q;
        q = B->next;
    }
}