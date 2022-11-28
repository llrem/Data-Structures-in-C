#include<stdio.h>
#include<stdlib.h>
#include"../Tree/BTree/Tree.h"

int getAVLMin(Tree T){
    while(T->Left != NULL){
        T = T->Left;
    }
    return T->Element;
}

int getAVLMax(Tree T){
    while(T->Right != NULL){
        T = T->Right;
    }
    return T->Element;
}