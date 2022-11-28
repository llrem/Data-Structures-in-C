#include<stdio.h>
#include<stdlib.h>
#include"../Tree/BTree/Tree.h"

int flag = 1;

int JudgeAVL(Tree T){
    if(T == NULL){
        return 0;
    }
    if(T->Left == NULL && T->Right == NULL){
        return 1;
    }
    int a = JudgeAVL(T->Left);
    int b = JudgeAVL(T->Right);
    if((a-b)>1){
        flag = 0;
    }
    return a > b ? a+1 : b+1;
}