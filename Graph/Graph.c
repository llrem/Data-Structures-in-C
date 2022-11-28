#include "Graph.h"
#include "../Queue/Queue.h"
#include <stdio.h>
#include <stdlib.h>

int visited[Num] = {0};
Queue Q = NULL;

int FirstNeighbor(AL_Graph G,int v){
    ArcNode *first = G->vexs[v].first;
    if(first != NULL){
        return first->adjvex;
    }else{
        return -1;
    }
}

int NextNeighbor(AL_Graph G,int v,int w){    //w为v的一个邻接结点
    ArcNode *arc = G->vexs[v].first;
    while(arc != NULL){
        if(arc->adjvex == w && arc->next != NULL){
            return arc->next->adjvex;
        }
        arc = arc->next;
    }
    return -1;
}

void BFSTraverse(AL_Graph G){
    Q = (Queue)malloc(sizeof(struct Queue));
    InitQueue(Q);
    for(int i=0; i<G->vexnum; ++i){
        visited[i] = 0;
    }
    for(int i=0;i<G->vexnum;++i){
        if(!visited[i]) 
            BFS(G,i);
    }
}

void BFS(AL_Graph G,int v){
    printf("%d",G->vexs[v].data);
    visited[v] = 1;
    EnQueue(Q,v);

    while(!IsEmpty(Q)){
        DeQueue(Q,&v);
        for(int w = FirstNeighbor(G,v); w >= 0; w = NextNeighbor(G,v,w)){
            if(!visited[w]){
                printf("%d",G->vexs[w].data);
                visited[w] = 1;
                EnQueue(Q,w);
            }
        }
    }
}

void DFSTraverse(AL_Graph G){
    for(int i=0; i<G->vexnum; ++i){
        visited[i] = 0;
    }
    for(int i=0; i<G->vexnum; ++i){
        if(!visited[i]) 
            DFS(G,i);
    }
}

void DFS(AL_Graph G, int v){    //递归形式
     printf("%d",G->vexs[v].data);
     visited[v] = 1;
     for(int w = FirstNeighbor(G,v); w >= 0; w = NextNeighbor(G,v,w)){
        if(!visited[w]){
            DFS(G,w);
        }
     }
}

