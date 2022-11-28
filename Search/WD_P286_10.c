#include<stdio.h>
#include<stdlib.h>
#include"../Tree/BTree/Tree.h"

void OutPut(Tree T, int k){
    if(T==NULL){
        return;
    }
    if(T->Right != NULL){
        OutPut(T->Right, k);
    }
    if(T->Element >= k){
        printf("%d",T->Element);
    }
    if(T->Left != NULL){
        OutPut(T->Left, k);
    }
}