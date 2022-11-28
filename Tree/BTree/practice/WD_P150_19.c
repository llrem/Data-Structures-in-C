#include"../Tree.h"
#include "../../../Queue/Queue.h"

int wpl(Tree T){    //基于层序遍历
    int wpl = 0, level = 0;
    Queue Q;
    TreeNode *p, *last = T, *newLast;
    EnQueue(Q, T);
    while(!IsEmpty(Q)){
        DeQueue(Q, &p);
        if(p->Left == NULL && p->Right == NULL){
            wpl += p->Element * level;
        }
        if(p->Left){
            EnQueue(Q, p->Left);
            newLast = p->Left;
        }
        if(p->Right){
            EnQueue(Q, p->Right);
            newLast = p->Right;
        }
        if(p = last){
            level++;
            last = newLast;
        }
    }
    return wpl;
}

int wpl(Tree T){
    return wpl_preOrder(T, 0);
}

int wpl_preOrder(Tree T, int deep){
    static int wpl = 0;
    if(T->Left == NULL && T->Right == NULL){
        wpl += deep * T->Element;
    }
    if(T->Left != NULL){
        wpl_preOrder(T->Left, deep + 1);
    }
    if(T->Right != NULL){
        wpl_preOrder(T->Right, deep + 1);
    }
    return wpl;
}