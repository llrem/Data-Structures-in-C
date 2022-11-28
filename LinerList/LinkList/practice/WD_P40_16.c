#include "../LinkList.h"

int pattern(LinkList A, LinkList B){
    LNode *p = A->next, *r = p, *q = B->next;
    while(p && q){
        if(r->data == q->data){
            r = r->next;
            q = q->next;
        }else{
            p = p->next;
            r = p;
            q = B->next;
        }
        if(q == NULL){
            return 1;
        }else{
            return 0;
        }
    }
}