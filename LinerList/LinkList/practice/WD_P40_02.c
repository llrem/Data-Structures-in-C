#include "../LinkList.h"

void deleteX(LinkList L, int x){
    LNode *p;
    while(L->next != NULL){
        if(L->next->data == x){
            p = L->next;
            L->next = p->next;
            free(p);
        }else{
            L = L->next;
        }
    }
}