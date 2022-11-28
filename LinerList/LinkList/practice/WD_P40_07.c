#include "../LinkList.h"

void deleteX(LinkList L, int a, int b){
    LNode *pre = L, *p = L->next;
    while(p != NULL){
        if(p->data > a && p->data < b){
            pre->next = p->next;
            free(p);
            p = pre->next;
        }else{
            pre = p;
            p = p->next;
        }
    }
}