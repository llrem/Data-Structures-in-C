#include "../LinkList.h"

int symmetry(DLinkList L){
    DNode *p = L->next, *q = L->prior;
    while(p != q && p->next != q){  //不能用 p != q
        if(q->data == p->data){
            q = q->prior;
            p = p->next;
        }else{
            return 0;
        }
    }
    return 1;
}