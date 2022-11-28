#include"../Queue.h"
#include"../../Stack/Stack.h"

int StackOverflow(Stack S);

int EnQueue3(Stack S1, Stack S2, int e){
    int x;
    if(!StackOverflow(S1)){
        Push(S1, e);
        return 1;
    }
    if(StackOverflow(S1) && !StackEmpty(S2)){
        printf("队列满");
        return 0;
    }
    if(StackOverflow(S1) && StackEmpty(S2)){
        while(!StackEmpty(S1)){
            Pop(S1, &x);
            Push(S2, x);
        }
    }
    Push(S1, e);
    return 1;
}

int DeQueue3(Stack S1, Stack S2, int *e){
    int x;
    if(!StackEmpty(S2)){
        Pop(S2, e);
    }else if(StackEmpty(S1)){
        printf("队列空");
        return 0;
    }else{
        while(!StackEmpty(S1)){
            Pop(S1, &x);
            Push(S2, x);
        }
        Pop(S2, e);
    }
    return 1;
}