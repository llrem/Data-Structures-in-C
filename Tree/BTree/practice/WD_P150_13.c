#include"../Tree.h"
#include "../../../Stack/Stack.h"


int ancestor(Tree T, TreeNode *p, TreeNode *q){ 
    Stack S;
    TreeNode *r = T, *pre, *x, stack[1000];
    while(r || !StackEmpty(S)){
        if(r != NULL){
            push(S, r);
            r = r->Left;
        }else{
            GetTop(S, &r);
            if(r->Right || r->Right != pre){
                r = r->Right;
            }else{
                Pop(S, &r);
                if(r == q){
                    for(int i = 0; i < S->top + 1; i++){
                        //这里用栈无法依次比较栈中的元素，需要用数组来模拟栈
                    }
                }
                pre = r;
                r = NULL;
            }
        }
    }
}