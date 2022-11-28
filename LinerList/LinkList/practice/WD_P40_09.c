#include "../LinkList.h"

int orderOutput(LinkList L){
    LNode *pre, *p, *minpre, *min;
    while(L->next != NULL){
        pre = L, p = L->next;
        minpre = pre, min = p;
        while(p != NULL){
            if(p->data < min->data){
                min = p;
                minpre = pre;
            }
            pre = p;
            p = p->next;
        }
        printf("%d", min->data);
        minpre->next = min->next;
        free(min);
    }
}