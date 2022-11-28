#ifndef TREE_H_
#define TREE_H_

#include<stdio.h>
#include<stdlib.h>

typedef char Tree_ElemType;

typedef struct TreeNode
{
    Tree_ElemType Element;
    struct TreeNode *Left;
    struct TreeNode *Right;
}TreeNode,*Tree,*Position;

Tree MakeEmpty(Tree T);
Position Find(Tree_ElemType X, Tree T);
Position FindMin(Tree T);
Position FindMax(Tree T);
Tree Insert(Tree_ElemType X, Tree T);
Tree Delete(Tree_ElemType X, Tree T);
void PreOrder(Tree T);
void InOrder(Tree T);
void PostOrder(Tree T);
//practise
void InverseLevelOrder(Tree T);

#endif