#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef STACK_H_
#define STACK_H_

#include <stdbool.h>
#define MaxSize 100
typedef int Stack_ElemType;

typedef struct Stack
{
    Stack_ElemType data[MaxSize];
    int top;
}*Stack;

void InitStack(Stack stack);
bool StackEmpty(Stack stack);
bool Push(Stack stack,Stack_ElemType X);
bool Pop(Stack stack,Stack_ElemType *X);
bool GetTop(Stack stack,Stack_ElemType *X);

#endif