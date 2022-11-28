#include"../Tree.h"
#include "../../../Stack/Stack.h"

void ancestors(Tree T, int x){
    Stack S;
    TreeNode *p = T, *pre;
    while(p || !StackEmpty(S)){
        if(p){
            push(S,p);
            p = p->Left;
        }else{
            GetTop(S, &p);
            if(p->Right || p->Right != pre){
                p = p->Right;
            }else{
                Pop(S, &p);
                pre = p;
                if(p->Element == x){
                    while(!StackEmpty(S)){
                        Pop(S, &p);
                        printf("%d",p->Element);
                    }
                    break;
                }
                p = NULL;
            }
        }
    }
}