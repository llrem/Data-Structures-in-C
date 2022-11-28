#include"../Queue.h"
#include"../../Stack/Stack.h"

int reverse(Queue Q){
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);
    int x;
    while(IsEmpty(Q)){
        DeQueue(Q, &x);
        Push(S, x);
    }
    while(StackEmpty(S)){
        Pop(S, &x);
        EnQueue(Q, x);
    }
    return 1;
}