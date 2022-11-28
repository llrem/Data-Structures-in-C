#include"../Tree.h"
#include "../../../Queue/Queue.h"

void delete_x(Tree T, int x){
    if(T == NULL){
        return;
    }
    if(T->Element == x){
        deleteTree(T);
        return;
    }
    if(T->Left){
        if(T->Left->Element == x){
            deleteTree(T->Left);
            T->Left == NULL;
        }
    }
    if(T->Right){
        if(T->Right->Element == x){
            deleteTree(T->Right);
            T->Right == NULL;
        }
    }
    delete_x(T->Left, x);
    delete_x(T->Right, x);
}

void deleteTree(Tree T){
    if(T == NULL) return;
    deleteTree(T->Left);
    deleteTree(T->Right);
    free(T);
}