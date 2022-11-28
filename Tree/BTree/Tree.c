#include<stdio.h>
#include<stdlib.h>
#include"Tree.h"

Tree MakeEmpty(Tree T){
    if(T != NULL){
        MakeEmpty(T->Left);
        MakeEmpty(T->Right);
        free(T);
    }
    return NULL;
}

Position Find(Tree_ElemType X, Tree T){
    if(T == NULL){
        return NULL;
    }
    if(X < T->Element){
        return Find(X, T->Left);
    }
    else if(X > T->Element){
        return Find(X, T->Right);
    }
    else
        return T;
}

Position FindMin(Tree T){
    if(T != NULL)
        while(T->Left != NULL)
            T = T->Left;
    return T;
}

Position FindMax(Tree T){
    if(T != NULL)
        while(T->Right != NULL)
            T = T->Right;
    return T;
}

Tree Insert(Tree_ElemType X, Tree T){
    if(T == NULL){
        T = malloc(sizeof(TreeNode));
        T->Element = X;
        T->Left = T->Right = NULL;
    }
    else if(X < T->Element){
        T->Left = Insert(X, T->Left);
    }
    else if(X > T->Element){
        T->Right = Insert(X, T->Right);
    }
    return T;
}

Tree Delete(Tree_ElemType X, Tree T){
    Position TmpNode;
    
    if(T == NULL){
        return T;
    }
    else if(X < T->Element){
        T->Left = Delete(X, T->Left);
    }
    else if(X > T->Element){
        T->Right = Delete(X, T->Right);
    }
    else if(T->Left && T->Right){
        TmpNode = FindMin(T->Right);
        T->Element = TmpNode->Element;
        T->Right = Delete(T->Element, T->Right);
    }
    else{
        TmpNode = T;
        if(T->Left == NULL){
            T = T->Right;
        }
        else if(T->Right == NULL){
            T = T->Left;
        }
        free(TmpNode);
    }
    return T;
}