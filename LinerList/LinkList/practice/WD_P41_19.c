#include "../LinkList.h"

int deleteMin(LinkList L){
    LNode *pre, *p;
    LNode *minpre, *min;
    while(L->next != L){
        pre = L, p = pre->next;
        minpre = L, min = minpre->next;
        while(p != L){
            if(min->data < p->data){
                min = p;
                minpre = pre;
            }
            pre = p;
            p = p->next;
        }
        minpre->next = min->next;
        free(min);
    }
    free(L);
}