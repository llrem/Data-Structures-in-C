#include"../Tree.h"

void swap(Tree T){
    if(!T) return;
    Tree temp = T->Left;
    T->Left = T->Right;
    T->Right = temp;
    swap(T->Left);
    swap(T->Right);
}