#include"../Tree.h"
#include "../../../Stack/Stack.h"
#include "../../../Queue/Queue.h"

int depth(Tree T){    //非递归方式
    if(T == NULL) return 0;
    Queue Q; 
    Tree t;
    Tree last = T, newLast;
    int level = 0;
    EnQueue(Q, T);
    while(!IsEmpty(Q)){
        DeQueue(Q, &t);
        if(t->Left)
            EnQueue(Q, t->Left);
            newLast = t->Left;
        if(t->Right)
            EnQueue(Q, t->Right);
            newLast = t->Right;
        if(t == last){
            level++;
            last = newLast;
        }
    }
    return level;
}

int depth2(Tree T){    //递归方式
    if(T == NULL) return 0;
    int L_depth, R_depth;
    L_depth = depth2(T->Left);
    R_depth = depth2(T->Right);
    if(L_depth > R_depth)
        return L_depth + 1;
    else
        return R_depth + 1;
}