#include "../LinkList.h"

int search_k(LinkList L, int k){
    LNode *p = L->next, *q = L->next;
    int count = 0;
    while(p != NULL){
        if(count < k) 
            count++;
        else 
            q = q->next;
        p = p->next;
    }
    if(count < k)
        return 0;
    else{
        printf("%d", q->data);
        return 1;
    }
}