#include<stdio.h>
#include<stdlib.h>
#include"../Graph.h"
#include"../../Stack/Stack.h"

int visited[Num] = {0};

void SimplePath(AL_Graph G,int i,int j){    //自己的解法，这种方法有缺陷，其他路径不能经过已经遍历过的路径
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);

    Push(S,i);
    visited[i] = 1;
    while(!StackEmpty(S)){
        GetTop(S,&i);
        int flag = 1;
        for(int w = FirstNeighbor(G,i); w >= 0; w = NextNeighbor(G,i,w)){
            if(!visited[w]){
                if(w==j){
                    for(int i=0;i<=S->top;i++){
                        printf("%d",S->data[i]);
                    }
                    printf("%d ",w);
                    continue;
                }else{
                    Push(S,w);
                    visited[w] = 1;
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) Pop(S,&i);
    }
}

void FindPath(AL_Graph G,int u,int v,int path[],int d){
    int w,i;
    ArcNode *p;
    d++;
    path[d] = u;
    visited[u] = 1;
    if(u==v){
        for(int i=0;i<=d; i++){
            printf("%d",path[i]);
        }
    }
    p = G->vexs[u].first;
    while(p!=NULL){
        w = p->adjvex;
        if(visited[w]==0){
            FindPath(G,w,v,path,d);
        }
        p = p->next;
    }
    visited[u] = 0;
}