#include "../LinkList.h"

void discreat(LinkList A){
    LNode* B = (LNode*)malloc(sizeof(LNode));
    B->next = NULL;
    LNode *pre = A, *p = A->next;
    int k = 1;
    while(p != NULL){
        if(k % 2 == 0){
            pre->next = p->next;
            p->next = B->next;
            B->next = p;
            p = pre->next;
        }else{
            pre = p;
            p = p->next;
        }
        k++;
    }
}