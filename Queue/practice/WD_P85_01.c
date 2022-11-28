#include"../Queue.h"

#define size 10

typedef struct Queue2{
    int data[size];
    int front, rear;
    int tag;
}*Queue2;

int EnQueue2(Queue2 Q, int x){
    if(Q->front == Q->rear && Q->tag == 1){
        return 0;
    }
    Q->data[Q->rear] = x;
    Q->rear = (Q->rear + 1) % size;
    Q->tag = 1;
    return 1;
}

int DeQueue2(Queue2 Q, int *x){
    if(Q->front == Q->rear && Q->tag == 0){
        return 0;
    }
    *x = Q->data[Q->front];
    Q->front = (Q->front + 1) % size;
    Q->tag = 0; 
    return 1;
}