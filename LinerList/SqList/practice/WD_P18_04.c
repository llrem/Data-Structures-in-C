#include "../SqList.h"

int deleteBetweenSAndT2(SqList L, int s, int t){
    int i,j;
    if(s > t || L.length == 0){
        return 0;
    }
    for(i = 0; i < L.length && L.elem[i] < s; i++);
    for(j = 0; j < L.length && L.elem[j] <= t; j++);
    for( ; j < L.length; i++,j++){
        L.elem[i] = L.elem[j];
    }
    L.length -= j-i;
    return 1;
}