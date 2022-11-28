#include"../Stack.h"

void Train_Arrange(char *train){
    char *p = train, *q = train, c;
    Stack S;
    while(*p){
        if(*p == 'H'){
            Push(S, *p);
        }else{
            *(q++) = *p;
        }
        p++;
    }
    while(!StackEmpty(S)){
        Pop(S, &c);
        *(q++) = c;
    }
}