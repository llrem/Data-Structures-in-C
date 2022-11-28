#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef QUEQUE_H_
#define QUEQUE_H_

#define MaxSize 100
typedef int Queue_ElemType;

typedef struct Queue{
    Queue_ElemType data[MaxSize];
    int front,rear;
}*Queue;

int IsEmpty(Queue Q);
int IsFull(Queue Q);
void InitQueue(Queue Q);
int EnQueue(Queue Q,Queue_ElemType X);
int DeQueue(Queue Q,Queue_ElemType *X);

#endif