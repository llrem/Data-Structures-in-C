#include "../../../Stack/Stack.h"
#include "../../../Queue/Queue.h"
#include "Tree.h"

void InverseLevelOrder(Tree T){
    Queue Q = (Queue)malloc(sizeof(struct Queue));
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitQueue(Q);
    InitStack(S);
    EnQueue(Q,T);

    Tree t1 = NULL,t2 = NULL;
    while(!IsEmpty(Q)){
        DeQueue(Q,&t1);
        Push(S,t1);
        if(t1->Left != NULL)
            EnQueue(Q,t1->Left);
        if(t1->Right != NULL)
            EnQueue(Q,t1->Right);
    }
    while(!StackEmpty(S)){
        Pop(S,&t2);
        printf("%c",t2->Element);
    }
}