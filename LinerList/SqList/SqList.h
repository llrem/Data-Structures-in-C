#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Status.h"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;

typedef struct{
    ElemType *elem;
    int size;
    int length;
}SqList;

Status GetElem(SqList L,int i,ElemType *e);
Status ListDelete(SqList *L,int i);
Status ListInsert(SqList *L,int i,ElemType e);
Status InitList(SqList *L);
int ListLength(SqList L);
int LocateElem(SqList *L,ElemType e,Status (*compare)(ElemType a,ElemType b));