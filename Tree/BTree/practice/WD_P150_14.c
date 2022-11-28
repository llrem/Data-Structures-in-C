#include"../Tree.h"
#include "../../../Queue/Queue.h"

int width(Tree T){
    if(T == NULL) return 0;
    Queue Q; 
    Tree t;
    Tree last = T, newLast;
    int w = 0, max = 1;
    EnQueue(Q, T);
    while(!IsEmpty(Q)){
        DeQueue(Q, &t);
        if(t->Left)
            EnQueue(Q, t->Left);
            w++;
            newLast = t->Left;
        if(t->Right)
            EnQueue(Q, t->Right);
            w++;
            newLast = t->Right;
        if(t == last){
            last = newLast;
            if(w > max){
                max = w;
            }
            w = 0;
        }
    }
    return max;
}