#include"../Tree.h"

typedef struct TreTree
{
    int Element;
    struct TreTree *Left;
    struct TreTree *Right;
    int ltag;
    int rtag;
}*TreTree;

TreTree InPostPre(TreTree T, TreTree P){
    if(P->rtag = 0){
        return P->Right;
    }else if(P->ltag = 0){
        return P->Left;
    }else if(P->Left == NULL){
        return NULL;
    }else{
        while(P->ltag == 1 && P->Left != NULL)
            P = P->Left; 
        if(P->ltag == 0)
            return P->Left;
        else
            return NULL;
    }
}