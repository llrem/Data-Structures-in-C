#include"../Stack.h"

int BracketsCheck(char *str){
    Stack S;
    int i = 0;
    char x;
    while(str[i] != '\0'){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            Push(S, str[i]);
        }else{
            switch (str[i]){
                case ')':
                    Pop(S, &x);
                    if(x != '(') 
                        return 0;
                    break;
                case ']':
                    Pop(S, &x);
                    if(x != '[') 
                        return 0;
                    break;
                case '}':
                    Pop(S, &x);
                    if(x != '{') 
                        return 0;
                    break;
            }
        }
        i++;
    }
    if(!StackEmpty(S)){
        return 0;
    }else{
        return 1;
    }
}