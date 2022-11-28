#include "../LinkList.h"
#include "../../../Stack/Stack.h"

void reverseOutput(LinkList L){
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);
    L = L->next;
    while(L != NULL){
        Push(S, L->data);
        L = L->next;
    }
    while(!StackEmpty(S)){
        int x;
        Pop(S, &x);
        printf("%d",x);
    }
}

void reverseOutput(LinkList L){
    if(L->next != NULL){
        reverseOutput(L->next);
    }
    if(L != NULL) printf("%d", L->data);
}