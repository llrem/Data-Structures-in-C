#include"../Tree.h"

int similar(Tree T1, Tree T2){
    int s1, s2;
    if(T1 == NULL && T2 == NULL)
        return 1;
    else if(T1 == NULL || T2 == NULL)
        return 0;
    else{
        s1 = similar(T1->Left, T2->Left);
        s2 = similar(T1->Right, T2->Right);
        return s1 && s2;
    }
}