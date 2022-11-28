#include "../SqList.h"

SqList* merge(SqList L1, SqList L2){
    SqList* L = (SqList*)malloc(sizeof(SqList));
    int i = 0, j = 0, k = 0;
    while(i < L1.length && j < L2.length){
        if(L1.elem[i] < L2.elem[j])
            L->elem[k++] = L1.elem[i++];
        else
            L->elem[k++] = L2.elem[j++];
    }
    while(i < L1.length){
        L->elem[k++] = L1.elem[i++];
    }
    while(j < L2.length){
        L->elem[k++] = L2.elem[j++];
    }
    L->length = k;
    return L;
}