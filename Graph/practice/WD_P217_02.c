#include<stdio.h>
#include<stdlib.h>
#include"../Graph.h"

int visited[100] = {0};
int pre = -1;

int DFS_2(AL_Graph G,int v){
    visited[v];
    pre = v;
    for(int w = FirstNeighbor(G,v); w >= 0; w = NextNeighbor(G,v,w)){
        if(visited[w] && w != pre){
            return 0;
        }else{
            DFS_2(G,w);
        }
    }
}

int isTree(AL_Graph G){
    int r = DFS_2(G,0);
    for(int i=0; i<G->vexnum; ++i){
        if(!visited[i]) return 0;
    }
    return r;
}

