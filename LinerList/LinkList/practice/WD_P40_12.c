#include "../LinkList.h"

void removeRepete(LinkList L){
    LNode *pre = L->next, *p = pre->next; 
    while(p != NULL){
        if(p->data == pre->data){
            pre->next = p->next;
            free(p);
            p = pre->next;
        }else{
            pre = p;
            p = pre->next;
        }
    }
}