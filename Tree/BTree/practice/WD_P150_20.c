#include"../Tree.h"

int treeToExp(Tree T){
    ToExp(T, 1);
}

void ToExp(Tree T, int deep){
    if(T == NULL) return;
    else if(T->Left == NULL && T->Right == NULL){
        printf("%d", T->Element);
    }else{
        if(deep > 1) printf("(");
        ToExp(T->Left, deep + 1);
        printf("%s", T->Element);
        ToExp(T->Right, deep + 1);
        if(deep > 1) printf(")");
    }
}