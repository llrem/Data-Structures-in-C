#include "../LinkList.h"

void func(LinkList L, int n){
    LNode *pre = L, *p = L->next;
    int *A;
    A = (int*)malloc(sizeof(int)*(n+1));
    for(int i = 0; i< n + 1; i++){
        *(A+i) = 0;
    }
    while(p != NULL){
        int x = abs(p->data);
        if(A[x] == 0){
            A[x] = 1;
            pre = p;
            p = p->next;
        }else{
            pre->next = p->next;
            free(p);
            p = pre->next;
        }
    }

}