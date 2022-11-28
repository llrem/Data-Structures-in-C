#include<stdlib.h>
#include<stdio.h>
#include"LinkList.h"

LinkList List_HeadInsert(LinkList L){
    LNode *s;int x;
    scanf("%d",&x);
    while(x!=99){
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
    return L;
}

LinkList List_TailInsert(LinkList L){
    int x;
    LNode *s,*r=L;
    scanf("%d",&x);
    while (x!=99)
    {
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

void Insert(LinkList L,ElemType x,int p){
    LNode *s,*n;
    n = GetItem(L,p-1);
    s=(LNode *)malloc(sizeof(LNode));
    s->data=x;
    s->next=n->next;
    n->next=s;
}

void Delete(LinkList L,int p){
    LNode *n,*s;
    n=GetItem(L,p-1);
    s=n->next;
    n->next=s->next;
    free(s);
}

LNode *GetItem(LinkList L,int x){
    LNode *p=L->next;
    if(x==0){
        return L;
    }
    if(x<1){
        return 0;
    }
    for(int i=1;i<x;i++){
        if(p->next==NULL){
            return 0;
        }
        p=p->next;
    }
    return p;
}