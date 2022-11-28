#include "../SqList.h"

void deleteRepetition(SqList L){
    int k = 0;
    for(int i = 1; i < L.length; i++){
        if(L.elem[i] == L.elem[i-1]){
            k++;
        }else{
            L.elem[i-k] = L.elem[i];
        }
    }
    L.length -= k;
}

void deleteRepetition2(SqList L){
    int i,j;
    for(i = 0, j = 1; j < L.length; j++){
        if(L.elem[i] != L.elem[j]){
            L.elem[++i] = L.elem[j];
        }
    }
    L.length = i + 1;
}