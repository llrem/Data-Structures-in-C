#include"../Tree.h"

int n = 0;
int DsonNodes(Tree T){
    if(!T) 
        return 0;
    if(T->Left && T->Right)
        n++;
    DsonNodes(T->Left);
    DsonNodes(T->Right);
}