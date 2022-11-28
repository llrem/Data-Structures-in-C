#include "../SqList.h"

int deleteBetweenSAndT(SqList L, int s, int t){
    int k = 0;
    if(s > t || L.length == 0)
        return 0;
    for(int i = 0; i < L.length; i++){
        if(L.elem[i] >= s && L.elem[i] <= t){
            k++;
        }else{
            L.elem[i-k] = L.elem[i];
        }
    }
    L.length = L.length - k;
    return 1;
}