#include"../Stack.h"
#include"../../LinerList/LinkList/LinkList.h"

int func(LinkList L, int n){
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);
    LNode *p = L->next;
    int x;
    for(int i = 0; i < n / 2; i++){
        Push(S, p->data);
        p = p->next;
    }
    if(n / 2 == 1) p = p->next;
    for(int i = 0; i < n / 2; i++){
        Pop(S, x);
        if(x = p->data){
            p = p->next;
        }else{
            return 0;
        }
    }
    return 1;
}