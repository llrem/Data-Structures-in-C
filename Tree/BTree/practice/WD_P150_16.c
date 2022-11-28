#include"../Tree.h"
#include"../../../LinerList/LinkList/LinkList.h"

Tree head, pre = NULL;
LinkList InOrder(Tree T){
    if(T != NULL){
        InOrder(T->Left);
        if(T->Left == NULL && T->Right == NULL){
            if(pre == NULL){
                head = T;
                pre = T;
            }else{
                pre->Right = T;
                pre = T;
            }
        }
        InOrder(T->Right);
    }
    return head;
}
