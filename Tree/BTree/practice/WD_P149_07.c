#include"../Tree.h"
#include "../../../Queue/Queue.h"

int isComplete(Tree T){
    Queue Q;
    TreeNode* x;
    if(!T){
        return 1;
    }
    EnQueue(Q, T);
    while(IsEmpty(Q)){
        DeQueue(Q, &x);
        if(x){
            EnQueue(Q, x->Left);
            EnQueue(Q, x->Right);
        }else{
            while(!IsEmpty(Q)){
                DeQueue(Q, &x);
                if(x) return 0;
            }
        }
    }
    return 1;
}