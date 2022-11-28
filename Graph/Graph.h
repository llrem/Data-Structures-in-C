#ifndef GRAPH_H_
#define GRAPH_H_

#define Num 10  //最大结点数量

typedef char VexType;
typedef int EdgeType;

//矩阵
typedef struct M_Graph{
    VexType vex[Num];
    EdgeType edge[Num][Num];
    int vexnum,arcnum;
}*M_Graph;

//邻接表
typedef struct ArcNode{
    int adjvex;
    struct ArcNode *next;
}ArcNode;

typedef struct VexNode{
    VexType data;
    ArcNode *first;
}VexNode, AdjList[Num];

typedef struct AL_Graph{
    AdjList vexs;
    int vexnum,arcnum;
}*AL_Graph;

int FirstNeighbor(AL_Graph G,int v);
int NextNeighbor(AL_Graph G,int v,int w);
void BFSTraverse(AL_Graph G);
static void BFS(AL_Graph G,int v);
void DFSTraverse(AL_Graph G);
void DFS(AL_Graph G, int v);
void SimplePath(AL_Graph G,int i,int j);

#endif