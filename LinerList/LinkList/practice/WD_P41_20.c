#include "../LinkList.h"

DNode* locate(DNode* L, int x){
    DNode *p = L->next, *q;
    while(p != NULL){
        if(p->data = x){
            p->freq++;
            q = p->prior;
            while(q->freq <= p->freq && q != L){
                q = q->prior;
            }
            p->prior->next = p->next;
            p->next->prior = p->prior;

            p->next = q->next;
            q->next->prior = p;
            q->next = p;
            p->prior = q;

            return p;
        }else{
            p = p->next;
        }
    }
    return NULL;
}      