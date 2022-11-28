#include "../LinkList.h"

void deleteX(LinkList &L, int x){
    LNode *p;
    if(L == NULL){
        return;
    }
    if(L->data = x){
        p = L;
        L = L->next;
        free(p);
        deleteX(L, x);
    }else{
        deleteX(L, x);
    }
}