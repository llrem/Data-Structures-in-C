#include "../LinkList.h"

void deleteMin(LinkList L){
    LNode *p, *min;
    p = L->next;
    while(L->next != NULL){
        if(L->next->data < p->data){
            p = L;
        }
        L = L->next;
    }
    min = p->next;
    p->next = min->next;
    free(min);
}