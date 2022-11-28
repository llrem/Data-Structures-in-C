#include"../Tree.h"

int leaf_num(Tree T){
    static int num = 0;
    if(T){
        leaf_num(T->Left);
        if(T->Left == NULL){
            num++;
        }
        leaf_num(T->Right);
    }
    return num;
}

int leaves(Tree T){
    if(T == NULL){
        return 0;
    }
    if(T->Left == NULL){
        return 1 + leaves(T->Right);
    }else{
        return leaves(T->Left) + leaves(T->Right);
    }
}