#include<stdio.h>
#include<stdlib.h>
#include"../Graph.h"
#include"../../Queue/Queue.h"

int visited[Num] = {0};

int FindPath_BFS(AL_Graph G,int i,int j){
    Queue Q = (Queue)malloc(sizeof(struct Queue));
    InitQueue(Q);

    visited[i] = 1;
    EnQueue(Q,i);
    while(!IsEmpty(Q)){
        DeQueue(Q,&i);
        if(i==j)
            return 1;
        for(int w = FirstNeighbor(G,i); w >= 0; w = NextNeighbor(G,i,w)){
            if(!visited[w]){
                EnQueue(Q,w);
                visited[w] = 1;
            }   
        }
    }
    return 0;
}

int FindPath_DFS(AL_Graph G,int i,int j){
    int k = 0;
    visited[i] = 1;
    if(i==j){
         return 1;
    }
    for(int w = FirstNeighbor(G,i); w >= 0; w = NextNeighbor(G,i,w)){
        if(!visited[w]){
            k = FindPath_DFS(G,w,j);
            if(k==1) break;
        }
    }
    return k;
}