#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;   
}LNode,*LinkList;

typedef struct DNode
{
    ElemType data;
    struct DNode *prior,*next;
    int freq;
}DNode,*DLinkList;

LinkList List_HeadInsert(LinkList L);
LinkList List_TailInsert(LinkList L);
void Insert(LinkList L,ElemType x,int p);
void Delete(LinkList L,int p);
LNode *GetItem(LinkList L,int x);