#include "../LinkList.h"

void getCommon(LinkList A, LinkList B){
    LNode *p = A->next, *q = B->next, *r, *s;
    LNode* C = (LNode*)malloc(sizeof(LNode));
    r = C;
    while(p != NULL && q != NULL){
        if(p->data < q->data){
            p = p->next;
        }else if(p->data > q->data){
            q = q->next;
        }else{
            s = (LNode*)malloc(sizeof(LNode));
            s->data = p->data;
            r->next = s;
            r = s;
            p = p->next;
            q = q->next;
        }
    }
    r->next = NULL;
}