#include"../Tree.h"

int i = 1;
int preOrder(Tree T, int k){
    int x;
    if(T == NULL) return '#';
    if(i == k){
        return T->Element;
    }
    i++;
    x = preOrder(T->Left, k);
    if(x != '#'){
        return x;
    }
    x = preOrder(T->Right, k);
    return x;
}