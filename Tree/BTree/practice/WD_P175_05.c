#include"../Tree.h"

int height(Tree T){
    if(T == NULL){
        return 0;
    }
    int h1 = 1 + height(T->Left);
    int h2 = height(T->Right);
    return h1 > h2 ? h1 : h2;
}