#include"../Stack.h"

#define size 100

typedef struct DStack{
    int top1, top2;
    int data[size];
}*DStack;

int push(DStack S, int stack, int x){
    if(S->top2 - S->top1 == 1){
        return 0;
    }
    if(stack == 1){
        S->data[++S->top1] = x;
    }else{
        S->data[--S->top2] = x;
    }
    return 1;
}

int pop(DStack S, int stack, int *x){
    if(stack == 1){
        if(S->top1 == -1){
            return 0;
        }else{
            *x = S->data[S->top1--];
        }
    }else{
        if(S->top2 == size){
            return 0;
        }else{
            *x = S->data[S->top2++];
        }
    }
    return 1;
}