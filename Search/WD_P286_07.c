#include<stdio.h>
#include"../Tree/BTree/Tree.h"

int GetLevel(Tree T, int x){
    int i=1;
    while(T!=NULL){
        if(x == T->Element){
            return i;
        }
        if(x > T->Element){
            T = T->Right;
            i++;
        }
        if(x < T->Element){
            T = T->Left;
            i++;
        }
    }
    return 0;
}