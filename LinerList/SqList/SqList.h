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

int ListLength(SqList L);
int GetElem(SqList L,int i,ElemType *e);
Status ListDelete(SqList *L,int i);
Status ListInsert(SqList *L,int i,ElemType e);
Status InitList(SqList *L);
Status LocateElem(SqList *L,ElemType e,Status (*compare)(ElemType a,ElemType b));
Status equal(int a,int b);
Status merge(SqList *la,SqList lb);