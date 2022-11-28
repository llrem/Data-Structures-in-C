#include"../Tree.h"

Tree PreInCreat(char A[], char B[], int L1, int H1, int L2, int H2){  //A为先序序列，B为中序序列
    int i, L_len, R_len;
    Tree root = (Tree)malloc(sizeof(TreeNode));
    root->Element = A[L1];
    for(i = L2; B[i] != root->Element; i++);
    L_len = i - L2;
    R_len = H2 - i;
    if(L_len){
        root->Left = PreInCreat(A, B, L1 + 1, L1 + L_len, L2, L2 + L_len - 1);
    }else{
        root->Left = NULL;
    }
    if(R_len){
        root->Right = PreInCreat(A, B, H1 - R_len + 1, H1, H2 - R_len + 1, H2);
    }else{
        root->Right = NULL;
    }
    return root;
}