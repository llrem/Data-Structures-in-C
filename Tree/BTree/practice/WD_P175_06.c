#include"../Tree.h"

void createCSTree_Degree(Tree T, int e[], int degree[], int n){
    TreeNode pointer[n];
    int i, j, d, k=0;
    for(i = 0; i < n; i++){
        pointer[i].Element = e[i];
        pointer[i].Left = pointer[i].Right = NULL;
    }
    for(i = 0; i < n; i++){
        d = degree[i];
        if(d){
            k++;
            pointer[i].Left = pointer + k;
            for(j = 1; j < d; j++){
                k++;
                pointer[k-1].Right = pointer + k;
            }
        }
    }
}