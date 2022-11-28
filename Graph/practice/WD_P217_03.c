#include<stdio.h>
#include<stdlib.h>
#include"../Graph.h"
#include "../../Stack/Stack.h"

int visited[Num] = {0};
Stack S = NULL;

void DFS_3(AL_Graph G, int v){  
    Push(S,v);
    visited[v] = 1;
    while(!StackEmpty(S)){
        GetTop(S,&v);
        int flag = 1;
        for(int w = FirstNeighbor(G,v); w >= 0; w = NextNeighbor(G,v,w)){
            if(!visited[w]){
                Push(S,w);
                visited[w] = 1;
                flag = 0;
                break;
            }
        }
        if(!flag) Pop(S,&v);
    }
}

void DFSTraverse_2(AL_Graph G){    //自己的实现方式
    S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);

    for(int i=0; i<Num; i++){
        visited[i] = 0;
    }

    for(int i=0; i<G->vexnum; i++){
        if(!visited[i])
            DFS_3(G,i);
    }
}



void DFS_Non_RC(AL_Graph G, int v){    //答案，更加简单易懂
    InitStack(S);
    Push(S,v);
    visited[v] = 1;
    while(!StackEmpty(S)){
        v = Pop(S,&v);
        printf("%d",G->vexs[v].data);
        for(int w = FirstNeighbor(G,v); w >= 0; w = NextNeighbor(G,v,w)){
            if(!visited[w]){
                Push(S,w);
                visited[w] = 1;
            }
        }
    }
}