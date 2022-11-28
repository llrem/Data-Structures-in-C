#include"Queue.h"

int IsEmpty(Queue Q){
    if(Q->rear == Q->front)
        return 1;
    else   
        return 0;
}

int IsFull(Queue Q){
    if((Q->rear+1) % MaxSize == Q->front)
        return 1;
    else
        return 0;
}

void InitQueue(Queue Q){
    Q->rear = Q->front = 0;
}

int EnQueue(Queue Q,Queue_ElemType X){
    if(IsFull(Q)) 
        return 0;
    Q->data[Q->rear] = X;
    Q->rear = (Q->rear+1)%MaxSize;
    return 1;
}

int DeQueue(Queue Q,Queue_ElemType *X){
    if(IsEmpty(Q))
        return 0;
    *X = Q->data[Q->front];
    Q->front = (Q->front+1)%MaxSize;
    return 1;
}

