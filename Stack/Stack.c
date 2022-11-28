#include "Stack.h"

void InitStack(Stack stack){
    stack->top = -1;
}

bool StackEmpty(Stack stack){
    if(stack->top == -1)
        return true;
    else
        return false;
}

bool Push(Stack stack,Stack_ElemType X){
    if(stack->top == MaxSize-1){
        return false;
    }
    stack->data[++stack->top] = X;
    return true; 
}

bool Pop(Stack stack,Stack_ElemType *X){
    if(stack->top == -1){
        return false;
    }
    *X = stack->data[stack->top];
    stack->top--;
    return true;
}

bool GetTop(Stack stack,Stack_ElemType *X){
    if(stack->top == -1){
        return false;
    }
    *X = stack->data[stack->top];
    return true;
}