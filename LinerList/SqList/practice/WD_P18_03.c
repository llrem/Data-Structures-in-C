#include "../SqList.h"

void deleteX(SqList L, int x){
    int k=0;
    for(int i = 0; i < L.length; i++){
        if(L.elem[i] != x){
            L.elem[k] = L.elem[i];
            k++;
        }
    }
    L.length = k;
}

void deleteX_2(SqList L,int x){
    int k=0;
    for(int i = 0; i < L.length; i++){
        if(L.elem[i] == x){
            k++;
        }else{
            L.elem[i-k] = L.elem[i];
        }
    }
    L.length = L.length - k;
}