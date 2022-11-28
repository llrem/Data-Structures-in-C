#include "../SqList.h"

int deleteMin(SqList L){
    if(L.length == 0){
        return -1;
    }
    int min = L.elem[0];
    int k=0;
    for(int i = 1; i < L.length; i++){
        if(L.elem[i] < min){
            k=i;
            min = L.elem[i];
        }
    }
    L.elem[k] = L.elem[L.length-1];
    L.length--;
    return min;
}