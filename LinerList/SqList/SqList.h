#include<stdio.h>
#include<stdlib.h>
#include"Status.h"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;

typedef struct{
    ElemType *elem;
    int size;
    int length;
} SqList;

Status GetElem(SqList L,int i,ElemType *e);
Status ListDelete(SqList *L,int i);
Status ListInsert(SqList *L,int i,ElemType e);
Status InitList(SqList *L);
Status equal(int a,int b);
Status merge(SqList *L1,SqList L2);
Status del_min(SqList *L,ElemType *e);
Status reverse(SqList *L);
Status delete_x_1(SqList *L, ElemType x);
Status delete_x_2(SqList *L, ElemType x);
Status delete_s_t(SqList *L,ElemType s,ElemType t);
Status delete_s_t2(SqList *L,ElemType s,ElemType t);
Status delete_same(SqList *L);
Status merge2(SqList L1,SqList L2,SqList *L3);
Status reverse2(int A[],int left,int right,int arraySize);
Status exchange(int A[],int m,int n,int arraySize);
Status SearchExchangeInsert(SqList *L,ElemType x);
int ListLength(SqList L);
int LocateElem(SqList *L,ElemType e,Status (*compare)(ElemType a,ElemType b));