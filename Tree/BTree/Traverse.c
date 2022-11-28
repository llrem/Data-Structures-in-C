#include <stdio.h>
#include <stdlib.h>
#include "../../Stack/Stack.h"
#include "Tree.h"

void PreOrder(Tree T){  //先序非递归遍历
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);
    while(T!=NULL || !StackEmpty(S)){
        if(T!=NULL){
            Push(S,T);
            printf("%c",T->Element);
            T = T->Left;

        }else{
            Pop(S,&T);
            T = T->Right;
        }
    }
}

void InOrder(Tree T){  //中序非递归遍历
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);
    while(T!=NULL || !StackEmpty(S)){
        if(T!=NULL){
            Push(S,T);
            T = T->Left;

        }else{
            Pop(S,&T);
            printf("%c",T->Element);
            T = T->Right;
        }
    }
}

void PostOrder(Tree T){  //后序非递归遍历
    Stack S = (Stack)malloc(sizeof(struct Stack));
    InitStack(S);
    Tree pre;
    while(T || !StackEmpty(S)){
        if(T){
            Push(S,T);
            T = T->Left;
        }else{
            GetTop(S,&T);
            if(T->Right && T->Right != pre){
                T = T->Right;
            }else{
                Pop(S,&T);
                printf("%c",T->Element);
                pre = T;
                T = NULL;
            }
        }
    }
}