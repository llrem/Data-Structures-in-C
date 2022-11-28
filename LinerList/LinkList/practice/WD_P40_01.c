#include "../LinkList.h"

void deleteX(LinkList L, LNode* pre, int x){
    LinkList q = L;
    if(L == NULL)
        return;
    if(L->data == x){
        if(pre != NULL){
            pre->next = L->next;
        }
        L = L->next;
        free(q);
        deleteX(L, pre, x);
    }
    pre = L;
    L = L->next;
    deleteX(L, pre, x);
}
//这样做是有问题的，每次传入的L，改变的只是局部变量，最开始的L不会改变。